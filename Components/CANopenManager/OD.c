#define OD_DEFINITION
#include "301/CO_ODinterface.h"
#include "OD.h"

#if CO_VERSION_MAJOR < 4
#error This file is only comatible with CANopenNode v4 and above
#endif

OD_ATTR_RAM OD_RAM_t OD_RAM = {
    .x1000_device_type = 0x0,
    .x1001_error_register = 0x0,
    .x1003_predefined_error_field_sub0 = 8,
    .x1003_predefined_error_field = {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
    .x1005_cob_id_sync = 0x80,
    .x1006_communication_cycle_period = 0x0,
    .x1014_cob_id_emergency_message = 0x80,
    .x1015_inhibit_time_emcy = 0x0,
    .x1016_consumer_heartbeat_time_sub0 = 84,
    .x1016_consumer_heartbeat_time = {0x3E8, 0x3E8, 0x3E8, 0x3E8, 0x3E8, 0x3E8, 0x3E8, 0x3E8, 0x3E8, 0x3E8, 0x3E8, 0x3E8, 0x3E8, 0x3E8, 0x3E8, 0x3E8, 0x3E8, 0x3E8},
    .x1017_producer_heartbeat_time = 0x3E8,
    .x1018_identity = {
        .highest_index_supported = 0x4,
        .vendor_id = 0x0,
        .product_code = 0x0,
        .revision_number = 0x0,
        .serial_number = 0x0,
    },
    .x1019_synchronous_counter_overflow_value = 0x0,
    .x1023_os_command = {
        .highest_index_supported = 0x3,
        .command = {0x00},
        .status = 0x0,
        .reply = {0x00},
    },
    .x1200_sdo_server_parameter = {
        .highest_index_supported = 0x3,
        .cob_id_client_to_server = 0x80000000,
        .cob_id_server_to_client = 0x80000000,
        .node_id_od_sdo_client = 0x1,
    },
    .x1280_sdo_client_parameter = {
        .highest_index_supported = 0x3,
        .cob_id_client_to_server = 0x80000000,
        .cob_id_server_to_client = 0x80000000,
        .node_id_of_sdo_server = 0x1,
    },
    .x1400_rpdo_1_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x184,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x1401_rpdo_2_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x284,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x1402_rpdo_3_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x384,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x1403_rpdo_4_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x484,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x1404_rpdo_5_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x185,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x1405_rpdo_6_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x285,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x1406_rpdo_7_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x385,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x1407_rpdo_8_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x485,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x1408_rpdo_9_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x186,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x1409_rpdo_10_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x286,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x140A_rpdo_11_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x18C,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x140B_rpdo_12_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x28C,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x140C_rpdo_13_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x38C,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x140D_rpdo_14_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x48C,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x140E_rpdo_15_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x190,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x140F_rpdo_16_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x290,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x1410_rpdo_17_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x390,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x1411_rpdo_18_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x490,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x1412_rpdo_19_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x194,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x1413_rpdo_20_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x294,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x1414_rpdo_21_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x394,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x1415_rpdo_22_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x494,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x1416_rpdo_23_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x198,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x1417_rpdo_24_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x298,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x1418_rpdo_25_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x398,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x1419_rpdo_26_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x498,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x141A_rpdo_27_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x19C,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x141B_rpdo_28_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x29C,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x141C_rpdo_29_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x39C,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x141D_rpdo_30_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x49C,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x141E_rpdo_31_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x1A0,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x141F_rpdo_32_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x2A0,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x1420_rpdo_33_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x3A0,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x1421_rpdo_34_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x4A0,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x1422_rpdo_35_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x1AC,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x1423_rpdo_36_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x2AC,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x1424_rpdo_37_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x3AC,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x1425_rpdo_38_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x4AC,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x1426_rpdo_39_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x1B4,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x1427_rpdo_40_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x2B4,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x1428_rpdo_41_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x3B4,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x1429_rpdo_42_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x4B4,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x142A_rpdo_43_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x1B5,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x142B_rpdo_44_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x2B5,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x142C_rpdo_45_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x3B5,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x142D_rpdo_46_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x4B7,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x142E_rpdo_47_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x1B8,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x142F_rpdo_48_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x2B8,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x1430_rpdo_49_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x3B8,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x1431_rpdo_50_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x4B8,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x1432_rpdo_51_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x1B9,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x1433_rpdo_52_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x2B9,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x1434_rpdo_53_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x3B9,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x1435_rpdo_54_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x4B9,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x1436_rpdo_55_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x1BA,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x1437_rpdo_56_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x2BA,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x1438_rpdo_57_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x1BC,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x1439_rpdo_58_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x2BC,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x143A_rpdo_59_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x3BC,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x143B_rpdo_60_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x4BC,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x143C_rpdo_61_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x1C0,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x143D_rpdo_62_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x2C0,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x143E_rpdo_63_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x3C0,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x143F_rpdo_64_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x4C0,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x1440_rpdo_65_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x1C4,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x1441_rpdo_66_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x2C4,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x1442_rpdo_67_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x3C4,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x1443_rpdo_68_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x4C4,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x1444_rpdo_69_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x1C8,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x1445_rpdo_70_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x2C8,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x1446_rpdo_71_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x3C8,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x1447_rpdo_72_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x4C8,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x1448_rpdo_73_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x1CC,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x1449_rpdo_74_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x2CC,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x144A_rpdo_75_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x3CC,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x144B_rpdo_76_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x1D0,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x144C_rpdo_77_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x2D0,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x144D_rpdo_78_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x3D0,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x144E_rpdo_79_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x1D4,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x144F_rpdo_80_communication_parameters = {
        .highest_index_supported = 0x5,
        .cob_id = 0x2D4,
        .transmission_type = 0xFE,
        .event_timer = 0x0,
    },
    .x1600_rpdo_1_mapping_parameters = {
        .highest_index_supported = 0x4,
        .mapping_object_1 = 0x50040110,
        .mapping_object_2 = 0x50040210,
        .mapping_object_3 = 0x50040310,
        .mapping_object_4 = 0x50040410,
    },
    .x1601_rpdo_2_mapping_parameters = {
        .highest_index_supported = 0x3,
        .mapping_object_1 = 0x50040510,
        .mapping_object_2 = 0x50040610,
        .mapping_object_3 = 0x50040710,
    },
    .x1602_rpdo_3_mapping_parameters = {
        .highest_index_supported = 0x4,
        .mapping_object_1 = 0x50040810,
        .mapping_object_2 = 0x50040910,
        .mapping_object_3 = 0x50040A10,
        .mapping_object_4 = 0x50040B10,
    },
    .x1603_rpdo_4_mapping_parameters = {
        .highest_index_supported = 0x4,
        .mapping_object_1 = 0x50040C08,
        .mapping_object_2 = 0x50040D08,
        .mapping_object_3 = 0x50040E08,
        .mapping_object_4 = 0x50040F08,
    },
    .x1604_rpdo_5_mapping_parameters = {
        .highest_index_supported = 0x4,
        .mapping_object_1 = 0x50041010,
        .mapping_object_2 = 0x50041110,
        .mapping_object_3 = 0x50041208,
        .mapping_object_4 = 0x50041308,
    },
    .x1605_rpdo_6_mapping_parameters = {
        .highest_index_supported = 0x4,
        .mapping_object_1 = 0x50041410,
        .mapping_object_2 = 0x50041510,
        .mapping_object_3 = 0x50041610,
        .mapping_object_4 = 0x50041710,
    },
    .x1606_rpdo_7_mapping_parameters = {
        .highest_index_supported = 0x3,
        .mapping_object_1 = 0x50041810,
        .mapping_object_2 = 0x50041910,
        .mapping_object_3 = 0x50041A10,
    },
    .x1607_rpdo_8_mapping_parameters = {
        .highest_index_supported = 0x4,
        .mapping_object_1 = 0x50041B10,
        .mapping_object_2 = 0x50041C10,
        .mapping_object_3 = 0x50041D10,
        .mapping_object_4 = 0x50041E10,
    },
    .x1608_rpdo_9_mapping_parameters = {
        .highest_index_supported = 0x4,
        .mapping_object_1 = 0x50041F08,
        .mapping_object_2 = 0x50042008,
        .mapping_object_3 = 0x50042108,
        .mapping_object_4 = 0x50042208,
    },
    .x1609_rpdo_10_mapping_parameters = {
        .highest_index_supported = 0x4,
        .mapping_object_1 = 0x50042310,
        .mapping_object_2 = 0x50042410,
        .mapping_object_3 = 0x50042508,
        .mapping_object_4 = 0x50042608,
    },
    .x160A_rpdo_11_mapping_parameters = {
        .highest_index_supported = 0x4,
        .mapping_object_1 = 0x500C0110,
        .mapping_object_2 = 0x500C0210,
        .mapping_object_3 = 0x500C0310,
        .mapping_object_4 = 0x500C0410,
    },
    .x160B_rpdo_12_mapping_parameters = {
        .highest_index_supported = 0x4,
        .mapping_object_1 = 0x500C0510,
        .mapping_object_2 = 0x500C0610,
        .mapping_object_3 = 0x500C0710,
        .mapping_object_4 = 0x500C0810,
    },
    .x160C_rpdo_13_mapping_parameters = {
        .highest_index_supported = 0x2,
        .mapping_object_1 = 0x500C0910,
        .mapping_object_2 = 0x500C0A10,
    },
    .x160D_rpdo_14_mapping_parameters = {
        .highest_index_supported = 0x6,
        .mapping_object_1 = 0x500C0B08,
        .mapping_object_2 = 0x500C0C08,
        .mapping_object_3 = 0x500C0D08,
        .mapping_object_4 = 0x500C0E08,
        .mapping_object_5 = 0x500C0F08,
        .mapping_object_6 = 0x500C1008,
    },
    .x160E_rpdo_15_mapping_parameters = {
        .highest_index_supported = 0x4,
        .mapping_object_1 = 0x50100110,
        .mapping_object_2 = 0x50100210,
        .mapping_object_3 = 0x50100310,
        .mapping_object_4 = 0x50100410,
    },
    .x160F_rpdo_16_mapping_parameters = {
        .highest_index_supported = 0x4,
        .mapping_object_1 = 0x50100510,
        .mapping_object_2 = 0x50100610,
        .mapping_object_3 = 0x50100710,
        .mapping_object_4 = 0x50100810,
    },
    .x1610_rpdo_17_mapping_parameters = {
        .highest_index_supported = 0x2,
        .mapping_object_1 = 0x50100910,
        .mapping_object_2 = 0x50100A10,
    },
    .x1611_rpdo_18_mapping_parameters = {
        .highest_index_supported = 0x6,
        .mapping_object_1 = 0x50100B08,
        .mapping_object_2 = 0x50100C08,
        .mapping_object_3 = 0x50100D08,
        .mapping_object_4 = 0x50100E08,
        .mapping_object_5 = 0x50100F08,
        .mapping_object_6 = 0x50101008,
    },
    .x1612_rpdo_19_mapping_parameters = {
        .highest_index_supported = 0x4,
        .mapping_object_1 = 0x50140110,
        .mapping_object_2 = 0x50140210,
        .mapping_object_3 = 0x50140310,
        .mapping_object_4 = 0x50140410,
    },
    .x1613_rpdo_20_mapping_parameters = {
        .highest_index_supported = 0x4,
        .mapping_object_1 = 0x50140510,
        .mapping_object_2 = 0x50140610,
        .mapping_object_3 = 0x50140710,
        .mapping_object_4 = 0x50140810,
    },
    .x1614_rpdo_21_mapping_parameters = {
        .highest_index_supported = 0x2,
        .mapping_object_1 = 0x50140910,
        .mapping_object_2 = 0x50140A10,
    },
    .x1615_rpdo_22_mapping_parameters = {
        .highest_index_supported = 0x6,
        .mapping_object_1 = 0x50140B08,
        .mapping_object_2 = 0x50140C08,
        .mapping_object_3 = 0x50140D08,
        .mapping_object_4 = 0x50140E08,
        .mapping_object_5 = 0x50140F08,
        .mapping_object_6 = 0x50141008,
    },
    .x1616_rpdo_23_mapping_parameters = {
        .highest_index_supported = 0x4,
        .mapping_object_1 = 0x50180110,
        .mapping_object_2 = 0x50180210,
        .mapping_object_3 = 0x50180310,
        .mapping_object_4 = 0x50180410,
    },
    .x1617_rpdo_24_mapping_parameters = {
        .highest_index_supported = 0x4,
        .mapping_object_1 = 0x50180510,
        .mapping_object_2 = 0x50180610,
        .mapping_object_3 = 0x50180710,
        .mapping_object_4 = 0x50180810,
    },
    .x1618_rpdo_25_mapping_parameters = {
        .highest_index_supported = 0x2,
        .mapping_object_1 = 0x50180910,
        .mapping_object_2 = 0x50180A10,
    },
    .x1619_rpdo_26_mapping_parameters = {
        .highest_index_supported = 0x6,
        .mapping_object_1 = 0x50180B08,
        .mapping_object_2 = 0x50180C08,
        .mapping_object_3 = 0x50180D08,
        .mapping_object_4 = 0x50180E08,
        .mapping_object_5 = 0x50180F08,
        .mapping_object_6 = 0x50181008,
    },
    .x161A_rpdo_27_mapping_parameters = {
        .highest_index_supported = 0x4,
        .mapping_object_1 = 0x501C0110,
        .mapping_object_2 = 0x501C0210,
        .mapping_object_3 = 0x501C0310,
        .mapping_object_4 = 0x501C0410,
    },
    .x161B_rpdo_28_mapping_parameters = {
        .highest_index_supported = 0x4,
        .mapping_object_1 = 0x501C0510,
        .mapping_object_2 = 0x501C0610,
        .mapping_object_3 = 0x501C0710,
        .mapping_object_4 = 0x501C0810,
    },
    .x161C_rpdo_29_mapping_parameters = {
        .highest_index_supported = 0x2,
        .mapping_object_1 = 0x501C0910,
        .mapping_object_2 = 0x501C0A10,
    },
    .x161D_rpdo_30_mapping_parameters = {
        .highest_index_supported = 0x6,
        .mapping_object_1 = 0x501C0B08,
        .mapping_object_2 = 0x501C0C08,
        .mapping_object_3 = 0x501C0D08,
        .mapping_object_4 = 0x501C0E08,
        .mapping_object_5 = 0x501C0F08,
        .mapping_object_6 = 0x501C1008,
    },
    .x161E_rpdo_31_mapping_parameters = {
        .highest_index_supported = 0x4,
        .mapping_object_1 = 0x50200110,
        .mapping_object_2 = 0x50200210,
        .mapping_object_3 = 0x50200310,
        .mapping_object_4 = 0x50200410,
    },
    .x161F_rpdo_32_mapping_parameters = {
        .highest_index_supported = 0x4,
        .mapping_object_1 = 0x50200510,
        .mapping_object_2 = 0x50200610,
        .mapping_object_3 = 0x50200710,
        .mapping_object_4 = 0x50200810,
    },
    .x1620_rpdo_33_mapping_parameters = {
        .highest_index_supported = 0x2,
        .mapping_object_1 = 0x50200910,
        .mapping_object_2 = 0x50200A10,
    },
    .x1621_rpdo_34_mapping_parameters = {
        .highest_index_supported = 0x6,
        .mapping_object_1 = 0x50200B08,
        .mapping_object_2 = 0x50200C08,
        .mapping_object_3 = 0x50200D08,
        .mapping_object_4 = 0x50200E08,
        .mapping_object_5 = 0x50200F08,
        .mapping_object_6 = 0x50201008,
    },
    .x1622_rpdo_35_mapping_parameters = {
        .highest_index_supported = 0x6,
        .mapping_object_1 = 0x502C0108,
        .mapping_object_2 = 0x502C0208,
        .mapping_object_3 = 0x502C0308,
        .mapping_object_4 = 0x502C0408,
        .mapping_object_5 = 0x502C0508,
        .mapping_object_6 = 0x502C0608,
    },
    .x1623_rpdo_36_mapping_parameters = {
        .highest_index_supported = 0x2,
        .mapping_object_1 = 0x502C0708,
        .mapping_object_2 = 0x502C0808,
    },
    .x1624_rpdo_37_mapping_parameters = {
        .highest_index_supported = 0x4,
        .mapping_object_1 = 0x502C0908,
        .mapping_object_2 = 0x502C0A10,
        .mapping_object_3 = 0x502C0B10,
        .mapping_object_4 = 0x502C0C10,
    },
    .x1625_rpdo_38_mapping_parameters = {
        .highest_index_supported = 0x1,
        .mapping_object_1 = 0x502C0D20,
    },
    .x1626_rpdo_39_mapping_parameters = {
        .highest_index_supported = 0x6,
        .mapping_object_1 = 0x50340108,
        .mapping_object_2 = 0x50340208,
        .mapping_object_3 = 0x50340308,
        .mapping_object_4 = 0x50340408,
        .mapping_object_5 = 0x50340508,
        .mapping_object_6 = 0x50340608,
    },
    .x1627_rpdo_40_mapping_parameters = {
        .highest_index_supported = 0x2,
        .mapping_object_1 = 0x50340708,
        .mapping_object_2 = 0x50340808,
    },
    .x1628_rpdo_41_mapping_parameters = {
        .highest_index_supported = 0x1,
        .mapping_object_1 = 0x50340920,
    },
    .x1629_rpdo_42_mapping_parameters = {
        .highest_index_supported = 0x2,
        .mapping_object_1 = 0x50340A10,
        .mapping_object_2 = 0x50340B10,
    },
    .x162A_rpdo_43_mapping_parameters = {
        .highest_index_supported = 0x2,
        .mapping_object_1 = 0x50340C10,
        .mapping_object_2 = 0x50340D10,
    },
    .x162B_rpdo_44_mapping_parameters = {
        .highest_index_supported = 0x2,
        .mapping_object_1 = 0x50340E10,
        .mapping_object_2 = 0x50340F10,
    },
    .x162C_rpdo_45_mapping_parameters = {
        .highest_index_supported = 0x4,
        .mapping_object_1 = 0x50341008,
        .mapping_object_2 = 0x50341108,
        .mapping_object_3 = 0x50341208,
        .mapping_object_4 = 0x50341308,
    },
    .x162D_rpdo_46_mapping_parameters = {
        .highest_index_supported = 0x1,
        .mapping_object_1 = 0x50341440,
    },
    .x162E_rpdo_47_mapping_parameters = {
        .highest_index_supported = 0x3,
        .mapping_object_1 = 0x50380110,
        .mapping_object_2 = 0x50380210,
        .mapping_object_3 = 0x50380310,
    },
    .x162F_rpdo_48_mapping_parameters = {
        .highest_index_supported = 0x3,
        .mapping_object_1 = 0x50380410,
        .mapping_object_2 = 0x50380510,
        .mapping_object_3 = 0x50380610,
    },
    .x1630_rpdo_49_mapping_parameters = {
        .highest_index_supported = 0x1,
        .mapping_object_1 = 0x50380708,
    },
    .x1631_rpdo_50_mapping_parameters = {
        .highest_index_supported = 0x3,
        .mapping_object_1 = 0x50380810,
        .mapping_object_2 = 0x50380910,
        .mapping_object_3 = 0x50380A10,
    },
    .x1632_rpdo_51_mapping_parameters = {
        .highest_index_supported = 0x3,
        .mapping_object_1 = 0x50380B10,
        .mapping_object_2 = 0x50380C10,
        .mapping_object_3 = 0x50380D10,
    },
    .x1633_rpdo_52_mapping_parameters = {
        .highest_index_supported = 0x3,
        .mapping_object_1 = 0x50380E10,
        .mapping_object_2 = 0x50380F10,
        .mapping_object_3 = 0x50381010,
    },
    .x1634_rpdo_53_mapping_parameters = {
        .highest_index_supported = 0x3,
        .mapping_object_1 = 0x50381110,
        .mapping_object_2 = 0x50381210,
        .mapping_object_3 = 0x50381310,
    },
    .x1635_rpdo_54_mapping_parameters = {
        .highest_index_supported = 0x2,
        .mapping_object_1 = 0x50381410,
        .mapping_object_2 = 0x50381510,
    },
    .x1636_rpdo_55_mapping_parameters = {
        .highest_index_supported = 0x2,
        .mapping_object_1 = 0x50381610,
        .mapping_object_2 = 0x50381710,
    },
    .x1637_rpdo_56_mapping_parameters = {
        .highest_index_supported = 0x2,
        .mapping_object_1 = 0x50381810,
        .mapping_object_2 = 0x50381910,
    },
    .x1638_rpdo_57_mapping_parameters = {
        .highest_index_supported = 0x3,
        .mapping_object_1 = 0x503C0108,
        .mapping_object_2 = 0x503C0208,
        .mapping_object_3 = 0x503C0320,
    },
    .x1639_rpdo_58_mapping_parameters = {
        .highest_index_supported = 0x2,
        .mapping_object_1 = 0x503C0420,
        .mapping_object_2 = 0x503C0520,
    },
    .x163A_rpdo_59_mapping_parameters = {
        .highest_index_supported = 0x2,
        .mapping_object_1 = 0x503C0620,
        .mapping_object_2 = 0x503C0720,
    },
    .x163B_rpdo_60_mapping_parameters = {
        .highest_index_supported = 0x3,
        .mapping_object_1 = 0x503C0810,
        .mapping_object_2 = 0x503C0910,
        .mapping_object_3 = 0x503C0A10,
    },
    .x163C_rpdo_61_mapping_parameters = {
        .highest_index_supported = 0x3,
        .mapping_object_1 = 0x50400108,
        .mapping_object_2 = 0x50400208,
        .mapping_object_3 = 0x50400320,
    },
    .x163D_rpdo_62_mapping_parameters = {
        .highest_index_supported = 0x2,
        .mapping_object_1 = 0x50400420,
        .mapping_object_2 = 0x50400520,
    },
    .x163E_rpdo_63_mapping_parameters = {
        .highest_index_supported = 0x2,
        .mapping_object_1 = 0x50400620,
        .mapping_object_2 = 0x50400720,
    },
    .x163F_rpdo_64_mapping_parameters = {
        .highest_index_supported = 0x3,
        .mapping_object_1 = 0x50400810,
        .mapping_object_2 = 0x50400910,
        .mapping_object_3 = 0x50400A10,
    },
    .x1640_rpdo_65_mapping_parameters = {
        .highest_index_supported = 0x3,
        .mapping_object_1 = 0x50440108,
        .mapping_object_2 = 0x50440208,
        .mapping_object_3 = 0x50440320,
    },
    .x1641_rpdo_66_mapping_parameters = {
        .highest_index_supported = 0x2,
        .mapping_object_1 = 0x50440420,
        .mapping_object_2 = 0x50440520,
    },
    .x1642_rpdo_67_mapping_parameters = {
        .highest_index_supported = 0x2,
        .mapping_object_1 = 0x50440620,
        .mapping_object_2 = 0x50440720,
    },
    .x1643_rpdo_68_mapping_parameters = {
        .highest_index_supported = 0x3,
        .mapping_object_1 = 0x50440810,
        .mapping_object_2 = 0x50440910,
        .mapping_object_3 = 0x50440A10,
    },
    .x1644_rpdo_69_mapping_parameters = {
        .highest_index_supported = 0x3,
        .mapping_object_1 = 0x50480108,
        .mapping_object_2 = 0x50480208,
        .mapping_object_3 = 0x50480320,
    },
    .x1645_rpdo_70_mapping_parameters = {
        .highest_index_supported = 0x2,
        .mapping_object_1 = 0x50480420,
        .mapping_object_2 = 0x50480520,
    },
    .x1646_rpdo_71_mapping_parameters = {
        .highest_index_supported = 0x2,
        .mapping_object_1 = 0x50480620,
        .mapping_object_2 = 0x50480720,
    },
    .x1647_rpdo_72_mapping_parameters = {
        .highest_index_supported = 0x3,
        .mapping_object_1 = 0x50480810,
        .mapping_object_2 = 0x50480910,
        .mapping_object_3 = 0x50480A10,
    },
    .x1648_rpdo_73_mapping_parameters = {
        .highest_index_supported = 0x6,
        .mapping_object_1 = 0x504C0108,
        .mapping_object_2 = 0x504C0208,
        .mapping_object_3 = 0x504C0308,
        .mapping_object_4 = 0x504C0408,
        .mapping_object_5 = 0x504C0508,
        .mapping_object_6 = 0x504C0608,
    },
    .x1649_rpdo_74_mapping_parameters = {
        .highest_index_supported = 0x2,
        .mapping_object_1 = 0x504C0708,
        .mapping_object_2 = 0x504C0808,
    },
    .x164A_rpdo_75_mapping_parameters = {
        .highest_index_supported = 0x5,
        .mapping_object_1 = 0x504C0908,
        .mapping_object_2 = 0x504C0A08,
        .mapping_object_3 = 0x504C0B08,
        .mapping_object_4 = 0x504C0C20,
        .mapping_object_5 = 0x504C0D08,
    },
    .x164B_rpdo_76_mapping_parameters = {
        .highest_index_supported = 0x6,
        .mapping_object_1 = 0x50500108,
        .mapping_object_2 = 0x50500208,
        .mapping_object_3 = 0x50500308,
        .mapping_object_4 = 0x50500408,
        .mapping_object_5 = 0x50500508,
        .mapping_object_6 = 0x50500608,
    },
    .x164C_rpdo_77_mapping_parameters = {
        .highest_index_supported = 0x2,
        .mapping_object_1 = 0x50500708,
        .mapping_object_2 = 0x50500808,
    },
    .x164D_rpdo_78_mapping_parameters = {
        .highest_index_supported = 0x7,
        .mapping_object_1 = 0x50500908,
        .mapping_object_2 = 0x50500A08,
        .mapping_object_3 = 0x50500B08,
        .mapping_object_4 = 0x50500C08,
        .mapping_object_5 = 0x50500D08,
        .mapping_object_6 = 0x50500E08,
        .mapping_object_7 = 0x50500F08,
    },
    .x164E_rpdo_79_mapping_parameters = {
        .highest_index_supported = 0x5,
        .mapping_object_1 = 0x50540108,
        .mapping_object_2 = 0x50540208,
        .mapping_object_3 = 0x50540310,
        .mapping_object_4 = 0x50540410,
        .mapping_object_5 = 0x50540510,
    },
    .x164F_rpdo_80_mapping_parameters = {
        .highest_index_supported = 0x3,
        .mapping_object_1 = 0x50540610,
        .mapping_object_2 = 0x50540710,
        .mapping_object_3 = 0x50540810,
    },
    .x1800_tpdo_1_communication_parameters = {
        .highest_index_supported = 0x6,
        .cob_id = 0x180,
        .transmission_type = 0xFE,
        .inhibit_time = 0x0,
        .event_timer = 0x0,
        .sync_start_value = 0x0,
    },
    .x1801_tpdo_2_communication_parameters = {
        .highest_index_supported = 0x6,
        .cob_id = 0x280,
        .transmission_type = 0xFE,
        .inhibit_time = 0x0,
        .event_timer = 0x1388,
        .sync_start_value = 0x0,
    },
    .x1802_tpdo_3_communication_parameters = {
        .highest_index_supported = 0x6,
        .cob_id = 0x380,
        .transmission_type = 0xFE,
        .inhibit_time = 0x0,
        .event_timer = 0x1388,
        .sync_start_value = 0x0,
    },
    .x1803_tpdo_4_communication_parameters = {
        .highest_index_supported = 0x6,
        .cob_id = 0x480,
        .transmission_type = 0xFE,
        .inhibit_time = 0x0,
        .event_timer = 0x1388,
        .sync_start_value = 0x0,
    },
    .x1804_tpdo_5_communication_parameters = {
        .highest_index_supported = 0x6,
        .cob_id = 0x180,
        .transmission_type = 0xFE,
        .inhibit_time = 0x0,
        .event_timer = 0x1388,
        .sync_start_value = 0x0,
    },
    .x1805_tpdo_6_communication_parameters = {
        .highest_index_supported = 0x6,
        .cob_id = 0x280,
        .transmission_type = 0xFE,
        .inhibit_time = 0x0,
        .event_timer = 0x1388,
        .sync_start_value = 0x0,
    },
    .x1806_tpdo_7_communication_parameters = {
        .highest_index_supported = 0x6,
        .cob_id = 0x380,
        .transmission_type = 0xFE,
        .inhibit_time = 0x0,
        .event_timer = 0x1388,
        .sync_start_value = 0x0,
    },
    .x1A00_tpdo_1_mapping_parameters = {
        .highest_index_supported = 0x1,
        .mapping_object_1 = 0x20100040,
    },
    .x1A01_tpdo_2_mapping_parameters = {
        .highest_index_supported = 0x5,
        .mapping_object_1 = 0x40000008,
        .mapping_object_2 = 0x40040108,
        .mapping_object_3 = 0x40020008,
        .mapping_object_4 = 0x400E0108,
        .mapping_object_5 = 0x400E0208,
    },
    .x1A02_tpdo_3_mapping_parameters = {
        .highest_index_supported = 0x2,
        .mapping_object_1 = 0x40080620,
        .mapping_object_2 = 0x40080720,
    },
    .x1A03_tpdo_4_mapping_parameters = {
        .highest_index_supported = 0x2,
        .mapping_object_1 = 0x40090108,
        .mapping_object_2 = 0x40090208,
    },
    .x1A04_tpdo_5_mapping_parameters = {
        .highest_index_supported = 0x7,
        .mapping_object_1 = 0x400C0208,
        .mapping_object_2 = 0x400C0308,
        .mapping_object_3 = 0x400C0408,
        .mapping_object_4 = 0x400C0508,
        .mapping_object_5 = 0x400C0608,
        .mapping_object_6 = 0x400C0708,
        .mapping_object_7 = 0x400C0808,
    },
    .x1A05_tpdo_6_mapping_parameters = {
        .highest_index_supported = 0x2,
        .mapping_object_1 = 0x40070220,
        .mapping_object_2 = 0x40070308,
    },
    .x1A06_tpdo_7_mapping_parameters = {
        .highest_index_supported = 0x3,
        .mapping_object_1 = 0x40060220,
        .mapping_object_2 = 0x40060308,
        .mapping_object_3 = 0x40060508,
    },
    .x2010_scet = 0x0,
    .x2011_utc = 0x0,
    .x3000_satellite_id = 0x2,
    .x3001_flight_mode = 1,
    .x3002_versions = {
        .highest_index_supported = 0x4,
        .hw_version = {'0', '.', '0', 0}, 
        .configs_version = {'0', '.', '7', '.', '3', '.', 'd', 'e', 'v', '6', '7', '+', 'g', '1', 'e', '9', '5', '8', '8', '4', 0}, 
        .olaf_version = {'0', '.', '0', '.', '0', 0}, 
        .sw_version = {'0', '.', '0', '.', '0', 0}, 
    },
    .x3003_system = {
        .highest_index_supported = 0x9,
        .reset = 0x0,
        .storage_percent = 0x0,
        .ram_percent = 0x0,
        .unix_time = 0x0,
        .uptime = 0x0,
        .power_cycles = 0x0,
        .boot_select = 0x0,
    },
    .x3004_fread_cache = {
        .highest_index_supported = 0x5,
        .length = 0x0,
        .files_json = {'[', ']', 0}, 
        .file_name = {0}, 
        .remove = 0,
    },
    .x3005_fwrite_cache = {
        .highest_index_supported = 0x5,
        .length = 0x0,
        .files_json = {'[', ']', 0}, 
        .file_name = {0}, 
        .remove = 0,
    },
    .x3006_updater = {
        .highest_index_supported = 0x5,
        .status = 0x0,
        .cache_length = 0x0,
        .cache_files_json = {'[', ']', 0}, 
        .update = 0,
        .make_status_file = 0,
    },
    .x3007_logs = {
        .highest_index_supported = 0x2,
        .make_file = 0,
        .since_boot = {0}, 
    },
    .x3008_daemons = {
        .highest_index_supported = 0x3,
        .total = 0x0,
        .active = 0x0,
        .failed = 0x0,
    },
    .x3009_board_id = 0x0,
    .x4000_status = 0x42,
    .x4001_reset_timeout = 0x15180,
    .x4002_mode = 0x0,
    .x4003_hw_id = 0x0,
    .x4004_tx_control = {
        .highest_index_supported = 0x3,
        .enable = 0,
        .timeout = 0x278D00,
        .last_enable_timestamp = 0x0,
    },
    .x4005_antennas = {
        .highest_index_supported = 0xD,
        .deployed = 0,
        .attempts = 0x3,
        .pre_attempt_timeout = 0x12C,
        .attempt_timeout = 0xA,
        .reattempt_timeout = 0xF,
        .deploy_monopole_now = 0,
        .deploy_helical_now = 0,
        .good_test_threshold = 0x64,
        .test_monopole_is_good = 0,
        .test_helical_is_good = 0,
        .monopole_voltage = 0x0,
        .helical_voltage = 0x0,
        .attempt_between_timeout = 0x5,
    },
    .x4006_lband = {
        .highest_index_supported = 0x5,
        .rx_bytes = 0x0,
        .rx_packets = 0x0,
        .rssi = 0x0,
        .synth_lock = 0,
        .synth_relock_count = 0x0,
    },
    .x4007_uhf = {
        .highest_index_supported = 0x3,
        .rx_bytes = 0x0,
        .rx_packets = 0x0,
        .rssi = 0x0,
    },
    .x4008_edl = {
        .highest_index_supported = 0xC,
        .crypto_key_0 = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
        .crypto_key_1 = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
        .crypto_key_2 = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
        .crypto_key_3 = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
        .active_crypto_key = 0x0,
        .sequence_count = 0x0,
        .rejected_count = 0x0,
        .vc1_sequence_count = 0x0,
        .vc1_rejected_count = 0x0,
        .vc1_expedite_count = 0x0,
        .last_timestamp = 0x0,
        .timeout = 0x3C,
    },
    .x4009_opd = {
        .highest_index_supported = 0xD,
        .status = 0x0,
        .has_fault = 0x0,
        .current = 0x0,
        .scan = 0,
        .reset = 0,
        .reset_attempts = 0x3,
        .reset_delay = 0xA,
        .nodes_status_json = {'{', '}', 0}, 
        .node_select = 0x0,
        .node_status = 0x0,
        .node_reset = 0,
        .node_reset_attempts = 0x3,
        .uart_node_select = 0x0,
    },
    .x400A_beacon = {
        .highest_index_supported = 0xD,
        .revision = 0x0,
        .src_callsign = {'K', 'J', '7', 'S', 'A', 'T', 0}, 
        .dest_callsign = {'S', 'P', 'A', 'C', 'E', 0}, 
        .start_chars = {'{', '{', 'z', 0}, 
        .delay = 0x1E,
        .send_now = 0,
        .last_timestamp = 0x0,
        .src_ssid = 0xB,
        .dest_ssid = 0x0,
        .control = 0x3,
        .pid = 0xF0,
        .command = 0,
        .response = 1,
    },
    .x400B_rtc = {
        .highest_index_supported = 0x4,
        .timestamp = 0x0,
        .alarm_a = 0x0,
        .alarm_b = 0x0,
        .wakeup_interval = 0x0,
    },
    .x400C_node_manager = {
        .highest_index_supported = 0x8,
        .status_json = {'[', ']', 0}, 
        .total_nodes = 0x0,
        .nodes_off = 0x0,
        .nodes_booting = 0x0,
        .nodes_on = 0x0,
        .nodes_with_errors = 0x0,
        .nodes_not_found = 0x0,
        .nodes_dead = 0x0,
    },
    .x400D_node_status_sub0 = 84,
    .x400D_node_status = {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
    .x400E_adcs_manager = {
        .highest_index_supported = 0x4,
        .mode = 0x0,
        .status = 0x0,
        .signals = {'{', '}', 0}, 
        .feedback = {'{', '}', 0}, 
    },
    .x5004_battery_1 = {
        .highest_index_supported = 0x26,
        .pack_1_vbatt = 0x0,
        .pack_1_vcell_max = 0x0,
        .pack_1_vcell_min = 0x0,
        .pack_1_vcell = 0x0,
        .pack_1_vcell_1 = 0x0,
        .pack_1_vcell_2 = 0x0,
        .pack_1_vcell_avg = 0x0,
        .pack_1_current = 0x0,
        .pack_1_current_avg = 0x0,
        .pack_1_current_max = 0x0,
        .pack_1_current_min = 0x0,
        .pack_1_temperature = 0x0,
        .pack_1_temperature_avg = 0x0,
        .pack_1_temperature_max = 0x0,
        .pack_1_temperature_min = 0x0,
        .pack_1_full_capacity = 0x0,
        .pack_1_reported_capacity = 0x0,
        .pack_1_reported_state_of_charge = 0x0,
        .pack_1_status = 0x0,
        .pack_2_vbatt = 0x0,
        .pack_2_vcell_max = 0x0,
        .pack_2_vcell_min = 0x0,
        .pack_2_vcell = 0x0,
        .pack_2_vcell_1 = 0x0,
        .pack_2_vcell_2 = 0x0,
        .pack_2_vcell_avg = 0x0,
        .pack_2_current = 0x0,
        .pack_2_current_avg = 0x0,
        .pack_2_current_max = 0x0,
        .pack_2_current_min = 0x0,
        .pack_2_temperature = 0x0,
        .pack_2_temperature_avg = 0x0,
        .pack_2_temperature_max = 0x0,
        .pack_2_temperature_min = 0x0,
        .pack_2_full_capacity = 0x0,
        .pack_2_reported_capacity = 0x0,
        .pack_2_reported_state_of_charge = 0x0,
        .pack_2_status = 0x0,
    },
    .x500C_solar_1 = {
        .highest_index_supported = 0x10,
        .output_voltage = 0x0,
        .output_current = 0x0,
        .output_power = 0x0,
        .output_voltage_avg = 0x0,
        .output_current_avg = 0x0,
        .output_power_avg = 0x0,
        .output_voltage_max = 0x0,
        .output_current_max = 0x0,
        .output_power_max = 0x0,
        .output_energy = 0x0,
        .cell_1_temperature = 0x0,
        .cell_2_temperature = 0x0,
        .cell_1_temperature_min = 0x0,
        .cell_2_temperature_min = 0x0,
        .cell_1_temperature_max = 0x0,
        .cell_2_temperature_max = 0x0,
    },
    .x5010_solar_2 = {
        .highest_index_supported = 0x10,
        .output_voltage = 0x0,
        .output_current = 0x0,
        .output_power = 0x0,
        .output_voltage_avg = 0x0,
        .output_current_avg = 0x0,
        .output_power_avg = 0x0,
        .output_voltage_max = 0x0,
        .output_current_max = 0x0,
        .output_power_max = 0x0,
        .output_energy = 0x0,
        .cell_1_temperature = 0x0,
        .cell_2_temperature = 0x0,
        .cell_1_temperature_min = 0x0,
        .cell_2_temperature_min = 0x0,
        .cell_1_temperature_max = 0x0,
        .cell_2_temperature_max = 0x0,
    },
    .x5014_solar_3 = {
        .highest_index_supported = 0x10,
        .output_voltage = 0x0,
        .output_current = 0x0,
        .output_power = 0x0,
        .output_voltage_avg = 0x0,
        .output_current_avg = 0x0,
        .output_power_avg = 0x0,
        .output_voltage_max = 0x0,
        .output_current_max = 0x0,
        .output_power_max = 0x0,
        .output_energy = 0x0,
        .cell_1_temperature = 0x0,
        .cell_2_temperature = 0x0,
        .cell_1_temperature_min = 0x0,
        .cell_2_temperature_min = 0x0,
        .cell_1_temperature_max = 0x0,
        .cell_2_temperature_max = 0x0,
    },
    .x5018_solar_4 = {
        .highest_index_supported = 0x10,
        .output_voltage = 0x0,
        .output_current = 0x0,
        .output_power = 0x0,
        .output_voltage_avg = 0x0,
        .output_current_avg = 0x0,
        .output_power_avg = 0x0,
        .output_voltage_max = 0x0,
        .output_current_max = 0x0,
        .output_power_max = 0x0,
        .output_energy = 0x0,
        .cell_1_temperature = 0x0,
        .cell_2_temperature = 0x0,
        .cell_1_temperature_min = 0x0,
        .cell_2_temperature_min = 0x0,
        .cell_1_temperature_max = 0x0,
        .cell_2_temperature_max = 0x0,
    },
    .x501C_solar_5 = {
        .highest_index_supported = 0x10,
        .output_voltage = 0x0,
        .output_current = 0x0,
        .output_power = 0x0,
        .output_voltage_avg = 0x0,
        .output_current_avg = 0x0,
        .output_power_avg = 0x0,
        .output_voltage_max = 0x0,
        .output_current_max = 0x0,
        .output_power_max = 0x0,
        .output_energy = 0x0,
        .cell_1_temperature = 0x0,
        .cell_2_temperature = 0x0,
        .cell_1_temperature_min = 0x0,
        .cell_2_temperature_min = 0x0,
        .cell_1_temperature_max = 0x0,
        .cell_2_temperature_max = 0x0,
    },
    .x5020_solar_6 = {
        .highest_index_supported = 0x10,
        .output_voltage = 0x0,
        .output_current = 0x0,
        .output_power = 0x0,
        .output_voltage_avg = 0x0,
        .output_current_avg = 0x0,
        .output_power_avg = 0x0,
        .output_voltage_max = 0x0,
        .output_current_max = 0x0,
        .output_power_max = 0x0,
        .output_energy = 0x0,
        .cell_1_temperature = 0x0,
        .cell_2_temperature = 0x0,
        .cell_1_temperature_min = 0x0,
        .cell_2_temperature_min = 0x0,
        .cell_1_temperature_max = 0x0,
        .cell_2_temperature_max = 0x0,
    },
    .x502C_star_tracker_1 = {
        .highest_index_supported = 0xD,
        .system_storage_percent = 0x0,
        .system_ram_percent = 0x0,
        .fread_cache_length = 0x0,
        .fwrite_cache_length = 0x0,
        .daemons_active = 0x0,
        .daemons_failed = 0x0,
        .updater_status = 0x0,
        .updater_cache_length = 0x0,
        .status = 0x0,
        .orientation_right_ascension = 0x0,
        .orientation_declination = 0x0,
        .orientation_roll = 0x0,
        .orientation_time_since_midnight = 0x0,
    },
    .x5034_gps = {
        .highest_index_supported = 0x14,
        .system_storage_percent = 0x0,
        .system_ram_percent = 0x0,
        .fread_cache_length = 0x0,
        .fwrite_cache_length = 0x0,
        .daemons_active = 0x0,
        .daemons_failed = 0x0,
        .updater_status = 0x0,
        .updater_cache_length = 0x0,
        .skytraq_time_since_midnight = 0x0,
        .skytraq_ecef_x = 0x0,
        .skytraq_ecef_y = 0x0,
        .skytraq_ecef_z = 0x0,
        .skytraq_ecef_vx = 0x0,
        .skytraq_ecef_vy = 0x0,
        .skytraq_ecef_vz = 0x0,
        .status = 0x0,
        .skytraq_number_of_sv = 0x0,
        .skytraq_fix_mode = 0x0,
        .time_syncd = 0,
        .scet = 0x0,
    },
    .x5038_adcs = {
        .highest_index_supported = 0x19,
        .gyroscope_pitch_rate = 0x0,
        .gyroscope_yaw_rate = 0x0,
        .gyroscope_roll_rate = 0x0,
        .accelerometer_x = 0x0,
        .accelerometer_y = 0x0,
        .accelerometer_z = 0x0,
        .temperature = 0x0,
        .pos_z_magnetometer_1_x = 0x0,
        .pos_z_magnetometer_1_y = 0x0,
        .pos_z_magnetometer_1_z = 0x0,
        .pos_z_magnetometer_2_x = 0x0,
        .pos_z_magnetometer_2_y = 0x0,
        .pos_z_magnetometer_2_z = 0x0,
        .min_z_magnetometer_1_x = 0x0,
        .min_z_magnetometer_1_y = 0x0,
        .min_z_magnetometer_1_z = 0x0,
        .min_z_magnetometer_2_x = 0x0,
        .min_z_magnetometer_2_y = 0x0,
        .min_z_magnetometer_2_z = 0x0,
        .magnetorquer_current_x = 0x0,
        .magnetorquer_pwm_x = 0x0,
        .magnetorquer_current_y = 0x0,
        .magnetorquer_pwm_y = 0x0,
        .magnetorquer_current_z = 0x0,
        .magnetorquer_pwm_z = 0x0,
    },
    .x503C_rw_1 = {
        .highest_index_supported = 0xA,
        .ctrl_stat_current_state = 0x0,
        .ctrl_stat_procedure_result = 0x0,
        .ctrl_stat_errors = 0x0,
        .motor_velocity = 0.0,
        .motor_current = 0.0,
        .bus_voltage = 0.0,
        .bus_current = 0.0,
        .temperature_sensor_1 = 0x0,
        .temperature_sensor_2 = 0x0,
        .temperature_sensor_3 = 0x0,
    },
    .x5040_rw_2 = {
        .highest_index_supported = 0xA,
        .ctrl_stat_current_state = 0x0,
        .ctrl_stat_procedure_result = 0x0,
        .ctrl_stat_errors = 0x0,
        .motor_velocity = 0.0,
        .motor_current = 0.0,
        .bus_voltage = 0.0,
        .bus_current = 0.0,
        .temperature_sensor_1 = 0x0,
        .temperature_sensor_2 = 0x0,
        .temperature_sensor_3 = 0x0,
    },
    .x5044_rw_3 = {
        .highest_index_supported = 0xA,
        .ctrl_stat_current_state = 0x0,
        .ctrl_stat_procedure_result = 0x0,
        .ctrl_stat_errors = 0x0,
        .motor_velocity = 0.0,
        .motor_current = 0.0,
        .bus_voltage = 0.0,
        .bus_current = 0.0,
        .temperature_sensor_1 = 0x0,
        .temperature_sensor_2 = 0x0,
        .temperature_sensor_3 = 0x0,
    },
    .x5048_rw_4 = {
        .highest_index_supported = 0xA,
        .ctrl_stat_current_state = 0x0,
        .ctrl_stat_procedure_result = 0x0,
        .ctrl_stat_errors = 0x0,
        .motor_velocity = 0.0,
        .motor_current = 0.0,
        .bus_voltage = 0.0,
        .bus_current = 0.0,
        .temperature_sensor_1 = 0x0,
        .temperature_sensor_2 = 0x0,
        .temperature_sensor_3 = 0x0,
    },
    .x504C_dxwifi = {
        .highest_index_supported = 0xD,
        .system_storage_percent = 0x0,
        .system_ram_percent = 0x0,
        .fread_cache_length = 0x0,
        .fwrite_cache_length = 0x0,
        .daemons_active = 0x0,
        .daemons_failed = 0x0,
        .updater_status = 0x0,
        .updater_cache_length = 0x0,
        .status = 0x0,
        .radio_temperature = 0x0,
        .transmission_bit_rate = 0x1,
        .transmission_images_transmitted = 0x0,
        .transmission_enable_pa = 0,
    },
    .x5050_cfc_processor = {
        .highest_index_supported = 0xF,
        .system_storage_percent = 0x0,
        .system_ram_percent = 0x0,
        .fread_cache_length = 0x0,
        .fwrite_cache_length = 0x0,
        .daemons_active = 0x0,
        .daemons_failed = 0x0,
        .updater_status = 0x0,
        .updater_cache_length = 0x0,
        .camera_status = 0x0,
        .camera_temperature = 0x0,
        .tec_status = 0,
        .tec_saturated = 0,
        .tec_saturation_diff = 0x3,
        .tec_pid_setpoint = 0x0,
        .tec_cooldown_temperature = 0x28,
    },
    .x5054_diode_test = {
        .highest_index_supported = 0x8,
        .dtc_ctrl = 0x0,
        .dtc_mux_select = 0x0,
        .dtc_dac = 0x0,
        .dtc_status = 0x0,
        .dtc_error = 0x0,
        .adcsample_led_current = 0x0,
        .adcsample_led_swir_pd_current = 0x0,
        .adcsample_uv_pd_current = 0x0,
    },
};

typedef struct {
    OD_obj_var_t o_1000_device_type;
    OD_obj_var_t o_1001_error_register;
    OD_obj_array_t o_1003_predefined_error_field;
    OD_obj_var_t o_1005_cob_id_sync;
    OD_obj_var_t o_1006_communication_cycle_period;
    OD_obj_var_t o_1014_cob_id_emergency_message;
    OD_obj_var_t o_1015_inhibit_time_emcy;
    OD_obj_array_t o_1016_consumer_heartbeat_time;
    OD_obj_var_t o_1017_producer_heartbeat_time;
    OD_obj_record_t o_1018_identity[5];
    OD_obj_var_t o_1019_synchronous_counter_overflow_value;
    OD_obj_record_t o_1023_os_command[4];
    OD_obj_record_t o_1200_sdo_server_parameter[4];
    OD_obj_record_t o_1280_sdo_client_parameter[4];
    OD_obj_record_t o_1400_rpdo_1_communication_parameters[4];
    OD_obj_record_t o_1401_rpdo_2_communication_parameters[4];
    OD_obj_record_t o_1402_rpdo_3_communication_parameters[4];
    OD_obj_record_t o_1403_rpdo_4_communication_parameters[4];
    OD_obj_record_t o_1404_rpdo_5_communication_parameters[4];
    OD_obj_record_t o_1405_rpdo_6_communication_parameters[4];
    OD_obj_record_t o_1406_rpdo_7_communication_parameters[4];
    OD_obj_record_t o_1407_rpdo_8_communication_parameters[4];
    OD_obj_record_t o_1408_rpdo_9_communication_parameters[4];
    OD_obj_record_t o_1409_rpdo_10_communication_parameters[4];
    OD_obj_record_t o_140A_rpdo_11_communication_parameters[4];
    OD_obj_record_t o_140B_rpdo_12_communication_parameters[4];
    OD_obj_record_t o_140C_rpdo_13_communication_parameters[4];
    OD_obj_record_t o_140D_rpdo_14_communication_parameters[4];
    OD_obj_record_t o_140E_rpdo_15_communication_parameters[4];
    OD_obj_record_t o_140F_rpdo_16_communication_parameters[4];
    OD_obj_record_t o_1410_rpdo_17_communication_parameters[4];
    OD_obj_record_t o_1411_rpdo_18_communication_parameters[4];
    OD_obj_record_t o_1412_rpdo_19_communication_parameters[4];
    OD_obj_record_t o_1413_rpdo_20_communication_parameters[4];
    OD_obj_record_t o_1414_rpdo_21_communication_parameters[4];
    OD_obj_record_t o_1415_rpdo_22_communication_parameters[4];
    OD_obj_record_t o_1416_rpdo_23_communication_parameters[4];
    OD_obj_record_t o_1417_rpdo_24_communication_parameters[4];
    OD_obj_record_t o_1418_rpdo_25_communication_parameters[4];
    OD_obj_record_t o_1419_rpdo_26_communication_parameters[4];
    OD_obj_record_t o_141A_rpdo_27_communication_parameters[4];
    OD_obj_record_t o_141B_rpdo_28_communication_parameters[4];
    OD_obj_record_t o_141C_rpdo_29_communication_parameters[4];
    OD_obj_record_t o_141D_rpdo_30_communication_parameters[4];
    OD_obj_record_t o_141E_rpdo_31_communication_parameters[4];
    OD_obj_record_t o_141F_rpdo_32_communication_parameters[4];
    OD_obj_record_t o_1420_rpdo_33_communication_parameters[4];
    OD_obj_record_t o_1421_rpdo_34_communication_parameters[4];
    OD_obj_record_t o_1422_rpdo_35_communication_parameters[4];
    OD_obj_record_t o_1423_rpdo_36_communication_parameters[4];
    OD_obj_record_t o_1424_rpdo_37_communication_parameters[4];
    OD_obj_record_t o_1425_rpdo_38_communication_parameters[4];
    OD_obj_record_t o_1426_rpdo_39_communication_parameters[4];
    OD_obj_record_t o_1427_rpdo_40_communication_parameters[4];
    OD_obj_record_t o_1428_rpdo_41_communication_parameters[4];
    OD_obj_record_t o_1429_rpdo_42_communication_parameters[4];
    OD_obj_record_t o_142A_rpdo_43_communication_parameters[4];
    OD_obj_record_t o_142B_rpdo_44_communication_parameters[4];
    OD_obj_record_t o_142C_rpdo_45_communication_parameters[4];
    OD_obj_record_t o_142D_rpdo_46_communication_parameters[4];
    OD_obj_record_t o_142E_rpdo_47_communication_parameters[4];
    OD_obj_record_t o_142F_rpdo_48_communication_parameters[4];
    OD_obj_record_t o_1430_rpdo_49_communication_parameters[4];
    OD_obj_record_t o_1431_rpdo_50_communication_parameters[4];
    OD_obj_record_t o_1432_rpdo_51_communication_parameters[4];
    OD_obj_record_t o_1433_rpdo_52_communication_parameters[4];
    OD_obj_record_t o_1434_rpdo_53_communication_parameters[4];
    OD_obj_record_t o_1435_rpdo_54_communication_parameters[4];
    OD_obj_record_t o_1436_rpdo_55_communication_parameters[4];
    OD_obj_record_t o_1437_rpdo_56_communication_parameters[4];
    OD_obj_record_t o_1438_rpdo_57_communication_parameters[4];
    OD_obj_record_t o_1439_rpdo_58_communication_parameters[4];
    OD_obj_record_t o_143A_rpdo_59_communication_parameters[4];
    OD_obj_record_t o_143B_rpdo_60_communication_parameters[4];
    OD_obj_record_t o_143C_rpdo_61_communication_parameters[4];
    OD_obj_record_t o_143D_rpdo_62_communication_parameters[4];
    OD_obj_record_t o_143E_rpdo_63_communication_parameters[4];
    OD_obj_record_t o_143F_rpdo_64_communication_parameters[4];
    OD_obj_record_t o_1440_rpdo_65_communication_parameters[4];
    OD_obj_record_t o_1441_rpdo_66_communication_parameters[4];
    OD_obj_record_t o_1442_rpdo_67_communication_parameters[4];
    OD_obj_record_t o_1443_rpdo_68_communication_parameters[4];
    OD_obj_record_t o_1444_rpdo_69_communication_parameters[4];
    OD_obj_record_t o_1445_rpdo_70_communication_parameters[4];
    OD_obj_record_t o_1446_rpdo_71_communication_parameters[4];
    OD_obj_record_t o_1447_rpdo_72_communication_parameters[4];
    OD_obj_record_t o_1448_rpdo_73_communication_parameters[4];
    OD_obj_record_t o_1449_rpdo_74_communication_parameters[4];
    OD_obj_record_t o_144A_rpdo_75_communication_parameters[4];
    OD_obj_record_t o_144B_rpdo_76_communication_parameters[4];
    OD_obj_record_t o_144C_rpdo_77_communication_parameters[4];
    OD_obj_record_t o_144D_rpdo_78_communication_parameters[4];
    OD_obj_record_t o_144E_rpdo_79_communication_parameters[4];
    OD_obj_record_t o_144F_rpdo_80_communication_parameters[4];
    OD_obj_record_t o_1600_rpdo_1_mapping_parameters[5];
    OD_obj_record_t o_1601_rpdo_2_mapping_parameters[4];
    OD_obj_record_t o_1602_rpdo_3_mapping_parameters[5];
    OD_obj_record_t o_1603_rpdo_4_mapping_parameters[5];
    OD_obj_record_t o_1604_rpdo_5_mapping_parameters[5];
    OD_obj_record_t o_1605_rpdo_6_mapping_parameters[5];
    OD_obj_record_t o_1606_rpdo_7_mapping_parameters[4];
    OD_obj_record_t o_1607_rpdo_8_mapping_parameters[5];
    OD_obj_record_t o_1608_rpdo_9_mapping_parameters[5];
    OD_obj_record_t o_1609_rpdo_10_mapping_parameters[5];
    OD_obj_record_t o_160A_rpdo_11_mapping_parameters[5];
    OD_obj_record_t o_160B_rpdo_12_mapping_parameters[5];
    OD_obj_record_t o_160C_rpdo_13_mapping_parameters[3];
    OD_obj_record_t o_160D_rpdo_14_mapping_parameters[7];
    OD_obj_record_t o_160E_rpdo_15_mapping_parameters[5];
    OD_obj_record_t o_160F_rpdo_16_mapping_parameters[5];
    OD_obj_record_t o_1610_rpdo_17_mapping_parameters[3];
    OD_obj_record_t o_1611_rpdo_18_mapping_parameters[7];
    OD_obj_record_t o_1612_rpdo_19_mapping_parameters[5];
    OD_obj_record_t o_1613_rpdo_20_mapping_parameters[5];
    OD_obj_record_t o_1614_rpdo_21_mapping_parameters[3];
    OD_obj_record_t o_1615_rpdo_22_mapping_parameters[7];
    OD_obj_record_t o_1616_rpdo_23_mapping_parameters[5];
    OD_obj_record_t o_1617_rpdo_24_mapping_parameters[5];
    OD_obj_record_t o_1618_rpdo_25_mapping_parameters[3];
    OD_obj_record_t o_1619_rpdo_26_mapping_parameters[7];
    OD_obj_record_t o_161A_rpdo_27_mapping_parameters[5];
    OD_obj_record_t o_161B_rpdo_28_mapping_parameters[5];
    OD_obj_record_t o_161C_rpdo_29_mapping_parameters[3];
    OD_obj_record_t o_161D_rpdo_30_mapping_parameters[7];
    OD_obj_record_t o_161E_rpdo_31_mapping_parameters[5];
    OD_obj_record_t o_161F_rpdo_32_mapping_parameters[5];
    OD_obj_record_t o_1620_rpdo_33_mapping_parameters[3];
    OD_obj_record_t o_1621_rpdo_34_mapping_parameters[7];
    OD_obj_record_t o_1622_rpdo_35_mapping_parameters[7];
    OD_obj_record_t o_1623_rpdo_36_mapping_parameters[3];
    OD_obj_record_t o_1624_rpdo_37_mapping_parameters[5];
    OD_obj_record_t o_1625_rpdo_38_mapping_parameters[2];
    OD_obj_record_t o_1626_rpdo_39_mapping_parameters[7];
    OD_obj_record_t o_1627_rpdo_40_mapping_parameters[3];
    OD_obj_record_t o_1628_rpdo_41_mapping_parameters[2];
    OD_obj_record_t o_1629_rpdo_42_mapping_parameters[3];
    OD_obj_record_t o_162A_rpdo_43_mapping_parameters[3];
    OD_obj_record_t o_162B_rpdo_44_mapping_parameters[3];
    OD_obj_record_t o_162C_rpdo_45_mapping_parameters[5];
    OD_obj_record_t o_162D_rpdo_46_mapping_parameters[2];
    OD_obj_record_t o_162E_rpdo_47_mapping_parameters[4];
    OD_obj_record_t o_162F_rpdo_48_mapping_parameters[4];
    OD_obj_record_t o_1630_rpdo_49_mapping_parameters[2];
    OD_obj_record_t o_1631_rpdo_50_mapping_parameters[4];
    OD_obj_record_t o_1632_rpdo_51_mapping_parameters[4];
    OD_obj_record_t o_1633_rpdo_52_mapping_parameters[4];
    OD_obj_record_t o_1634_rpdo_53_mapping_parameters[4];
    OD_obj_record_t o_1635_rpdo_54_mapping_parameters[3];
    OD_obj_record_t o_1636_rpdo_55_mapping_parameters[3];
    OD_obj_record_t o_1637_rpdo_56_mapping_parameters[3];
    OD_obj_record_t o_1638_rpdo_57_mapping_parameters[4];
    OD_obj_record_t o_1639_rpdo_58_mapping_parameters[3];
    OD_obj_record_t o_163A_rpdo_59_mapping_parameters[3];
    OD_obj_record_t o_163B_rpdo_60_mapping_parameters[4];
    OD_obj_record_t o_163C_rpdo_61_mapping_parameters[4];
    OD_obj_record_t o_163D_rpdo_62_mapping_parameters[3];
    OD_obj_record_t o_163E_rpdo_63_mapping_parameters[3];
    OD_obj_record_t o_163F_rpdo_64_mapping_parameters[4];
    OD_obj_record_t o_1640_rpdo_65_mapping_parameters[4];
    OD_obj_record_t o_1641_rpdo_66_mapping_parameters[3];
    OD_obj_record_t o_1642_rpdo_67_mapping_parameters[3];
    OD_obj_record_t o_1643_rpdo_68_mapping_parameters[4];
    OD_obj_record_t o_1644_rpdo_69_mapping_parameters[4];
    OD_obj_record_t o_1645_rpdo_70_mapping_parameters[3];
    OD_obj_record_t o_1646_rpdo_71_mapping_parameters[3];
    OD_obj_record_t o_1647_rpdo_72_mapping_parameters[4];
    OD_obj_record_t o_1648_rpdo_73_mapping_parameters[7];
    OD_obj_record_t o_1649_rpdo_74_mapping_parameters[3];
    OD_obj_record_t o_164A_rpdo_75_mapping_parameters[6];
    OD_obj_record_t o_164B_rpdo_76_mapping_parameters[7];
    OD_obj_record_t o_164C_rpdo_77_mapping_parameters[3];
    OD_obj_record_t o_164D_rpdo_78_mapping_parameters[8];
    OD_obj_record_t o_164E_rpdo_79_mapping_parameters[6];
    OD_obj_record_t o_164F_rpdo_80_mapping_parameters[4];
    OD_obj_record_t o_1800_tpdo_1_communication_parameters[6];
    OD_obj_record_t o_1801_tpdo_2_communication_parameters[6];
    OD_obj_record_t o_1802_tpdo_3_communication_parameters[6];
    OD_obj_record_t o_1803_tpdo_4_communication_parameters[6];
    OD_obj_record_t o_1804_tpdo_5_communication_parameters[6];
    OD_obj_record_t o_1805_tpdo_6_communication_parameters[6];
    OD_obj_record_t o_1806_tpdo_7_communication_parameters[6];
    OD_obj_record_t o_1A00_tpdo_1_mapping_parameters[2];
    OD_obj_record_t o_1A01_tpdo_2_mapping_parameters[6];
    OD_obj_record_t o_1A02_tpdo_3_mapping_parameters[3];
    OD_obj_record_t o_1A03_tpdo_4_mapping_parameters[3];
    OD_obj_record_t o_1A04_tpdo_5_mapping_parameters[8];
    OD_obj_record_t o_1A05_tpdo_6_mapping_parameters[3];
    OD_obj_record_t o_1A06_tpdo_7_mapping_parameters[4];
    OD_obj_var_t o_2010_scet;
    OD_obj_var_t o_2011_utc;
    OD_obj_var_t o_3000_satellite_id;
    OD_obj_var_t o_3001_flight_mode;
    OD_obj_record_t o_3002_versions[5];
    OD_obj_record_t o_3003_system[8];
    OD_obj_record_t o_3004_fread_cache[6];
    OD_obj_record_t o_3005_fwrite_cache[6];
    OD_obj_record_t o_3006_updater[6];
    OD_obj_record_t o_3007_logs[3];
    OD_obj_record_t o_3008_daemons[4];
    OD_obj_var_t o_3009_board_id;
    OD_obj_var_t o_4000_status;
    OD_obj_var_t o_4001_reset_timeout;
    OD_obj_var_t o_4002_mode;
    OD_obj_var_t o_4003_hw_id;
    OD_obj_record_t o_4004_tx_control[4];
    OD_obj_record_t o_4005_antennas[14];
    OD_obj_record_t o_4006_lband[6];
    OD_obj_record_t o_4007_uhf[4];
    OD_obj_record_t o_4008_edl[13];
    OD_obj_record_t o_4009_opd[14];
    OD_obj_record_t o_400A_beacon[14];
    OD_obj_record_t o_400B_rtc[5];
    OD_obj_record_t o_400C_node_manager[9];
    OD_obj_array_t o_400D_node_status;
    OD_obj_record_t o_400E_adcs_manager[5];
    OD_obj_record_t o_5004_battery_1[39];
    OD_obj_record_t o_500C_solar_1[17];
    OD_obj_record_t o_5010_solar_2[17];
    OD_obj_record_t o_5014_solar_3[17];
    OD_obj_record_t o_5018_solar_4[17];
    OD_obj_record_t o_501C_solar_5[17];
    OD_obj_record_t o_5020_solar_6[17];
    OD_obj_record_t o_502C_star_tracker_1[14];
    OD_obj_record_t o_5034_gps[21];
    OD_obj_record_t o_5038_adcs[26];
    OD_obj_record_t o_503C_rw_1[11];
    OD_obj_record_t o_5040_rw_2[11];
    OD_obj_record_t o_5044_rw_3[11];
    OD_obj_record_t o_5048_rw_4[11];
    OD_obj_record_t o_504C_dxwifi[14];
    OD_obj_record_t o_5050_cfc_processor[16];
    OD_obj_record_t o_5054_diode_test[9];
} ODObjs_t;

static CO_PROGMEM ODObjs_t ODObjs = {
    .o_1000_device_type = {
        .dataOrig = &OD_RAM.x1000_device_type,
        .attribute = ODA_SDO_R | ODA_TPDO | ODA_MB,
        .dataLength = 4
    },
    .o_1001_error_register = {
        .dataOrig = &OD_RAM.x1001_error_register,
        .attribute = ODA_SDO_R | ODA_TPDO,
        .dataLength = 1
    },
    .o_1003_predefined_error_field = {
        .dataOrig0 = &OD_RAM.x1003_predefined_error_field_sub0,
        .dataOrig = &OD_RAM.x1003_predefined_error_field[0],
        .attribute0 = ODA_SDO_R,
        .attribute = ODA_SDO_R | ODA_TPDO | ODA_MB,
        .dataElementLength = 4,
        .dataElementSizeof = sizeof(uint32_t),
    },
    .o_1005_cob_id_sync = {
        .dataOrig = &OD_RAM.x1005_cob_id_sync,
        .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
        .dataLength = 4
    },
    .o_1006_communication_cycle_period = {
        .dataOrig = &OD_RAM.x1006_communication_cycle_period,
        .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
        .dataLength = 4
    },
    .o_1014_cob_id_emergency_message = {
        .dataOrig = &OD_RAM.x1014_cob_id_emergency_message,
        .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
        .dataLength = 4
    },
    .o_1015_inhibit_time_emcy = {
        .dataOrig = &OD_RAM.x1015_inhibit_time_emcy,
        .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
        .dataLength = 2
    },
    .o_1016_consumer_heartbeat_time = {
        .dataOrig0 = &OD_RAM.x1016_consumer_heartbeat_time_sub0,
        .dataOrig = &OD_RAM.x1016_consumer_heartbeat_time[0],
        .attribute0 = ODA_SDO_R,
        .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
        .dataElementLength = 4,
        .dataElementSizeof = sizeof(uint32_t),
    },
    .o_1017_producer_heartbeat_time = {
        .dataOrig = &OD_RAM.x1017_producer_heartbeat_time,
        .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
        .dataLength = 2
    },
    .o_1018_identity = {
        {
            .dataOrig = &OD_RAM.x1018_identity.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1018_identity.vendor_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_TPDO | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1018_identity.product_code,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_TPDO | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1018_identity.revision_number,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_TPDO | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1018_identity.serial_number,
            .subIndex = 4,
            .attribute = ODA_SDO_R | ODA_TPDO | ODA_MB,
            .dataLength = 4
        },
    },
    .o_1019_synchronous_counter_overflow_value = {
        .dataOrig = &OD_RAM.x1019_synchronous_counter_overflow_value,
        .attribute = ODA_SDO_RW | ODA_TRPDO,
        .dataLength = 1
    },
    .o_1023_os_command = {
        {
            .dataOrig = &OD_RAM.x1023_os_command.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1023_os_command.command[0],
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1023_os_command.status,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_TPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1023_os_command.reply[0],
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 1
        },
    },
    .o_1200_sdo_server_parameter = {
        {
            .dataOrig = &OD_RAM.x1200_sdo_server_parameter.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1200_sdo_server_parameter.cob_id_client_to_server,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_TPDO | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1200_sdo_server_parameter.cob_id_server_to_client,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_TPDO | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1200_sdo_server_parameter.node_id_od_sdo_client,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_TPDO,
            .dataLength = 1
        },
    },
    .o_1280_sdo_client_parameter = {
        {
            .dataOrig = &OD_RAM.x1280_sdo_client_parameter.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1280_sdo_client_parameter.cob_id_client_to_server,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1280_sdo_client_parameter.cob_id_server_to_client,
            .subIndex = 2,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1280_sdo_client_parameter.node_id_of_sdo_server,
            .subIndex = 3,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
    },
    .o_1400_rpdo_1_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x1400_rpdo_1_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1400_rpdo_1_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1400_rpdo_1_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1400_rpdo_1_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_1401_rpdo_2_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x1401_rpdo_2_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1401_rpdo_2_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1401_rpdo_2_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1401_rpdo_2_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_1402_rpdo_3_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x1402_rpdo_3_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1402_rpdo_3_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1402_rpdo_3_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1402_rpdo_3_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_1403_rpdo_4_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x1403_rpdo_4_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1403_rpdo_4_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1403_rpdo_4_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1403_rpdo_4_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_1404_rpdo_5_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x1404_rpdo_5_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1404_rpdo_5_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1404_rpdo_5_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1404_rpdo_5_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_1405_rpdo_6_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x1405_rpdo_6_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1405_rpdo_6_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1405_rpdo_6_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1405_rpdo_6_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_1406_rpdo_7_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x1406_rpdo_7_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1406_rpdo_7_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1406_rpdo_7_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1406_rpdo_7_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_1407_rpdo_8_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x1407_rpdo_8_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1407_rpdo_8_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1407_rpdo_8_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1407_rpdo_8_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_1408_rpdo_9_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x1408_rpdo_9_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1408_rpdo_9_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1408_rpdo_9_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1408_rpdo_9_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_1409_rpdo_10_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x1409_rpdo_10_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1409_rpdo_10_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1409_rpdo_10_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1409_rpdo_10_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_140A_rpdo_11_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x140A_rpdo_11_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x140A_rpdo_11_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x140A_rpdo_11_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x140A_rpdo_11_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_140B_rpdo_12_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x140B_rpdo_12_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x140B_rpdo_12_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x140B_rpdo_12_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x140B_rpdo_12_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_140C_rpdo_13_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x140C_rpdo_13_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x140C_rpdo_13_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x140C_rpdo_13_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x140C_rpdo_13_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_140D_rpdo_14_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x140D_rpdo_14_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x140D_rpdo_14_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x140D_rpdo_14_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x140D_rpdo_14_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_140E_rpdo_15_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x140E_rpdo_15_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x140E_rpdo_15_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x140E_rpdo_15_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x140E_rpdo_15_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_140F_rpdo_16_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x140F_rpdo_16_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x140F_rpdo_16_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x140F_rpdo_16_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x140F_rpdo_16_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_1410_rpdo_17_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x1410_rpdo_17_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1410_rpdo_17_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1410_rpdo_17_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1410_rpdo_17_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_1411_rpdo_18_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x1411_rpdo_18_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1411_rpdo_18_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1411_rpdo_18_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1411_rpdo_18_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_1412_rpdo_19_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x1412_rpdo_19_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1412_rpdo_19_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1412_rpdo_19_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1412_rpdo_19_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_1413_rpdo_20_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x1413_rpdo_20_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1413_rpdo_20_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1413_rpdo_20_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1413_rpdo_20_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_1414_rpdo_21_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x1414_rpdo_21_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1414_rpdo_21_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1414_rpdo_21_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1414_rpdo_21_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_1415_rpdo_22_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x1415_rpdo_22_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1415_rpdo_22_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1415_rpdo_22_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1415_rpdo_22_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_1416_rpdo_23_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x1416_rpdo_23_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1416_rpdo_23_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1416_rpdo_23_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1416_rpdo_23_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_1417_rpdo_24_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x1417_rpdo_24_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1417_rpdo_24_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1417_rpdo_24_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1417_rpdo_24_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_1418_rpdo_25_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x1418_rpdo_25_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1418_rpdo_25_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1418_rpdo_25_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1418_rpdo_25_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_1419_rpdo_26_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x1419_rpdo_26_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1419_rpdo_26_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1419_rpdo_26_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1419_rpdo_26_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_141A_rpdo_27_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x141A_rpdo_27_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x141A_rpdo_27_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x141A_rpdo_27_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x141A_rpdo_27_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_141B_rpdo_28_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x141B_rpdo_28_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x141B_rpdo_28_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x141B_rpdo_28_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x141B_rpdo_28_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_141C_rpdo_29_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x141C_rpdo_29_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x141C_rpdo_29_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x141C_rpdo_29_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x141C_rpdo_29_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_141D_rpdo_30_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x141D_rpdo_30_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x141D_rpdo_30_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x141D_rpdo_30_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x141D_rpdo_30_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_141E_rpdo_31_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x141E_rpdo_31_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x141E_rpdo_31_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x141E_rpdo_31_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x141E_rpdo_31_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_141F_rpdo_32_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x141F_rpdo_32_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x141F_rpdo_32_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x141F_rpdo_32_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x141F_rpdo_32_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_1420_rpdo_33_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x1420_rpdo_33_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1420_rpdo_33_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1420_rpdo_33_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1420_rpdo_33_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_1421_rpdo_34_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x1421_rpdo_34_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1421_rpdo_34_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1421_rpdo_34_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1421_rpdo_34_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_1422_rpdo_35_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x1422_rpdo_35_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1422_rpdo_35_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1422_rpdo_35_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1422_rpdo_35_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_1423_rpdo_36_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x1423_rpdo_36_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1423_rpdo_36_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1423_rpdo_36_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1423_rpdo_36_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_1424_rpdo_37_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x1424_rpdo_37_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1424_rpdo_37_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1424_rpdo_37_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1424_rpdo_37_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_1425_rpdo_38_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x1425_rpdo_38_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1425_rpdo_38_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1425_rpdo_38_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1425_rpdo_38_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_1426_rpdo_39_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x1426_rpdo_39_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1426_rpdo_39_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1426_rpdo_39_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1426_rpdo_39_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_1427_rpdo_40_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x1427_rpdo_40_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1427_rpdo_40_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1427_rpdo_40_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1427_rpdo_40_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_1428_rpdo_41_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x1428_rpdo_41_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1428_rpdo_41_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1428_rpdo_41_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1428_rpdo_41_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_1429_rpdo_42_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x1429_rpdo_42_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1429_rpdo_42_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1429_rpdo_42_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1429_rpdo_42_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_142A_rpdo_43_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x142A_rpdo_43_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x142A_rpdo_43_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x142A_rpdo_43_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x142A_rpdo_43_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_142B_rpdo_44_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x142B_rpdo_44_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x142B_rpdo_44_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x142B_rpdo_44_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x142B_rpdo_44_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_142C_rpdo_45_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x142C_rpdo_45_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x142C_rpdo_45_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x142C_rpdo_45_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x142C_rpdo_45_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_142D_rpdo_46_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x142D_rpdo_46_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x142D_rpdo_46_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x142D_rpdo_46_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x142D_rpdo_46_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_142E_rpdo_47_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x142E_rpdo_47_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x142E_rpdo_47_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x142E_rpdo_47_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x142E_rpdo_47_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_142F_rpdo_48_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x142F_rpdo_48_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x142F_rpdo_48_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x142F_rpdo_48_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x142F_rpdo_48_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_1430_rpdo_49_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x1430_rpdo_49_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1430_rpdo_49_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1430_rpdo_49_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1430_rpdo_49_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_1431_rpdo_50_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x1431_rpdo_50_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1431_rpdo_50_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1431_rpdo_50_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1431_rpdo_50_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_1432_rpdo_51_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x1432_rpdo_51_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1432_rpdo_51_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1432_rpdo_51_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1432_rpdo_51_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_1433_rpdo_52_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x1433_rpdo_52_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1433_rpdo_52_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1433_rpdo_52_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1433_rpdo_52_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_1434_rpdo_53_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x1434_rpdo_53_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1434_rpdo_53_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1434_rpdo_53_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1434_rpdo_53_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_1435_rpdo_54_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x1435_rpdo_54_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1435_rpdo_54_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1435_rpdo_54_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1435_rpdo_54_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_1436_rpdo_55_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x1436_rpdo_55_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1436_rpdo_55_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1436_rpdo_55_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1436_rpdo_55_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_1437_rpdo_56_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x1437_rpdo_56_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1437_rpdo_56_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1437_rpdo_56_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1437_rpdo_56_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_1438_rpdo_57_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x1438_rpdo_57_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1438_rpdo_57_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1438_rpdo_57_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1438_rpdo_57_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_1439_rpdo_58_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x1439_rpdo_58_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1439_rpdo_58_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1439_rpdo_58_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1439_rpdo_58_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_143A_rpdo_59_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x143A_rpdo_59_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x143A_rpdo_59_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x143A_rpdo_59_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x143A_rpdo_59_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_143B_rpdo_60_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x143B_rpdo_60_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x143B_rpdo_60_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x143B_rpdo_60_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x143B_rpdo_60_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_143C_rpdo_61_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x143C_rpdo_61_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x143C_rpdo_61_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x143C_rpdo_61_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x143C_rpdo_61_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_143D_rpdo_62_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x143D_rpdo_62_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x143D_rpdo_62_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x143D_rpdo_62_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x143D_rpdo_62_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_143E_rpdo_63_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x143E_rpdo_63_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x143E_rpdo_63_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x143E_rpdo_63_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x143E_rpdo_63_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_143F_rpdo_64_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x143F_rpdo_64_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x143F_rpdo_64_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x143F_rpdo_64_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x143F_rpdo_64_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_1440_rpdo_65_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x1440_rpdo_65_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1440_rpdo_65_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1440_rpdo_65_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1440_rpdo_65_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_1441_rpdo_66_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x1441_rpdo_66_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1441_rpdo_66_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1441_rpdo_66_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1441_rpdo_66_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_1442_rpdo_67_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x1442_rpdo_67_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1442_rpdo_67_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1442_rpdo_67_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1442_rpdo_67_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_1443_rpdo_68_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x1443_rpdo_68_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1443_rpdo_68_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1443_rpdo_68_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1443_rpdo_68_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_1444_rpdo_69_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x1444_rpdo_69_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1444_rpdo_69_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1444_rpdo_69_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1444_rpdo_69_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_1445_rpdo_70_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x1445_rpdo_70_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1445_rpdo_70_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1445_rpdo_70_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1445_rpdo_70_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_1446_rpdo_71_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x1446_rpdo_71_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1446_rpdo_71_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1446_rpdo_71_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1446_rpdo_71_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_1447_rpdo_72_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x1447_rpdo_72_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1447_rpdo_72_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1447_rpdo_72_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1447_rpdo_72_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_1448_rpdo_73_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x1448_rpdo_73_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1448_rpdo_73_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1448_rpdo_73_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1448_rpdo_73_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_1449_rpdo_74_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x1449_rpdo_74_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1449_rpdo_74_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1449_rpdo_74_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1449_rpdo_74_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_144A_rpdo_75_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x144A_rpdo_75_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x144A_rpdo_75_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x144A_rpdo_75_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x144A_rpdo_75_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_144B_rpdo_76_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x144B_rpdo_76_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x144B_rpdo_76_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x144B_rpdo_76_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x144B_rpdo_76_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_144C_rpdo_77_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x144C_rpdo_77_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x144C_rpdo_77_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x144C_rpdo_77_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x144C_rpdo_77_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_144D_rpdo_78_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x144D_rpdo_78_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x144D_rpdo_78_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x144D_rpdo_78_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x144D_rpdo_78_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_144E_rpdo_79_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x144E_rpdo_79_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x144E_rpdo_79_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x144E_rpdo_79_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x144E_rpdo_79_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_144F_rpdo_80_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x144F_rpdo_80_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x144F_rpdo_80_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x144F_rpdo_80_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x144F_rpdo_80_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
    },
    .o_1600_rpdo_1_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x1600_rpdo_1_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1600_rpdo_1_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1600_rpdo_1_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1600_rpdo_1_mapping_parameters.mapping_object_3,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1600_rpdo_1_mapping_parameters.mapping_object_4,
            .subIndex = 4,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_1601_rpdo_2_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x1601_rpdo_2_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1601_rpdo_2_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1601_rpdo_2_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1601_rpdo_2_mapping_parameters.mapping_object_3,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_1602_rpdo_3_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x1602_rpdo_3_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1602_rpdo_3_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1602_rpdo_3_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1602_rpdo_3_mapping_parameters.mapping_object_3,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1602_rpdo_3_mapping_parameters.mapping_object_4,
            .subIndex = 4,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_1603_rpdo_4_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x1603_rpdo_4_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1603_rpdo_4_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1603_rpdo_4_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1603_rpdo_4_mapping_parameters.mapping_object_3,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1603_rpdo_4_mapping_parameters.mapping_object_4,
            .subIndex = 4,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_1604_rpdo_5_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x1604_rpdo_5_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1604_rpdo_5_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1604_rpdo_5_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1604_rpdo_5_mapping_parameters.mapping_object_3,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1604_rpdo_5_mapping_parameters.mapping_object_4,
            .subIndex = 4,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_1605_rpdo_6_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x1605_rpdo_6_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1605_rpdo_6_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1605_rpdo_6_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1605_rpdo_6_mapping_parameters.mapping_object_3,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1605_rpdo_6_mapping_parameters.mapping_object_4,
            .subIndex = 4,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_1606_rpdo_7_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x1606_rpdo_7_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1606_rpdo_7_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1606_rpdo_7_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1606_rpdo_7_mapping_parameters.mapping_object_3,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_1607_rpdo_8_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x1607_rpdo_8_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1607_rpdo_8_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1607_rpdo_8_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1607_rpdo_8_mapping_parameters.mapping_object_3,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1607_rpdo_8_mapping_parameters.mapping_object_4,
            .subIndex = 4,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_1608_rpdo_9_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x1608_rpdo_9_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1608_rpdo_9_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1608_rpdo_9_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1608_rpdo_9_mapping_parameters.mapping_object_3,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1608_rpdo_9_mapping_parameters.mapping_object_4,
            .subIndex = 4,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_1609_rpdo_10_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x1609_rpdo_10_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1609_rpdo_10_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1609_rpdo_10_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1609_rpdo_10_mapping_parameters.mapping_object_3,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1609_rpdo_10_mapping_parameters.mapping_object_4,
            .subIndex = 4,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_160A_rpdo_11_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x160A_rpdo_11_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x160A_rpdo_11_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x160A_rpdo_11_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x160A_rpdo_11_mapping_parameters.mapping_object_3,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x160A_rpdo_11_mapping_parameters.mapping_object_4,
            .subIndex = 4,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_160B_rpdo_12_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x160B_rpdo_12_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x160B_rpdo_12_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x160B_rpdo_12_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x160B_rpdo_12_mapping_parameters.mapping_object_3,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x160B_rpdo_12_mapping_parameters.mapping_object_4,
            .subIndex = 4,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_160C_rpdo_13_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x160C_rpdo_13_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x160C_rpdo_13_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x160C_rpdo_13_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_160D_rpdo_14_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x160D_rpdo_14_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x160D_rpdo_14_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x160D_rpdo_14_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x160D_rpdo_14_mapping_parameters.mapping_object_3,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x160D_rpdo_14_mapping_parameters.mapping_object_4,
            .subIndex = 4,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x160D_rpdo_14_mapping_parameters.mapping_object_5,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x160D_rpdo_14_mapping_parameters.mapping_object_6,
            .subIndex = 6,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_160E_rpdo_15_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x160E_rpdo_15_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x160E_rpdo_15_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x160E_rpdo_15_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x160E_rpdo_15_mapping_parameters.mapping_object_3,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x160E_rpdo_15_mapping_parameters.mapping_object_4,
            .subIndex = 4,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_160F_rpdo_16_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x160F_rpdo_16_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x160F_rpdo_16_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x160F_rpdo_16_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x160F_rpdo_16_mapping_parameters.mapping_object_3,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x160F_rpdo_16_mapping_parameters.mapping_object_4,
            .subIndex = 4,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_1610_rpdo_17_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x1610_rpdo_17_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1610_rpdo_17_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1610_rpdo_17_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_1611_rpdo_18_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x1611_rpdo_18_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1611_rpdo_18_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1611_rpdo_18_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1611_rpdo_18_mapping_parameters.mapping_object_3,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1611_rpdo_18_mapping_parameters.mapping_object_4,
            .subIndex = 4,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1611_rpdo_18_mapping_parameters.mapping_object_5,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1611_rpdo_18_mapping_parameters.mapping_object_6,
            .subIndex = 6,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_1612_rpdo_19_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x1612_rpdo_19_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1612_rpdo_19_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1612_rpdo_19_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1612_rpdo_19_mapping_parameters.mapping_object_3,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1612_rpdo_19_mapping_parameters.mapping_object_4,
            .subIndex = 4,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_1613_rpdo_20_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x1613_rpdo_20_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1613_rpdo_20_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1613_rpdo_20_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1613_rpdo_20_mapping_parameters.mapping_object_3,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1613_rpdo_20_mapping_parameters.mapping_object_4,
            .subIndex = 4,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_1614_rpdo_21_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x1614_rpdo_21_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1614_rpdo_21_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1614_rpdo_21_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_1615_rpdo_22_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x1615_rpdo_22_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1615_rpdo_22_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1615_rpdo_22_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1615_rpdo_22_mapping_parameters.mapping_object_3,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1615_rpdo_22_mapping_parameters.mapping_object_4,
            .subIndex = 4,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1615_rpdo_22_mapping_parameters.mapping_object_5,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1615_rpdo_22_mapping_parameters.mapping_object_6,
            .subIndex = 6,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_1616_rpdo_23_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x1616_rpdo_23_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1616_rpdo_23_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1616_rpdo_23_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1616_rpdo_23_mapping_parameters.mapping_object_3,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1616_rpdo_23_mapping_parameters.mapping_object_4,
            .subIndex = 4,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_1617_rpdo_24_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x1617_rpdo_24_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1617_rpdo_24_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1617_rpdo_24_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1617_rpdo_24_mapping_parameters.mapping_object_3,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1617_rpdo_24_mapping_parameters.mapping_object_4,
            .subIndex = 4,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_1618_rpdo_25_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x1618_rpdo_25_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1618_rpdo_25_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1618_rpdo_25_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_1619_rpdo_26_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x1619_rpdo_26_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1619_rpdo_26_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1619_rpdo_26_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1619_rpdo_26_mapping_parameters.mapping_object_3,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1619_rpdo_26_mapping_parameters.mapping_object_4,
            .subIndex = 4,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1619_rpdo_26_mapping_parameters.mapping_object_5,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1619_rpdo_26_mapping_parameters.mapping_object_6,
            .subIndex = 6,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_161A_rpdo_27_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x161A_rpdo_27_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x161A_rpdo_27_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x161A_rpdo_27_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x161A_rpdo_27_mapping_parameters.mapping_object_3,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x161A_rpdo_27_mapping_parameters.mapping_object_4,
            .subIndex = 4,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_161B_rpdo_28_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x161B_rpdo_28_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x161B_rpdo_28_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x161B_rpdo_28_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x161B_rpdo_28_mapping_parameters.mapping_object_3,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x161B_rpdo_28_mapping_parameters.mapping_object_4,
            .subIndex = 4,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_161C_rpdo_29_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x161C_rpdo_29_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x161C_rpdo_29_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x161C_rpdo_29_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_161D_rpdo_30_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x161D_rpdo_30_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x161D_rpdo_30_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x161D_rpdo_30_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x161D_rpdo_30_mapping_parameters.mapping_object_3,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x161D_rpdo_30_mapping_parameters.mapping_object_4,
            .subIndex = 4,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x161D_rpdo_30_mapping_parameters.mapping_object_5,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x161D_rpdo_30_mapping_parameters.mapping_object_6,
            .subIndex = 6,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_161E_rpdo_31_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x161E_rpdo_31_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x161E_rpdo_31_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x161E_rpdo_31_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x161E_rpdo_31_mapping_parameters.mapping_object_3,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x161E_rpdo_31_mapping_parameters.mapping_object_4,
            .subIndex = 4,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_161F_rpdo_32_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x161F_rpdo_32_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x161F_rpdo_32_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x161F_rpdo_32_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x161F_rpdo_32_mapping_parameters.mapping_object_3,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x161F_rpdo_32_mapping_parameters.mapping_object_4,
            .subIndex = 4,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_1620_rpdo_33_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x1620_rpdo_33_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1620_rpdo_33_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1620_rpdo_33_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_1621_rpdo_34_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x1621_rpdo_34_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1621_rpdo_34_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1621_rpdo_34_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1621_rpdo_34_mapping_parameters.mapping_object_3,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1621_rpdo_34_mapping_parameters.mapping_object_4,
            .subIndex = 4,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1621_rpdo_34_mapping_parameters.mapping_object_5,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1621_rpdo_34_mapping_parameters.mapping_object_6,
            .subIndex = 6,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_1622_rpdo_35_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x1622_rpdo_35_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1622_rpdo_35_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1622_rpdo_35_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1622_rpdo_35_mapping_parameters.mapping_object_3,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1622_rpdo_35_mapping_parameters.mapping_object_4,
            .subIndex = 4,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1622_rpdo_35_mapping_parameters.mapping_object_5,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1622_rpdo_35_mapping_parameters.mapping_object_6,
            .subIndex = 6,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_1623_rpdo_36_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x1623_rpdo_36_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1623_rpdo_36_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1623_rpdo_36_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_1624_rpdo_37_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x1624_rpdo_37_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1624_rpdo_37_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1624_rpdo_37_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1624_rpdo_37_mapping_parameters.mapping_object_3,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1624_rpdo_37_mapping_parameters.mapping_object_4,
            .subIndex = 4,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_1625_rpdo_38_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x1625_rpdo_38_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1625_rpdo_38_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_1626_rpdo_39_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x1626_rpdo_39_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1626_rpdo_39_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1626_rpdo_39_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1626_rpdo_39_mapping_parameters.mapping_object_3,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1626_rpdo_39_mapping_parameters.mapping_object_4,
            .subIndex = 4,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1626_rpdo_39_mapping_parameters.mapping_object_5,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1626_rpdo_39_mapping_parameters.mapping_object_6,
            .subIndex = 6,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_1627_rpdo_40_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x1627_rpdo_40_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1627_rpdo_40_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1627_rpdo_40_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_1628_rpdo_41_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x1628_rpdo_41_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1628_rpdo_41_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_1629_rpdo_42_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x1629_rpdo_42_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1629_rpdo_42_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1629_rpdo_42_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_162A_rpdo_43_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x162A_rpdo_43_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x162A_rpdo_43_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x162A_rpdo_43_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_162B_rpdo_44_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x162B_rpdo_44_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x162B_rpdo_44_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x162B_rpdo_44_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_162C_rpdo_45_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x162C_rpdo_45_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x162C_rpdo_45_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x162C_rpdo_45_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x162C_rpdo_45_mapping_parameters.mapping_object_3,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x162C_rpdo_45_mapping_parameters.mapping_object_4,
            .subIndex = 4,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_162D_rpdo_46_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x162D_rpdo_46_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x162D_rpdo_46_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_162E_rpdo_47_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x162E_rpdo_47_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x162E_rpdo_47_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x162E_rpdo_47_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x162E_rpdo_47_mapping_parameters.mapping_object_3,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_162F_rpdo_48_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x162F_rpdo_48_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x162F_rpdo_48_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x162F_rpdo_48_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x162F_rpdo_48_mapping_parameters.mapping_object_3,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_1630_rpdo_49_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x1630_rpdo_49_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1630_rpdo_49_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_1631_rpdo_50_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x1631_rpdo_50_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1631_rpdo_50_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1631_rpdo_50_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1631_rpdo_50_mapping_parameters.mapping_object_3,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_1632_rpdo_51_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x1632_rpdo_51_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1632_rpdo_51_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1632_rpdo_51_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1632_rpdo_51_mapping_parameters.mapping_object_3,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_1633_rpdo_52_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x1633_rpdo_52_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1633_rpdo_52_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1633_rpdo_52_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1633_rpdo_52_mapping_parameters.mapping_object_3,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_1634_rpdo_53_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x1634_rpdo_53_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1634_rpdo_53_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1634_rpdo_53_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1634_rpdo_53_mapping_parameters.mapping_object_3,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_1635_rpdo_54_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x1635_rpdo_54_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1635_rpdo_54_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1635_rpdo_54_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_1636_rpdo_55_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x1636_rpdo_55_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1636_rpdo_55_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1636_rpdo_55_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_1637_rpdo_56_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x1637_rpdo_56_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1637_rpdo_56_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1637_rpdo_56_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_1638_rpdo_57_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x1638_rpdo_57_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1638_rpdo_57_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1638_rpdo_57_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1638_rpdo_57_mapping_parameters.mapping_object_3,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_1639_rpdo_58_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x1639_rpdo_58_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1639_rpdo_58_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1639_rpdo_58_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_163A_rpdo_59_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x163A_rpdo_59_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x163A_rpdo_59_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x163A_rpdo_59_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_163B_rpdo_60_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x163B_rpdo_60_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x163B_rpdo_60_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x163B_rpdo_60_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x163B_rpdo_60_mapping_parameters.mapping_object_3,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_163C_rpdo_61_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x163C_rpdo_61_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x163C_rpdo_61_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x163C_rpdo_61_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x163C_rpdo_61_mapping_parameters.mapping_object_3,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_163D_rpdo_62_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x163D_rpdo_62_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x163D_rpdo_62_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x163D_rpdo_62_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_163E_rpdo_63_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x163E_rpdo_63_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x163E_rpdo_63_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x163E_rpdo_63_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_163F_rpdo_64_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x163F_rpdo_64_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x163F_rpdo_64_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x163F_rpdo_64_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x163F_rpdo_64_mapping_parameters.mapping_object_3,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_1640_rpdo_65_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x1640_rpdo_65_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1640_rpdo_65_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1640_rpdo_65_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1640_rpdo_65_mapping_parameters.mapping_object_3,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_1641_rpdo_66_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x1641_rpdo_66_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1641_rpdo_66_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1641_rpdo_66_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_1642_rpdo_67_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x1642_rpdo_67_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1642_rpdo_67_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1642_rpdo_67_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_1643_rpdo_68_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x1643_rpdo_68_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1643_rpdo_68_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1643_rpdo_68_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1643_rpdo_68_mapping_parameters.mapping_object_3,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_1644_rpdo_69_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x1644_rpdo_69_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1644_rpdo_69_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1644_rpdo_69_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1644_rpdo_69_mapping_parameters.mapping_object_3,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_1645_rpdo_70_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x1645_rpdo_70_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1645_rpdo_70_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1645_rpdo_70_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_1646_rpdo_71_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x1646_rpdo_71_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1646_rpdo_71_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1646_rpdo_71_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_1647_rpdo_72_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x1647_rpdo_72_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1647_rpdo_72_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1647_rpdo_72_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1647_rpdo_72_mapping_parameters.mapping_object_3,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_1648_rpdo_73_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x1648_rpdo_73_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1648_rpdo_73_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1648_rpdo_73_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1648_rpdo_73_mapping_parameters.mapping_object_3,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1648_rpdo_73_mapping_parameters.mapping_object_4,
            .subIndex = 4,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1648_rpdo_73_mapping_parameters.mapping_object_5,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1648_rpdo_73_mapping_parameters.mapping_object_6,
            .subIndex = 6,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_1649_rpdo_74_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x1649_rpdo_74_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1649_rpdo_74_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1649_rpdo_74_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_164A_rpdo_75_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x164A_rpdo_75_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x164A_rpdo_75_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x164A_rpdo_75_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x164A_rpdo_75_mapping_parameters.mapping_object_3,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x164A_rpdo_75_mapping_parameters.mapping_object_4,
            .subIndex = 4,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x164A_rpdo_75_mapping_parameters.mapping_object_5,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_164B_rpdo_76_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x164B_rpdo_76_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x164B_rpdo_76_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x164B_rpdo_76_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x164B_rpdo_76_mapping_parameters.mapping_object_3,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x164B_rpdo_76_mapping_parameters.mapping_object_4,
            .subIndex = 4,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x164B_rpdo_76_mapping_parameters.mapping_object_5,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x164B_rpdo_76_mapping_parameters.mapping_object_6,
            .subIndex = 6,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_164C_rpdo_77_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x164C_rpdo_77_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x164C_rpdo_77_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x164C_rpdo_77_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_164D_rpdo_78_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x164D_rpdo_78_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x164D_rpdo_78_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x164D_rpdo_78_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x164D_rpdo_78_mapping_parameters.mapping_object_3,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x164D_rpdo_78_mapping_parameters.mapping_object_4,
            .subIndex = 4,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x164D_rpdo_78_mapping_parameters.mapping_object_5,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x164D_rpdo_78_mapping_parameters.mapping_object_6,
            .subIndex = 6,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x164D_rpdo_78_mapping_parameters.mapping_object_7,
            .subIndex = 7,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_164E_rpdo_79_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x164E_rpdo_79_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x164E_rpdo_79_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x164E_rpdo_79_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x164E_rpdo_79_mapping_parameters.mapping_object_3,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x164E_rpdo_79_mapping_parameters.mapping_object_4,
            .subIndex = 4,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x164E_rpdo_79_mapping_parameters.mapping_object_5,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_164F_rpdo_80_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x164F_rpdo_80_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x164F_rpdo_80_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x164F_rpdo_80_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x164F_rpdo_80_mapping_parameters.mapping_object_3,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_1800_tpdo_1_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x1800_tpdo_1_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1800_tpdo_1_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1800_tpdo_1_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1800_tpdo_1_communication_parameters.inhibit_time,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x1800_tpdo_1_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x1800_tpdo_1_communication_parameters.sync_start_value,
            .subIndex = 6,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
    },
    .o_1801_tpdo_2_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x1801_tpdo_2_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1801_tpdo_2_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1801_tpdo_2_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1801_tpdo_2_communication_parameters.inhibit_time,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x1801_tpdo_2_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x1801_tpdo_2_communication_parameters.sync_start_value,
            .subIndex = 6,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
    },
    .o_1802_tpdo_3_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x1802_tpdo_3_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1802_tpdo_3_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1802_tpdo_3_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1802_tpdo_3_communication_parameters.inhibit_time,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x1802_tpdo_3_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x1802_tpdo_3_communication_parameters.sync_start_value,
            .subIndex = 6,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
    },
    .o_1803_tpdo_4_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x1803_tpdo_4_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1803_tpdo_4_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1803_tpdo_4_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1803_tpdo_4_communication_parameters.inhibit_time,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x1803_tpdo_4_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x1803_tpdo_4_communication_parameters.sync_start_value,
            .subIndex = 6,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
    },
    .o_1804_tpdo_5_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x1804_tpdo_5_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1804_tpdo_5_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1804_tpdo_5_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1804_tpdo_5_communication_parameters.inhibit_time,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x1804_tpdo_5_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x1804_tpdo_5_communication_parameters.sync_start_value,
            .subIndex = 6,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
    },
    .o_1805_tpdo_6_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x1805_tpdo_6_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1805_tpdo_6_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1805_tpdo_6_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1805_tpdo_6_communication_parameters.inhibit_time,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x1805_tpdo_6_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x1805_tpdo_6_communication_parameters.sync_start_value,
            .subIndex = 6,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
    },
    .o_1806_tpdo_7_communication_parameters = {
        {
            .dataOrig = &OD_RAM.x1806_tpdo_7_communication_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1806_tpdo_7_communication_parameters.cob_id,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1806_tpdo_7_communication_parameters.transmission_type,
            .subIndex = 2,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1806_tpdo_7_communication_parameters.inhibit_time,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x1806_tpdo_7_communication_parameters.event_timer,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x1806_tpdo_7_communication_parameters.sync_start_value,
            .subIndex = 6,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
    },
    .o_1A00_tpdo_1_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x1A00_tpdo_1_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1A00_tpdo_1_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_1A01_tpdo_2_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x1A01_tpdo_2_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1A01_tpdo_2_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1A01_tpdo_2_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1A01_tpdo_2_mapping_parameters.mapping_object_3,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1A01_tpdo_2_mapping_parameters.mapping_object_4,
            .subIndex = 4,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1A01_tpdo_2_mapping_parameters.mapping_object_5,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_1A02_tpdo_3_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x1A02_tpdo_3_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1A02_tpdo_3_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1A02_tpdo_3_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_1A03_tpdo_4_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x1A03_tpdo_4_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1A03_tpdo_4_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1A03_tpdo_4_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_1A04_tpdo_5_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x1A04_tpdo_5_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1A04_tpdo_5_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1A04_tpdo_5_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1A04_tpdo_5_mapping_parameters.mapping_object_3,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1A04_tpdo_5_mapping_parameters.mapping_object_4,
            .subIndex = 4,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1A04_tpdo_5_mapping_parameters.mapping_object_5,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1A04_tpdo_5_mapping_parameters.mapping_object_6,
            .subIndex = 6,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1A04_tpdo_5_mapping_parameters.mapping_object_7,
            .subIndex = 7,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_1A05_tpdo_6_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x1A05_tpdo_6_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1A05_tpdo_6_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1A05_tpdo_6_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_1A06_tpdo_7_mapping_parameters = {
        {
            .dataOrig = &OD_RAM.x1A06_tpdo_7_mapping_parameters.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1A06_tpdo_7_mapping_parameters.mapping_object_1,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1A06_tpdo_7_mapping_parameters.mapping_object_2,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1A06_tpdo_7_mapping_parameters.mapping_object_3,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
    },
    .o_2010_scet = {
        .dataOrig = &OD_RAM.x2010_scet,
        .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
        .dataLength = 8
    },
    .o_2011_utc = {
        .dataOrig = &OD_RAM.x2011_utc,
        .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
        .dataLength = 8
    },
    .o_3000_satellite_id = {
        .dataOrig = &OD_RAM.x3000_satellite_id,
        .attribute = ODA_SDO_R | ODA_TPDO,
        .dataLength = 1
    },
    .o_3001_flight_mode = {
        .dataOrig = &OD_RAM.x3001_flight_mode,
        .attribute = ODA_SDO_R | ODA_TPDO,
        .dataLength = 1
    },
    .o_3002_versions = {
        {
            .dataOrig = &OD_RAM.x3002_versions.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x3002_versions.hw_version[0],
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_STR,
            .dataLength = 3
        },
        {
            .dataOrig = &OD_RAM.x3002_versions.configs_version[0],
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_STR,
            .dataLength = 20
        },
        {
            .dataOrig = &OD_RAM.x3002_versions.olaf_version[0],
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_STR,
            .dataLength = 5
        },
        {
            .dataOrig = &OD_RAM.x3002_versions.sw_version[0],
            .subIndex = 4,
            .attribute = ODA_SDO_R | ODA_STR,
            .dataLength = 5
        },
    },
    .o_3003_system = {
        {
            .dataOrig = &OD_RAM.x3003_system.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x3003_system.reset,
            .subIndex = 1,
            .attribute = ODA_SDO_W | ODA_RPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x3003_system.storage_percent,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_TPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x3003_system.ram_percent,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_TPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x3003_system.unix_time,
            .subIndex = 4,
            .attribute = ODA_SDO_R | ODA_TPDO | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x3003_system.uptime,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_TPDO | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x3003_system.power_cycles,
            .subIndex = 6,
            .attribute = ODA_SDO_R | ODA_TPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x3003_system.boot_select,
            .subIndex = 9,
            .attribute = ODA_SDO_R | ODA_TPDO,
            .dataLength = 1
        },
    },
    .o_3004_fread_cache = {
        {
            .dataOrig = &OD_RAM.x3004_fread_cache.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x3004_fread_cache.length,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_TPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x3004_fread_cache.files_json[0],
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_STR,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x3004_fread_cache.file_name[0],
            .subIndex = 3,
            .attribute = ODA_SDO_RW | ODA_STR,
            .dataLength = 0
        },
        {
            .dataOrig = NULL,
            .subIndex = 4,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 0
        },
        {
            .dataOrig = &OD_RAM.x3004_fread_cache.remove,
            .subIndex = 5,
            .attribute = ODA_SDO_W | ODA_RPDO,
            .dataLength = 1
        },
    },
    .o_3005_fwrite_cache = {
        {
            .dataOrig = &OD_RAM.x3005_fwrite_cache.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x3005_fwrite_cache.length,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_TPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x3005_fwrite_cache.files_json[0],
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_STR,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x3005_fwrite_cache.file_name[0],
            .subIndex = 3,
            .attribute = ODA_SDO_RW | ODA_STR,
            .dataLength = 0
        },
        {
            .dataOrig = NULL,
            .subIndex = 4,
            .attribute = ODA_SDO_W | ODA_MB,
            .dataLength = 0
        },
        {
            .dataOrig = &OD_RAM.x3005_fwrite_cache.remove,
            .subIndex = 5,
            .attribute = ODA_SDO_W | ODA_RPDO,
            .dataLength = 1
        },
    },
    .o_3006_updater = {
        {
            .dataOrig = &OD_RAM.x3006_updater.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x3006_updater.status,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_TPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x3006_updater.cache_length,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_TPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x3006_updater.cache_files_json[0],
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_STR,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x3006_updater.update,
            .subIndex = 4,
            .attribute = ODA_SDO_W | ODA_RPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x3006_updater.make_status_file,
            .subIndex = 5,
            .attribute = ODA_SDO_W | ODA_RPDO,
            .dataLength = 1
        },
    },
    .o_3007_logs = {
        {
            .dataOrig = &OD_RAM.x3007_logs.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x3007_logs.make_file,
            .subIndex = 1,
            .attribute = ODA_SDO_W | ODA_RPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x3007_logs.since_boot[0],
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_STR,
            .dataLength = 0
        },
    },
    .o_3008_daemons = {
        {
            .dataOrig = &OD_RAM.x3008_daemons.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x3008_daemons.total,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_TPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x3008_daemons.active,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_TPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x3008_daemons.failed,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_TPDO,
            .dataLength = 1
        },
    },
    .o_3009_board_id = {
        .dataOrig = &OD_RAM.x3009_board_id,
        .attribute = ODA_SDO_R | ODA_TPDO,
        .dataLength = 1
    },
    .o_4000_status = {
        .dataOrig = &OD_RAM.x4000_status,
        .attribute = ODA_SDO_R | ODA_TPDO,
        .dataLength = 1
    },
    .o_4001_reset_timeout = {
        .dataOrig = &OD_RAM.x4001_reset_timeout,
        .attribute = ODA_SDO_R | ODA_TPDO | ODA_MB,
        .dataLength = 4
    },
    .o_4002_mode = {
        .dataOrig = &OD_RAM.x4002_mode,
        .attribute = ODA_SDO_R | ODA_TPDO,
        .dataLength = 1
    },
    .o_4003_hw_id = {
        .dataOrig = &OD_RAM.x4003_hw_id,
        .attribute = ODA_SDO_R | ODA_TPDO,
        .dataLength = 1
    },
    .o_4004_tx_control = {
        {
            .dataOrig = &OD_RAM.x4004_tx_control.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x4004_tx_control.enable,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_TPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x4004_tx_control.timeout,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_TPDO | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x4004_tx_control.last_enable_timestamp,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_TPDO | ODA_MB,
            .dataLength = 4
        },
    },
    .o_4005_antennas = {
        {
            .dataOrig = &OD_RAM.x4005_antennas.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x4005_antennas.deployed,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_TPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x4005_antennas.attempts,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_TPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x4005_antennas.pre_attempt_timeout,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_TPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x4005_antennas.attempt_timeout,
            .subIndex = 4,
            .attribute = ODA_SDO_R | ODA_TPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x4005_antennas.reattempt_timeout,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_TPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x4005_antennas.deploy_monopole_now,
            .subIndex = 6,
            .attribute = ODA_SDO_W | ODA_RPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x4005_antennas.deploy_helical_now,
            .subIndex = 7,
            .attribute = ODA_SDO_W | ODA_RPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x4005_antennas.good_test_threshold,
            .subIndex = 8,
            .attribute = ODA_SDO_R | ODA_TPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x4005_antennas.test_monopole_is_good,
            .subIndex = 9,
            .attribute = ODA_SDO_R | ODA_TPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x4005_antennas.test_helical_is_good,
            .subIndex = 10,
            .attribute = ODA_SDO_R | ODA_TPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x4005_antennas.monopole_voltage,
            .subIndex = 11,
            .attribute = ODA_SDO_R | ODA_TPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x4005_antennas.helical_voltage,
            .subIndex = 12,
            .attribute = ODA_SDO_R | ODA_TPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x4005_antennas.attempt_between_timeout,
            .subIndex = 13,
            .attribute = ODA_SDO_R | ODA_TPDO | ODA_MB,
            .dataLength = 4
        },
    },
    .o_4006_lband = {
        {
            .dataOrig = &OD_RAM.x4006_lband.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x4006_lband.rx_bytes,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_TPDO | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x4006_lband.rx_packets,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_TPDO | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x4006_lband.rssi,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_TPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x4006_lband.synth_lock,
            .subIndex = 4,
            .attribute = ODA_SDO_R | ODA_TPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x4006_lband.synth_relock_count,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_TPDO,
            .dataLength = 1
        },
    },
    .o_4007_uhf = {
        {
            .dataOrig = &OD_RAM.x4007_uhf.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x4007_uhf.rx_bytes,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_TPDO | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x4007_uhf.rx_packets,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_TPDO | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x4007_uhf.rssi,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_TPDO,
            .dataLength = 1
        },
    },
    .o_4008_edl = {
        {
            .dataOrig = &OD_RAM.x4008_edl.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x4008_edl.crypto_key_0[0],
            .subIndex = 1,
            .attribute = ODA_SDO_W | ODA_MB,
            .dataLength = 32
        },
        {
            .dataOrig = &OD_RAM.x4008_edl.crypto_key_1[0],
            .subIndex = 2,
            .attribute = ODA_SDO_W | ODA_MB,
            .dataLength = 32
        },
        {
            .dataOrig = &OD_RAM.x4008_edl.crypto_key_2[0],
            .subIndex = 3,
            .attribute = ODA_SDO_W | ODA_MB,
            .dataLength = 32
        },
        {
            .dataOrig = &OD_RAM.x4008_edl.crypto_key_3[0],
            .subIndex = 4,
            .attribute = ODA_SDO_W | ODA_MB,
            .dataLength = 32
        },
        {
            .dataOrig = &OD_RAM.x4008_edl.active_crypto_key,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_TPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x4008_edl.sequence_count,
            .subIndex = 6,
            .attribute = ODA_SDO_R | ODA_TPDO | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x4008_edl.rejected_count,
            .subIndex = 7,
            .attribute = ODA_SDO_R | ODA_TPDO | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x4008_edl.vc1_sequence_count,
            .subIndex = 8,
            .attribute = ODA_SDO_R | ODA_TPDO | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x4008_edl.vc1_rejected_count,
            .subIndex = 9,
            .attribute = ODA_SDO_R | ODA_TPDO | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x4008_edl.vc1_expedite_count,
            .subIndex = 10,
            .attribute = ODA_SDO_R | ODA_TPDO | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x4008_edl.last_timestamp,
            .subIndex = 11,
            .attribute = ODA_SDO_R | ODA_TPDO | ODA_MB,
            .dataLength = 8
        },
        {
            .dataOrig = &OD_RAM.x4008_edl.timeout,
            .subIndex = 12,
            .attribute = ODA_SDO_R | ODA_TPDO | ODA_MB,
            .dataLength = 4
        },
    },
    .o_4009_opd = {
        {
            .dataOrig = &OD_RAM.x4009_opd.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x4009_opd.status,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x4009_opd.has_fault,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_TPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x4009_opd.current,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_TPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x4009_opd.scan,
            .subIndex = 4,
            .attribute = ODA_SDO_W | ODA_RPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x4009_opd.reset,
            .subIndex = 5,
            .attribute = ODA_SDO_W | ODA_RPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x4009_opd.reset_attempts,
            .subIndex = 6,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x4009_opd.reset_delay,
            .subIndex = 7,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x4009_opd.nodes_status_json[0],
            .subIndex = 8,
            .attribute = ODA_SDO_R | ODA_STR,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x4009_opd.node_select,
            .subIndex = 9,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x4009_opd.node_status,
            .subIndex = 10,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x4009_opd.node_reset,
            .subIndex = 11,
            .attribute = ODA_SDO_W | ODA_RPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x4009_opd.node_reset_attempts,
            .subIndex = 12,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x4009_opd.uart_node_select,
            .subIndex = 13,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
    },
    .o_400A_beacon = {
        {
            .dataOrig = &OD_RAM.x400A_beacon.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x400A_beacon.revision,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_TPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x400A_beacon.src_callsign[0],
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_STR,
            .dataLength = 6
        },
        {
            .dataOrig = &OD_RAM.x400A_beacon.dest_callsign[0],
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_STR,
            .dataLength = 5
        },
        {
            .dataOrig = &OD_RAM.x400A_beacon.start_chars[0],
            .subIndex = 4,
            .attribute = ODA_SDO_R | ODA_STR,
            .dataLength = 3
        },
        {
            .dataOrig = &OD_RAM.x400A_beacon.delay,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_TPDO | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x400A_beacon.send_now,
            .subIndex = 6,
            .attribute = ODA_SDO_W | ODA_RPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x400A_beacon.last_timestamp,
            .subIndex = 7,
            .attribute = ODA_SDO_R | ODA_TPDO | ODA_MB,
            .dataLength = 8
        },
        {
            .dataOrig = &OD_RAM.x400A_beacon.src_ssid,
            .subIndex = 8,
            .attribute = ODA_SDO_R | ODA_TPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x400A_beacon.dest_ssid,
            .subIndex = 9,
            .attribute = ODA_SDO_R | ODA_TPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x400A_beacon.control,
            .subIndex = 10,
            .attribute = ODA_SDO_R | ODA_TPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x400A_beacon.pid,
            .subIndex = 11,
            .attribute = ODA_SDO_R | ODA_TPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x400A_beacon.command,
            .subIndex = 12,
            .attribute = ODA_SDO_R | ODA_TPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x400A_beacon.response,
            .subIndex = 13,
            .attribute = ODA_SDO_R | ODA_TPDO,
            .dataLength = 1
        },
    },
    .o_400B_rtc = {
        {
            .dataOrig = &OD_RAM.x400B_rtc.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x400B_rtc.timestamp,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x400B_rtc.alarm_a,
            .subIndex = 2,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x400B_rtc.alarm_b,
            .subIndex = 3,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x400B_rtc.wakeup_interval,
            .subIndex = 4,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 4
        },
    },
    .o_400C_node_manager = {
        {
            .dataOrig = &OD_RAM.x400C_node_manager.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x400C_node_manager.status_json[0],
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_STR,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x400C_node_manager.total_nodes,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_TPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x400C_node_manager.nodes_off,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_TPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x400C_node_manager.nodes_booting,
            .subIndex = 4,
            .attribute = ODA_SDO_R | ODA_TPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x400C_node_manager.nodes_on,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_TPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x400C_node_manager.nodes_with_errors,
            .subIndex = 6,
            .attribute = ODA_SDO_R | ODA_TPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x400C_node_manager.nodes_not_found,
            .subIndex = 7,
            .attribute = ODA_SDO_R | ODA_TPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x400C_node_manager.nodes_dead,
            .subIndex = 8,
            .attribute = ODA_SDO_R | ODA_TPDO,
            .dataLength = 1
        },
    },
    .o_400D_node_status = {
        .dataOrig0 = &OD_RAM.x400D_node_status_sub0,
        .dataOrig = &OD_RAM.x400D_node_status[0],
        .attribute0 = ODA_SDO_R,
        .attribute = ODA_SDO_R | ODA_TPDO,
        .dataElementLength = 1,
        .dataElementSizeof = sizeof(uint8_t),
    },
    .o_400E_adcs_manager = {
        {
            .dataOrig = &OD_RAM.x400E_adcs_manager.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x400E_adcs_manager.mode,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x400E_adcs_manager.status,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_TPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x400E_adcs_manager.signals[0],
            .subIndex = 3,
            .attribute = ODA_SDO_RW | ODA_STR,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x400E_adcs_manager.feedback[0],
            .subIndex = 4,
            .attribute = ODA_SDO_R | ODA_STR,
            .dataLength = 2
        },
    },
    .o_5004_battery_1 = {
        {
            .dataOrig = &OD_RAM.x5004_battery_1.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5004_battery_1.pack_1_vbatt,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5004_battery_1.pack_1_vcell_max,
            .subIndex = 2,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5004_battery_1.pack_1_vcell_min,
            .subIndex = 3,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5004_battery_1.pack_1_vcell,
            .subIndex = 4,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5004_battery_1.pack_1_vcell_1,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5004_battery_1.pack_1_vcell_2,
            .subIndex = 6,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5004_battery_1.pack_1_vcell_avg,
            .subIndex = 7,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5004_battery_1.pack_1_current,
            .subIndex = 8,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5004_battery_1.pack_1_current_avg,
            .subIndex = 9,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5004_battery_1.pack_1_current_max,
            .subIndex = 10,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5004_battery_1.pack_1_current_min,
            .subIndex = 11,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5004_battery_1.pack_1_temperature,
            .subIndex = 12,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5004_battery_1.pack_1_temperature_avg,
            .subIndex = 13,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5004_battery_1.pack_1_temperature_max,
            .subIndex = 14,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5004_battery_1.pack_1_temperature_min,
            .subIndex = 15,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5004_battery_1.pack_1_full_capacity,
            .subIndex = 16,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5004_battery_1.pack_1_reported_capacity,
            .subIndex = 17,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5004_battery_1.pack_1_reported_state_of_charge,
            .subIndex = 18,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5004_battery_1.pack_1_status,
            .subIndex = 19,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5004_battery_1.pack_2_vbatt,
            .subIndex = 20,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5004_battery_1.pack_2_vcell_max,
            .subIndex = 21,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5004_battery_1.pack_2_vcell_min,
            .subIndex = 22,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5004_battery_1.pack_2_vcell,
            .subIndex = 23,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5004_battery_1.pack_2_vcell_1,
            .subIndex = 24,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5004_battery_1.pack_2_vcell_2,
            .subIndex = 25,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5004_battery_1.pack_2_vcell_avg,
            .subIndex = 26,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5004_battery_1.pack_2_current,
            .subIndex = 27,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5004_battery_1.pack_2_current_avg,
            .subIndex = 28,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5004_battery_1.pack_2_current_max,
            .subIndex = 29,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5004_battery_1.pack_2_current_min,
            .subIndex = 30,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5004_battery_1.pack_2_temperature,
            .subIndex = 31,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5004_battery_1.pack_2_temperature_avg,
            .subIndex = 32,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5004_battery_1.pack_2_temperature_max,
            .subIndex = 33,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5004_battery_1.pack_2_temperature_min,
            .subIndex = 34,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5004_battery_1.pack_2_full_capacity,
            .subIndex = 35,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5004_battery_1.pack_2_reported_capacity,
            .subIndex = 36,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5004_battery_1.pack_2_reported_state_of_charge,
            .subIndex = 37,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5004_battery_1.pack_2_status,
            .subIndex = 38,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
    },
    .o_500C_solar_1 = {
        {
            .dataOrig = &OD_RAM.x500C_solar_1.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x500C_solar_1.output_voltage,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x500C_solar_1.output_current,
            .subIndex = 2,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x500C_solar_1.output_power,
            .subIndex = 3,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x500C_solar_1.output_voltage_avg,
            .subIndex = 4,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x500C_solar_1.output_current_avg,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x500C_solar_1.output_power_avg,
            .subIndex = 6,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x500C_solar_1.output_voltage_max,
            .subIndex = 7,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x500C_solar_1.output_current_max,
            .subIndex = 8,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x500C_solar_1.output_power_max,
            .subIndex = 9,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x500C_solar_1.output_energy,
            .subIndex = 10,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x500C_solar_1.cell_1_temperature,
            .subIndex = 11,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x500C_solar_1.cell_2_temperature,
            .subIndex = 12,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x500C_solar_1.cell_1_temperature_min,
            .subIndex = 13,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x500C_solar_1.cell_2_temperature_min,
            .subIndex = 14,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x500C_solar_1.cell_1_temperature_max,
            .subIndex = 15,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x500C_solar_1.cell_2_temperature_max,
            .subIndex = 16,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
    },
    .o_5010_solar_2 = {
        {
            .dataOrig = &OD_RAM.x5010_solar_2.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5010_solar_2.output_voltage,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5010_solar_2.output_current,
            .subIndex = 2,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5010_solar_2.output_power,
            .subIndex = 3,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5010_solar_2.output_voltage_avg,
            .subIndex = 4,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5010_solar_2.output_current_avg,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5010_solar_2.output_power_avg,
            .subIndex = 6,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5010_solar_2.output_voltage_max,
            .subIndex = 7,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5010_solar_2.output_current_max,
            .subIndex = 8,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5010_solar_2.output_power_max,
            .subIndex = 9,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5010_solar_2.output_energy,
            .subIndex = 10,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5010_solar_2.cell_1_temperature,
            .subIndex = 11,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5010_solar_2.cell_2_temperature,
            .subIndex = 12,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5010_solar_2.cell_1_temperature_min,
            .subIndex = 13,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5010_solar_2.cell_2_temperature_min,
            .subIndex = 14,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5010_solar_2.cell_1_temperature_max,
            .subIndex = 15,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5010_solar_2.cell_2_temperature_max,
            .subIndex = 16,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
    },
    .o_5014_solar_3 = {
        {
            .dataOrig = &OD_RAM.x5014_solar_3.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5014_solar_3.output_voltage,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5014_solar_3.output_current,
            .subIndex = 2,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5014_solar_3.output_power,
            .subIndex = 3,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5014_solar_3.output_voltage_avg,
            .subIndex = 4,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5014_solar_3.output_current_avg,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5014_solar_3.output_power_avg,
            .subIndex = 6,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5014_solar_3.output_voltage_max,
            .subIndex = 7,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5014_solar_3.output_current_max,
            .subIndex = 8,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5014_solar_3.output_power_max,
            .subIndex = 9,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5014_solar_3.output_energy,
            .subIndex = 10,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5014_solar_3.cell_1_temperature,
            .subIndex = 11,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5014_solar_3.cell_2_temperature,
            .subIndex = 12,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5014_solar_3.cell_1_temperature_min,
            .subIndex = 13,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5014_solar_3.cell_2_temperature_min,
            .subIndex = 14,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5014_solar_3.cell_1_temperature_max,
            .subIndex = 15,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5014_solar_3.cell_2_temperature_max,
            .subIndex = 16,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
    },
    .o_5018_solar_4 = {
        {
            .dataOrig = &OD_RAM.x5018_solar_4.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5018_solar_4.output_voltage,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5018_solar_4.output_current,
            .subIndex = 2,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5018_solar_4.output_power,
            .subIndex = 3,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5018_solar_4.output_voltage_avg,
            .subIndex = 4,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5018_solar_4.output_current_avg,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5018_solar_4.output_power_avg,
            .subIndex = 6,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5018_solar_4.output_voltage_max,
            .subIndex = 7,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5018_solar_4.output_current_max,
            .subIndex = 8,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5018_solar_4.output_power_max,
            .subIndex = 9,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5018_solar_4.output_energy,
            .subIndex = 10,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5018_solar_4.cell_1_temperature,
            .subIndex = 11,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5018_solar_4.cell_2_temperature,
            .subIndex = 12,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5018_solar_4.cell_1_temperature_min,
            .subIndex = 13,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5018_solar_4.cell_2_temperature_min,
            .subIndex = 14,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5018_solar_4.cell_1_temperature_max,
            .subIndex = 15,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5018_solar_4.cell_2_temperature_max,
            .subIndex = 16,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
    },
    .o_501C_solar_5 = {
        {
            .dataOrig = &OD_RAM.x501C_solar_5.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x501C_solar_5.output_voltage,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x501C_solar_5.output_current,
            .subIndex = 2,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x501C_solar_5.output_power,
            .subIndex = 3,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x501C_solar_5.output_voltage_avg,
            .subIndex = 4,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x501C_solar_5.output_current_avg,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x501C_solar_5.output_power_avg,
            .subIndex = 6,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x501C_solar_5.output_voltage_max,
            .subIndex = 7,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x501C_solar_5.output_current_max,
            .subIndex = 8,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x501C_solar_5.output_power_max,
            .subIndex = 9,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x501C_solar_5.output_energy,
            .subIndex = 10,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x501C_solar_5.cell_1_temperature,
            .subIndex = 11,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x501C_solar_5.cell_2_temperature,
            .subIndex = 12,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x501C_solar_5.cell_1_temperature_min,
            .subIndex = 13,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x501C_solar_5.cell_2_temperature_min,
            .subIndex = 14,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x501C_solar_5.cell_1_temperature_max,
            .subIndex = 15,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x501C_solar_5.cell_2_temperature_max,
            .subIndex = 16,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
    },
    .o_5020_solar_6 = {
        {
            .dataOrig = &OD_RAM.x5020_solar_6.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5020_solar_6.output_voltage,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5020_solar_6.output_current,
            .subIndex = 2,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5020_solar_6.output_power,
            .subIndex = 3,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5020_solar_6.output_voltage_avg,
            .subIndex = 4,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5020_solar_6.output_current_avg,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5020_solar_6.output_power_avg,
            .subIndex = 6,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5020_solar_6.output_voltage_max,
            .subIndex = 7,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5020_solar_6.output_current_max,
            .subIndex = 8,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5020_solar_6.output_power_max,
            .subIndex = 9,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5020_solar_6.output_energy,
            .subIndex = 10,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5020_solar_6.cell_1_temperature,
            .subIndex = 11,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5020_solar_6.cell_2_temperature,
            .subIndex = 12,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5020_solar_6.cell_1_temperature_min,
            .subIndex = 13,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5020_solar_6.cell_2_temperature_min,
            .subIndex = 14,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5020_solar_6.cell_1_temperature_max,
            .subIndex = 15,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5020_solar_6.cell_2_temperature_max,
            .subIndex = 16,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
    },
    .o_502C_star_tracker_1 = {
        {
            .dataOrig = &OD_RAM.x502C_star_tracker_1.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x502C_star_tracker_1.system_storage_percent,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x502C_star_tracker_1.system_ram_percent,
            .subIndex = 2,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x502C_star_tracker_1.fread_cache_length,
            .subIndex = 3,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x502C_star_tracker_1.fwrite_cache_length,
            .subIndex = 4,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x502C_star_tracker_1.daemons_active,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x502C_star_tracker_1.daemons_failed,
            .subIndex = 6,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x502C_star_tracker_1.updater_status,
            .subIndex = 7,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x502C_star_tracker_1.updater_cache_length,
            .subIndex = 8,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x502C_star_tracker_1.status,
            .subIndex = 9,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x502C_star_tracker_1.orientation_right_ascension,
            .subIndex = 10,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x502C_star_tracker_1.orientation_declination,
            .subIndex = 11,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x502C_star_tracker_1.orientation_roll,
            .subIndex = 12,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x502C_star_tracker_1.orientation_time_since_midnight,
            .subIndex = 13,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 4
        },
    },
    .o_5034_gps = {
        {
            .dataOrig = &OD_RAM.x5034_gps.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5034_gps.system_storage_percent,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5034_gps.system_ram_percent,
            .subIndex = 2,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5034_gps.fread_cache_length,
            .subIndex = 3,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5034_gps.fwrite_cache_length,
            .subIndex = 4,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5034_gps.daemons_active,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5034_gps.daemons_failed,
            .subIndex = 6,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5034_gps.updater_status,
            .subIndex = 7,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5034_gps.updater_cache_length,
            .subIndex = 8,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5034_gps.skytraq_time_since_midnight,
            .subIndex = 9,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x5034_gps.skytraq_ecef_x,
            .subIndex = 10,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x5034_gps.skytraq_ecef_y,
            .subIndex = 11,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x5034_gps.skytraq_ecef_z,
            .subIndex = 12,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x5034_gps.skytraq_ecef_vx,
            .subIndex = 13,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x5034_gps.skytraq_ecef_vy,
            .subIndex = 14,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x5034_gps.skytraq_ecef_vz,
            .subIndex = 15,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x5034_gps.status,
            .subIndex = 16,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5034_gps.skytraq_number_of_sv,
            .subIndex = 17,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5034_gps.skytraq_fix_mode,
            .subIndex = 18,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5034_gps.time_syncd,
            .subIndex = 19,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5034_gps.scet,
            .subIndex = 20,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 8
        },
    },
    .o_5038_adcs = {
        {
            .dataOrig = &OD_RAM.x5038_adcs.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5038_adcs.gyroscope_pitch_rate,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5038_adcs.gyroscope_yaw_rate,
            .subIndex = 2,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5038_adcs.gyroscope_roll_rate,
            .subIndex = 3,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5038_adcs.accelerometer_x,
            .subIndex = 4,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5038_adcs.accelerometer_y,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5038_adcs.accelerometer_z,
            .subIndex = 6,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5038_adcs.temperature,
            .subIndex = 7,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5038_adcs.pos_z_magnetometer_1_x,
            .subIndex = 8,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5038_adcs.pos_z_magnetometer_1_y,
            .subIndex = 9,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5038_adcs.pos_z_magnetometer_1_z,
            .subIndex = 10,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5038_adcs.pos_z_magnetometer_2_x,
            .subIndex = 11,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5038_adcs.pos_z_magnetometer_2_y,
            .subIndex = 12,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5038_adcs.pos_z_magnetometer_2_z,
            .subIndex = 13,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5038_adcs.min_z_magnetometer_1_x,
            .subIndex = 14,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5038_adcs.min_z_magnetometer_1_y,
            .subIndex = 15,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5038_adcs.min_z_magnetometer_1_z,
            .subIndex = 16,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5038_adcs.min_z_magnetometer_2_x,
            .subIndex = 17,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5038_adcs.min_z_magnetometer_2_y,
            .subIndex = 18,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5038_adcs.min_z_magnetometer_2_z,
            .subIndex = 19,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5038_adcs.magnetorquer_current_x,
            .subIndex = 20,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x5038_adcs.magnetorquer_pwm_x,
            .subIndex = 21,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5038_adcs.magnetorquer_current_y,
            .subIndex = 22,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x5038_adcs.magnetorquer_pwm_y,
            .subIndex = 23,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5038_adcs.magnetorquer_current_z,
            .subIndex = 24,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x5038_adcs.magnetorquer_pwm_z,
            .subIndex = 25,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
    },
    .o_503C_rw_1 = {
        {
            .dataOrig = &OD_RAM.x503C_rw_1.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x503C_rw_1.ctrl_stat_current_state,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x503C_rw_1.ctrl_stat_procedure_result,
            .subIndex = 2,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x503C_rw_1.ctrl_stat_errors,
            .subIndex = 3,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x503C_rw_1.motor_velocity,
            .subIndex = 4,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x503C_rw_1.motor_current,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x503C_rw_1.bus_voltage,
            .subIndex = 6,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x503C_rw_1.bus_current,
            .subIndex = 7,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x503C_rw_1.temperature_sensor_1,
            .subIndex = 8,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x503C_rw_1.temperature_sensor_2,
            .subIndex = 9,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x503C_rw_1.temperature_sensor_3,
            .subIndex = 10,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
    },
    .o_5040_rw_2 = {
        {
            .dataOrig = &OD_RAM.x5040_rw_2.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5040_rw_2.ctrl_stat_current_state,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5040_rw_2.ctrl_stat_procedure_result,
            .subIndex = 2,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5040_rw_2.ctrl_stat_errors,
            .subIndex = 3,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x5040_rw_2.motor_velocity,
            .subIndex = 4,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x5040_rw_2.motor_current,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x5040_rw_2.bus_voltage,
            .subIndex = 6,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x5040_rw_2.bus_current,
            .subIndex = 7,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x5040_rw_2.temperature_sensor_1,
            .subIndex = 8,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5040_rw_2.temperature_sensor_2,
            .subIndex = 9,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5040_rw_2.temperature_sensor_3,
            .subIndex = 10,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
    },
    .o_5044_rw_3 = {
        {
            .dataOrig = &OD_RAM.x5044_rw_3.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5044_rw_3.ctrl_stat_current_state,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5044_rw_3.ctrl_stat_procedure_result,
            .subIndex = 2,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5044_rw_3.ctrl_stat_errors,
            .subIndex = 3,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x5044_rw_3.motor_velocity,
            .subIndex = 4,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x5044_rw_3.motor_current,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x5044_rw_3.bus_voltage,
            .subIndex = 6,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x5044_rw_3.bus_current,
            .subIndex = 7,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x5044_rw_3.temperature_sensor_1,
            .subIndex = 8,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5044_rw_3.temperature_sensor_2,
            .subIndex = 9,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5044_rw_3.temperature_sensor_3,
            .subIndex = 10,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
    },
    .o_5048_rw_4 = {
        {
            .dataOrig = &OD_RAM.x5048_rw_4.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5048_rw_4.ctrl_stat_current_state,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5048_rw_4.ctrl_stat_procedure_result,
            .subIndex = 2,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5048_rw_4.ctrl_stat_errors,
            .subIndex = 3,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x5048_rw_4.motor_velocity,
            .subIndex = 4,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x5048_rw_4.motor_current,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x5048_rw_4.bus_voltage,
            .subIndex = 6,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x5048_rw_4.bus_current,
            .subIndex = 7,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x5048_rw_4.temperature_sensor_1,
            .subIndex = 8,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5048_rw_4.temperature_sensor_2,
            .subIndex = 9,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5048_rw_4.temperature_sensor_3,
            .subIndex = 10,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
    },
    .o_504C_dxwifi = {
        {
            .dataOrig = &OD_RAM.x504C_dxwifi.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x504C_dxwifi.system_storage_percent,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x504C_dxwifi.system_ram_percent,
            .subIndex = 2,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x504C_dxwifi.fread_cache_length,
            .subIndex = 3,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x504C_dxwifi.fwrite_cache_length,
            .subIndex = 4,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x504C_dxwifi.daemons_active,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x504C_dxwifi.daemons_failed,
            .subIndex = 6,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x504C_dxwifi.updater_status,
            .subIndex = 7,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x504C_dxwifi.updater_cache_length,
            .subIndex = 8,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x504C_dxwifi.status,
            .subIndex = 9,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x504C_dxwifi.radio_temperature,
            .subIndex = 10,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x504C_dxwifi.transmission_bit_rate,
            .subIndex = 11,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x504C_dxwifi.transmission_images_transmitted,
            .subIndex = 12,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x504C_dxwifi.transmission_enable_pa,
            .subIndex = 13,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
    },
    .o_5050_cfc_processor = {
        {
            .dataOrig = &OD_RAM.x5050_cfc_processor.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5050_cfc_processor.system_storage_percent,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5050_cfc_processor.system_ram_percent,
            .subIndex = 2,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5050_cfc_processor.fread_cache_length,
            .subIndex = 3,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5050_cfc_processor.fwrite_cache_length,
            .subIndex = 4,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5050_cfc_processor.daemons_active,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5050_cfc_processor.daemons_failed,
            .subIndex = 6,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5050_cfc_processor.updater_status,
            .subIndex = 7,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5050_cfc_processor.updater_cache_length,
            .subIndex = 8,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5050_cfc_processor.camera_status,
            .subIndex = 9,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5050_cfc_processor.camera_temperature,
            .subIndex = 10,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5050_cfc_processor.tec_status,
            .subIndex = 11,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5050_cfc_processor.tec_saturated,
            .subIndex = 12,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5050_cfc_processor.tec_saturation_diff,
            .subIndex = 13,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5050_cfc_processor.tec_pid_setpoint,
            .subIndex = 14,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5050_cfc_processor.tec_cooldown_temperature,
            .subIndex = 15,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
    },
    .o_5054_diode_test = {
        {
            .dataOrig = &OD_RAM.x5054_diode_test.highest_index_supported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5054_diode_test.dtc_ctrl,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5054_diode_test.dtc_mux_select,
            .subIndex = 2,
            .attribute = ODA_SDO_RW | ODA_TRPDO,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x5054_diode_test.dtc_dac,
            .subIndex = 3,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5054_diode_test.dtc_status,
            .subIndex = 4,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5054_diode_test.dtc_error,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5054_diode_test.adcsample_led_current,
            .subIndex = 6,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5054_diode_test.adcsample_led_swir_pd_current,
            .subIndex = 7,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x5054_diode_test.adcsample_uv_pd_current,
            .subIndex = 8,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 2
        },
    },
};

static OD_ATTR_OD OD_entry_t ODList[] = {
    {0x1000, 0x01, ODT_VAR, &ODObjs.o_1000_device_type, NULL},
    {0x1001, 0x01, ODT_VAR, &ODObjs.o_1001_error_register, NULL},
    {0x1003, 0x09, ODT_ARR, &ODObjs.o_1003_predefined_error_field, NULL},
    {0x1005, 0x01, ODT_VAR, &ODObjs.o_1005_cob_id_sync, NULL},
    {0x1006, 0x01, ODT_VAR, &ODObjs.o_1006_communication_cycle_period, NULL},
    {0x1014, 0x01, ODT_VAR, &ODObjs.o_1014_cob_id_emergency_message, NULL},
    {0x1015, 0x01, ODT_VAR, &ODObjs.o_1015_inhibit_time_emcy, NULL},
    {0x1016, 0x13, ODT_ARR, &ODObjs.o_1016_consumer_heartbeat_time, NULL},
    {0x1017, 0x01, ODT_VAR, &ODObjs.o_1017_producer_heartbeat_time, NULL},
    {0x1018, 0x05, ODT_REC, &ODObjs.o_1018_identity, NULL},
    {0x1019, 0x01, ODT_VAR, &ODObjs.o_1019_synchronous_counter_overflow_value, NULL},
    {0x1023, 0x04, ODT_REC, &ODObjs.o_1023_os_command, NULL},
    {0x1200, 0x04, ODT_REC, &ODObjs.o_1200_sdo_server_parameter, NULL},
    {0x1280, 0x04, ODT_REC, &ODObjs.o_1280_sdo_client_parameter, NULL},
    {0x1400, 0x04, ODT_REC, &ODObjs.o_1400_rpdo_1_communication_parameters, NULL},
    {0x1401, 0x04, ODT_REC, &ODObjs.o_1401_rpdo_2_communication_parameters, NULL},
    {0x1402, 0x04, ODT_REC, &ODObjs.o_1402_rpdo_3_communication_parameters, NULL},
    {0x1403, 0x04, ODT_REC, &ODObjs.o_1403_rpdo_4_communication_parameters, NULL},
    {0x1404, 0x04, ODT_REC, &ODObjs.o_1404_rpdo_5_communication_parameters, NULL},
    {0x1405, 0x04, ODT_REC, &ODObjs.o_1405_rpdo_6_communication_parameters, NULL},
    {0x1406, 0x04, ODT_REC, &ODObjs.o_1406_rpdo_7_communication_parameters, NULL},
    {0x1407, 0x04, ODT_REC, &ODObjs.o_1407_rpdo_8_communication_parameters, NULL},
    {0x1408, 0x04, ODT_REC, &ODObjs.o_1408_rpdo_9_communication_parameters, NULL},
    {0x1409, 0x04, ODT_REC, &ODObjs.o_1409_rpdo_10_communication_parameters, NULL},
    {0x140A, 0x04, ODT_REC, &ODObjs.o_140A_rpdo_11_communication_parameters, NULL},
    {0x140B, 0x04, ODT_REC, &ODObjs.o_140B_rpdo_12_communication_parameters, NULL},
    {0x140C, 0x04, ODT_REC, &ODObjs.o_140C_rpdo_13_communication_parameters, NULL},
    {0x140D, 0x04, ODT_REC, &ODObjs.o_140D_rpdo_14_communication_parameters, NULL},
    {0x140E, 0x04, ODT_REC, &ODObjs.o_140E_rpdo_15_communication_parameters, NULL},
    {0x140F, 0x04, ODT_REC, &ODObjs.o_140F_rpdo_16_communication_parameters, NULL},
    {0x1410, 0x04, ODT_REC, &ODObjs.o_1410_rpdo_17_communication_parameters, NULL},
    {0x1411, 0x04, ODT_REC, &ODObjs.o_1411_rpdo_18_communication_parameters, NULL},
    {0x1412, 0x04, ODT_REC, &ODObjs.o_1412_rpdo_19_communication_parameters, NULL},
    {0x1413, 0x04, ODT_REC, &ODObjs.o_1413_rpdo_20_communication_parameters, NULL},
    {0x1414, 0x04, ODT_REC, &ODObjs.o_1414_rpdo_21_communication_parameters, NULL},
    {0x1415, 0x04, ODT_REC, &ODObjs.o_1415_rpdo_22_communication_parameters, NULL},
    {0x1416, 0x04, ODT_REC, &ODObjs.o_1416_rpdo_23_communication_parameters, NULL},
    {0x1417, 0x04, ODT_REC, &ODObjs.o_1417_rpdo_24_communication_parameters, NULL},
    {0x1418, 0x04, ODT_REC, &ODObjs.o_1418_rpdo_25_communication_parameters, NULL},
    {0x1419, 0x04, ODT_REC, &ODObjs.o_1419_rpdo_26_communication_parameters, NULL},
    {0x141A, 0x04, ODT_REC, &ODObjs.o_141A_rpdo_27_communication_parameters, NULL},
    {0x141B, 0x04, ODT_REC, &ODObjs.o_141B_rpdo_28_communication_parameters, NULL},
    {0x141C, 0x04, ODT_REC, &ODObjs.o_141C_rpdo_29_communication_parameters, NULL},
    {0x141D, 0x04, ODT_REC, &ODObjs.o_141D_rpdo_30_communication_parameters, NULL},
    {0x141E, 0x04, ODT_REC, &ODObjs.o_141E_rpdo_31_communication_parameters, NULL},
    {0x141F, 0x04, ODT_REC, &ODObjs.o_141F_rpdo_32_communication_parameters, NULL},
    {0x1420, 0x04, ODT_REC, &ODObjs.o_1420_rpdo_33_communication_parameters, NULL},
    {0x1421, 0x04, ODT_REC, &ODObjs.o_1421_rpdo_34_communication_parameters, NULL},
    {0x1422, 0x04, ODT_REC, &ODObjs.o_1422_rpdo_35_communication_parameters, NULL},
    {0x1423, 0x04, ODT_REC, &ODObjs.o_1423_rpdo_36_communication_parameters, NULL},
    {0x1424, 0x04, ODT_REC, &ODObjs.o_1424_rpdo_37_communication_parameters, NULL},
    {0x1425, 0x04, ODT_REC, &ODObjs.o_1425_rpdo_38_communication_parameters, NULL},
    {0x1426, 0x04, ODT_REC, &ODObjs.o_1426_rpdo_39_communication_parameters, NULL},
    {0x1427, 0x04, ODT_REC, &ODObjs.o_1427_rpdo_40_communication_parameters, NULL},
    {0x1428, 0x04, ODT_REC, &ODObjs.o_1428_rpdo_41_communication_parameters, NULL},
    {0x1429, 0x04, ODT_REC, &ODObjs.o_1429_rpdo_42_communication_parameters, NULL},
    {0x142A, 0x04, ODT_REC, &ODObjs.o_142A_rpdo_43_communication_parameters, NULL},
    {0x142B, 0x04, ODT_REC, &ODObjs.o_142B_rpdo_44_communication_parameters, NULL},
    {0x142C, 0x04, ODT_REC, &ODObjs.o_142C_rpdo_45_communication_parameters, NULL},
    {0x142D, 0x04, ODT_REC, &ODObjs.o_142D_rpdo_46_communication_parameters, NULL},
    {0x142E, 0x04, ODT_REC, &ODObjs.o_142E_rpdo_47_communication_parameters, NULL},
    {0x142F, 0x04, ODT_REC, &ODObjs.o_142F_rpdo_48_communication_parameters, NULL},
    {0x1430, 0x04, ODT_REC, &ODObjs.o_1430_rpdo_49_communication_parameters, NULL},
    {0x1431, 0x04, ODT_REC, &ODObjs.o_1431_rpdo_50_communication_parameters, NULL},
    {0x1432, 0x04, ODT_REC, &ODObjs.o_1432_rpdo_51_communication_parameters, NULL},
    {0x1433, 0x04, ODT_REC, &ODObjs.o_1433_rpdo_52_communication_parameters, NULL},
    {0x1434, 0x04, ODT_REC, &ODObjs.o_1434_rpdo_53_communication_parameters, NULL},
    {0x1435, 0x04, ODT_REC, &ODObjs.o_1435_rpdo_54_communication_parameters, NULL},
    {0x1436, 0x04, ODT_REC, &ODObjs.o_1436_rpdo_55_communication_parameters, NULL},
    {0x1437, 0x04, ODT_REC, &ODObjs.o_1437_rpdo_56_communication_parameters, NULL},
    {0x1438, 0x04, ODT_REC, &ODObjs.o_1438_rpdo_57_communication_parameters, NULL},
    {0x1439, 0x04, ODT_REC, &ODObjs.o_1439_rpdo_58_communication_parameters, NULL},
    {0x143A, 0x04, ODT_REC, &ODObjs.o_143A_rpdo_59_communication_parameters, NULL},
    {0x143B, 0x04, ODT_REC, &ODObjs.o_143B_rpdo_60_communication_parameters, NULL},
    {0x143C, 0x04, ODT_REC, &ODObjs.o_143C_rpdo_61_communication_parameters, NULL},
    {0x143D, 0x04, ODT_REC, &ODObjs.o_143D_rpdo_62_communication_parameters, NULL},
    {0x143E, 0x04, ODT_REC, &ODObjs.o_143E_rpdo_63_communication_parameters, NULL},
    {0x143F, 0x04, ODT_REC, &ODObjs.o_143F_rpdo_64_communication_parameters, NULL},
    {0x1440, 0x04, ODT_REC, &ODObjs.o_1440_rpdo_65_communication_parameters, NULL},
    {0x1441, 0x04, ODT_REC, &ODObjs.o_1441_rpdo_66_communication_parameters, NULL},
    {0x1442, 0x04, ODT_REC, &ODObjs.o_1442_rpdo_67_communication_parameters, NULL},
    {0x1443, 0x04, ODT_REC, &ODObjs.o_1443_rpdo_68_communication_parameters, NULL},
    {0x1444, 0x04, ODT_REC, &ODObjs.o_1444_rpdo_69_communication_parameters, NULL},
    {0x1445, 0x04, ODT_REC, &ODObjs.o_1445_rpdo_70_communication_parameters, NULL},
    {0x1446, 0x04, ODT_REC, &ODObjs.o_1446_rpdo_71_communication_parameters, NULL},
    {0x1447, 0x04, ODT_REC, &ODObjs.o_1447_rpdo_72_communication_parameters, NULL},
    {0x1448, 0x04, ODT_REC, &ODObjs.o_1448_rpdo_73_communication_parameters, NULL},
    {0x1449, 0x04, ODT_REC, &ODObjs.o_1449_rpdo_74_communication_parameters, NULL},
    {0x144A, 0x04, ODT_REC, &ODObjs.o_144A_rpdo_75_communication_parameters, NULL},
    {0x144B, 0x04, ODT_REC, &ODObjs.o_144B_rpdo_76_communication_parameters, NULL},
    {0x144C, 0x04, ODT_REC, &ODObjs.o_144C_rpdo_77_communication_parameters, NULL},
    {0x144D, 0x04, ODT_REC, &ODObjs.o_144D_rpdo_78_communication_parameters, NULL},
    {0x144E, 0x04, ODT_REC, &ODObjs.o_144E_rpdo_79_communication_parameters, NULL},
    {0x144F, 0x04, ODT_REC, &ODObjs.o_144F_rpdo_80_communication_parameters, NULL},
    {0x1600, 0x05, ODT_REC, &ODObjs.o_1600_rpdo_1_mapping_parameters, NULL},
    {0x1601, 0x04, ODT_REC, &ODObjs.o_1601_rpdo_2_mapping_parameters, NULL},
    {0x1602, 0x05, ODT_REC, &ODObjs.o_1602_rpdo_3_mapping_parameters, NULL},
    {0x1603, 0x05, ODT_REC, &ODObjs.o_1603_rpdo_4_mapping_parameters, NULL},
    {0x1604, 0x05, ODT_REC, &ODObjs.o_1604_rpdo_5_mapping_parameters, NULL},
    {0x1605, 0x05, ODT_REC, &ODObjs.o_1605_rpdo_6_mapping_parameters, NULL},
    {0x1606, 0x04, ODT_REC, &ODObjs.o_1606_rpdo_7_mapping_parameters, NULL},
    {0x1607, 0x05, ODT_REC, &ODObjs.o_1607_rpdo_8_mapping_parameters, NULL},
    {0x1608, 0x05, ODT_REC, &ODObjs.o_1608_rpdo_9_mapping_parameters, NULL},
    {0x1609, 0x05, ODT_REC, &ODObjs.o_1609_rpdo_10_mapping_parameters, NULL},
    {0x160A, 0x05, ODT_REC, &ODObjs.o_160A_rpdo_11_mapping_parameters, NULL},
    {0x160B, 0x05, ODT_REC, &ODObjs.o_160B_rpdo_12_mapping_parameters, NULL},
    {0x160C, 0x03, ODT_REC, &ODObjs.o_160C_rpdo_13_mapping_parameters, NULL},
    {0x160D, 0x07, ODT_REC, &ODObjs.o_160D_rpdo_14_mapping_parameters, NULL},
    {0x160E, 0x05, ODT_REC, &ODObjs.o_160E_rpdo_15_mapping_parameters, NULL},
    {0x160F, 0x05, ODT_REC, &ODObjs.o_160F_rpdo_16_mapping_parameters, NULL},
    {0x1610, 0x03, ODT_REC, &ODObjs.o_1610_rpdo_17_mapping_parameters, NULL},
    {0x1611, 0x07, ODT_REC, &ODObjs.o_1611_rpdo_18_mapping_parameters, NULL},
    {0x1612, 0x05, ODT_REC, &ODObjs.o_1612_rpdo_19_mapping_parameters, NULL},
    {0x1613, 0x05, ODT_REC, &ODObjs.o_1613_rpdo_20_mapping_parameters, NULL},
    {0x1614, 0x03, ODT_REC, &ODObjs.o_1614_rpdo_21_mapping_parameters, NULL},
    {0x1615, 0x07, ODT_REC, &ODObjs.o_1615_rpdo_22_mapping_parameters, NULL},
    {0x1616, 0x05, ODT_REC, &ODObjs.o_1616_rpdo_23_mapping_parameters, NULL},
    {0x1617, 0x05, ODT_REC, &ODObjs.o_1617_rpdo_24_mapping_parameters, NULL},
    {0x1618, 0x03, ODT_REC, &ODObjs.o_1618_rpdo_25_mapping_parameters, NULL},
    {0x1619, 0x07, ODT_REC, &ODObjs.o_1619_rpdo_26_mapping_parameters, NULL},
    {0x161A, 0x05, ODT_REC, &ODObjs.o_161A_rpdo_27_mapping_parameters, NULL},
    {0x161B, 0x05, ODT_REC, &ODObjs.o_161B_rpdo_28_mapping_parameters, NULL},
    {0x161C, 0x03, ODT_REC, &ODObjs.o_161C_rpdo_29_mapping_parameters, NULL},
    {0x161D, 0x07, ODT_REC, &ODObjs.o_161D_rpdo_30_mapping_parameters, NULL},
    {0x161E, 0x05, ODT_REC, &ODObjs.o_161E_rpdo_31_mapping_parameters, NULL},
    {0x161F, 0x05, ODT_REC, &ODObjs.o_161F_rpdo_32_mapping_parameters, NULL},
    {0x1620, 0x03, ODT_REC, &ODObjs.o_1620_rpdo_33_mapping_parameters, NULL},
    {0x1621, 0x07, ODT_REC, &ODObjs.o_1621_rpdo_34_mapping_parameters, NULL},
    {0x1622, 0x07, ODT_REC, &ODObjs.o_1622_rpdo_35_mapping_parameters, NULL},
    {0x1623, 0x03, ODT_REC, &ODObjs.o_1623_rpdo_36_mapping_parameters, NULL},
    {0x1624, 0x05, ODT_REC, &ODObjs.o_1624_rpdo_37_mapping_parameters, NULL},
    {0x1625, 0x02, ODT_REC, &ODObjs.o_1625_rpdo_38_mapping_parameters, NULL},
    {0x1626, 0x07, ODT_REC, &ODObjs.o_1626_rpdo_39_mapping_parameters, NULL},
    {0x1627, 0x03, ODT_REC, &ODObjs.o_1627_rpdo_40_mapping_parameters, NULL},
    {0x1628, 0x02, ODT_REC, &ODObjs.o_1628_rpdo_41_mapping_parameters, NULL},
    {0x1629, 0x03, ODT_REC, &ODObjs.o_1629_rpdo_42_mapping_parameters, NULL},
    {0x162A, 0x03, ODT_REC, &ODObjs.o_162A_rpdo_43_mapping_parameters, NULL},
    {0x162B, 0x03, ODT_REC, &ODObjs.o_162B_rpdo_44_mapping_parameters, NULL},
    {0x162C, 0x05, ODT_REC, &ODObjs.o_162C_rpdo_45_mapping_parameters, NULL},
    {0x162D, 0x02, ODT_REC, &ODObjs.o_162D_rpdo_46_mapping_parameters, NULL},
    {0x162E, 0x04, ODT_REC, &ODObjs.o_162E_rpdo_47_mapping_parameters, NULL},
    {0x162F, 0x04, ODT_REC, &ODObjs.o_162F_rpdo_48_mapping_parameters, NULL},
    {0x1630, 0x02, ODT_REC, &ODObjs.o_1630_rpdo_49_mapping_parameters, NULL},
    {0x1631, 0x04, ODT_REC, &ODObjs.o_1631_rpdo_50_mapping_parameters, NULL},
    {0x1632, 0x04, ODT_REC, &ODObjs.o_1632_rpdo_51_mapping_parameters, NULL},
    {0x1633, 0x04, ODT_REC, &ODObjs.o_1633_rpdo_52_mapping_parameters, NULL},
    {0x1634, 0x04, ODT_REC, &ODObjs.o_1634_rpdo_53_mapping_parameters, NULL},
    {0x1635, 0x03, ODT_REC, &ODObjs.o_1635_rpdo_54_mapping_parameters, NULL},
    {0x1636, 0x03, ODT_REC, &ODObjs.o_1636_rpdo_55_mapping_parameters, NULL},
    {0x1637, 0x03, ODT_REC, &ODObjs.o_1637_rpdo_56_mapping_parameters, NULL},
    {0x1638, 0x04, ODT_REC, &ODObjs.o_1638_rpdo_57_mapping_parameters, NULL},
    {0x1639, 0x03, ODT_REC, &ODObjs.o_1639_rpdo_58_mapping_parameters, NULL},
    {0x163A, 0x03, ODT_REC, &ODObjs.o_163A_rpdo_59_mapping_parameters, NULL},
    {0x163B, 0x04, ODT_REC, &ODObjs.o_163B_rpdo_60_mapping_parameters, NULL},
    {0x163C, 0x04, ODT_REC, &ODObjs.o_163C_rpdo_61_mapping_parameters, NULL},
    {0x163D, 0x03, ODT_REC, &ODObjs.o_163D_rpdo_62_mapping_parameters, NULL},
    {0x163E, 0x03, ODT_REC, &ODObjs.o_163E_rpdo_63_mapping_parameters, NULL},
    {0x163F, 0x04, ODT_REC, &ODObjs.o_163F_rpdo_64_mapping_parameters, NULL},
    {0x1640, 0x04, ODT_REC, &ODObjs.o_1640_rpdo_65_mapping_parameters, NULL},
    {0x1641, 0x03, ODT_REC, &ODObjs.o_1641_rpdo_66_mapping_parameters, NULL},
    {0x1642, 0x03, ODT_REC, &ODObjs.o_1642_rpdo_67_mapping_parameters, NULL},
    {0x1643, 0x04, ODT_REC, &ODObjs.o_1643_rpdo_68_mapping_parameters, NULL},
    {0x1644, 0x04, ODT_REC, &ODObjs.o_1644_rpdo_69_mapping_parameters, NULL},
    {0x1645, 0x03, ODT_REC, &ODObjs.o_1645_rpdo_70_mapping_parameters, NULL},
    {0x1646, 0x03, ODT_REC, &ODObjs.o_1646_rpdo_71_mapping_parameters, NULL},
    {0x1647, 0x04, ODT_REC, &ODObjs.o_1647_rpdo_72_mapping_parameters, NULL},
    {0x1648, 0x07, ODT_REC, &ODObjs.o_1648_rpdo_73_mapping_parameters, NULL},
    {0x1649, 0x03, ODT_REC, &ODObjs.o_1649_rpdo_74_mapping_parameters, NULL},
    {0x164A, 0x06, ODT_REC, &ODObjs.o_164A_rpdo_75_mapping_parameters, NULL},
    {0x164B, 0x07, ODT_REC, &ODObjs.o_164B_rpdo_76_mapping_parameters, NULL},
    {0x164C, 0x03, ODT_REC, &ODObjs.o_164C_rpdo_77_mapping_parameters, NULL},
    {0x164D, 0x08, ODT_REC, &ODObjs.o_164D_rpdo_78_mapping_parameters, NULL},
    {0x164E, 0x06, ODT_REC, &ODObjs.o_164E_rpdo_79_mapping_parameters, NULL},
    {0x164F, 0x04, ODT_REC, &ODObjs.o_164F_rpdo_80_mapping_parameters, NULL},
    {0x1800, 0x06, ODT_REC, &ODObjs.o_1800_tpdo_1_communication_parameters, NULL},
    {0x1801, 0x06, ODT_REC, &ODObjs.o_1801_tpdo_2_communication_parameters, NULL},
    {0x1802, 0x06, ODT_REC, &ODObjs.o_1802_tpdo_3_communication_parameters, NULL},
    {0x1803, 0x06, ODT_REC, &ODObjs.o_1803_tpdo_4_communication_parameters, NULL},
    {0x1804, 0x06, ODT_REC, &ODObjs.o_1804_tpdo_5_communication_parameters, NULL},
    {0x1805, 0x06, ODT_REC, &ODObjs.o_1805_tpdo_6_communication_parameters, NULL},
    {0x1806, 0x06, ODT_REC, &ODObjs.o_1806_tpdo_7_communication_parameters, NULL},
    {0x1A00, 0x02, ODT_REC, &ODObjs.o_1A00_tpdo_1_mapping_parameters, NULL},
    {0x1A01, 0x06, ODT_REC, &ODObjs.o_1A01_tpdo_2_mapping_parameters, NULL},
    {0x1A02, 0x03, ODT_REC, &ODObjs.o_1A02_tpdo_3_mapping_parameters, NULL},
    {0x1A03, 0x03, ODT_REC, &ODObjs.o_1A03_tpdo_4_mapping_parameters, NULL},
    {0x1A04, 0x08, ODT_REC, &ODObjs.o_1A04_tpdo_5_mapping_parameters, NULL},
    {0x1A05, 0x03, ODT_REC, &ODObjs.o_1A05_tpdo_6_mapping_parameters, NULL},
    {0x1A06, 0x04, ODT_REC, &ODObjs.o_1A06_tpdo_7_mapping_parameters, NULL},
    {0x2010, 0x01, ODT_VAR, &ODObjs.o_2010_scet, NULL},
    {0x2011, 0x01, ODT_VAR, &ODObjs.o_2011_utc, NULL},
    {0x3000, 0x01, ODT_VAR, &ODObjs.o_3000_satellite_id, NULL},
    {0x3001, 0x01, ODT_VAR, &ODObjs.o_3001_flight_mode, NULL},
    {0x3002, 0x05, ODT_REC, &ODObjs.o_3002_versions, NULL},
    {0x3003, 0x08, ODT_REC, &ODObjs.o_3003_system, NULL},
    {0x3004, 0x06, ODT_REC, &ODObjs.o_3004_fread_cache, NULL},
    {0x3005, 0x06, ODT_REC, &ODObjs.o_3005_fwrite_cache, NULL},
    {0x3006, 0x06, ODT_REC, &ODObjs.o_3006_updater, NULL},
    {0x3007, 0x03, ODT_REC, &ODObjs.o_3007_logs, NULL},
    {0x3008, 0x04, ODT_REC, &ODObjs.o_3008_daemons, NULL},
    {0x3009, 0x01, ODT_VAR, &ODObjs.o_3009_board_id, NULL},
    {0x4000, 0x01, ODT_VAR, &ODObjs.o_4000_status, NULL},
    {0x4001, 0x01, ODT_VAR, &ODObjs.o_4001_reset_timeout, NULL},
    {0x4002, 0x01, ODT_VAR, &ODObjs.o_4002_mode, NULL},
    {0x4003, 0x01, ODT_VAR, &ODObjs.o_4003_hw_id, NULL},
    {0x4004, 0x04, ODT_REC, &ODObjs.o_4004_tx_control, NULL},
    {0x4005, 0x0E, ODT_REC, &ODObjs.o_4005_antennas, NULL},
    {0x4006, 0x06, ODT_REC, &ODObjs.o_4006_lband, NULL},
    {0x4007, 0x04, ODT_REC, &ODObjs.o_4007_uhf, NULL},
    {0x4008, 0x0D, ODT_REC, &ODObjs.o_4008_edl, NULL},
    {0x4009, 0x0E, ODT_REC, &ODObjs.o_4009_opd, NULL},
    {0x400A, 0x0E, ODT_REC, &ODObjs.o_400A_beacon, NULL},
    {0x400B, 0x05, ODT_REC, &ODObjs.o_400B_rtc, NULL},
    {0x400C, 0x09, ODT_REC, &ODObjs.o_400C_node_manager, NULL},
    {0x400D, 0x13, ODT_ARR, &ODObjs.o_400D_node_status, NULL},
    {0x400E, 0x05, ODT_REC, &ODObjs.o_400E_adcs_manager, NULL},
    {0x5004, 0x27, ODT_REC, &ODObjs.o_5004_battery_1, NULL},
    {0x500C, 0x11, ODT_REC, &ODObjs.o_500C_solar_1, NULL},
    {0x5010, 0x11, ODT_REC, &ODObjs.o_5010_solar_2, NULL},
    {0x5014, 0x11, ODT_REC, &ODObjs.o_5014_solar_3, NULL},
    {0x5018, 0x11, ODT_REC, &ODObjs.o_5018_solar_4, NULL},
    {0x501C, 0x11, ODT_REC, &ODObjs.o_501C_solar_5, NULL},
    {0x5020, 0x11, ODT_REC, &ODObjs.o_5020_solar_6, NULL},
    {0x502C, 0x0E, ODT_REC, &ODObjs.o_502C_star_tracker_1, NULL},
    {0x5034, 0x15, ODT_REC, &ODObjs.o_5034_gps, NULL},
    {0x5038, 0x1A, ODT_REC, &ODObjs.o_5038_adcs, NULL},
    {0x503C, 0x0B, ODT_REC, &ODObjs.o_503C_rw_1, NULL},
    {0x5040, 0x0B, ODT_REC, &ODObjs.o_5040_rw_2, NULL},
    {0x5044, 0x0B, ODT_REC, &ODObjs.o_5044_rw_3, NULL},
    {0x5048, 0x0B, ODT_REC, &ODObjs.o_5048_rw_4, NULL},
    {0x504C, 0x0E, ODT_REC, &ODObjs.o_504C_dxwifi, NULL},
    {0x5050, 0x10, ODT_REC, &ODObjs.o_5050_cfc_processor, NULL},
    {0x5054, 0x09, ODT_REC, &ODObjs.o_5054_diode_test, NULL},
    {0x0000, 0x00, 0, NULL, NULL}
};

static OD_t _OD = {
    (sizeof(ODList) / sizeof(ODList[0])) - 1,
    &ODList[0]
};

OD_t *OD = &_OD;
