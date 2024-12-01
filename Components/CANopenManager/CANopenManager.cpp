// ======================================================================
// \title  CANopenManager.cpp
// \author chroco
// \brief  cpp file for CANopenManager component implementation class
// ======================================================================


#include "Components/CANopenManager/CANopenManager.hpp"
#include "FpConfig.hpp"
	//void COPdoTransmit(CO_IF_FRM *frm)
	void COPdoTransmit(void)
	{
		/* Optional: place here some code, which is called
		 * just before a PDO is transmitted. You may adjust
		 * the given CAN frame which is send afterwards.
		 */

		printf("\n***** send pdo *****\n");

	}

	//int16_t COPdoReceive(CO_IF_FRM *frm)
	int16_t COPdoReceive(void)
	{
		/* Optional: place here some code, which is called
		 * right after receiving a PDO. You may adjust
		 * the given CAN frame which is written into the
		 * object dictionary afterwards or suppress the
		 * write operation.
		 */
		
		printf("\n***** recv pdo *****\n");
		
		return(0u);
	}

//void CORpdoWriteData(CO_IF_FRM *frm, uint8_t pos, uint8_t size, CO_OBJ *obj)
void CORpdoWriteData(void)
{
  /* Optional: place here some code, which is called
   * when a PDO is received with mapped values with
   * a size larger than 4 byte.
   */
		
	printf("\n***** rpdo write *****\n");

}

//void COTpdoReadData(CO_IF_FRM *frm, uint8_t pos, uint8_t size, CO_OBJ *obj)
void COTpdoReadData(void)
{
  /* Optional: place here some code, which is called
   * when a PDO is constructed for transmission which
   * needs a mapped values with a size larger than 4 byte.
   */
		
	printf("\n***** tpdo read *****\n");

}

namespace Components {
  CO_t *COptr = NULL;

  // ----------------------------------------------------------------------
  // Component construction and destruction
  // ----------------------------------------------------------------------

  CANopenManager ::
    CANopenManager(const char* const compName) :
      CANopenManagerComponentBase(compName),
        m_quitCANopenManager(false),
        m_quitTask(false),
        m_loopCounter(0),
				heapMemoryUsed(0),
        config_ptr(NULL),
        CO(NULL),
        CANptr({0}),
				rtPriority(-1),
				uhf({
					.rx_bytes =	&OD_RAM.x4007_uhf.rx_bytes,
					.rx_packets = &OD_RAM.x4007_uhf.rx_packets,
					.rssi = &OD_RAM.x4007_uhf.rssi
				}),
				m_nodeId(C3_NODE_ID)
        //SDOserver(NULL),
  {
		printf("Entering CANopenManager Constructor\n");
		COptr = CO;

		CANdevice = new char[C3_CAN_IFACE_NAME_LENGTH];
		strncpy(CANdevice, C3_CAN_IFACE_NAME, C3_CAN_IFACE_NAME_LENGTH);
		
		logfile = new char[C3_LOGFILE_NAME_LENGTH];
		strncpy(logfile, C3_LOGFILE_NAME,C3_LOGFILE_NAME_LENGTH);

		puhf = &OD_RAM.x4007_uhf;
/*
		uhf = {
			.rx_bytes =	&OD_RAM.x4007_uhf.rx_bytes,
			.rx_packets = &OD_RAM.x4007_uhf.rx_packets,
			.rssi = &OD_RAM.x4007_uhf.rssi
		};
//*/

/*
		lband = {
			.rx_bytes = 
			.rx_packets = OD_RAM.x4007_uhf.rx_packetsr;
			.rssi =
			.synth_lock =
			.synth_relock_count = 
		};
//*/

		printf("Leaving CANopenManager Constructor\n");
  }

  CANopenManager ::
    ~CANopenManager()
  {
		delete CANdevice;	
		delete logfile;
		//this->quitCANopenManager();
		//this->m_coTask.join();
		//this->m_timerTask.join();
		//canopennode_stop();
		//sys_reboot(SYS_REBOOT_COLD);
  }

  void CANopenManager::run_handler(FwIndexType portNum, U32 context) {
      Fw::ParamValid isValid = Fw::ParamValid::INVALID;
      U32 interval = this->paramGet_CAN_INTERVAL(isValid);
      FW_ASSERT((isValid != Fw::ParamValid::INVALID) && (isValid != Fw::ParamValid::UNINIT),
      static_cast<FwAssertArgType>(isValid));
      printf("weee");
  
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

	/* Active node-id, copied from pendingNodeId in the communication reset */
	static uint8_t CO_activeNodeId = CO_LSS_NODE_ID_ASSIGNMENT;

	/* Data block for mainline data, which can be stored to non-volatile memory */
	mainlineStorage_t mlStorage = {0};

#if (CO_CONFIG_TRACE) & CO_CONFIG_TRACE_ENABLE
	static CO_time_t CO_time; /* Object for current time */
#endif

	/* Helper functions ***********************************************************/
#ifndef CO_SINGLE_THREAD
	/* Realtime thread */
	CO_epoll_t epRT;
//	static void* rt_thread(void* arg);
#endif

	/* Signal handler */
	volatile sig_atomic_t CO_endProgram = 0;

	static void
	sigHandler(int sig) {
			(void)sig;
			CO_endProgram = 1;
	}

#if (CO_CONFIG_EM) & CO_CONFIG_EM_CONSUMER
	/* callback for emergency messages */
	static void
	EmergencyRxCallback(const uint16_t ident, const uint16_t errorCode, const uint8_t errorRegister, const uint8_t errorBit,
											const uint32_t infoCode) {
			int16_t nodeIdRx = ident ? (ident & 0x7F) : CO_activeNodeId;

			log_printf(LOG_NOTICE, DBG_EMERGENCY_RX, nodeIdRx, errorCode, errorRegister, errorBit, infoCode);
	}
#endif

#if ((CO_CONFIG_NMT)&CO_CONFIG_NMT_CALLBACK_CHANGE) || ((CO_CONFIG_HB_CONS)&CO_CONFIG_HB_CONS_CALLBACK_CHANGE)
	/* return string description of NMT state. */

	char init[] = "initializing";
	char preo[] = "pre-operational";
	char oper[] = "operational";
	char stop[] = "stopped";
	char unkn[] = "unknown";

	static char*
	NmtState2Str(CO_NMT_internalState_t state) {
			switch (state) {
					case CO_NMT_INITIALIZING: return init;
					//case CO_NMT_INITIALIZING: return "initializing";
					case CO_NMT_PRE_OPERATIONAL: return preo;
					//case CO_NMT_PRE_OPERATIONAL: return "pre-operational";
					case CO_NMT_OPERATIONAL: return oper;
					//case CO_NMT_OPERATIONAL: return "operational";
					case CO_NMT_STOPPED: return stop;
					default: return unkn;
					//default: return "unknown";
			}
	}
#endif

#if (CO_CONFIG_NMT) & CO_CONFIG_NMT_CALLBACK_CHANGE
	/* callback for NMT change messages */
	static void
	NmtChangedCallback(CO_NMT_internalState_t state) {
			log_printf(LOG_NOTICE, DBG_NMT_CHANGE, NmtState2Str(state), state);
	}
#endif

#if (CO_CONFIG_HB_CONS) & CO_CONFIG_HB_CONS_CALLBACK_CHANGE
	/* callback for monitoring Heartbeat remote NMT state change */
	static void
	HeartbeatNmtChangedCallback(uint8_t nodeId, uint8_t idx, CO_NMT_internalState_t state, void* object) {
			(void)object;
			log_printf(LOG_NOTICE, DBG_HB_CONS_NMT_CHANGE, nodeId, idx, NmtState2Str(state), state);
	}
#endif

	/* callback for storing node id and bitrate */
	static bool_t
	LSScfgStoreCallback(void* object, uint8_t id, uint16_t bitRate) {
			mainlineStorage_t* mainlineStorage = static_cast<mainlineStorage_t *>(object);
			mainlineStorage->pendingNodeId = id;
			mainlineStorage->pendingBitRate = bitRate;
			return true;
	}

	static void sdoCallback(void *ptr) {
		printf("SDO Callback!\n");
	}

	static void rpdoCallback(void *ptr) {
		printf("PDO Callback!\n");
	}

	/* Print usage */
/*
	static void
	printUsage(char* progName) {
			printf("Usage: %s <CAN device name> [options]\n", progName);
			printf("\n"
						 "Options:\n"
						 "  -i <Node ID>        CANopen Node-id (1..127) or 0xFF (LSS unconfigured).\n");
#ifndef CO_SINGLE_THREAD
			printf("  -p <RT priority>    Real-time priority of RT thread (1 .. 99). If not set or\n"
						 "                      set to -1, then normal scheduler is used for RT thread.\n");
#endif
			printf("  -r                  Enable reboot on CANopen NMT reset_node command. \n");
#if (CO_CONFIG_STORAGE) & CO_CONFIG_STORAGE_ENABLE
			printf("  -s <storage path>   Path and filename prefix for data storage files.\n"
						 "                      By default files are stored in current dictionary.\n");
#endif
#if (CO_CONFIG_GTW) & CO_CONFIG_GTW_ASCII
			printf("  -c <interface>      Enable command interface for master functionality.\n"
						 "                      One of three types of interfaces can be specified as:\n"
						 "                   1. \"stdio\" - Standard IO of a program (terminal).\n"
						 "                   2. \"local-<file path>\" - Local socket interface on file\n"
						 "                      path, for example \"local-/tmp/CO_command_socket\".\n"
						 "                   3. \"tcp-<port>\" - Tcp socket interface on specified \n"
						 "                      port, for example \"tcp-60000\".\n"
						 "                      Note that this option may affect security of the CAN.\n"
						 "  -T <timeout_time>   If -c is specified as local or tcp socket, then this\n"
						 "                      parameter specifies socket timeout time in milliseconds.\n"
						 "                      Default is 0 - no timeout on established connection.\n");
#endif
			printf("\n"
						 "See also: https://github.com/CANopenNode/CANopenNode\n"
						 "\n");
	}
//*/

	static void pSigHandler(int signo){
			switch (signo) {
				case SIGTSTP:
					printf("TSTP sent!\n");
				break;
				case SIGUSR1:
					printf("SIGUSR1 sent!\n");
				break;
				default:
				break;
			}
			
			fflush(stdout);
	}

	int CANopenManager::CANopenInit() {

		return 0;
	}

	/*******************************************************************************
	 * Mainline thread
	 ******************************************************************************/
	
	int CANopenManager::CANopenProcess() {
		printf("Entering CANopenProcess()\n");
		int programExit = EXIT_SUCCESS;
		CO_epoll_t epMain;
		bool_t firstRun = true;
		int16_t nodeIdFromArgs = m_nodeId; /* May be set by arguments */

//#if (CO_CONFIG_GTW) & CO_CONFIG_GTW_ASCII
		// Socket gateway declarations
		int32_t	commandInterface = CO_COMMAND_IF_LOCAL_SOCKET;
		CO_epoll_gtw_t epGtw;
		char socketName[] = "/tmp/CO_command_socket";
		char* localSocketPath = socketName;
		uint32_t socketTimeout_ms = 0;
//#else
//#endif
			
		/* configure system log */
		setlogmask(LOG_UPTO(LOG_DEBUG));                  /* LOG_DEBUG - log all messages */
		openlog(logfile, LOG_PID | LOG_PERROR, LOG_USER); /* print also to standard error */

		printf("openlog: %s %d\n", CANdevice, nodeIdFromArgs);
		
		CANptr.can_ifindex = if_nametoindex(CANdevice);
	
		/* Valid NodeId is 1..127 or 0xFF(unconfigured) in case of LSSslaveEnabled */
		if ((nodeIdFromArgs == 0 || nodeIdFromArgs > 127)
				&& (!CO_isLSSslaveEnabled(CO) || nodeIdFromArgs != CO_LSS_NODE_ID_ASSIGNMENT)) {
				log_printf(LOG_CRIT, DBG_WRONG_NODE_ID, nodeIdFromArgs);
				//printUsage(argv[0]);
				_Exit(EXIT_FAILURE);
		}

#ifndef CO_SINGLE_THREAD
			if (rtPriority != -1
					&& (rtPriority < sched_get_priority_min(SCHED_FIFO) || rtPriority > sched_get_priority_max(SCHED_FIFO))) {
					log_printf(LOG_CRIT, DBG_WRONG_PRIORITY, rtPriority);
					//printUsage(argv[0]);
					_Exit(EXIT_FAILURE);
			}
#endif

			if (CANptr.can_ifindex == 0) {
					log_printf(LOG_CRIT, DBG_NO_CAN_DEVICE, CANdevice);
					_Exit(EXIT_FAILURE);
			}
			
			CO = CO_new(config_ptr, &heapMemoryUsed);
			if (CO == NULL) {
					log_printf(LOG_CRIT, DBG_GENERAL, "CO_new(), heapMemoryUsed=", heapMemoryUsed);
					_Exit(EXIT_FAILURE);
			} else {
					log_printf(LOG_INFO,DBG_CO_NEW_SUCCESS, "CO_new(), heapMemoryUsed=", heapMemoryUsed);
			}

			/* Overwrite node-id, if specified by program arguments */
			if (nodeIdFromArgs > 0) {
					mlStorage.pendingNodeId = (uint8_t)nodeIdFromArgs;
			}
			/* verify stored values */
			if (mlStorage.pendingNodeId < 1 || mlStorage.pendingNodeId > 127) {
					mlStorage.pendingNodeId = CO_LSS_NODE_ID_ASSIGNMENT;
			}
			
			log_printf(LOG_INFO, DBG_CAN_OPEN_INFO, mlStorage.pendingNodeId, "starting...");

			/* Catch signals SIGINT and SIGTERM */
			if (signal(SIGINT, sigHandler) == SIG_ERR) {
					log_printf(LOG_CRIT, DBG_ERRNO, "signal(SIGINT, sigHandler)");
					_Exit(EXIT_FAILURE);
			}
			if (signal(SIGTERM, sigHandler) == SIG_ERR) {
					log_printf(LOG_CRIT, DBG_ERRNO, "signal(SIGTERM, sigHandler)");
					_Exit(EXIT_FAILURE);
			}

			/* get current time for CO_TIME_set(), since January 1, 1984, UTC. */
/*			
			struct timespec ts;
			if (clock_gettime(CLOCK_REALTIME, &ts) == -1) {
					log_printf(LOG_CRIT, DBG_GENERAL, "clock_gettime(main)", 0);
					_Exit(EXIT_FAILURE);
			}
//*/

//			uint16_t time_days = (uint16_t)(ts.tv_sec / (24 * 60 * 60));
//			time_days -= 5113; /* difference between Unix epoch and CANopen Epoch */
//			uint32_t time_ms = (uint32_t)(ts.tv_sec % (24 * 60 * 60)) * 1000;
//			time_ms += ts.tv_nsec / 1000000;

			/* Create epoll functions */
			err = CO_epoll_create(&epMain, MAIN_THREAD_INTERVAL_US);
			if (err != CO_ERROR_NO) {
					log_printf(LOG_CRIT, DBG_GENERAL, "CO_epoll_create(main), err=", err);
					_Exit(EXIT_FAILURE);
			}
#ifndef CO_SINGLE_THREAD
			err = CO_epoll_create(&epRT, TMR_THREAD_INTERVAL_US);
			if (err != CO_ERROR_NO) {
					log_printf(LOG_CRIT, DBG_GENERAL, "CO_epoll_create(RT), err=", err);
					_Exit(EXIT_FAILURE);
			}
			CANptr.epoll_fd = epRT.epoll_fd;
#else
			CANptr.epoll_fd = epMain.epoll_fd;
#endif
//#if (CO_CONFIG_GTW) & CO_CONFIG_GTW_ASCII
			err = CO_epoll_createGtw(&epGtw, epMain.epoll_fd, commandInterface, socketTimeout_ms, localSocketPath);
			if (err != CO_ERROR_NO) {
					log_printf(LOG_CRIT, DBG_GENERAL, "CO_epoll_createGtw(), err=", err);
					_Exit(EXIT_FAILURE);
			}
//#endif

			while (reset != CO_RESET_APP && reset != CO_RESET_QUIT && CO_endProgram == 0) {
					/* CANopen communication reset - initialize CANopen objects *******************/
					uint32_t errInfo;

					/* Wait rt_thread. */
					if (!firstRun) {
							CO_LOCK_OD(CO->CANmodule);
							CO->CANmodule->CANnormal = false;
							CO_UNLOCK_OD(CO->CANmodule);
					}

					/* Enter CAN configuration. */
					CO_CANsetConfigurationMode((void*)&CANptr);
					CO_CANmodule_disable(CO->CANmodule);

					/* initialize CANopen */
					err = CO_CANinit(CO, (void*)&CANptr, 0 /* bit rate not used */);
					if (err != CO_ERROR_NO) {
							log_printf(LOG_CRIT, DBG_CAN_OPEN, "CO_CANinit()", err);
							programExit = EXIT_FAILURE;
							CO_endProgram = 1;
							continue;
					}

					CO_LSS_address_t lssAddress = {.identity = {.vendorID = OD_RAM.x1018_identity.vendor_id,
																											.productCode = OD_RAM.x1018_identity.product_code,
																											.revisionNumber = OD_RAM.x1018_identity.revision_number,
																											.serialNumber = OD_RAM.x1018_identity.serial_number}};
					err = CO_LSSinit(CO, &lssAddress, &mlStorage.pendingNodeId, &mlStorage.pendingBitRate);
					if (err != CO_ERROR_NO) {
							log_printf(LOG_CRIT, DBG_CAN_OPEN, "CO_LSSinit()", err);
							programExit = EXIT_FAILURE;
							CO_endProgram = 1;
							continue;
					}

					CO_activeNodeId = mlStorage.pendingNodeId;
					errInfo = 0;

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
															 CO_activeNodeId, &errInfo);
					if (err != CO_ERROR_NO && err != CO_ERROR_NODE_ID_UNCONFIGURED_LSS) {
							if (err == CO_ERROR_OD_PARAMETERS) {
									log_printf(LOG_CRIT, DBG_OD_ENTRY, errInfo);
							}

							programExit = EXIT_FAILURE;
							CO_endProgram = 1;
							continue;
					}
					
					/* initialize part of threadMain and callbacks */
					CO_epoll_initCANopenMain(&epMain, CO);
					
					//CO_TPDO_initCallbackPre(CO->TPDO, this, rpdoCallback);
					CO_RPDO_initCallbackPre(CO->RPDO, this, rpdoCallback);
					printf("PDO Callback: %x, %x\n",CO_CONFIG_PDO,CO_CONFIG_FLAG_CALLBACK_PRE);
					CO_SDOserver_initCallbackPre(CO->SDOserver, this, sdoCallback);

//#if (CO_CONFIG_GTW) & CO_CONFIG_GTW_ASCII
					CO_epoll_initCANopenGtw(&epGtw, CO);
//#endif
					CO_LSSslave_initCfgStoreCall(CO->LSSslave, &mlStorage, LSScfgStoreCallback);
					if (!CO->nodeIdUnconfigured) {
							if (errInfo != 0) {
									CO_errorReport(CO->em, CO_EM_INCONSISTENT_OBJECT_DICT, CO_EMC_DATA_SET, errInfo);
							}
#if (CO_CONFIG_EM) & CO_CONFIG_EM_CONSUMER
							CO_EM_initCallbackRx(CO->em, EmergencyRxCallback);
#endif
#if (CO_CONFIG_NMT) & CO_CONFIG_NMT_CALLBACK_CHANGE
							CO_NMT_initCallbackChanged(CO->NMT, NmtChangedCallback);
#endif
#if (CO_CONFIG_HB_CONS) & CO_CONFIG_HB_CONS_CALLBACK_CHANGE
							CO_HBconsumer_initCallbackNmtChanged(CO->HBcons, 0, NULL, HeartbeatNmtChangedCallback);
#endif
#if (CO_CONFIG_TRACE) & CO_CONFIG_TRACE_ENABLE
							/* Initialize time */
							CO_time_init(&CO_time, CO->SDO[0], &OD_time.epochTimeBaseMs, &OD_time.epochTimeOffsetMs, 0x2130);
#endif
							log_printf(LOG_INFO, DBG_CAN_OPEN_INFO, CO_activeNodeId, "communication reset");
					} else {
							log_printf(LOG_INFO, DBG_CAN_OPEN_INFO, CO_activeNodeId, "node-id not initialized");
					}

					/* First time only initialization. */
					if (firstRun) {
							firstRun = false;
//							CO_TIME_set(CO->TIME, time_ms, time_days, TIME_STAMP_INTERVAL_MS);
#ifndef CO_SINGLE_THREAD
							/* Create rt_thread and set priority */
							if (pthread_create(&rt_thread_id, NULL, rt_thread, this) != 0) {
									log_printf(LOG_CRIT, DBG_ERRNO, "pthread_create(rt_thread)");
									programExit = EXIT_FAILURE;
									CO_endProgram = 1;
									continue;
							}
							if (rtPriority > 0) {
									struct sched_param param;

									param.sched_priority = rtPriority;
									if (pthread_setschedparam(rt_thread_id, SCHED_FIFO, &param) != 0) {
											log_printf(LOG_CRIT, DBG_ERRNO, "pthread_setschedparam()");
											programExit = EXIT_FAILURE;
											CO_endProgram = 1;
											continue;
									}
							}
#endif
					} /* if(firstRun) */
					errInfo = 0;
					err = CO_CANopenInitPDO(CO,     /* CANopen object */
																	CO->em, /* emergency object */
																	OD,     /* Object dictionary */
																	CO_activeNodeId, &errInfo);
					if (err != CO_ERROR_NO && err != CO_ERROR_NODE_ID_UNCONFIGURED_LSS) {
							if (err == CO_ERROR_OD_PARAMETERS) {
									log_printf(LOG_CRIT, DBG_OD_ENTRY, errInfo);
							} else {
									log_printf(LOG_CRIT, DBG_CAN_OPEN, "CO_CANopenInitPDO()", err);
							}
							programExit = EXIT_FAILURE;
							CO_endProgram = 1;
							continue;
					}

					/* start CAN */
					CO_CANsetNormalMode(CO->CANmodule);

					reset = CO_RESET_NOT;

					log_printf(LOG_INFO, DBG_CAN_OPEN_INFO, CO_activeNodeId, "running ...");

					while (reset == CO_RESET_NOT && CO_endProgram == 0) {
							/* loop for normal program execution ******************************************/
							CO_epoll_wait(&epMain);
#ifdef CO_SINGLE_THREAD
							CO_epoll_processRT(&epMain, CO, false);
#endif
//#if (CO_CONFIG_GTW) & CO_CONFIG_GTW_ASCII
							CO_epoll_processGtw(&epGtw, CO, &epMain);
//#endif
							CO_epoll_processMain(&epMain, CO, GATEWAY_ENABLE, &reset);
							CO_epoll_processLast(&epMain);
							//raise(SIGUSR1);
					}
			} /* while(reset != CO_RESET_APP */

			/* program _Exit ***************************************************************/
			/* join threads */
			CO_endProgram = 1;
#ifndef CO_SINGLE_THREAD
			printf("starting thread\n");
			if (pthread_join(rt_thread_id, NULL) != 0) {
					log_printf(LOG_CRIT, DBG_ERRNO, "pthread_join()");
					_Exit(EXIT_FAILURE);
			}
#endif

			/* delete objects from memory */
#ifndef CO_SINGLE_THREAD
			CO_epoll_close(&epRT);
#endif
			CO_epoll_close(&epMain);
//#if (CO_CONFIG_GTW) & CO_CONFIG_GTW_ASCII
			CO_epoll_closeGtw(&epGtw);
//#endif
			CO_CANsetConfigurationMode((void*)&CANptr);
			CO_delete(CO);

			log_printf(LOG_INFO, DBG_CAN_OPEN_INFO, CO_activeNodeId, "finished");

			/* Flush all buffers (and reboot) */
			if (rebootEnable && reset == CO_RESET_APP) {
					sync();
					if (reboot(LINUX_REBOOT_CMD_RESTART) != 0) {
							log_printf(LOG_CRIT, DBG_ERRNO, "reboot()");
							_Exit(EXIT_FAILURE);
					}
			}

			_Exit(programExit);
		return 0;
	}

	void CANopenManager::testThisTrash() {
		printf("Entering THisTrash\n");

/*
		int argc = 4;
		char *argv[argc];
//*/
/*
			argv[0] = strdup("/home/chroco/oresat/oresat-fprime/oresat-dev/build-fprime-automatic-native/bin/Linux/OreSatDev\0");
			//argv[0] = strdup("OreSatDev\0");
			argv[1] = strdup("can0\0");
			argv[2] = strdup("-i\0");
			argv[3] = strdup("7\0");
//*/
/*		
		for(int i = 0; i < argc; ++i) {
			argv[i] = (char *)malloc(50); 
		}
		argv[0] = strdup("/home/chroco/oresat/oresat-fprime/oresat-dev/build-fprime-automatic-native/bin/Linux/OreSatDev");
		argv[1] = strdup("can0");
		argv[2] = strdup("-i");
		argv[3] = strdup("7");

		printf("args: %s %s %s %s \n",argv[0],argv[1],argv[2],argv[3]);
//*/
		int programExit = EXIT_SUCCESS;
		CO_epoll_t epMain;
#ifndef CO_SINGLE_THREAD
		//pthread_t rt_thread_id;
		//int rtPriority = -1;
#endif
		//CO_NMT_reset_cmd_t reset = CO_RESET_NOT;
		//CO_ReturnError_t err;
		//CO_CANptrSocketCan_t CANptr = {0};
		//int opt;
		bool_t firstRun = true;

		//char* CANdevice = NULL;      /* CAN device, configurable by arguments. */
		//int16_t nodeIdFromArgs = -1; /* May be set by arguments */
		int16_t nodeIdFromArgs = m_nodeId; /* May be set by arguments */
		//bool_t rebootEnable = false; /* Configurable by arguments */

#if (CO_CONFIG_STORAGE) & CO_CONFIG_STORAGE_ENABLE
	/*
			CO_storage_t storage;
			CO_storage_entry_t storageEntries[] = {
					{.addr = &OD_RAM,
					 .len = sizeof(OD_RAM),
					 .subIndexOD = 2,
					 .attr = CO_storage_cmd | CO_storage_restore,
					 .filename = {'o', 'd', '_', 'c', 'o', 'm', 'm', '.', 'p', 'e', 'r', 's', 'i', 's', 't', '\0'}},
					{.addr = &mlStorage,
					 .len = sizeof(mlStorage),
					 .subIndexOD = 4,
					 .attr = CO_storage_cmd | CO_storage_auto | CO_storage_restore,
					 .filename = {'m', 'a', 'i', 'n', 'l', 'i', 'n', 'e', '.', 'p', 'e', 'r', 's', 'i', 's', 't', '\0'}},
					CO_STORAGE_APPLICATION};
			uint8_t storageEntriesCount = sizeof(storageEntries) / sizeof(storageEntries[0]);
			uint32_t storageInitError = 0;
			uint32_t storageErrorPrev = 0;
			uint32_t storageIntervalTimer = 0;
	//*/
#endif

#if (CO_CONFIG_GTW) & CO_CONFIG_GTW_ASCII
			CO_epoll_gtw_t epGtw;
			/* values from CO_commandInterface_t */
			int32_t commandInterface = CO_COMMAND_IF_DISABLED;
			/* local socket path if commandInterface == CO_COMMAND_IF_LOCAL_SOCKET */
			char socketName[] = "/tmp/CO_command_socket";
			char* localSocketPath = socketName;
			//char* localSocketPath = NULL;
			uint32_t socketTimeout_ms = 0;
#else
#define commandInterface 0
#define localSocketPath  NULL
#endif

			commandInterface = CO_COMMAND_IF_LOCAL_SOCKET;
			
			/* configure system log */
			setlogmask(LOG_UPTO(LOG_DEBUG));                  /* LOG_DEBUG - log all messages */
			openlog(logfile, LOG_PID | LOG_PERROR, LOG_USER); /* print also to standard error */
			//openlog(argv[0], LOG_PID | LOG_PERROR, LOG_USER); /* print also to standard error */

			printf("openlog: %s %d\n", CANdevice, nodeIdFromArgs);
			
			/* Get program options */
	/*
			if (argc < 2 || strcmp(argv[1], "--help") == 0) {
					printUsage(argv[0]);
					_Exit(EXIT_SUCCESS);
			}
			
			printf("Before getopt: %s %d\n", CANdevice, nodeIdFromArgs);
		 
			while ((opt = getopt(argc, argv, "i:p:rc:T:s:")) != -1) {
					printf("getopt: %d\n", opt);
					switch (opt) {
							case 'i': {
									printf("case 'i' start: %s %d\n", CANdevice, nodeIdFromArgs);
									long int nodeIdLong = strtol(optarg, NULL, 0);
									nodeIdFromArgs = (nodeIdLong < 0 || nodeIdLong > 0xFF) ? 0 : (uint8_t)strtol(optarg, NULL, 0);
									printf("case 'i' before break: %s %d\n", CANdevice, nodeIdFromArgs);
									break;
							}
#ifndef CO_SINGLE_THREAD
							case 'p': rtPriority = strtol(optarg, NULL, 0); break;
#endif
							case 'r': rebootEnable = true; break;
#if (CO_CONFIG_GTW) & CO_CONFIG_GTW_ASCII
							case 'c': d
									//char* psocketName = &socketName;
							//		const char* comm_stdio = "stdio";
							//		const char* comm_local = "local-";
							//		const char* comm_tcp = "tcp-";
								//	if (strcmp(optarg, comm_stdio) == 0) {
							//				commandInterface = CO_COMMAND_IF_STDIO;
							//		} else if (strncmp(optarg, comm_local, strlen(comm_local)) == 0) {
											commandInterface = CO_COMMAND_IF_LOCAL_SOCKET;
											//localSocketPath = &optarg[6];
											//localSocketPath = socketName;
							//		} else if (strncmp(optarg, comm_tcp, strlen(comm_tcp)) == 0) {
									//		const char* portStr = &optarg[4];
									//	//const char* portStr = socketName;
									//	uint16_t port;
							//			int nMatch = sscanf(portStr, "%hu", &port);
							//			if (nMatch != 1) {
						//						log_printf(LOG_CRIT, DBG_NOT_TCP_PORT, portStr);
						//						_Exit(EXIT_FAILURE);
						//				}
									//	commandInterface = port;

						//			} else {
						//					log_printf(LOG_CRIT, DBG_ARGUMENT_UNKNOWN, "-c", optarg);
					//						_Exit(EXIT_FAILURE);
					//				}
									break;
							}
							case 'T': socketTimeout_ms = strtoul(optarg, NULL, 0); break;
#endif
#if (CO_CONFIG_STORAGE) & CO_CONFIG_STORAGE_ENABLE
	//*/
	/*
							case 's': {
									// add prefix to each storageEntries[i].filename //
									for (uint8_t i = 0; i < storageEntriesCount; i++) {
											char* filePrefix = optarg;
											size_t filePrefixLen = strlen(filePrefix);
											char* file = storageEntries[i].filename;
											size_t fileLen = strlen(file);
											if (fileLen + filePrefixLen < CO_STORAGE_PATH_MAX) {
													memmove(&file[filePrefixLen], &file[0], fileLen + 1);
													memcpy(&file[0], &filePrefix[0], filePrefixLen);
											}
									}
									break;
							}
	//*/
	/*
#endif
							default: printUsage(argv[0]); _Exit(EXIT_FAILURE);
					}
			}
	//*/

//			printf("After getopt: %s %d\n", CANdevice, nodeIdFromArgs);
			//printf("args: %s %s %s %s \n",argv[0],argv[1],argv[2],argv[3]);

	//    if (optind < argc) {
					//CANdevice = argv[1];
					//CANdevice = argv[optind];
					CANptr.can_ifindex = if_nametoindex(CANdevice);
	//    }
	//		printf("After getopt: %s %d\n", CANdevice, nodeIdFromArgs);

	//		printf("After set if_index: %s %d\n", CANdevice, nodeIdFromArgs);
			
			/* Valid NodeId is 1..127 or 0xFF(unconfigured) in case of LSSslaveEnabled */
			if ((nodeIdFromArgs == 0 || nodeIdFromArgs > 127)
					&& (!CO_isLSSslaveEnabled(CO) || nodeIdFromArgs != CO_LSS_NODE_ID_ASSIGNMENT)) {
					log_printf(LOG_CRIT, DBG_WRONG_NODE_ID, nodeIdFromArgs);
					//printUsage(argv[0]);
					_Exit(EXIT_FAILURE);
			}

#ifndef CO_SINGLE_THREAD
			if (rtPriority != -1
					&& (rtPriority < sched_get_priority_min(SCHED_FIFO) || rtPriority > sched_get_priority_max(SCHED_FIFO))) {
					log_printf(LOG_CRIT, DBG_WRONG_PRIORITY, rtPriority);
					//printUsage(argv[0]);
					_Exit(EXIT_FAILURE);
			}
#endif

			if (CANptr.can_ifindex == 0) {
					log_printf(LOG_CRIT, DBG_NO_CAN_DEVICE, CANdevice);
					_Exit(EXIT_FAILURE);
			}

			//log_printf(LOG_INFO, DBG_CAN_OPEN_INFO, mlStorage.pendingNodeId, "starting");

			/* Allocate memory for CANopen objects */
			//uint32_t heapMemoryUsed = 0;
			//CO_config_t* config_ptr = NULL;
	/*
#ifdef CO_MULTIPLE_OD
			// example usage of CO_MULTIPLE_OD (but still single OD here) //
			CO_config_t co_config = {0};
			OD_INIT_CONFIG(co_config); // helper macro from OD.h //
#if (CO_CONFIG_LEDS) & CO_CONFIG_LEDS_ENABLE
			co_config.CNT_LEDS = 1;
#endif
#if (CO_CONFIG_LSS) & CO_CONFIG_LSS_SLAVE
			co_config.CNT_LSS_SLV = 1;
#endif
#if (CO_CONFIG_LSS) & CO_CONFIG_LSS_MASTER
			co_config.CNT_LSS_MST = 1;
#endif
#if (CO_CONFIG_GTW) & CO_CONFIG_GTW_ASCII
			co_config.CNT_GTWA = 1;
#endif
#if (CO_CONFIG_TRACE) & CO_CONFIG_TRACE_ENABLE
			co_config.CNT_TRACE = 1;
#endif
			config_ptr = &co_config;
#endif // CO_MULTIPLE_OD //
	//*/
			CO = CO_new(config_ptr, &heapMemoryUsed);
			if (CO == NULL) {
					log_printf(LOG_CRIT, DBG_GENERAL, "CO_new(), heapMemoryUsed=", heapMemoryUsed);
					_Exit(EXIT_FAILURE);
			} else {
					log_printf(LOG_INFO,DBG_CO_NEW_SUCCESS, "CO_new(), heapMemoryUsed=", heapMemoryUsed);
			}

#if (CO_CONFIG_STORAGE) & CO_CONFIG_STORAGE_ENABLE
	/*
			err = CO_storageLinux_init(&storage, CO->CANmodule, OD_ENTRY_H1010_storeParameters,
																 OD_ENTRY_H1011_restoreDefaultParameters, storageEntries, storageEntriesCount,
																 &storageInitError);

			if (err != CO_ERROR_NO && err != CO_ERROR_DATA_CORRUPT) {
					char* filename = storageInitError < storageEntriesCount ? storageEntries[storageInitError].filename : "???";
					log_printf(LOG_CRIT, DBG_STORAGE, filename);
					_Exit(EXIT_FAILURE);
			}
	//*/
#endif
#ifdef CO_USE_APPLICATION
			/* Execute optional external application code */
	/*
			uint32_t errInfo_app_programStart = 0;
			err = app_programStart(&mlStorage.pendingBitRate, &mlStorage.pendingNodeId, &errInfo_app_programStart);
			if (err != CO_ERROR_NO) {
					if (err == CO_ERROR_OD_PARAMETERS) {
							log_printf(LOG_CRIT, DBG_OD_ENTRY, errInfo_app_programStart);
					} else {
							log_printf(LOG_CRIT, DBG_CAN_OPEN, "app_programStart()", err);
					}
					_Exit(EXIT_FAILURE);
			}
	//*/
#endif

			/* Overwrite node-id, if specified by program arguments */
			if (nodeIdFromArgs > 0) {
					mlStorage.pendingNodeId = (uint8_t)nodeIdFromArgs;
			}
			/* verify stored values */
			if (mlStorage.pendingNodeId < 1 || mlStorage.pendingNodeId > 127) {
					mlStorage.pendingNodeId = CO_LSS_NODE_ID_ASSIGNMENT;
			}
			
			log_printf(LOG_INFO, DBG_CAN_OPEN_INFO, mlStorage.pendingNodeId, "starting...");

			/* Catch signals SIGINT and SIGTERM */
			if (signal(SIGINT, sigHandler) == SIG_ERR) {
					log_printf(LOG_CRIT, DBG_ERRNO, "signal(SIGINT, sigHandler)");
					_Exit(EXIT_FAILURE);
			}
			if (signal(SIGTERM, sigHandler) == SIG_ERR) {
					log_printf(LOG_CRIT, DBG_ERRNO, "signal(SIGTERM, sigHandler)");
					_Exit(EXIT_FAILURE);
			}

			/* get current time for CO_TIME_set(), since January 1, 1984, UTC. */
/*			
			struct timespec ts;
			if (clock_gettime(CLOCK_REALTIME, &ts) == -1) {
					log_printf(LOG_CRIT, DBG_GENERAL, "clock_gettime(main)", 0);
					_Exit(EXIT_FAILURE);
			}
//*/

//			uint16_t time_days = (uint16_t)(ts.tv_sec / (24 * 60 * 60));
//			time_days -= 5113; /* difference between Unix epoch and CANopen Epoch */
//			uint32_t time_ms = (uint32_t)(ts.tv_sec % (24 * 60 * 60)) * 1000;
//			time_ms += ts.tv_nsec / 1000000;

			/* Create epoll functions */
			err = CO_epoll_create(&epMain, MAIN_THREAD_INTERVAL_US);
			if (err != CO_ERROR_NO) {
					log_printf(LOG_CRIT, DBG_GENERAL, "CO_epoll_create(main), err=", err);
					_Exit(EXIT_FAILURE);
			}
#ifndef CO_SINGLE_THREAD
			err = CO_epoll_create(&epRT, TMR_THREAD_INTERVAL_US);
			if (err != CO_ERROR_NO) {
					log_printf(LOG_CRIT, DBG_GENERAL, "CO_epoll_create(RT), err=", err);
					_Exit(EXIT_FAILURE);
			}
			CANptr.epoll_fd = epRT.epoll_fd;
#else
			CANptr.epoll_fd = epMain.epoll_fd;
#endif
#if (CO_CONFIG_GTW) & CO_CONFIG_GTW_ASCII
			err = CO_epoll_createGtw(&epGtw, epMain.epoll_fd, commandInterface, socketTimeout_ms, localSocketPath);
			if (err != CO_ERROR_NO) {
					log_printf(LOG_CRIT, DBG_GENERAL, "CO_epoll_createGtw(), err=", err);
					_Exit(EXIT_FAILURE);
			}
#endif

			while (reset != CO_RESET_APP && reset != CO_RESET_QUIT && CO_endProgram == 0) {
					/* CANopen communication reset - initialize CANopen objects *******************/
					uint32_t errInfo;

					/* Wait rt_thread. */
					if (!firstRun) {
							CO_LOCK_OD(CO->CANmodule);
							CO->CANmodule->CANnormal = false;
							CO_UNLOCK_OD(CO->CANmodule);
					}

					/* Enter CAN configuration. */
					CO_CANsetConfigurationMode((void*)&CANptr);
					CO_CANmodule_disable(CO->CANmodule);

					/* initialize CANopen */
					err = CO_CANinit(CO, (void*)&CANptr, 0 /* bit rate not used */);
					if (err != CO_ERROR_NO) {
							log_printf(LOG_CRIT, DBG_CAN_OPEN, "CO_CANinit()", err);
							programExit = EXIT_FAILURE;
							CO_endProgram = 1;
							continue;
					}

					CO_LSS_address_t lssAddress = {.identity = {.vendorID = OD_RAM.x1018_identity.vendor_id,
																											.productCode = OD_RAM.x1018_identity.product_code,
																											.revisionNumber = OD_RAM.x1018_identity.revision_number,
																											.serialNumber = OD_RAM.x1018_identity.serial_number}};
					err = CO_LSSinit(CO, &lssAddress, &mlStorage.pendingNodeId, &mlStorage.pendingBitRate);
					if (err != CO_ERROR_NO) {
							log_printf(LOG_CRIT, DBG_CAN_OPEN, "CO_LSSinit()", err);
							programExit = EXIT_FAILURE;
							CO_endProgram = 1;
							continue;
					}

					CO_activeNodeId = mlStorage.pendingNodeId;
					errInfo = 0;

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
															 CO_activeNodeId, &errInfo);
					if (err != CO_ERROR_NO && err != CO_ERROR_NODE_ID_UNCONFIGURED_LSS) {
							if (err == CO_ERROR_OD_PARAMETERS) {
									log_printf(LOG_CRIT, DBG_OD_ENTRY, errInfo);
							}

							programExit = EXIT_FAILURE;
							CO_endProgram = 1;
							continue;
					}
					
					/* initialize part of threadMain and callbacks */
					CO_epoll_initCANopenMain(&epMain, CO);
#if (CO_CONFIG_GTW) & CO_CONFIG_GTW_ASCII
					CO_epoll_initCANopenGtw(&epGtw, CO);
#endif
					CO_LSSslave_initCfgStoreCall(CO->LSSslave, &mlStorage, LSScfgStoreCallback);
					if (!CO->nodeIdUnconfigured) {
							if (errInfo != 0) {
									CO_errorReport(CO->em, CO_EM_INCONSISTENT_OBJECT_DICT, CO_EMC_DATA_SET, errInfo);
							}
#if (CO_CONFIG_EM) & CO_CONFIG_EM_CONSUMER
							CO_EM_initCallbackRx(CO->em, EmergencyRxCallback);
#endif
#if (CO_CONFIG_NMT) & CO_CONFIG_NMT_CALLBACK_CHANGE
							CO_NMT_initCallbackChanged(CO->NMT, NmtChangedCallback);
#endif
#if (CO_CONFIG_HB_CONS) & CO_CONFIG_HB_CONS_CALLBACK_CHANGE
							CO_HBconsumer_initCallbackNmtChanged(CO->HBcons, 0, NULL, HeartbeatNmtChangedCallback);
#endif
#if (CO_CONFIG_STORAGE) & CO_CONFIG_STORAGE_ENABLE
	/*
							if (storageInitError != 0) {
									CO_errorReport(CO->em, CO_EM_NON_VOLATILE_MEMORY, CO_EMC_HARDWARE, storageInitError);
							}
	//*/
#endif
#ifdef CO_USE_APPLICATION
	/*
							if (errInfo_app_programStart != 0) {
									CO_errorReport(CO->em, CO_EM_INCONSISTENT_OBJECT_DICT, CO_EMC_DATA_SET, errInfo_app_programStart);
							}
	//*/
#endif

#if (CO_CONFIG_TRACE) & CO_CONFIG_TRACE_ENABLE
							/* Initialize time */
							CO_time_init(&CO_time, CO->SDO[0], &OD_time.epochTimeBaseMs, &OD_time.epochTimeOffsetMs, 0x2130);
#endif
							log_printf(LOG_INFO, DBG_CAN_OPEN_INFO, CO_activeNodeId, "communication reset");
					} else {
							log_printf(LOG_INFO, DBG_CAN_OPEN_INFO, CO_activeNodeId, "node-id not initialized");
					}

					/* First time only initialization. */
					if (firstRun) {
							firstRun = false;
//							CO_TIME_set(CO->TIME, time_ms, time_days, TIME_STAMP_INTERVAL_MS);
#ifndef CO_SINGLE_THREAD
							/* Create rt_thread and set priority */
							if (pthread_create(&rt_thread_id, NULL, rt_thread, this) != 0) {
									log_printf(LOG_CRIT, DBG_ERRNO, "pthread_create(rt_thread)");
									programExit = EXIT_FAILURE;
									CO_endProgram = 1;
									continue;
							}
							if (rtPriority > 0) {
									struct sched_param param;

									param.sched_priority = rtPriority;
									if (pthread_setschedparam(rt_thread_id, SCHED_FIFO, &param) != 0) {
											log_printf(LOG_CRIT, DBG_ERRNO, "pthread_setschedparam()");
											programExit = EXIT_FAILURE;
											CO_endProgram = 1;
											continue;
									}
							}
#endif
					} /* if(firstRun) */

#ifdef CO_USE_APPLICATION
					/* Execute optional external application code */
	/*
					app_communicationReset(CO);
	//*/
#endif

					errInfo = 0;
					err = CO_CANopenInitPDO(CO,     /* CANopen object */
																	CO->em, /* emergency object */
																	OD,     /* Object dictionary */
																	CO_activeNodeId, &errInfo);
					if (err != CO_ERROR_NO && err != CO_ERROR_NODE_ID_UNCONFIGURED_LSS) {
							if (err == CO_ERROR_OD_PARAMETERS) {
									log_printf(LOG_CRIT, DBG_OD_ENTRY, errInfo);
							} else {
									log_printf(LOG_CRIT, DBG_CAN_OPEN, "CO_CANopenInitPDO()", err);
							}
							programExit = EXIT_FAILURE;
							CO_endProgram = 1;
							continue;
					}

					/* start CAN */
					CO_CANsetNormalMode(CO->CANmodule);

					reset = CO_RESET_NOT;

					log_printf(LOG_INFO, DBG_CAN_OPEN_INFO, CO_activeNodeId, "running ...");

					while (reset == CO_RESET_NOT && CO_endProgram == 0) {
							/* loop for normal program execution ******************************************/
							CO_epoll_wait(&epMain);
#ifdef CO_SINGLE_THREAD
							CO_epoll_processRT(&epMain, CO, false);
#endif
#if (CO_CONFIG_GTW) & CO_CONFIG_GTW_ASCII
							CO_epoll_processGtw(&epGtw, CO, &epMain);
#endif
							CO_epoll_processMain(&epMain, CO, GATEWAY_ENABLE, &reset);
							CO_epoll_processLast(&epMain);

#ifdef CO_USE_APPLICATION
							/* Execute optional external application code */
	/*
							app_programAsync(CO, epMain.timeDifference_us);
	//*/
#endif

#if (CO_CONFIG_STORAGE) & CO_CONFIG_STORAGE_ENABLE
							/* don't save more often than interval */
	/*
							if (storageIntervalTimer < CO_STORAGE_AUTO_INTERVAL) {
									storageIntervalTimer += epMain.timeDifference_us;
							} else {
									uint32_t mask = CO_storageLinux_auto_process(&storage, false);
									if (mask != storageErrorPrev && !CO->nodeIdUnconfigured) {
											if (mask != 0) {
													CO_errorReport(CO->em, CO_EM_NON_VOLATILE_AUTO_SAVE, CO_EMC_HARDWARE, mask);
											} else {
													CO_errorReset(CO->em, CO_EM_NON_VOLATILE_AUTO_SAVE, 0);
											}
									}
									storageErrorPrev = mask;
									storageIntervalTimer = 0;
							}
	//*/
#endif
					}
			} /* while(reset != CO_RESET_APP */

			/* program _Exit ***************************************************************/
			/* join threads */
			CO_endProgram = 1;
#ifndef CO_SINGLE_THREAD
			printf("starting thread\n");
			if (pthread_join(rt_thread_id, NULL) != 0) {
					log_printf(LOG_CRIT, DBG_ERRNO, "pthread_join()");
					_Exit(EXIT_FAILURE);
			}
#endif
#ifdef CO_USE_APPLICATION
			/* Execute optional external application code */
	/*
			app_programEnd();
	//*/
#endif

#if (CO_CONFIG_STORAGE) & CO_CONFIG_STORAGE_ENABLE
	/*
			CO_storageLinux_auto_process(&storage, true);
	//*/
#endif

			/* delete objects from memory */
#ifndef CO_SINGLE_THREAD
			CO_epoll_close(&epRT);
#endif
			CO_epoll_close(&epMain);
#if (CO_CONFIG_GTW) & CO_CONFIG_GTW_ASCII
			CO_epoll_closeGtw(&epGtw);
#endif
			CO_CANsetConfigurationMode((void*)&CANptr);
			CO_delete(CO);

			log_printf(LOG_INFO, DBG_CAN_OPEN_INFO, CO_activeNodeId, "finished");

			/* Flush all buffers (and reboot) */
			if (rebootEnable && reset == CO_RESET_APP) {
					sync();
					if (reboot(LINUX_REBOOT_CMD_RESTART) != 0) {
							log_printf(LOG_CRIT, DBG_ERRNO, "reboot()");
							_Exit(EXIT_FAILURE);
					}
			}

			_Exit(programExit);
	}

#ifndef CO_SINGLE_THREAD
	/*******************************************************************************
	 * Realtime thread for CAN receive and threadTmr
	 ******************************************************************************/
void* CANopenManager::rt_thread(void* arg) {
	FW_ASSERT(arg != nullptr);
	CANopenManager *com = reinterpret_cast<CANopenManager*>(arg);
	//(void)arg;
	/* Endless loop */
	while (CO_endProgram == 0) {
		CO_epoll_wait(&epRT);
		CO_epoll_processRT(&epRT, com->CO, true);
		CO_epoll_processLast(&epRT);

#if (CO_CONFIG_TRACE) & CO_CONFIG_TRACE_ENABLE
		/* Monitor variables with trace objects */
		CO_time_process(&CO_time);
		for (i = 0; i < OD_traceEnable && i < co->CNT_TRACE; i++) {
				CO_trace_process(CO->trace[i], *CO_time.epochTimeOffsetMs);
		}
#endif

#ifdef CO_USE_APPLICATION
			/* Execute optional external application code */
/*
			app_programRt(CO, epRT.timeDifference_us);
//*/
#endif
	}

	return NULL;
}
#endif

/////////////////////////////////////////////////////////////////////////////////////////////////////

void CANopenManager::canopennode_stop(void) {

}


void CANopenManager::testTaskEntry(void* ptr) {
	FW_ASSERT(ptr != nullptr);
	CANopenManager *com = reinterpret_cast<CANopenManager*>(ptr);

	printf("Entering testTaskEntry\n");

	//int sigwait(const sigset_t *set, int *sig);
	struct sigaction psa;
	psa.sa_handler = pSigHandler;

	int sig = 0;
	int error = 0;
	int errorCount = 0;

	for(; !com->m_quitTask; ++com->m_loopCounter)
	{
		Os::Task::delay(Fw::TimeInterval(1, 0));
		//error = sigaction(SIGUSR1, &psa, NULL);
		//error = sigwait(&com->sigset, &sig);
		if(error) {
			printf("error!\n");
		}
		errorCount = errorCount + error;
		error = 0;

		*com->uhf.rx_packets = com->m_loopCounter;
	}
}

void CANopenManager::CANopenTaskEntry(void* ptr) {
		FW_ASSERT(ptr != nullptr);
		CANopenManager *com = reinterpret_cast<CANopenManager*>(ptr);
		//com->testThisTrash();
		com->CANopenInit();
		com->CANopenProcess();
}

/* CAN interrupt function executes on received CAN message ********************/
void /* interrupt */ 
CO_CAN1InterruptHandler(void) {
		/* clear interrupt flag */
	//asm volatile("cli");
	printf("\n******* Interrupt! *******\n");
}

void CANopenManager::start( 
			Os::Task::ParamType priority, 
			Os::Task::ParamType stackSize, 
			Os::Task::ParamType cpuAffinity,
			Os::Task::ParamType taskId
)
{
	printf("entering start()\n");
//*
	{
		Os::TaskString task("CANopenManager");
		Os::Task::Arguments arguments(task, CANopenTaskEntry, this, priority, stackSize, cpuAffinity, taskId);
		Os::Task::Status stat = this->m_coTask.start(arguments);
		FW_ASSERT(stat == Os::Task::OP_OK, stat);
	}
//*/
//*
	{
		Os::TaskString task("TestTask");
		Os::Task::Arguments arguments(task, testTaskEntry, this, priority, stackSize, cpuAffinity, taskId);
		Os::Task::Status stat = this->m_testTask.start(arguments);
		FW_ASSERT(stat == Os::Task::OP_OK, stat);
	}
//*/

	printf("exiting start()\n");
}

void CANopenManager::quitCANopenManager() {
		this->m_quitCANopenManager = true;
}

} //End namespace Components

/* Message logging function */
//*
//void CANopenManager::log_printf(int priority, const char* format, ...) {
void log_printf(int priority, const char* format, ...) {
	va_list ap;

	CO_t *CO = Components::COptr;
	
	va_start(ap, format);
	vsyslog(priority, format, ap);
	va_end(ap);
#if (CO_CONFIG_GTW) & CO_CONFIG_GTW_ASCII_LOG
	if (CO != NULL) {
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
		CO_GTWA_log_print(CO->gtwa, buf);
	}
#endif
}
//*/



