// ======================================================================
// \title  CANopenManager.hpp
// \author chroco
// \brief  hpp file for CANopenManager component implementation class
// ======================================================================

#ifndef Components_CANopenManager_HPP
#define Components_CANopenManager_HPP

#include "Components/CANopenManager/CANopenManagerComponentAc.hpp"

#define _Static_assert static_assert

extern "C" {
#include "CO_error.h"
#include "CO_epoll_interface.h"
//#include "CO_storageLinux.h"
//#include "301/CO_PDO.h"
//#include "301/CO_config.h"
#include "CANopen.h"
#include "OD.h"
}

#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sched.h>
#include <signal.h>
#include <errno.h>
#include <stdarg.h>
#include <syslog.h>
#include <time.h>
#include <sys/epoll.h>
#include <net/if.h>
#include <linux/reboot.h>
#include <sys/reboot.h>

/* Include optional external application functions */
#ifdef CO_USE_APPLICATION
extern "C" {
 #include "CO_application.h"
}
#endif

/* Add trace functionality for recording variables over time */
#if (CO_CONFIG_TRACE) & CO_CONFIG_TRACE_ENABLE
extern "C" {
#include "CO_time_trace.h"
}
#endif

/* Interval of mainline and real-time thread in microseconds */
#ifndef MAIN_THREAD_INTERVAL_US
#define MAIN_THREAD_INTERVAL_US 100000
#endif
#ifndef TMR_THREAD_INTERVAL_US
#define TMR_THREAD_INTERVAL_US 1000
#endif

/* default values for CO_CANopenInit() */

//#define CO_CONFIG_PDO 1
//#define CO_CONFIG_FLAG_CALLBACK_PRE 1

#ifndef NMT_CONTROL
#define NMT_CONTROL                                                                                                    \
    CO_NMT_STARTUP_TO_OPERATIONAL                                                                                      \
    | CO_NMT_ERR_ON_ERR_REG | CO_ERR_REG_GENERIC_ERR | CO_ERR_REG_COMMUNICATION
#endif
#ifndef FIRST_HB_TIME
#define FIRST_HB_TIME 500
#endif
#ifndef SDO_SRV_TIMEOUT_TIME
#define SDO_SRV_TIMEOUT_TIME 1000
#endif
#ifndef SDO_CLI_TIMEOUT_TIME
#define SDO_CLI_TIMEOUT_TIME 500
#endif
#ifndef SDO_CLI_BLOCK
#define SDO_CLI_BLOCK false
#endif
#ifndef OD_STATUS_BITS
#define OD_STATUS_BITS NULL
#endif
/* CANopen gateway enable switch for CO_epoll_processMain() */
#ifndef GATEWAY_ENABLE
#define GATEWAY_ENABLE true
#endif
/* Interval for time stamp message in milliseconds */
#ifndef TIME_STAMP_INTERVAL_MS
#define TIME_STAMP_INTERVAL_MS 10000
#endif

/* Definitions for application specific data storage objects */
#ifndef CO_STORAGE_APPLICATION
#define CO_STORAGE_APPLICATION
#endif
/* Interval for automatic data storage in microseconds */
#ifndef CO_STORAGE_AUTO_INTERVAL
#define CO_STORAGE_AUTO_INTERVAL 60000000
#endif

#define DBG_CO_NEW_SUCCESS			"(%s) Success: %s%d", __func__
#define DBG_CAN_OPEN_SUCCESS		"(%s) Success"

/*
#define LOG_EMERGENCY     0
#define LOG_ALERT         1
#define LOG_CRITICAL      2
#define LOG_ERROR         3
#define LOG_WARNING       4
#define LOG_NOTICE        5
#define LOG_INFORMATIONAL 6
//*/

#define C3_NODE_ID									0x01
#define C3_CAN_IFACE_NAME						"can0\0"
#define C3_CAN_IFACE_NAME_LENGTH		50
#define C3_LOGFILE_NAME							"/home/chroco/oresat/oresat-fprime/oresat-dev/build-fprime-automatic-native/bin/Linux/OreSatDev"
#define C3_LOGFILE_NAME_LENGTH			100

namespace Components {
 
	/* Data block for mainline data, which can be stored to non-volatile memory */
	typedef struct {
			/* Pending CAN bit rate, can be set by argument or LSS slave. */
			uint16_t pendingBitRate;
			/* Pending CANopen NodeId, can be set by argument or LSS slave. */
			uint8_t pendingNodeId;
	} mainlineStorage_t;

	typedef struct lband{
		uint32_t *rx_bytes;
		uint32_t *rx_packets;
		uint8_t *rssi;
		bool *synth_lock;
		uint8_t *synth_relock_count;
	} lband_t;

	typedef struct uhf{
		uint32_t *rx_bytes;
		uint32_t *rx_packets;
		int8_t *rssi;
	} uhf_t; 

	class CANopenManager :
    public CANopenManagerComponentBase
  {

    public:

      // ----------------------------------------------------------------------
      // Component construction and destruction
      // ----------------------------------------------------------------------

      //! Construct CANopenManager object
      CANopenManager(
          const char* const compName //!< The component name
      );

      //! Destroy CANopenManager object
      ~CANopenManager();
     
      void start(
         Os::Task::ParamType priority = Os::Task::TASK_DEFAULT,
         Os::Task::ParamType stackSize = Os::Task::TASK_DEFAULT,
         Os::Task::ParamType cpuAffinity = Os::Task::TASK_DEFAULT,
         Os::Task::ParamType taskId = Os::Task::TASK_DEFAULT
       );

    PRIVATE:
      bool m_quitCANopenManager;
      bool m_quitTask;

			uint32_t m_loopCounter;
      static void CANopenTaskEntry(void*);
      
			void testThisTrash(); 
			static void testTaskEntry(void*);
      //static void tmrTask_thread(void* ptr);
     
      int CANopenInit();
      int CANopenProcess();
      bool canopennode_is_running(void);
      void canopennode_stop(void);
			sigset_t sigset;
      //Os::Task::ParamType m_co_sdoServerTaskId;

      void quitCANopenManager(void);
      
			static void* rt_thread(void*);
			//void log_printf(int priority, const char* format, ...);

      Os::Task m_coTask;
      Os::Task m_testTask;
     
      CO_t* CO;                 // CANopen object 
			char* CANdevice;// = NULL;      /* CAN device, configurable by arguments. */
			uint8_t m_nodeId;// = NULL;      /* CAN device, configurable by arguments. */
			char *logfile;// = new char[100];
      CO_CANptrSocketCan_t CANptr;             // CAN module address 
      
			uint32_t heapMemoryUsed;
      CO_config_t *config_ptr;
			
			CO_NMT_reset_cmd_t reset;
			CO_ReturnError_t err;

			bool_t rebootEnable = false; /* Configurable by arguments */
			
			pthread_t rt_thread_id;
			int rtPriority;// = -1;

			lband_t lband;
			uhf_t uhf;
			//OD_RAM_t *puhf;
			//OD_RAM_t::x4007_uhf puhf;
			void *puhf;
			/*
      CO_SDOserver_t *SDOserver;
      //void *CANptr;             // CAN module address 
      //uint8_t pendingNodeId;    // read from dip switches or nonvolatile memory, configurable by LSS slave
      //uint8_t activeNodeId;     // Copied from CO_pendingNodeId in the communication reset section
      uint16_t pendingBitRate;  // read from dip switches or nonvolatile memory, configurable by LSS slave
      //*/


      //int startCANopenManager(void);
      // ----------------------------------------------------------------------
      // Handler implementations for commands
      // ----------------------------------------------------------------------

      //! Handler implementation for command TODO
      //!
      //! TODO
      void TODO_cmdHandler(
          FwOpcodeType opCode, //!< The opcode
          U32 cmdSeq //!< The command sequence number
      ) override;

      // ----------------------------------------------------------------------
      // Handler implementations for user-defined typed input ports
      // ----------------------------------------------------------------------

      //! Handler implementation for run
      //!
      //! Port receiving calls from the rate group
      void run_handler(
          FwIndexType portNum, //!< The port number
          U32 context //!< The call order
      ) override;


  };

  typedef struct TaskObject{
    CANopenManager *comPtr;
    size_t sdoTask;
    //Os::Task m_coTask;
  } TaskObject_t;


}

#endif
