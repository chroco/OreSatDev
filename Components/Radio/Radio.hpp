// ======================================================================
// \title  Radio.hpp
// \author chroco
// \brief  hpp file for Radio component implementation class
// ======================================================================

#ifndef Components_Radio_HPP
#define Components_Radio_HPP

#include "Components/Radio/RadioComponentAc.hpp"
#include <Drv/Ip/UdpSocket.hpp>
#include <Drv/Udp/UdpComponentImpl.hpp>
//#include <Drv/Udp/test/ut/UdpTester.hpp>
#include <Drv/Ip/TcpServerSocket.hpp>

//#include "Components/Radio/edl_packet.hpp"

#define SEND_DATA_BUFFER_SIZE 1024

namespace Components {

  class Radio :
    public RadioComponentBase
  {
 
    public:

			void start(
				Os::Task::ParamType priority = Os::Task::TASK_DEFAULT,
				Os::Task::ParamType stackSize = Os::Task::TASK_DEFAULT,
				Os::Task::ParamType cpuAffinity = Os::Task::TASK_DEFAULT,
				Os::Task::ParamType taskId = Os::Task::TASK_DEFAULT
			);

      // ----------------------------------------------------------------------
      // Component construction and destruction
      // ----------------------------------------------------------------------

      //! Construct Radio object
      Radio(
          const char* const compName //!< The component name
      );

      //! Destroy Radio object
      ~Radio();

    PRIVATE:
			U8 rate_group_counter;
			
			Os::Task m_udpClient;
			static void udpClientTaskEntry(void *);

			char hostname[20];
			U16 port;
	
      // ----------------------------------------------------------------------
      // Handler implementations for user-defined typed input ports
      // ----------------------------------------------------------------------
 
      //! Handler implementation for udpRecv
      //!
      //! UDP recv port: receives an EDL packet to the UDP driver
      void udpRecv_handler(
          FwIndexType portNum, //!< The port number
          Fw::Buffer& recvBuffer,
          const Drv::RecvStatus& recvStatus
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

  };

}

#endif
