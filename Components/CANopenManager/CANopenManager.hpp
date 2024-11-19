// ======================================================================
// \title  CANopenManager.hpp
// \author chroco
// \brief  hpp file for CANopenManager component implementation class
// ======================================================================

#ifndef Components_CANopenManager_HPP
#define Components_CANopenManager_HPP

#include "Components/CANopenManager/CANopenManagerComponentAc.hpp"

extern "C" {
#include "CO_error.h"
#include "CO_epoll_interface.h"
#include "CO_storageLinux.h"
#include "CANopen.h"
#include "OD.h"
}

#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
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

//#define log_printf(macropar_message, ...) printf(macropar_message, ##__VA_ARGS__)

/* default values for CO_CANopenInit() */
#define NMT_CONTROL                                                                                                    \
    CO_NMT_STARTUP_TO_OPERATIONAL                                                                                      \
    | CO_NMT_ERR_ON_ERR_REG | CO_ERR_REG_GENERIC_ERR | CO_ERR_REG_COMMUNICATION
#define FIRST_HB_TIME        500
#define SDO_SRV_TIMEOUT_TIME 1000
#define SDO_CLI_TIMEOUT_TIME 500
#define SDO_CLI_BLOCK        false
#define OD_STATUS_BITS       NULL

namespace Components {

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

      void startTask(
          void
//          NATIVE_INT_TYPE priority, NATIVE_INT_TYPE stackSize, NATIVE_INT_TYPE cpuAffinity = -1
      );
      //*
      void start(
      //    void
      /*
          Os::Task::ParamType,
          Os::Task::ParamType,
          Os::Task::TASK_DEFAULT, // Default CPU
          Os::Task::ParamType
       //*/
         Os::Task::ParamType priority = Os::Task::TASK_DEFAULT,
         Os::Task::ParamType stackSize = Os::Task::TASK_DEFAULT,
         Os::Task::ParamType cpuAffinity = Os::Task::TASK_DEFAULT,
         Os::Task::ParamType taskId = Os::Task::TASK_DEFAULT
       /*
         static_cast<Os::Task::ParamType>(Priorities::OreSatDev_coMgr),
         static_cast<Os::Task::ParamType>(StackSizes::OreSatDev_coMgr),
         Os::Task::TASK_DEFAULT, // Default CPU
         static_cast<Os::Task::ParamType>(TaskIds::OreSatDev_coMgr)
       //*/
      );
      //*/

    PRIVATE:
      bool m_quitCANopenManager;
      bool m_quitTask;

      int canopennode_init(uint16_t, uint8_t);
      static void CANopenTaskEntry(void* ptr);
      static void testTaskEntry(void* ptr);
      static void tmrTask_thread(void* ptr);
     
      bool canopennode_is_running(void);
      void canopennode_stop(void);

      static void co_sdo_server_thread(void *);
      static void co_main_thread(void *);
      static void co_rt_thread(void *);
      
      Os::Task m_co_sdoServerTask[OD_CNT_SDO_SRV];
      Os::Task m_co_mainTask;
      Os::Task m_co_rtTask;

      Os::Task::ParamType m_co_sdoServerTaskId;

      static void process_cb(void *ptr);

      void quitCANopenManager(void);
      
      uint16_t m_loopCounter;

      Os::Task m_coTask;
      Os::Task m_timerTask;
      CO_SDOserver_t *SDOserver;
      CO_t* CO;                 // CANopen object 
      CO_NMT_reset_cmd_t reset;
      uint32_t heapMemoryUsed;
      CO_CANptrSocketCan_t *CANptr;             // CAN module address 
      //uint8_t pendingNodeId;    // read from dip switches or nonvolatile memory, configurable by LSS slave
      //uint8_t activeNodeId;     // Copied from CO_pendingNodeId in the communication reset section
      uint16_t pendingBitRate;  // read from dip switches or nonvolatile memory, configurable by LSS slave
      CO_config_t *config_ptr;
      
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
