####
# F prime CMakeLists.txt:
#
# SOURCE_FILES: combined list of source and autocoding files
# MOD_DEPS: (optional) module dependencies
####

set(ORESAT_ROOT "${CMAKE_CURRENT_LIST_DIR}/../../../..")
set(DRV_SRC     "${ORESAT_ROOT}/CANopenLinux")
set(CANOPEN_SRC "${ORESAT_ROOT}/CANopenLinux/CANopenNode")

include_directories(
    ${DRV_SRC}
    ${CANOPEN_SRC}
    ../../build-fprime-automatic-native/gen
)

set(SOURCE_FILES
    ${DRV_SRC}/CO_error.c
    ${CANOPEN_SRC}/301/CO_ODinterface.c
    ${CANOPEN_SRC}/301/CO_NMT_Heartbeat.c
    ${CANOPEN_SRC}/301/CO_HBconsumer.c
    ${CANOPEN_SRC}/301/CO_Emergency.c
    ${CANOPEN_SRC}/301/CO_SDOserver.c
    ${CANOPEN_SRC}/301/CO_TIME.c
    ${CANOPEN_SRC}/301/CO_SYNC.c
    ${CANOPEN_SRC}/301/CO_PDO.c
    ${CANOPEN_SRC}/303/CO_LEDs.c
    ${CANOPEN_SRC}/305/CO_LSSslave.c
    ${CANOPEN_SRC}/storage/CO_storage.c
    ${CANOPEN_SRC}/CANopen.c
    ${DRV_SRC}/CO_driver.c
    ../../build-fprime-automatic-native/gen/OD.c
)

set(SOURCE_FILES
  "${CMAKE_CURRENT_LIST_DIR}/instances.fpp"
  # Note: Uncomment when using Svc:TlmPacketizer
  #"${CMAKE_CURRENT_LIST_DIR}/OreSatDevPackets.xml"
  "${CMAKE_CURRENT_LIST_DIR}/topology.fpp"
  "${CMAKE_CURRENT_LIST_DIR}/OreSatDevTopology.cpp"
)
set(MOD_DEPS
  Fw/Logger
  Svc/PosixTime
  # Communication Implementations
  Drv/Udp
  Drv/TcpServer
)

register_fprime_module()
