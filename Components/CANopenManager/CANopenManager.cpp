// ======================================================================
// \title  CANopenManager.cpp
// \author chroco
// \brief  cpp file for CANopenManager component implementation class
// ======================================================================

#include "Components/CANopenManager/CANopenManager.hpp"
#include "FpConfig.hpp"

#include <stdio.h>

#include "CANopen.h"
#include "OD.h"
#include "CO_storageBlank.h"

namespace Components {

  // ----------------------------------------------------------------------
  // Component construction and destruction
  // ----------------------------------------------------------------------

  CANopenManager ::
    CANopenManager(const char* const compName) :
      CANopenManagerComponentBase(compName),
      m_quitCANopenManager(false),
      m_quitTask(false),
      m_loopCounter(0)
  {

      CO_t* CO = NULL;
      CO_ReturnError_t err = 0;
      CO_NMT_reset_cmd_t reset = CO_RESET_NOT;
      heapMemoryUsed = 0;
      *CANptr = NULL;
      pendingNodeId = 10;
      activeNodeId = 10;
      pendingBitRate = 0;
      *config_ptr = NULL;
  }

  CANopenManager ::
    ~CANopenManager()
  {
      this->quitCANopenManager();
      this->m_coTask.join();
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

#define log_printf(macropar_message, ...) printf(macropar_message, ##__VA_ARGS__)

/* default values for CO_CANopenInit() */
/*
#define NMT_CONTROL                                                                                                    \
        CO_NMT_STARTUP_TO_OPERATIONAL                                                                                      \
        | CO_NMT_ERR_ON_ERR_REG | CO_ERR_REG_GENERIC_ERR | CO_ERR_REG_COMMUNICATION
#define FIRST_HB_TIME        500
#define SDO_SRV_TIMEOUT_TIME 1000
#define SDO_CLI_TIMEOUT_TIME 500
#define SDO_CLI_BLOCK        false
#define OD_STATUS_BITS       NULL
//*/

/* Global variables and objects */
//CO_t* CO = NULL; /* CANopen object */
//uint8_t LED_red, LED_green;

void CANopenManager::testTaskEntry(void* ptr) {
    FW_ASSERT(ptr != nullptr);
    
    CANopenManager *com = reinterpret_cast<CANopenManager*>(ptr);
 
    for(; !com->m_quitTask; ++com->m_loopCounter)
    {
        Os::Task::delay(Fw::TimeInterval(0, 50000));
    }
}

void CANopenManager::coSdoServerTaskEntry(void* ptr) {

}

void CANopenManager::coMainTaskEntry(void* ptr) {

}

void CANopenManager::coRtTaskEntry(void* ptr) {

}

void CANopenManager::CANopenTaskEntry(void* ptr) {
//   CO_ReturnError_t err;
//   CO_NMT_reset_cmd_t reset = CO_RESET_NOT;
//   uint32_t heapMemoryUsed;
//   void* CANptr = NULL;           /* CAN module address */
//   uint8_t pendingNodeId = 10;    /* read from dip switches or nonvolatile memory, configurable by LSS slave */
//   uint8_t activeNodeId = 10;     /* Copied from CO_pendingNodeId in the communication reset section */
//   //uint16_t pendingBitRate = 125; /* read from dip switches or nonvolatile memory, configurable by LSS slave */
//   uint16_t pendingBitRate = 0; /* read from dip switches or nonvolatile memory, configurable by LSS slave */

    /* Configure microcontroller. */

    /* Allocate memory */
    //CO_config_t* config_ptr = NULL;
//*
    CO = CO_new(config_ptr, &heapMemoryUsed);
    if (CO == NULL) {
        log_printf("Error: Can't allocate memory\n");
        return;
        //return 0;
    } else {
        log_printf("Allocated %u bytes for CANopen objects\n", heapMemoryUsed);
    }
//*/

    while (reset != CO_RESET_APP) 
    {
        /* CANopen communication reset - initialize CANopen objects *******************/
        log_printf("CANopenNode - Reset communication...\n");

        /* Wait rt_thread. */
        CO->CANmodule->CANnormal = false;

        /* Enter CAN configuration. */
        CO_CANsetConfigurationMode((void*)&CANptr);
        CO_CANmodule_disable(CO->CANmodule);

        /* initialize CANopen */
        err = CO_CANinit(CO, CANptr, pendingBitRate);
        if (err != CO_ERROR_NO) {
            log_printf("Error: CAN initialization failed: %d\n", err);
            return;
            //return 0;
        }

//*
        CO_LSS_address_t lssAddress = {.identity = {.vendorID = OD_RAM.x1018_identity.vendor_id,
                                                    .productCode = OD_RAM.x1018_identity.product_code,
                                                    .revisionNumber = OD_RAM.x1018_identity.revision_number,
                                                    .serialNumber = OD_RAM.x1018_identity.serial_number}};
//*/

        err = CO_LSSinit(CO, &lssAddress, &pendingNodeId, &pendingBitRate);
        if (err != CO_ERROR_NO) {
            log_printf("Error: LSS slave initialization failed: %d\n", err);
            return;
            //return 0;
        }

        activeNodeId = pendingNodeId;
        uint32_t errInfo = 0;

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
                             activeNodeId, &errInfo);
        if (err != CO_ERROR_NO && err != CO_ERROR_NODE_ID_UNCONFIGURED_LSS) {
            if (err == CO_ERROR_OD_PARAMETERS) {
                log_printf("Error: Object Dictionary entry 0x%X\n", errInfo);
            } else {
                log_printf("Error: CANopen initialization failed: %d\n", err);
            }
            //return 0;
            return;
        }

        err = CO_CANopenInitPDO(CO, CO->em, OD, activeNodeId, &errInfo);
        if (err != CO_ERROR_NO) {
            if (err == CO_ERROR_OD_PARAMETERS) {
                log_printf("Error: Object Dictionary entry 0x%X\n", errInfo);
            } else {
                log_printf("Error: PDO initialization failed: %d\n", err);
            }
            return;
            //return 0;
        }

        /* Configure Timer interrupt function for execution every 1 millisecond */

        /* Configure CAN transmit and receive interrupt */

        /* Configure CANopen callbacks, etc */
        if (!CO->nodeIdUnconfigured) {

#if (CO_CONFIG_STORAGE) & CO_CONFIG_STORAGE_ENABLE
/*
            if (storageInitError != 0) {
                CO_errorReport(CO->em, CO_EM_NON_VOLATILE_MEMORY, CO_EMC_HARDWARE, storageInitError);
            }
//*/
#endif
        } else {
            log_printf("CANopenNode - Node-id not initialized\n");
        }

        /* start CAN */
        CO_CANsetNormalMode(CO->CANmodule);

        reset = CO_RESET_NOT;

        log_printf("CANopenNode - Running...\n");
        fflush(stdout);

        while (reset == CO_RESET_NOT) {
            /* loop for normal program execution ******************************************/
            /* get time difference since last function call */
            uint32_t timeDifference_us = 500;

            /* CANopen process */
            reset = CO_process(CO, false, timeDifference_us, NULL);
            LED_red = CO_LED_RED(CO->LEDs, CO_LED_CANopen);
            LED_green = CO_LED_GREEN(CO->LEDs, CO_LED_CANopen);

            /* Nonblocking application code may go here. */

            /* Process automatic storage */

            /* optional sleep for short time */
        }
    }

    /* program exit ***************************************************************/
    /* stop threads */

    /* delete objects from memory */
    CO_CANsetConfigurationMode((void*)&CANptr);
    CO_delete(CO);

    log_printf("CANopenNode finished\n");

    /* reset */
    //return 0;
    return;
}

/* timer thread executes in constant intervals ********************************/
void tmrTask_thread(void) 
{
    for (;;) {
        CO_LOCK_OD(CO->CANmodule);
        if (!CO->nodeIdUnconfigured && CO->CANmodule->CANnormal) {
            bool_t syncWas = false;
            /* get time difference since last function call */
            uint32_t timeDifference_us = 1000;

#if (CO_CONFIG_SYNC) & CO_CONFIG_SYNC_ENABLE
            syncWas = CO_process_SYNC(CO, timeDifference_us, NULL);
#endif
#if (CO_CONFIG_PDO) & CO_CONFIG_RPDO_ENABLE
            CO_process_RPDO(CO, syncWas, timeDifference_us, NULL);
#endif
#if (CO_CONFIG_PDO) & CO_CONFIG_TPDO_ENABLE
            CO_process_TPDO(CO, syncWas, timeDifference_us, NULL);
#endif

            /* Further I/O or nonblocking application code may go here. */
        }
        CO_UNLOCK_OD(CO->CANmodule);
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
    Os::TaskString task("CANopenManager");
    Os::Task::Arguments arguments(task, CANopenTaskEntry, this, 93, stackSize, cpuAffinity, taskId);
    //Os::Task::Arguments arguments(task, CANopenTaskEntry, this, priority, stackSize, cpuAffinity, taskId);
    //Os::Task::Arguments arguments(task, testTaskEntry, this, priority, stackSize, cpuAffinity, taskId);
    Os::Task::Status stat = this->m_coTask.start(arguments);
    FW_ASSERT(stat == Os::Task::OP_OK, stat);
}

void CANopenManager::quitCANopenManager() {
    this->m_quitCANopenManager = true;
}

Os::Task::Status CANopenManager::join() {
    return m_coTask.join();
}

}
