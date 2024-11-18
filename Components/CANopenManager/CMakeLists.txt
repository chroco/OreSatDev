####
# FPrime CMakeLists.txt:
#
# SOURCE_FILES: combined list of source and autocoding files
# MOD_DEPS: (optional) module dependencies
# UT_SOURCE_FILES: list of source files for unit tests
#
# More information in the F´ CMake API documentation:
# https://nasa.github.io/fprime/UsersGuide/api/cmake/API.html
#
####

include(CMakePrintHelpers)

set(ORESAT_ROOT "${CMAKE_CURRENT_LIST_DIR}/../../../..")
set(DRV_SRC     "${ORESAT_ROOT}/CANopenLinux")
set(CANOPEN_SRC "${ORESAT_ROOT}/CANopenLinux/CANopenNode")

set(CARD "c3")
find_package (Python3 COMPONENTS Interpreter)
execute_process(
  COMMAND "${oresat_root}/oresat-venv/bin/activate; 
  bash -c oresat-configs fw-files ${CARD} -d gen "
)

set(SOURCE_FILES
  "${CMAKE_CURRENT_LIST_DIR}/CANopenManager.fpp"
  "${CMAKE_CURRENT_LIST_DIR}/CANopenManager.cpp"
  "${DRV_SRC}/CO_driver_blank.c"
  "${DRV_SRC}/CO_storageBlank.c"
  "${CANOPEN_SRC}/301/CO_ODinterface.c"
  "${CANOPEN_SRC}/301/CO_NMT_Heartbeat.c"
  "${CANOPEN_SRC}/301/CO_HBconsumer.c"
  "${CANOPEN_SRC}/301/CO_Emergency.c"
  "${CANOPEN_SRC}/301/CO_SDOserver.c"
  "${CANOPEN_SRC}/301/CO_TIME.c"
  "${CANOPEN_SRC}/301/CO_SYNC.c"
  "${CANOPEN_SRC}/301/CO_PDO.c"
  "${CANOPEN_SRC}/303/CO_LEDs.c"
  "${CANOPEN_SRC}/305/CO_LSSslave.c"
  "${CANOPEN_SRC}/storage/CO_storage.c"
  "${CANOPEN_SRC}/CANopen.c"
  "../../build-fprime-automatic-native/gen/OD.c"
  #"${DRV_SRC}/main_blank.c"
)

#  set(SOURCE_FILES
#   "${CMAKE_CURRENT_LIST_DIR}/CANopenManager.fpp"
#   "${CMAKE_CURRENT_LIST_DIR}/CANopenManager.cpp"
#   "${DRV_SRC}/CO_driver.c"
#   "${DRV_SRC}/CO_error.c"
#   "${DRV_SRC}/CO_epoll_interface.c"
#   "${DRV_SRC}/CO_storageLinux.c"  
#   "${CANOPEN_SRC}/301/CO_ODinterface.c" 
#   "${CANOPEN_SRC}/301/CO_NMT_Heartbeat.c" 
#   "${CANOPEN_SRC}/301/CO_HBconsumer.c" 
#   "${CANOPEN_SRC}/301/CO_Emergency.c" 
#   "${CANOPEN_SRC}/301/CO_SDOserver.c" 
#   "${CANOPEN_SRC}/301/CO_SDOclient.c" 
#   "${CANOPEN_SRC}/301/CO_TIME.c" 
#   "${CANOPEN_SRC}/301/CO_SYNC.c" 
#   "${CANOPEN_SRC}/301/CO_PDO.c" 
#   "${CANOPEN_SRC}/301/crc16-ccitt.c" 
#   "${CANOPEN_SRC}/301/CO_fifo.c" 
#   "${CANOPEN_SRC}/303/CO_LEDs.c" 
#   "${CANOPEN_SRC}/304/CO_GFC.c" 
#   "${CANOPEN_SRC}/304/CO_SRDO.c" 
#   "${CANOPEN_SRC}/305/CO_LSSslave.c" 
#   "${CANOPEN_SRC}/305/CO_LSSmaster.c" 
#   "${CANOPEN_SRC}/309/CO_gateway_ascii.c" 
#   "${CANOPEN_SRC}/storage/CO_storage.c" 
#   "${CANOPEN_SRC}/extra/CO_trace.c" 
#   "${CANOPEN_SRC}/CANopen.c" 
#   "../../build-fprime-automatic-native/gen/OD.c"
# )

add_compile_options(
  #  -std=gnu99
    -g
)
#set(INCLUDE_DIR
#  "${DRV_SRC}/"
#  "${CANOPEN_SRC}/"
#  "../../build-fprime-automatic-native/gen/"
#)

#target_include_directories(#OreSatDev
include_directories(#OreSatDev
  #  PRIVATE
    ${DRV_SRC}
    ${CANOPEN_SRC}
    ../../build-fprime-automatic-native/gen
    #src/include/
    #${COMMON_SRC}/include/
    #${COMMON_SRC}/canopennode_v4/
)

##target_sources(Component/CANopenManager
## PRIVATE
#  ${DRV_SRC}/CO_driver.c 
#  ${DRV_SRC}/CO_error.c 
#  ${DRV_SRC}/CO_epoll_interface.c 
#  ${DRV_SRC}/CO_storageLinux.c 
#  ${CANOPEN_SRC}/301/CO_ODinterface.c 
#  ${CANOPEN_SRC}/301/CO_NMT_Heartbeat.c 
#  ${CANOPEN_SRC}/301/CO_HBconsumer.c 
#  ${CANOPEN_SRC}/301/CO_Emergency.c 
#  ${CANOPEN_SRC}/301/CO_SDOserver.c 
#  ${CANOPEN_SRC}/301/CO_SDOclient.c 
#  ${CANOPEN_SRC}/301/CO_TIME.c 
#  ${CANOPEN_SRC}/301/CO_SYNC.c 
#  ${CANOPEN_SRC}/301/CO_PDO.c 
#  ${CANOPEN_SRC}/301/crc16-ccitt.c 
#  ${CANOPEN_SRC}/301/CO_fifo.c 
#  ${CANOPEN_SRC}/303/CO_LEDs.c 
#  ${CANOPEN_SRC}/304/CO_GFC.c 
#  ${CANOPEN_SRC}/304/CO_SRDO.c 
#  ${CANOPEN_SRC}/305/CO_LSSslave.c 
#  ${CANOPEN_SRC}/305/CO_LSSmaster.c 
#  ${CANOPEN_SRC}/309/CO_gateway_ascii.c 
#  ${CANOPEN_SRC}/storage/CO_storage.c 
#  ${CANOPEN_SRC}/extra/CO_trace.c 
#  ${CANOPEN_SRC}/CANopen.c 
#  build-fprime-automatic-native/gen/OD.c
#)

# Uncomment and add any modules that this component depends on, else
# they might not be available when cmake tries to build this component.
#
# Module names are derived from the path from the nearest project/library/framework
# root when not specifically overridden by the developer. i.e. The module defined by
# `Ref/SignalGen/CMakeLists.txt` will be named `Ref_SignalGen`.  `Ref/SignalGen`
# is an acceptable alternative and will be internally converted to `Ref_SignalGen`.
#
# set(MOD_DEPS
#   MyPackage_MyOtherModule
# )

register_fprime_module()
