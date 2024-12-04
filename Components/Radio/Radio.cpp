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
      RadioComponentBase(compName)
  {

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

}
