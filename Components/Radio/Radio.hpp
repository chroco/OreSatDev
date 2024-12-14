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
#include <atomic>

#define SEND_DATA_BUFFER_SIZE 1024

namespace Components {

	typedef struct {
		// USLP Primary Header (7 octets)
		struct __attribute((packed)) {
			uint16_t transfer_frame_version_number : 4;
			uint16_t space_craft_id : 16;
			uint16_t source_or_destination_id : 1;
			uint16_t virtual_channel_id : 6;
			uint16_t map_id : 4;
			uint16_t end_of_frame_primary_header_flag : 1;
			uint16_t frame_length : 16;
			uint16_t bypass_sequence_control_flag : 1;
			uint16_t protocol_control_command_flag : 1;
			uint16_t reserve_spare_bits : 2;
			uint16_t operation_control_flag : 1;
			uint16_t vc_frame_count_length : 3;
		} primary_header;

		// sequence number
		uint32_t sequence_number;
		
		// USLP data header
		struct __attribute((packed)) {
			uint8_t tfdz : 3;
			uint8_t upid : 5;
		} data_header;

		// Payload (X octets);
		uint8_t code;
		uint16_t *data;

		// HMAC (32 octets)
		uint8_t hmac[32];
		
		// Frame error control field
		uint16_t fecf;
		
	} edlpacket_t;

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
			Os::Task m_udpServer;
			Os::Task m_udpClient;
			static void udpServerTaskEntry(void *);
			static void udpClientTaskEntry(void *);

      Fw::Buffer m_data_buffer;
			
			char hostname[20];
			U16 port;
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
 
      //! Handler implementation for udpRecv
      //!
      //! UDP recv port: receives an EDL packet to the UDP driver
      void udpRecv_handler(
          FwIndexType portNum, //!< The port number
          Fw::Buffer& recvBuffer,
          const Drv::RecvStatus& recvStatus
      ) override;

			void testPacket(void);
  };

}

#endif
