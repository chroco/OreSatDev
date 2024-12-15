// ======================================================================
// \title  Radio.cpp
// \author chroco
// \brief  cpp file for Radio component implementation class
// ======================================================================

#include "Components/Radio/Radio.hpp"
#include "Components/Radio/edl_packet.hpp"
#include "FpConfig.hpp"

namespace Components {

  // ----------------------------------------------------------------------
  // Component construction and destruction
  // ----------------------------------------------------------------------

  Radio ::
    Radio(const char* const compName) :
      RadioComponentBase(compName),
			rate_group_counter(0),
			port(1331)
  {
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
		EdlPacket edlpacket = {};
		U8 *pBytes = edlpacket.getBytes();
		U8 *pData = recvBuffer.getData();

		memcpy(pBytes, pData, edlpacket.getSize());
		this->deallocate_out(0,recvBuffer);
		printf("<");
		edlpacket.printBytes();
		printf("\n");
  }

	void Radio :: udpClientTaskEntry(void *ptr) {
		FW_ASSERT(ptr != nullptr);
		Radio *radio = reinterpret_cast<Radio*>(ptr);

		U8 i = 0;
		for (;;++i) {
			EdlPacket edlpacket = {};
			edlpacket.set_code(i);
			edlpacket.set_tfvn(i);
			edlpacket.set_scid(0xab);
			U8 *pBytes = edlpacket.getBytes();

			Fw::Buffer buffer = radio->allocate_out(0, edlpacket.getSize());
			if (buffer.getSize() < edlpacket.getSize()) {
				FW_ASSERT(0, buffer.getSize(), edlpacket.getSize());
			}

			Fw::SerializeStatus stat = buffer.getSerializeRepr().serialize(pBytes, edlpacket.getSize(), true);
			FW_ASSERT(stat == Fw::SerializeStatus::FW_SERIALIZE_OK);
			
			printf(">");
			edlpacket.printBytes();
			radio->udpSend_out(0,buffer);

			Os::Task::delay(Fw::TimeInterval(1, 0));
		}
	}

  // ----------------------------------------------------------------------
  // Handler implementations for user-defined typed input ports
  // ----------------------------------------------------------------------
 
  void Radio ::
    run_handler(
        FwIndexType portNum,
        U32 context
    )
  {
		EdlPacket edlpacket = {};
		edlpacket.set_code(rate_group_counter);
		edlpacket.set_tfvn(rate_group_counter);
		edlpacket.set_scid(0xab);
		++rate_group_counter;
		U8 *pBytes = edlpacket.getBytes();

		Fw::Buffer buffer = this->allocate_out(0, edlpacket.getSize());
		if (buffer.getSize() < edlpacket.getSize()) {
			FW_ASSERT(0, buffer.getSize(), edlpacket.getSize());
		}

		Fw::SerializeStatus stat = buffer.getSerializeRepr().serialize(pBytes, edlpacket.getSize(), true);
		FW_ASSERT(stat == Fw::SerializeStatus::FW_SERIALIZE_OK);
		
		printf(">");
		edlpacket.printBytes();
		this->udpSend_out(0,buffer);
  }

	void Radio :: start(
		Os::Task::ParamType priority,
		Os::Task::ParamType stackSize,
		Os::Task::ParamType cpuAffinity,
		Os::Task::ParamType taskId
	)
	{
/*
		{
			Os::TaskString task("UDP Client");
			Os::Task::Arguments arguments(task, udpClientTaskEntry, this, priority, stackSize, cpuAffinity, taskId);
			Os::Task::Status stat = this->m_udpClient.start(arguments);
			FW_ASSERT(stat == Os::Task::OP_OK, stat);
		}
//*/
	}


}
