// ======================================================================
// \title  Radio.hpp
// \author chroco
// \brief  hpp file for Radio component implementation class
// ======================================================================

#ifndef Components_Radio_HPP
#define Components_Radio_HPP

#include "Components/Radio/RadioComponentAc.hpp"

namespace Components {

  class Radio :
    public RadioComponentBase
  {

    public:

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
