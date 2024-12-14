// ======================================================================
// \title  Radio.cpp
// \author chroco
// \brief  cpp file for Radio component implementation class
// ======================================================================

#include "Components/Radio/Radio.hpp"
#include "FpConfig.hpp"

namespace Components {

  // ----------------------------------------------------------------------
  // Component construction and destruction
  // ----------------------------------------------------------------------

  Radio ::
    Radio(const char* const compName) :
      RadioComponentBase(compName),
			m_data_buffer({}),
			port(1331)
  {
		testPacket();
		strncpy(hostname, "127.0.0.1\0", sizeof(hostname));
	}

  Radio ::
    ~Radio()
  {
  
	}

  // ----------------------------------------------------------------------
  // Handler implementations for commands
  // ----------------------------------------------------------------------

  void Radio ::
    TODO_cmdHandler(
        FwOpcodeType opCode,
        U32 cmdSeq
    )
  {
    // TODO
    this->cmdResponse_out(opCode, cmdSeq, Fw::CmdResponse::OK);
  }
	
	void Radio :: udpServerTaskEntry(void *) {
			
	}
	
	// ----------------------------------------------------------------------
  // Handler implementations for user-defined typed input ports
  // ----------------------------------------------------------------------
 
  void Radio ::
    udpRecv_handler(
        FwIndexType portNum,
        Fw::Buffer& recvBuffer,
        const Drv::RecvStatus& recvStatus
    )
  {
    U8 data[80];
		U8 *pdata = recvBuffer.getData();
		memcpy(data, pdata, sizeof(data));
		this->deallocate_out(0,recvBuffer);
		printf("data[0]: %d ", data[0]);
  }


	void Radio :: udpClientTaskEntry(void *ptr) {
		FW_ASSERT(ptr != nullptr);
		Radio *radio = reinterpret_cast<Radio*>(ptr);

		U8 i = 0;
		for (;;++i) {
			U8 data[80] = {0};
			data[0] = i;

			Fw::Buffer buffer = radio->allocate_out(0, sizeof(data));
			if (buffer.getSize() < sizeof(data)) {
				FW_ASSERT(0, buffer.getSize(), sizeof(data));
			}

			Fw::SerializeStatus stat = buffer.getSerializeRepr().serialize(data, sizeof(data), true);
			FW_ASSERT(stat == Fw::SerializeStatus::FW_SERIALIZE_OK);
			
			printf("udpSend_out ");
			radio->udpSend_out(0,buffer);
			Os::Task::delay(Fw::TimeInterval(1, 0));
		}
	}

	void Radio :: testPacket(void) {
		edlpacket_t packet = {0};	
		
		printf("Packet size: %lu\n", sizeof(packet));
		printf("Primary header size: %lu\n", sizeof(packet.primary_header));
		printf("Data header size: %lu\n", sizeof(packet.data_header));

	}

	void Radio :: start(
		Os::Task::ParamType priority,
		Os::Task::ParamType stackSize,
		Os::Task::ParamType cpuAffinity,
		Os::Task::ParamType taskId
	)
	{
//*
		{
			Os::TaskString task("UDP Client");
			Os::Task::Arguments arguments(task, udpClientTaskEntry, this, priority, stackSize, cpuAffinity, taskId);
			Os::Task::Status stat = this->m_udpClient.start(arguments);
			FW_ASSERT(stat == Os::Task::OP_OK, stat);
		}
//*/
/*
		{
			Os::TaskString task("UDP Server");
			Os::Task::Arguments arguments(task, udpServerTaskEntry, this, priority, stackSize, cpuAffinity, taskId);
			Os::Task::Status stat = this->m_udpServer.start(arguments);
			FW_ASSERT(stat == Os::Task::OP_OK, stat);
		}
//*/
	}


}
