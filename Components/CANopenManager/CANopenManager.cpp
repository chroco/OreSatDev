// ======================================================================
// \title  CANopenManager.cpp
// \author chroco
// \brief  cpp file for CANopenManager component implementation class
// ======================================================================

#include "Components/CANopenManager/CANopenManager.hpp"
#include "FpConfig.hpp"

namespace Components {

  CO_t *COptr;

  // ----------------------------------------------------------------------
  // Component construction and destruction
  // ----------------------------------------------------------------------

  CANopenManager ::
    CANopenManager(const char* const compName) :
      CANopenManagerComponentBase(compName),
      m_quitCANopenManager(false),
      m_quitTask(false),
      m_loopCounter(0),
      CANptr(0),
      pendingBitRate(0),
      SDOserver(NULL),
      CO(NULL)
  {
      //canopennode_init(0, 13);
      //CO = NULL;
      COptr = CO;
/*
      CO = CO_new(config_ptr, &heapMemoryUsed);
      if (CO == NULL) {
          //printf("Error: Can't allocate memory\n");
          log_printf(2,"Error: Can't allocate memory\n");
          return;
          //return 0;
      } else {
          //printf("Allocated %u bytes for CANopen objects\n", com->heapMemoryUsed);
          log_printf(5,"Allocated %u bytes for CANopen objects\n", heapMemoryUsed);
      }
//*/
  }

  CANopenManager ::
    ~CANopenManager()
  {
      //this->quitCANopenManager();
      //this->m_coTask.join();
      //this->m_timerTask.join();
     	//canopennode_stop();
	    //sys_reboot(SYS_REBOOT_COLD);
  }

  void CANopenManager::run_handler(FwIndexType portNum, U32 context) {
    //m_co_mainTask.resume();
    //m_co_rtTask.resume();
  }

  // ----------------------------------------------------------------------
  // Handler implementations for commands
  // ----------------------------------------------------------------------

  void CANopenManager ::
    TODO_cmdHandler(
        FwOpcodeType opCode,
        U32 cmdSeq
    )
  {
    // TODO
    this->cmdResponse_out(opCode, cmdSeq, Fw::CmdResponse::OK);
  }

bool CANopenManager::canopennode_is_running(void) {
	return reset == CO_RESET_NOT;
}

void CANopenManager::canopennode_stop(void) {
	/* stop threads */
	reset = CO_RESET_QUIT;
	//k_thread_join(&co_rt_thread_data, K_MSEC(1));
	//k_thread_join(&co_main_thread_data, K_MSEC(1));
  m_co_mainTask.join();
  m_co_rtTask.join();
	for (int i = 0; i < OD_CNT_SDO_SRV; i++) {
    m_co_sdoServerTask[i].resume();
    m_co_sdoServerTask[i].join();
		//k_thread_resume(co_sdo_server_tids[i]);
		//k_thread_join(&co_sdo_server_threads_data[i], K_MSEC(1));
	}

	/* delete objects from memory */
	if (CANptr != NULL) {
		CO_CANsetConfigurationMode((void *)CANptr);
	}
	CO_delete(CO);

	printf("CANopenNode finished\n");
}

int CANopenManager::canopennode_init(uint16_t bit_rate, uint8_t node_id) {
	CO_ReturnError_t err;
	uint32_t heapMemoryUsed;
	uint32_t errInfo = 0;

	if (!CANptr) {
		printf("CAN interface not ready");
		return -1;
	}

	/* Allocate memory */
	CO_config_t *config_ptr = NULL;
	CO = CO_new(config_ptr, &heapMemoryUsed);
	if (CO == NULL) {
		printf("Can't allocate memory\n");
		return -1;
	} else {
		printf("Allocated %u bytes for CANopen objects\n", heapMemoryUsed);
	}

	/* CANopen communication reset - initialize CANopen objects */
	printf("CANopenNode - Reset communication...\n");

	/* Wait rt_thread. */
	CO->CANmodule->CANnormal = false;

	/* Enter CAN configuration. */
	CO_CANsetConfigurationMode((void *)CANptr);
	CO_CANmodule_disable(CO->CANmodule);

	/* initialize CANopen */
	err = CO_CANinit(CO, (void *)CANptr, bit_rate);
	if (err != CO_ERROR_NO) {
		printf("CAN initialization failed: %d\n", err);
		return -1;
	}

	err = CO_CANopenInit(CO,                   /* CANopen object */
			     NULL,                 /* alternate NMT */
			     NULL,                 /* alternate em */
			     OD,                   /* Object dictionary */
			     OD_STATUS_BITS,       /* Optional OD_statusBits */
			     NMT_CONTROL,          /* CO_NMT_control_t */
			     FIRST_HB_TIME,        /* firstHBTime_ms */
			     SDO_SRV_TIMEOUT_TIME, /* SDOserverTimeoutTime_ms */
			     SDO_CLI_TIMEOUT_TIME, /* SDOclientTimeoutTime_ms */
			     SDO_CLI_BLOCK,        /* SDOclientBlockTransfer */
			     node_id, &errInfo);
	if (err != CO_ERROR_NO && err != CO_ERROR_NODE_ID_UNCONFIGURED_LSS) {
		if (err == CO_ERROR_OD_PARAMETERS) {
			printf("Object Dictionary entry 0x%X\n", errInfo);
		} else {
			printf("CANopen initialization failed: %d\n", err);
		}
		return -1;
	}

	err = CO_CANopenInitPDO(CO, CO->em, OD, node_id, &errInfo);
	if (err != CO_ERROR_NO) {
		if (err == CO_ERROR_OD_PARAMETERS) {
			printf("Object Dictionary entry 0x%X\n", errInfo);
		} else {
			printf("PDO initialization failed: %d\n", err);
		}
		return -1;
	}

	/* Configure Timer interrupt function for execution every 1 millisecond */

	/* Configure CAN transmit and receive interrupt */

	if (CO->nodeIdUnconfigured) {
		printf("CANopenNode - Node-id not initialized\n");
	}

	/* start CAN */
	CO_CANsetNormalMode(CO->CANmodule);

	/* start threads */
/*
	for (size_t i = 0; i < OD_CNT_SDO_SRV; i++) {
		co_sdo_server_tids[i] = k_thread_create(
			&co_sdo_server_threads_data[i], co_sdo_server_stack_area[i],
			K_THREAD_STACK_SIZEOF(co_sdo_server_stack_area[i]), co_sdo_server_thread,
			&CO->SDOserver[i], NULL, NULL, CO_SDO_SRV_PRIORITY, 0, K_NO_WAIT);
	}
	co_main_tid = k_thread_create(&co_main_thread_data, co_main_stack_area,
				      K_THREAD_STACK_SIZEOF(co_main_stack_area), co_main_thread,
				      NULL, NULL, NULL, CO_MAIN_PRIORITY, 0, K_NO_WAIT);
	co_rt_tid = k_thread_create(&co_rt_thread_data, co_rt_stack_area,
				    K_THREAD_STACK_SIZEOF(co_rt_stack_area), co_rt_thread, NULL,
				    NULL, NULL, CO_RT_PRIORITY, 0, K_NO_WAIT);

	k_timer_start(&co_timer, K_NO_WAIT, K_MSEC(1));
//*/

	return 0;
}


void CANopenManager::process_cb(void *ptr) {
    FW_ASSERT(ptr != nullptr);
    TaskObject_t *toPtr = reinterpret_cast<TaskObject_t*>(ptr);
    toPtr->comPtr->m_co_sdoServerTask[toPtr->sdoTask].resume();
}

void CANopenManager::co_sdo_server_thread(void *ptr) {
    FW_ASSERT(ptr != nullptr);
    TaskObject_t *toPtr = reinterpret_cast<TaskObject_t*>(ptr);

    CO_SDOserver_t *SDOserver = (CO_SDOserver_t *)toPtr->comPtr->SDOserver;
    uint32_t elapsed_us = -1;
    struct timespec start, stop;
    
    /* Register the callback function to wake up thread when message received */
    CO_SDOserver_initCallbackPre(SDOserver, (void *)&toPtr, CANopenManager::process_cb);

    while (toPtr->comPtr->reset == CO_RESET_NOT) {
      clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &start);
      CO_SDOserver_process(SDOserver, true, elapsed_us, NULL);
      toPtr->comPtr->m_co_sdoServerTask[toPtr->sdoTask].suspend();
      clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &stop);
      elapsed_us = (stop.tv_sec - start.tv_sec) * 1e6 + (stop.tv_nsec - start.tv_nsec) / 1e3;    // in microseconds
    }

    CO_SDOserver_initCallbackPre(SDOserver, NULL, NULL);
}

void CANopenManager::co_main_thread(void *ptr) {
    FW_ASSERT(ptr != nullptr);
    CANopenManager *com = reinterpret_cast<CANopenManager*>(ptr);
    CO_t* CO = com->CO;
    
    uint32_t elapsed_us = 1000U;

    com->reset = CO_RESET_NOT;
    printf("CANopenNode - Running...\n");

    while (com->reset == CO_RESET_NOT) {
      //k_sleep(K_FOREVER);
      com->m_co_mainTask.suspend();
      com->reset = CO_process(CO, false, elapsed_us, NULL);
    }
}

void CANopenManager::co_rt_thread(void *ptr) {
    FW_ASSERT(ptr != nullptr);
    CANopenManager *com = reinterpret_cast<CANopenManager*>(ptr);
    CO_t* CO = com->CO;
      
    uint32_t elapsed_us = 1000U;
    bool syncWas;

    while (com->reset == CO_RESET_NOT) {
        //k_sleep(K_FOREVER);
        com->m_co_rtTask.suspend();
        syncWas = false;

        CO_LOCK_OD(CO->CANmodule);
        if (!CO->nodeIdUnconfigured && CO->CANmodule->CANnormal) {
#if (CO_CONFIG_SYNC) & CO_CONFIG_SYNC_ENABLE
        syncWas = CO_process_SYNC(CO, elapsed_us, NULL);
#endif
#if (CO_CONFIG_PDO) & CO_CONFIG_RPDO_ENABLE
        CO_process_RPDO(CO, syncWas, elapsed_us, NULL);
#endif
#if (CO_CONFIG_PDO) & CO_CONFIG_TPDO_ENABLE
        CO_process_TPDO(CO, syncWas, elapsed_us, NULL);
#endif
        }
        
        CO_UNLOCK_OD(CO->CANmodule);
	  }
}

void CANopenManager::testTaskEntry(void* ptr) {
    FW_ASSERT(ptr != nullptr);
    
    CANopenManager *com = reinterpret_cast<CANopenManager*>(ptr);
 
    for(; !com->m_quitTask; ++com->m_loopCounter)
    {
        Os::Task::delay(Fw::TimeInterval(0, 50000));
    }
}

void CANopenManager::CANopenTaskEntry(void* ptr) {
    FW_ASSERT(ptr != nullptr);

    CANopenManager *com = reinterpret_cast<CANopenManager*>(ptr);
    CO_ReturnError_t err;
    CO_NMT_reset_cmd_t reset = CO_RESET_NOT;
//   uint32_t heapMemoryUsed;
//   void* CANptr = NULL;           /* CAN module address */
    uint8_t pendingNodeId = 10;    /* read from dip switches or nonvolatile memory, configurable by LSS slave */
    uint8_t activeNodeId = 10;     /* Copied from CO_pendingNodeId in the communication reset section */
//   //uint16_t pendingBitRate = 125; /* read from dip switches or nonvolatile memory, configurable by LSS slave */
//   uint16_t pendingBitRate = 0; /* read from dip switches or nonvolatile memory, configurable by LSS slave */

    /* Configure microcontroller. */

    /* Allocate memory */
    //CO_config_t* config_ptr = NULL;
/*
    com->CO = CO_new(com->config_ptr, &com->heapMemoryUsed);
    if (com->CO == NULL) {
        printf("Error: Can't allocate memory\n");
        //log_printf("Error: Can't allocate memory\n");
        return;
        //return 0;
    } else {
        printf("Allocated %u bytes for CANopen objects\n", com->heapMemoryUsed);
        //log_printf("Allocated %u bytes for CANopen objects\n", com->heapMemoryUsed);
    }
//*/

    while (reset != CO_RESET_APP) 
    {
        /* CANopen communication reset - initialize CANopen objects *******************/
        printf("CANopenNode - Reset communication...\n");
        //log_printf("CANopenNode - Reset communication...\n");

        /* Wait rt_thread. */
        com->CO->CANmodule->CANnormal = false;

        /* Enter CAN configuration. */
        CO_CANsetConfigurationMode((void*)&com->CANptr);
        CO_CANmodule_disable(com->CO->CANmodule);

        /* initialize CANopen */
        err = CO_CANinit(com->CO, com->CANptr, com->pendingBitRate);
        if (err != CO_ERROR_NO) {
            printf("Error: CAN initialization failed: %d\n", err);
            //log_printf("Error: CAN initialization failed: %d\n", err);
            return;
            //return 0;
        }

//*
        CO_LSS_address_t lssAddress = {.identity = {.vendorID = OD_RAM.x1018_identity.vendor_id,
                                                    .productCode = OD_RAM.x1018_identity.product_code,
                                                    .revisionNumber = OD_RAM.x1018_identity.revision_number,
                                                    .serialNumber = OD_RAM.x1018_identity.serial_number}};
//*/

        err = CO_LSSinit(com->CO, &lssAddress, &pendingNodeId, &com->pendingBitRate);
        if (err != CO_ERROR_NO) {
            printf("Error: LSS slave initialization failed: %d\n", err);
            //log_printf("Error: LSS slave initialization failed: %d\n", err);
            return;
            //return 0;
        }

        activeNodeId = pendingNodeId;
        uint32_t errInfo = 0;

        err = CO_CANopenInit(com->CO,                   /* CANopen object */
                             NULL,                 /* alternate NMT */
                             NULL,                 /* alternate em */
                             OD,                   /* Object dictionary */
                             OD_STATUS_BITS,       /* Optional OD_statusBits */
                             NMT_CONTROL,          /* CO_NMT_control_t */
                             FIRST_HB_TIME,        /* firstHBTime_ms */
                             SDO_SRV_TIMEOUT_TIME, /* SDOserverTimeoutTime_ms */
                             SDO_CLI_TIMEOUT_TIME, /* SDOclientTimeoutTime_ms */
                             SDO_CLI_BLOCK,        /* SDOclientBlockTransfer */
                             activeNodeId, &errInfo);
        if (err != CO_ERROR_NO && err != CO_ERROR_NODE_ID_UNCONFIGURED_LSS) {
            if (err == CO_ERROR_OD_PARAMETERS) {
                printf("Error: Object Dictionary entry 0x%X\n", errInfo);
                //log_printf("Error: Object Dictionary entry 0x%X\n", errInfo);
            } else {
                printf("Error: CANopen initialization failed: %d\n", err);
                //log_printf("Error: CANopen initialization failed: %d\n", err);
            }
            //return 0;
            return;
        }

        err = CO_CANopenInitPDO(com->CO, com->CO->em, OD, activeNodeId, &errInfo);
        if (err != CO_ERROR_NO) {
            if (err == CO_ERROR_OD_PARAMETERS) {
                printf("Error: Object Dictionary entry 0x%X\n", errInfo);
                //log_printf("Error: Object Dictionary entry 0x%X\n", errInfo);
            } else {
                printf("Error: PDO initialization failed: %d\n", err);
                //log_printf("Error: PDO initialization failed: %d\n", err);
            }
            return;
            //return 0;
        }

        /* Configure Timer interrupt function for execution every 1 millisecond */

        /* Configure CAN transmit and receive interrupt */

        /* Configure CANopen callbacks, etc */
        if (!com->CO->nodeIdUnconfigured) {

#if (CO_CONFIG_STORAGE) & CO_CONFIG_STORAGE_ENABLE
/*
            if (storageInitError != 0) {
                CO_errorReport(CO->em, CO_EM_NON_VOLATILE_MEMORY, CO_EMC_HARDWARE, storageInitError);
            }
//*/
#endif
        } else {
            printf("CANopenNode - Node-id not initialized\n");
            //log_printf("CANopenNode - Node-id not initialized\n");
        }

        /* start CAN */
        CO_CANsetNormalMode(com->CO->CANmodule);

        reset = CO_RESET_NOT;

        printf("CANopenNode - Running...\n");
        //log_printf("CANopenNode - Running...\n");
        fflush(stdout);

        while (reset == CO_RESET_NOT) {
            /* loop for normal program execution ******************************************/
            /* get time difference since last function call */
            uint32_t timeDifference_us = 500;

            /* CANopen process */
            reset = CO_process(com->CO, false, timeDifference_us, NULL);

            /* Nonblocking application code may go here. */

            /* Process automatic storage */

            /* optional sleep for short time */
        }
    }

    /* program exit ***************************************************************/
    /* stop threads */

    /* delete objects from memory */
    CO_CANsetConfigurationMode((void*)&com->CANptr);
    CO_delete(com->CO);

    printf("CANopenNode finished\n");
    //log_printf("CANopenNode finished\n");

    /* reset */
    //return 0;
    return;
}

/* timer thread executes in constant intervals ********************************/
void CANopenManager::tmrTask_thread(void* ptr) {
    FW_ASSERT(ptr != nullptr);
    
    CANopenManager *com = reinterpret_cast<CANopenManager*>(ptr);
    FW_ASSERT(com->CO != nullptr);
    
    for (;;) {
        CO_LOCK_OD(com->CO->CANmodule);
//*
        if (!com->CO->nodeIdUnconfigured && com->CO->CANmodule->CANnormal) {
            bool_t syncWas = false;
            // get time difference since last function call 
            uint32_t timeDifference_us = 1000;

#if (CO_CONFIG_SYNC) & CO_CONFIG_SYNC_ENABLE
            syncWas = CO_process_SYNC(com->CO, timeDifference_us, NULL);
#endif
#if (CO_CONFIG_PDO) & CO_CONFIG_RPDO_ENABLE
            CO_process_RPDO(com->CO, syncWas, timeDifference_us, NULL);
#endif
#if (CO_CONFIG_PDO) & CO_CONFIG_TPDO_ENABLE
            CO_process_TPDO(com->CO, syncWas, timeDifference_us, NULL);
#endif

            // Further I/O or nonblocking application code may go here. 
//*/    
        CO_UNLOCK_OD(com->CO->CANmodule);
        }
    }
}

/* CAN interrupt function executes on received CAN message ********************/
void /* interrupt */
CO_CAN1InterruptHandler(void) {
    /* clear interrupt flag */
}

void CANopenManager::start( 
    Os::Task::ParamType priority, 
    Os::Task::ParamType stackSize, 
    Os::Task::ParamType cpuAffinity,
    Os::Task::ParamType taskId
)
{
  /*
    Os::TaskString task("CANopenManager");
    Os::Task::Arguments arguments(task, CANopenTaskEntry, this, priority, stackSize, cpuAffinity, taskId);
    //Os::Task::Arguments arguments(task, testTaskEntry, this, priority, stackSize, cpuAffinity, taskId);
    Os::Task::Status stat = this->m_coTask.start(arguments);
    FW_ASSERT(stat == Os::Task::OP_OK, stat);
    
    Os::TaskString timerTask("TimerTask");
    Os::Task::Arguments timerArguments(timerTask, tmrTask_thread, this, priority, stackSize, cpuAffinity, taskId);
    Os::Task::Status timerStat = this->m_timerTask.start(timerArguments);
    FW_ASSERT(timerStat == Os::Task::OP_OK, timerStat);
  //*/

  //canopennode_init(0, 13);
  /*
	  for (size_t i = 0; i < OD_CNT_SDO_SRV; i++) {
      Os::TaskString sdoServerTask("SDOServerTask");
      TaskObject_t to = {this, i};
      Os::Task::Arguments sdoServerTaskArguments(sdoServerTask, co_sdo_server_thread, &to, priority, stackSize, cpuAffinity, taskId);
      Os::Task::Status sdoServerTaskStat = this->m_co_sdoServerTask[i].start(sdoServerTaskArguments);
      FW_ASSERT(sdoServerTaskStat == Os::Task::OP_OK, sdoServerTaskStat);
    }
  //*/

  /*
    Os::TaskString mainTask("MainTask");
    Os::Task::Arguments mainTaskArguments(mainTask, co_main_thread, this, priority, stackSize, cpuAffinity, taskId);
    Os::Task::Status mainTaskStat = this->m_co_mainTask.start(mainTaskArguments);
    FW_ASSERT(mainTaskStat == Os::Task::OP_OK, mainTaskStat);
  //*/
    
  /*
    Os::TaskString rtTask("RTTask");
    Os::Task::Arguments rtTaskArguments(rtTask, co_rt_thread, this, priority, stackSize, cpuAffinity, taskId);
    Os::Task::Status rtTaskStat = this->m_co_rtTask.start(rtTaskArguments);
    FW_ASSERT(rtTaskStat == Os::Task::OP_OK, rtTaskStat);
  //*/
}

void CANopenManager::quitCANopenManager() {
    this->m_quitCANopenManager = true;
}


}

/* Message logging function */
void log_printf(int priority, const char* format, ...) {
    va_list ap;

    va_start(ap, format);
    vsyslog(priority, format, ap);
    va_end(ap);

#if (CO_CONFIG_GTW) & CO_CONFIG_GTW_ASCII_LOG
    if (Components::COptr != NULL) {
        char buf[200];
        time_t timer;
        struct tm* tm_info;
        size_t len;

        timer = time(NULL);
        tm_info = localtime(&timer);
        len = strftime(buf, sizeof(buf), "%Y-%m-%d %H:%M:%S: ", tm_info);

        va_start(ap, format);
        vsnprintf(buf + len, sizeof(buf) - len - 2, format, ap);
        va_end(ap);
        strcat(buf, "\r\n");
        CO_GTWA_log_print(Components::COptr->gtwa, buf);
    }
#endif
}
