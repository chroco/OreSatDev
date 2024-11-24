#ifndef OD_H
#define OD_H

#define OD_CNT_NMT 1
#define OD_CNT_EM 1
#define OD_CNT_SYNC 1
#define OD_CNT_EM_PROD 1
#define OD_CNT_HB_PROD 1
#define OD_CNT_HB_CONS 0
#define OD_CNT_SDO_SRV 1
#define OD_CNT_SDO_CLI 1
#define OD_CNT_RPDO 80
#define OD_CNT_TPDO 7

#define OD_CNT_ARR_1003 8
#define OD_CNT_ARR_1016 18
#define OD_CNT_ARR_400D 18

typedef struct {
    uint32_t x1000_device_type;
    uint8_t x1001_error_register;
    uint8_t x1003_predefined_error_field_sub0;
    uint32_t x1003_predefined_error_field[OD_CNT_ARR_1003];
    uint32_t x1005_cob_id_sync;
    uint32_t x1006_communication_cycle_period;
    uint32_t x1014_cob_id_emergency_message;
    uint16_t x1015_inhibit_time_emcy;
    uint8_t x1016_consumer_heartbeat_time_sub0;
    uint32_t x1016_consumer_heartbeat_time[OD_CNT_ARR_1016];
    uint16_t x1017_producer_heartbeat_time;
    struct {
        uint8_t highest_index_supported;
        uint32_t vendor_id;
        uint32_t product_code;
        uint32_t revision_number;
        uint32_t serial_number;
    } x1018_identity;
    uint8_t x1019_synchronous_counter_overflow_value;
    struct {
        uint8_t highest_index_supported;
        uint32_t status;
    } x1023_os_command;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id_client_to_server;
        uint32_t cob_id_server_to_client;
        uint32_t node_id_od_sdo_client;
    } x1200_sdo_server_parameter;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id_client_to_server;
        uint32_t cob_id_server_to_client;
        uint8_t node_id_od_sdo_client;
        //uint32_t node_id_od_sdo_client;
    } x1280_sdo_client_parameter;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x1400_rpdo_1_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x1401_rpdo_2_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x1402_rpdo_3_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x1403_rpdo_4_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x1404_rpdo_5_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x1405_rpdo_6_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x1406_rpdo_7_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x1407_rpdo_8_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x1408_rpdo_9_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x1409_rpdo_10_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x140A_rpdo_11_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x140B_rpdo_12_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x140C_rpdo_13_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x140D_rpdo_14_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x140E_rpdo_15_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x140F_rpdo_16_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x1410_rpdo_17_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x1411_rpdo_18_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x1412_rpdo_19_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x1413_rpdo_20_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x1414_rpdo_21_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x1415_rpdo_22_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x1416_rpdo_23_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x1417_rpdo_24_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x1418_rpdo_25_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x1419_rpdo_26_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x141A_rpdo_27_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x141B_rpdo_28_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x141C_rpdo_29_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x141D_rpdo_30_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x141E_rpdo_31_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x141F_rpdo_32_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x1420_rpdo_33_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x1421_rpdo_34_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x1422_rpdo_35_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x1423_rpdo_36_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x1424_rpdo_37_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x1425_rpdo_38_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x1426_rpdo_39_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x1427_rpdo_40_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x1428_rpdo_41_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x1429_rpdo_42_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x142A_rpdo_43_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x142B_rpdo_44_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x142C_rpdo_45_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x142D_rpdo_46_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x142E_rpdo_47_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x142F_rpdo_48_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x1430_rpdo_49_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x1431_rpdo_50_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x1432_rpdo_51_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x1433_rpdo_52_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x1434_rpdo_53_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x1435_rpdo_54_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x1436_rpdo_55_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x1437_rpdo_56_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x1438_rpdo_57_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x1439_rpdo_58_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x143A_rpdo_59_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x143B_rpdo_60_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x143C_rpdo_61_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x143D_rpdo_62_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x143E_rpdo_63_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x143F_rpdo_64_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x1440_rpdo_65_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x1441_rpdo_66_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x1442_rpdo_67_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x1443_rpdo_68_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x1444_rpdo_69_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x1445_rpdo_70_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x1446_rpdo_71_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x1447_rpdo_72_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x1448_rpdo_73_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x1449_rpdo_74_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x144A_rpdo_75_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x144B_rpdo_76_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x144C_rpdo_77_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x144D_rpdo_78_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x144E_rpdo_79_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t event_timer;
    } x144F_rpdo_80_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
        uint32_t mapping_object_3;
        uint32_t mapping_object_4;
    } x1600_rpdo_1_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
        uint32_t mapping_object_3;
    } x1601_rpdo_2_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
        uint32_t mapping_object_3;
        uint32_t mapping_object_4;
    } x1602_rpdo_3_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
        uint32_t mapping_object_3;
        uint32_t mapping_object_4;
    } x1603_rpdo_4_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
        uint32_t mapping_object_3;
        uint32_t mapping_object_4;
    } x1604_rpdo_5_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
        uint32_t mapping_object_3;
        uint32_t mapping_object_4;
    } x1605_rpdo_6_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
        uint32_t mapping_object_3;
    } x1606_rpdo_7_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
        uint32_t mapping_object_3;
        uint32_t mapping_object_4;
    } x1607_rpdo_8_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
        uint32_t mapping_object_3;
        uint32_t mapping_object_4;
    } x1608_rpdo_9_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
        uint32_t mapping_object_3;
        uint32_t mapping_object_4;
    } x1609_rpdo_10_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
        uint32_t mapping_object_3;
        uint32_t mapping_object_4;
    } x160A_rpdo_11_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
        uint32_t mapping_object_3;
        uint32_t mapping_object_4;
    } x160B_rpdo_12_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
    } x160C_rpdo_13_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
        uint32_t mapping_object_3;
        uint32_t mapping_object_4;
        uint32_t mapping_object_5;
        uint32_t mapping_object_6;
    } x160D_rpdo_14_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
        uint32_t mapping_object_3;
        uint32_t mapping_object_4;
    } x160E_rpdo_15_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
        uint32_t mapping_object_3;
        uint32_t mapping_object_4;
    } x160F_rpdo_16_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
    } x1610_rpdo_17_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
        uint32_t mapping_object_3;
        uint32_t mapping_object_4;
        uint32_t mapping_object_5;
        uint32_t mapping_object_6;
    } x1611_rpdo_18_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
        uint32_t mapping_object_3;
        uint32_t mapping_object_4;
    } x1612_rpdo_19_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
        uint32_t mapping_object_3;
        uint32_t mapping_object_4;
    } x1613_rpdo_20_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
    } x1614_rpdo_21_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
        uint32_t mapping_object_3;
        uint32_t mapping_object_4;
        uint32_t mapping_object_5;
        uint32_t mapping_object_6;
    } x1615_rpdo_22_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
        uint32_t mapping_object_3;
        uint32_t mapping_object_4;
    } x1616_rpdo_23_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
        uint32_t mapping_object_3;
        uint32_t mapping_object_4;
    } x1617_rpdo_24_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
    } x1618_rpdo_25_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
        uint32_t mapping_object_3;
        uint32_t mapping_object_4;
        uint32_t mapping_object_5;
        uint32_t mapping_object_6;
    } x1619_rpdo_26_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
        uint32_t mapping_object_3;
        uint32_t mapping_object_4;
    } x161A_rpdo_27_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
        uint32_t mapping_object_3;
        uint32_t mapping_object_4;
    } x161B_rpdo_28_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
    } x161C_rpdo_29_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
        uint32_t mapping_object_3;
        uint32_t mapping_object_4;
        uint32_t mapping_object_5;
        uint32_t mapping_object_6;
    } x161D_rpdo_30_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
        uint32_t mapping_object_3;
        uint32_t mapping_object_4;
    } x161E_rpdo_31_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
        uint32_t mapping_object_3;
        uint32_t mapping_object_4;
    } x161F_rpdo_32_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
    } x1620_rpdo_33_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
        uint32_t mapping_object_3;
        uint32_t mapping_object_4;
        uint32_t mapping_object_5;
        uint32_t mapping_object_6;
    } x1621_rpdo_34_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
        uint32_t mapping_object_3;
    } x1622_rpdo_35_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
        uint32_t mapping_object_3;
    } x1623_rpdo_36_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
    } x1624_rpdo_37_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
        uint32_t mapping_object_3;
    } x1625_rpdo_38_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
        uint32_t mapping_object_3;
    } x1626_rpdo_39_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
        uint32_t mapping_object_3;
    } x1627_rpdo_40_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
        uint32_t mapping_object_3;
    } x1628_rpdo_41_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
    } x1629_rpdo_42_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
    } x162A_rpdo_43_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
    } x162B_rpdo_44_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
        uint32_t mapping_object_3;
    } x162C_rpdo_45_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
    } x162D_rpdo_46_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
    } x162E_rpdo_47_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
        uint32_t mapping_object_3;
    } x162F_rpdo_48_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
        uint32_t mapping_object_3;
    } x1630_rpdo_49_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
    } x1631_rpdo_50_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
    } x1632_rpdo_51_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
        uint32_t mapping_object_3;
    } x1633_rpdo_52_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
        uint32_t mapping_object_3;
    } x1634_rpdo_53_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
    } x1635_rpdo_54_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
    } x1636_rpdo_55_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
        uint32_t mapping_object_3;
    } x1637_rpdo_56_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
        uint32_t mapping_object_3;
    } x1638_rpdo_57_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
    } x1639_rpdo_58_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
    } x163A_rpdo_59_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
        uint32_t mapping_object_3;
    } x163B_rpdo_60_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
        uint32_t mapping_object_3;
        uint32_t mapping_object_4;
        uint32_t mapping_object_5;
        uint32_t mapping_object_6;
    } x163C_rpdo_61_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
    } x163D_rpdo_62_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
    } x163E_rpdo_63_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
    } x163F_rpdo_64_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
    } x1640_rpdo_65_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
    } x1641_rpdo_66_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
        uint32_t mapping_object_3;
        uint32_t mapping_object_4;
    } x1642_rpdo_67_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
    } x1643_rpdo_68_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
        uint32_t mapping_object_3;
        uint32_t mapping_object_4;
        uint32_t mapping_object_5;
        uint32_t mapping_object_6;
    } x1644_rpdo_69_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
    } x1645_rpdo_70_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
        uint32_t mapping_object_3;
        uint32_t mapping_object_4;
    } x1646_rpdo_71_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
    } x1647_rpdo_72_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
        uint32_t mapping_object_3;
        uint32_t mapping_object_4;
        uint32_t mapping_object_5;
        uint32_t mapping_object_6;
    } x1648_rpdo_73_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
    } x1649_rpdo_74_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
        uint32_t mapping_object_3;
        uint32_t mapping_object_4;
        uint32_t mapping_object_5;
    } x164A_rpdo_75_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
        uint32_t mapping_object_3;
        uint32_t mapping_object_4;
        uint32_t mapping_object_5;
        uint32_t mapping_object_6;
    } x164B_rpdo_76_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
    } x164C_rpdo_77_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
        uint32_t mapping_object_3;
        uint32_t mapping_object_4;
        uint32_t mapping_object_5;
        uint32_t mapping_object_6;
        uint32_t mapping_object_7;
    } x164D_rpdo_78_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
        uint32_t mapping_object_3;
        uint32_t mapping_object_4;
        uint32_t mapping_object_5;
    } x164E_rpdo_79_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
        uint32_t mapping_object_3;
    } x164F_rpdo_80_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t inhibit_time;
        uint16_t event_timer;
        uint8_t sync_start_value;
    } x1800_tpdo_1_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t inhibit_time;
        uint16_t event_timer;
        uint8_t sync_start_value;
    } x1801_tpdo_2_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t inhibit_time;
        uint16_t event_timer;
        uint8_t sync_start_value;
    } x1802_tpdo_3_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t inhibit_time;
        uint16_t event_timer;
        uint8_t sync_start_value;
    } x1803_tpdo_4_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t inhibit_time;
        uint16_t event_timer;
        uint8_t sync_start_value;
    } x1804_tpdo_5_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t inhibit_time;
        uint16_t event_timer;
        uint8_t sync_start_value;
    } x1805_tpdo_6_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t cob_id;
        uint8_t transmission_type;
        uint16_t inhibit_time;
        uint16_t event_timer;
        uint8_t sync_start_value;
    } x1806_tpdo_7_communication_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
    } x1A00_tpdo_1_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
        uint32_t mapping_object_3;
        uint32_t mapping_object_4;
        uint32_t mapping_object_5;
    } x1A01_tpdo_2_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
    } x1A02_tpdo_3_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
    } x1A03_tpdo_4_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
        uint32_t mapping_object_3;
        uint32_t mapping_object_4;
        uint32_t mapping_object_5;
        uint32_t mapping_object_6;
        uint32_t mapping_object_7;
    } x1A04_tpdo_5_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
    } x1A05_tpdo_6_mapping_parameters;
    struct {
        uint8_t highest_index_supported;
        uint32_t mapping_object_1;
        uint32_t mapping_object_2;
        uint32_t mapping_object_3;
    } x1A06_tpdo_7_mapping_parameters;
    uint64_t x2010_scet;
    uint64_t x2011_utc;
    uint8_t x3000_satellite_id;
    bool_t x3001_flight_mode;
    struct {
        uint8_t highest_index_supported;
        char hw_version[4];
        char configs_version[21];
        char olaf_version[6];
        char sw_version[6];
    } x3002_versions;
    struct {
        uint8_t highest_index_supported;
        uint8_t reset;
        uint8_t storage_percent;
        uint8_t ram_percent;
        uint32_t unix_time;
        uint32_t uptime;
        uint16_t power_cycles;
        uint8_t boot_select;
    } x3003_system;
    struct {
        uint8_t highest_index_supported;
        uint8_t length;
        char files_json[3];
        char file_name[1];
        bool_t remove;
    } x3004_fread_cache;
    struct {
        uint8_t highest_index_supported;
        uint8_t length;
        char files_json[3];
        char file_name[1];
        bool_t remove;
    } x3005_fwrite_cache;
    struct {
        uint8_t highest_index_supported;
        uint8_t status;
        uint8_t cache_length;
        char cache_files_json[3];
        bool_t update;
        bool_t make_status_file;
    } x3006_updater;
    struct {
        uint8_t highest_index_supported;
        bool_t make_file;
        char since_boot[1];
    } x3007_logs;
    struct {
        uint8_t highest_index_supported;
        uint8_t total;
        uint8_t active;
        uint8_t failed;
    } x3008_daemons;
    uint8_t x3009_board_id;
    uint8_t x4000_status;
    uint32_t x4001_reset_timeout;
    uint8_t x4002_mode;
    uint8_t x4003_hw_id;
    struct {
        uint8_t highest_index_supported;
        bool_t enable;
        uint32_t timeout;
        uint32_t last_enable_timestamp;
    } x4004_tx_control;
    struct {
        uint8_t highest_index_supported;
        bool_t deployed;
        uint8_t attempts;
        uint16_t pre_attempt_timeout;
        uint8_t attempt_timeout;
        uint8_t reattempt_timeout;
        bool_t deploy_monopole_now;
        bool_t deploy_helical_now;
        uint16_t good_test_threshold;
        bool_t test_monopole_is_good;
        bool_t test_helical_is_good;
        uint16_t monopole_voltage;
        uint16_t helical_voltage;
        uint32_t attempt_between_timeout;
    } x4005_antennas;
    struct {
        uint8_t highest_index_supported;
        uint32_t rx_bytes;
        uint32_t rx_packets;
        int8_t rssi;
        bool_t synth_lock;
        uint8_t synth_relock_count;
    } x4006_lband;
    struct {
        uint8_t highest_index_supported;
        uint32_t rx_bytes;
        uint32_t rx_packets;
        int8_t rssi;
    } x4007_uhf;
    struct {
        uint8_t highest_index_supported;
        uint8_t crypto_key_0[32];
        uint8_t crypto_key_1[32];
        uint8_t crypto_key_2[32];
        uint8_t crypto_key_3[32];
        uint8_t active_crypto_key;
        uint32_t sequence_count;
        uint32_t rejected_count;
        uint32_t vc1_sequence_count;
        uint32_t vc1_rejected_count;
        uint32_t vc1_expedite_count;
        uint64_t last_timestamp;
        uint32_t timeout;
    } x4008_edl;
    struct {
        uint8_t highest_index_supported;
        uint8_t status;
        uint8_t has_fault;
        uint8_t current;
        bool_t scan;
        bool_t reset;
        uint8_t reset_attempts;
        uint8_t reset_delay;
        char nodes_status_json[3];
        uint8_t node_select;
        uint8_t node_status;
        bool_t node_reset;
        uint8_t node_reset_attempts;
        uint8_t uart_node_select;
    } x4009_opd;
    struct {
        uint8_t highest_index_supported;
        uint8_t revision;
        char src_callsign[7];
        char dest_callsign[6];
        char start_chars[4];
        uint32_t delay;
        bool_t send_now;
        uint64_t last_timestamp;
        uint8_t src_ssid;
        uint8_t dest_ssid;
        uint8_t control;
        uint8_t pid;
        bool_t command;
        bool_t response;
    } x400A_beacon;
    struct {
        uint8_t highest_index_supported;
        uint32_t timestamp;
        uint32_t alarm_a;
        uint32_t alarm_b;
        uint32_t wakeup_interval;
    } x400B_rtc;
    struct {
        uint8_t highest_index_supported;
        char status_json[3];
        uint8_t total_nodes;
        uint8_t nodes_off;
        uint8_t nodes_booting;
        uint8_t nodes_on;
        uint8_t nodes_with_errors;
        uint8_t nodes_not_found;
        uint8_t nodes_dead;
    } x400C_node_manager;
    uint8_t x400D_node_status_sub0;
    uint8_t x400D_node_status[OD_CNT_ARR_400D];
    struct {
        uint8_t highest_index_supported;
        uint8_t mode;
        uint8_t status;
        char signals[3];
        char feedback[3];
    } x400E_adcs_manager;
    struct {
        uint8_t highest_index_supported;
        uint16_t pack_1_vbatt;
        uint16_t pack_1_vcell_max;
        uint16_t pack_1_vcell_min;
        uint16_t pack_1_vcell;
        uint16_t pack_1_vcell_1;
        uint16_t pack_1_vcell_2;
        uint16_t pack_1_vcell_avg;
        int16_t pack_1_current;
        int16_t pack_1_current_avg;
        int16_t pack_1_current_max;
        int16_t pack_1_current_min;
        int8_t pack_1_temperature;
        int8_t pack_1_temperature_avg;
        int8_t pack_1_temperature_max;
        int8_t pack_1_temperature_min;
        uint16_t pack_1_full_capacity;
        uint16_t pack_1_reported_capacity;
        uint8_t pack_1_reported_state_of_charge;
        uint8_t pack_1_status;
        uint16_t pack_2_vbatt;
        uint16_t pack_2_vcell_max;
        uint16_t pack_2_vcell_min;
        uint16_t pack_2_vcell;
        uint16_t pack_2_vcell_1;
        uint16_t pack_2_vcell_2;
        uint16_t pack_2_vcell_avg;
        int16_t pack_2_current;
        int16_t pack_2_current_avg;
        int16_t pack_2_current_max;
        int16_t pack_2_current_min;
        int8_t pack_2_temperature;
        int8_t pack_2_temperature_avg;
        int8_t pack_2_temperature_max;
        int8_t pack_2_temperature_min;
        uint16_t pack_2_full_capacity;
        uint16_t pack_2_reported_capacity;
        uint8_t pack_2_reported_state_of_charge;
        uint8_t pack_2_status;
    } x5004_battery_1;
    struct {
        uint8_t highest_index_supported;
        uint16_t output_voltage;
        int16_t output_current;
        uint16_t output_power;
        uint16_t output_voltage_avg;
        int16_t output_current_avg;
        uint16_t output_power_avg;
        uint16_t output_voltage_max;
        int16_t output_current_max;
        uint16_t output_power_max;
        uint16_t output_energy;
        int8_t cell_1_temperature;
        int8_t cell_2_temperature;
        int8_t cell_1_temperature_min;
        int8_t cell_2_temperature_min;
        int8_t cell_1_temperature_max;
        int8_t cell_2_temperature_max;
    } x500C_solar_1;
    struct {
        uint8_t highest_index_supported;
        uint16_t output_voltage;
        int16_t output_current;
        uint16_t output_power;
        uint16_t output_voltage_avg;
        int16_t output_current_avg;
        uint16_t output_power_avg;
        uint16_t output_voltage_max;
        int16_t output_current_max;
        uint16_t output_power_max;
        uint16_t output_energy;
        int8_t cell_1_temperature;
        int8_t cell_2_temperature;
        int8_t cell_1_temperature_min;
        int8_t cell_2_temperature_min;
        int8_t cell_1_temperature_max;
        int8_t cell_2_temperature_max;
    } x5010_solar_2;
    struct {
        uint8_t highest_index_supported;
        uint16_t output_voltage;
        int16_t output_current;
        uint16_t output_power;
        uint16_t output_voltage_avg;
        int16_t output_current_avg;
        uint16_t output_power_avg;
        uint16_t output_voltage_max;
        int16_t output_current_max;
        uint16_t output_power_max;
        uint16_t output_energy;
        int8_t cell_1_temperature;
        int8_t cell_2_temperature;
        int8_t cell_1_temperature_min;
        int8_t cell_2_temperature_min;
        int8_t cell_1_temperature_max;
        int8_t cell_2_temperature_max;
    } x5014_solar_3;
    struct {
        uint8_t highest_index_supported;
        uint16_t output_voltage;
        int16_t output_current;
        uint16_t output_power;
        uint16_t output_voltage_avg;
        int16_t output_current_avg;
        uint16_t output_power_avg;
        uint16_t output_voltage_max;
        int16_t output_current_max;
        uint16_t output_power_max;
        uint16_t output_energy;
        int8_t cell_1_temperature;
        int8_t cell_2_temperature;
        int8_t cell_1_temperature_min;
        int8_t cell_2_temperature_min;
        int8_t cell_1_temperature_max;
        int8_t cell_2_temperature_max;
    } x5018_solar_4;
    struct {
        uint8_t highest_index_supported;
        uint16_t output_voltage;
        int16_t output_current;
        uint16_t output_power;
        uint16_t output_voltage_avg;
        int16_t output_current_avg;
        uint16_t output_power_avg;
        uint16_t output_voltage_max;
        int16_t output_current_max;
        uint16_t output_power_max;
        uint16_t output_energy;
        int8_t cell_1_temperature;
        int8_t cell_2_temperature;
        int8_t cell_1_temperature_min;
        int8_t cell_2_temperature_min;
        int8_t cell_1_temperature_max;
        int8_t cell_2_temperature_max;
    } x501C_solar_5;
    struct {
        uint8_t highest_index_supported;
        uint16_t output_voltage;
        int16_t output_current;
        uint16_t output_power;
        uint16_t output_voltage_avg;
        int16_t output_current_avg;
        uint16_t output_power_avg;
        uint16_t output_voltage_max;
        int16_t output_current_max;
        uint16_t output_power_max;
        uint16_t output_energy;
        int8_t cell_1_temperature;
        int8_t cell_2_temperature;
        int8_t cell_1_temperature_min;
        int8_t cell_2_temperature_min;
        int8_t cell_1_temperature_max;
        int8_t cell_2_temperature_max;
    } x5020_solar_6;
    struct {
        uint8_t highest_index_supported;
        uint8_t system_storage_percent;
        uint8_t system_ram_percent;
        uint8_t fread_cache_length;
        uint8_t fwrite_cache_length;
        uint8_t daemons_active;
        uint8_t daemons_failed;
        uint8_t updater_status;
        uint8_t updater_cache_length;
        uint8_t status;
        int16_t orientation_right_ascension;
        int16_t orientation_declination;
        int16_t orientation_roll;
        uint32_t orientation_time_since_midnight;
    } x502C_star_tracker_1;
    struct {
        uint8_t highest_index_supported;
        uint8_t system_storage_percent;
        uint8_t system_ram_percent;
        uint8_t fread_cache_length;
        uint8_t fwrite_cache_length;
        uint8_t daemons_active;
        uint8_t daemons_failed;
        uint8_t updater_status;
        uint8_t updater_cache_length;
        uint32_t skytraq_time_since_midnight;
        int32_t skytraq_ecef_x;
        int32_t skytraq_ecef_y;
        int32_t skytraq_ecef_z;
        int32_t skytraq_ecef_vx;
        int32_t skytraq_ecef_vy;
        int32_t skytraq_ecef_vz;
        uint8_t status;
        uint8_t skytraq_number_of_sv;
        uint8_t skytraq_fix_mode;
        bool_t time_syncd;
        uint64_t scet;
    } x5034_gps;
    struct {
        uint8_t highest_index_supported;
        int16_t gyroscope_pitch_rate;
        int16_t gyroscope_yaw_rate;
        int16_t gyroscope_roll_rate;
        int16_t accelerometer_x;
        int16_t accelerometer_y;
        int16_t accelerometer_z;
        int8_t temperature;
        int16_t pos_z_magnetometer_1_x;
        int16_t pos_z_magnetometer_1_y;
        int16_t pos_z_magnetometer_1_z;
        int16_t pos_z_magnetometer_2_x;
        int16_t pos_z_magnetometer_2_y;
        int16_t pos_z_magnetometer_2_z;
        int16_t min_z_magnetometer_1_x;
        int16_t min_z_magnetometer_1_y;
        int16_t min_z_magnetometer_1_z;
        int16_t min_z_magnetometer_2_x;
        int16_t min_z_magnetometer_2_y;
        int16_t min_z_magnetometer_2_z;
        int32_t magnetorquer_current_x;
        int16_t magnetorquer_pwm_x;
        int32_t magnetorquer_current_y;
        int16_t magnetorquer_pwm_y;
        int32_t magnetorquer_current_z;
        int16_t magnetorquer_pwm_z;
    } x5038_adcs;
    struct {
        uint8_t highest_index_supported;
        uint8_t ctrl_stat_current_state;
        uint8_t ctrl_stat_procedure_result;
        uint32_t ctrl_stat_errors;
        float motor_velocity;
        float motor_current;
        float bus_voltage;
        float bus_current;
        int16_t temperature_sensor_1;
        int16_t temperature_sensor_2;
        int16_t temperature_sensor_3;
    } x503C_rw_1;
    struct {
        uint8_t highest_index_supported;
        uint8_t ctrl_stat_current_state;
        uint8_t ctrl_stat_procedure_result;
        uint32_t ctrl_stat_errors;
        float motor_velocity;
        float motor_current;
        float bus_voltage;
        float bus_current;
        int16_t temperature_sensor_1;
        int16_t temperature_sensor_2;
        int16_t temperature_sensor_3;
    } x5040_rw_2;
    struct {
        uint8_t highest_index_supported;
        uint8_t ctrl_stat_current_state;
        uint8_t ctrl_stat_procedure_result;
        uint32_t ctrl_stat_errors;
        float motor_velocity;
        float motor_current;
        float bus_voltage;
        float bus_current;
        int16_t temperature_sensor_1;
        int16_t temperature_sensor_2;
        int16_t temperature_sensor_3;
    } x5044_rw_3;
    struct {
        uint8_t highest_index_supported;
        uint8_t ctrl_stat_current_state;
        uint8_t ctrl_stat_procedure_result;
        uint32_t ctrl_stat_errors;
        float motor_velocity;
        float motor_current;
        float bus_voltage;
        float bus_current;
        int16_t temperature_sensor_1;
        int16_t temperature_sensor_2;
        int16_t temperature_sensor_3;
    } x5048_rw_4;
    struct {
        uint8_t highest_index_supported;
        uint8_t system_storage_percent;
        uint8_t system_ram_percent;
        uint8_t fread_cache_length;
        uint8_t fwrite_cache_length;
        uint8_t daemons_active;
        uint8_t daemons_failed;
        uint8_t updater_status;
        uint8_t updater_cache_length;
        uint8_t status;
        int8_t radio_temperature;
        uint8_t transmission_bit_rate;
        uint32_t transmission_images_transmitted;
        bool_t transmission_enable_pa;
    } x504C_dxwifi;
    struct {
        uint8_t highest_index_supported;
        uint8_t system_storage_percent;
        uint8_t system_ram_percent;
        uint8_t fread_cache_length;
        uint8_t fwrite_cache_length;
        uint8_t daemons_active;
        uint8_t daemons_failed;
        uint8_t updater_status;
        uint8_t updater_cache_length;
        uint8_t camera_status;
        int8_t camera_temperature;
        bool_t tec_status;
        bool_t tec_saturated;
        uint8_t tec_saturation_diff;
        int8_t tec_pid_setpoint;
        int8_t tec_cooldown_temperature;
    } x5050_cfc_processor;
    struct {
        uint8_t highest_index_supported;
        uint8_t dtc_ctrl;
        uint8_t dtc_mux_select;
        uint16_t dtc_dac;
        uint16_t dtc_status;
        uint16_t dtc_error;
        uint16_t adcsample_led_current;
        uint16_t adcsample_led_swir_pd_current;
        uint16_t adcsample_uv_pd_current;
    } x5054_diode_test;
} OD_RAM_t;

#ifndef OD_ATTR_RAM
#define OD_ATTR_RAM
#endif
extern OD_ATTR_RAM OD_RAM_t OD_RAM;

#ifndef OD_ATTR_OD
#define OD_ATTR_OD
#endif
extern OD_ATTR_OD OD_t *OD;

#define OD_ENTRY_H1000 &OD->list[0]
#define OD_ENTRY_H1001 &OD->list[1]
#define OD_ENTRY_H1003 &OD->list[2]
#define OD_ENTRY_H1005 &OD->list[3]
#define OD_ENTRY_H1006 &OD->list[4]
#define OD_ENTRY_H1014 &OD->list[5]
#define OD_ENTRY_H1015 &OD->list[6]
#define OD_ENTRY_H1016 &OD->list[7]
#define OD_ENTRY_H1017 &OD->list[8]
#define OD_ENTRY_H1018 &OD->list[9]
#define OD_ENTRY_H1019 &OD->list[10]
#define OD_ENTRY_H1023 &OD->list[11]
#define OD_ENTRY_H1200 &OD->list[12]
#define OD_ENTRY_H1280 &OD->list[13]
#define OD_ENTRY_H1400 &OD->list[14]
#define OD_ENTRY_H1401 &OD->list[15]
#define OD_ENTRY_H1402 &OD->list[16]
#define OD_ENTRY_H1403 &OD->list[17]
#define OD_ENTRY_H1404 &OD->list[18]
#define OD_ENTRY_H1405 &OD->list[19]
#define OD_ENTRY_H1406 &OD->list[20]
#define OD_ENTRY_H1407 &OD->list[21]
#define OD_ENTRY_H1408 &OD->list[22]
#define OD_ENTRY_H1409 &OD->list[23]
#define OD_ENTRY_H140A &OD->list[24]
#define OD_ENTRY_H140B &OD->list[25]
#define OD_ENTRY_H140C &OD->list[26]
#define OD_ENTRY_H140D &OD->list[27]
#define OD_ENTRY_H140E &OD->list[28]
#define OD_ENTRY_H140F &OD->list[29]
#define OD_ENTRY_H1410 &OD->list[30]
#define OD_ENTRY_H1411 &OD->list[31]
#define OD_ENTRY_H1412 &OD->list[32]
#define OD_ENTRY_H1413 &OD->list[33]
#define OD_ENTRY_H1414 &OD->list[34]
#define OD_ENTRY_H1415 &OD->list[35]
#define OD_ENTRY_H1416 &OD->list[36]
#define OD_ENTRY_H1417 &OD->list[37]
#define OD_ENTRY_H1418 &OD->list[38]
#define OD_ENTRY_H1419 &OD->list[39]
#define OD_ENTRY_H141A &OD->list[40]
#define OD_ENTRY_H141B &OD->list[41]
#define OD_ENTRY_H141C &OD->list[42]
#define OD_ENTRY_H141D &OD->list[43]
#define OD_ENTRY_H141E &OD->list[44]
#define OD_ENTRY_H141F &OD->list[45]
#define OD_ENTRY_H1420 &OD->list[46]
#define OD_ENTRY_H1421 &OD->list[47]
#define OD_ENTRY_H1422 &OD->list[48]
#define OD_ENTRY_H1423 &OD->list[49]
#define OD_ENTRY_H1424 &OD->list[50]
#define OD_ENTRY_H1425 &OD->list[51]
#define OD_ENTRY_H1426 &OD->list[52]
#define OD_ENTRY_H1427 &OD->list[53]
#define OD_ENTRY_H1428 &OD->list[54]
#define OD_ENTRY_H1429 &OD->list[55]
#define OD_ENTRY_H142A &OD->list[56]
#define OD_ENTRY_H142B &OD->list[57]
#define OD_ENTRY_H142C &OD->list[58]
#define OD_ENTRY_H142D &OD->list[59]
#define OD_ENTRY_H142E &OD->list[60]
#define OD_ENTRY_H142F &OD->list[61]
#define OD_ENTRY_H1430 &OD->list[62]
#define OD_ENTRY_H1431 &OD->list[63]
#define OD_ENTRY_H1432 &OD->list[64]
#define OD_ENTRY_H1433 &OD->list[65]
#define OD_ENTRY_H1434 &OD->list[66]
#define OD_ENTRY_H1435 &OD->list[67]
#define OD_ENTRY_H1436 &OD->list[68]
#define OD_ENTRY_H1437 &OD->list[69]
#define OD_ENTRY_H1438 &OD->list[70]
#define OD_ENTRY_H1439 &OD->list[71]
#define OD_ENTRY_H143A &OD->list[72]
#define OD_ENTRY_H143B &OD->list[73]
#define OD_ENTRY_H143C &OD->list[74]
#define OD_ENTRY_H143D &OD->list[75]
#define OD_ENTRY_H143E &OD->list[76]
#define OD_ENTRY_H143F &OD->list[77]
#define OD_ENTRY_H1440 &OD->list[78]
#define OD_ENTRY_H1441 &OD->list[79]
#define OD_ENTRY_H1442 &OD->list[80]
#define OD_ENTRY_H1443 &OD->list[81]
#define OD_ENTRY_H1444 &OD->list[82]
#define OD_ENTRY_H1445 &OD->list[83]
#define OD_ENTRY_H1446 &OD->list[84]
#define OD_ENTRY_H1447 &OD->list[85]
#define OD_ENTRY_H1448 &OD->list[86]
#define OD_ENTRY_H1449 &OD->list[87]
#define OD_ENTRY_H144A &OD->list[88]
#define OD_ENTRY_H144B &OD->list[89]
#define OD_ENTRY_H144C &OD->list[90]
#define OD_ENTRY_H144D &OD->list[91]
#define OD_ENTRY_H144E &OD->list[92]
#define OD_ENTRY_H144F &OD->list[93]
#define OD_ENTRY_H1600 &OD->list[94]
#define OD_ENTRY_H1601 &OD->list[95]
#define OD_ENTRY_H1602 &OD->list[96]
#define OD_ENTRY_H1603 &OD->list[97]
#define OD_ENTRY_H1604 &OD->list[98]
#define OD_ENTRY_H1605 &OD->list[99]
#define OD_ENTRY_H1606 &OD->list[100]
#define OD_ENTRY_H1607 &OD->list[101]
#define OD_ENTRY_H1608 &OD->list[102]
#define OD_ENTRY_H1609 &OD->list[103]
#define OD_ENTRY_H160A &OD->list[104]
#define OD_ENTRY_H160B &OD->list[105]
#define OD_ENTRY_H160C &OD->list[106]
#define OD_ENTRY_H160D &OD->list[107]
#define OD_ENTRY_H160E &OD->list[108]
#define OD_ENTRY_H160F &OD->list[109]
#define OD_ENTRY_H1610 &OD->list[110]
#define OD_ENTRY_H1611 &OD->list[111]
#define OD_ENTRY_H1612 &OD->list[112]
#define OD_ENTRY_H1613 &OD->list[113]
#define OD_ENTRY_H1614 &OD->list[114]
#define OD_ENTRY_H1615 &OD->list[115]
#define OD_ENTRY_H1616 &OD->list[116]
#define OD_ENTRY_H1617 &OD->list[117]
#define OD_ENTRY_H1618 &OD->list[118]
#define OD_ENTRY_H1619 &OD->list[119]
#define OD_ENTRY_H161A &OD->list[120]
#define OD_ENTRY_H161B &OD->list[121]
#define OD_ENTRY_H161C &OD->list[122]
#define OD_ENTRY_H161D &OD->list[123]
#define OD_ENTRY_H161E &OD->list[124]
#define OD_ENTRY_H161F &OD->list[125]
#define OD_ENTRY_H1620 &OD->list[126]
#define OD_ENTRY_H1621 &OD->list[127]
#define OD_ENTRY_H1622 &OD->list[128]
#define OD_ENTRY_H1623 &OD->list[129]
#define OD_ENTRY_H1624 &OD->list[130]
#define OD_ENTRY_H1625 &OD->list[131]
#define OD_ENTRY_H1626 &OD->list[132]
#define OD_ENTRY_H1627 &OD->list[133]
#define OD_ENTRY_H1628 &OD->list[134]
#define OD_ENTRY_H1629 &OD->list[135]
#define OD_ENTRY_H162A &OD->list[136]
#define OD_ENTRY_H162B &OD->list[137]
#define OD_ENTRY_H162C &OD->list[138]
#define OD_ENTRY_H162D &OD->list[139]
#define OD_ENTRY_H162E &OD->list[140]
#define OD_ENTRY_H162F &OD->list[141]
#define OD_ENTRY_H1630 &OD->list[142]
#define OD_ENTRY_H1631 &OD->list[143]
#define OD_ENTRY_H1632 &OD->list[144]
#define OD_ENTRY_H1633 &OD->list[145]
#define OD_ENTRY_H1634 &OD->list[146]
#define OD_ENTRY_H1635 &OD->list[147]
#define OD_ENTRY_H1636 &OD->list[148]
#define OD_ENTRY_H1637 &OD->list[149]
#define OD_ENTRY_H1638 &OD->list[150]
#define OD_ENTRY_H1639 &OD->list[151]
#define OD_ENTRY_H163A &OD->list[152]
#define OD_ENTRY_H163B &OD->list[153]
#define OD_ENTRY_H163C &OD->list[154]
#define OD_ENTRY_H163D &OD->list[155]
#define OD_ENTRY_H163E &OD->list[156]
#define OD_ENTRY_H163F &OD->list[157]
#define OD_ENTRY_H1640 &OD->list[158]
#define OD_ENTRY_H1641 &OD->list[159]
#define OD_ENTRY_H1642 &OD->list[160]
#define OD_ENTRY_H1643 &OD->list[161]
#define OD_ENTRY_H1644 &OD->list[162]
#define OD_ENTRY_H1645 &OD->list[163]
#define OD_ENTRY_H1646 &OD->list[164]
#define OD_ENTRY_H1647 &OD->list[165]
#define OD_ENTRY_H1648 &OD->list[166]
#define OD_ENTRY_H1649 &OD->list[167]
#define OD_ENTRY_H164A &OD->list[168]
#define OD_ENTRY_H164B &OD->list[169]
#define OD_ENTRY_H164C &OD->list[170]
#define OD_ENTRY_H164D &OD->list[171]
#define OD_ENTRY_H164E &OD->list[172]
#define OD_ENTRY_H164F &OD->list[173]
#define OD_ENTRY_H1800 &OD->list[174]
#define OD_ENTRY_H1801 &OD->list[175]
#define OD_ENTRY_H1802 &OD->list[176]
#define OD_ENTRY_H1803 &OD->list[177]
#define OD_ENTRY_H1804 &OD->list[178]
#define OD_ENTRY_H1805 &OD->list[179]
#define OD_ENTRY_H1806 &OD->list[180]
#define OD_ENTRY_H1A00 &OD->list[181]
#define OD_ENTRY_H1A01 &OD->list[182]
#define OD_ENTRY_H1A02 &OD->list[183]
#define OD_ENTRY_H1A03 &OD->list[184]
#define OD_ENTRY_H1A04 &OD->list[185]
#define OD_ENTRY_H1A05 &OD->list[186]
#define OD_ENTRY_H1A06 &OD->list[187]
#define OD_ENTRY_H2010 &OD->list[188]
#define OD_ENTRY_H2011 &OD->list[189]
#define OD_ENTRY_H3000 &OD->list[190]
#define OD_ENTRY_H3001 &OD->list[191]
#define OD_ENTRY_H3002 &OD->list[192]
#define OD_ENTRY_H3003 &OD->list[193]
#define OD_ENTRY_H3004 &OD->list[194]
#define OD_ENTRY_H3005 &OD->list[195]
#define OD_ENTRY_H3006 &OD->list[196]
#define OD_ENTRY_H3007 &OD->list[197]
#define OD_ENTRY_H3008 &OD->list[198]
#define OD_ENTRY_H3009 &OD->list[199]
#define OD_ENTRY_H4000 &OD->list[200]
#define OD_ENTRY_H4001 &OD->list[201]
#define OD_ENTRY_H4002 &OD->list[202]
#define OD_ENTRY_H4003 &OD->list[203]
#define OD_ENTRY_H4004 &OD->list[204]
#define OD_ENTRY_H4005 &OD->list[205]
#define OD_ENTRY_H4006 &OD->list[206]
#define OD_ENTRY_H4007 &OD->list[207]
#define OD_ENTRY_H4008 &OD->list[208]
#define OD_ENTRY_H4009 &OD->list[209]
#define OD_ENTRY_H400A &OD->list[210]
#define OD_ENTRY_H400B &OD->list[211]
#define OD_ENTRY_H400C &OD->list[212]
#define OD_ENTRY_H400D &OD->list[213]
#define OD_ENTRY_H400E &OD->list[214]
#define OD_ENTRY_H5004 &OD->list[215]
#define OD_ENTRY_H500C &OD->list[216]
#define OD_ENTRY_H5010 &OD->list[217]
#define OD_ENTRY_H5014 &OD->list[218]
#define OD_ENTRY_H5018 &OD->list[219]
#define OD_ENTRY_H501C &OD->list[220]
#define OD_ENTRY_H5020 &OD->list[221]
#define OD_ENTRY_H502C &OD->list[222]
#define OD_ENTRY_H5034 &OD->list[223]
#define OD_ENTRY_H5038 &OD->list[224]
#define OD_ENTRY_H503C &OD->list[225]
#define OD_ENTRY_H5040 &OD->list[226]
#define OD_ENTRY_H5044 &OD->list[227]
#define OD_ENTRY_H5048 &OD->list[228]
#define OD_ENTRY_H504C &OD->list[229]
#define OD_ENTRY_H5050 &OD->list[230]
#define OD_ENTRY_H5054 &OD->list[231]

#define OD_ENTRY_H1000_DEVICE_TYPE &OD->list[0]
#define OD_ENTRY_H1001_ERROR_REGISTER &OD->list[1]
#define OD_ENTRY_H1003_PREDEFINED_ERROR_FIELD &OD->list[2]
#define OD_ENTRY_H1005_COB_ID_SYNC &OD->list[3]
#define OD_ENTRY_H1006_COMMUNICATION_CYCLE_PERIOD &OD->list[4]
#define OD_ENTRY_H1014_COB_ID_EMERGENCY_MESSAGE &OD->list[5]
#define OD_ENTRY_H1015_INHIBIT_TIME_EMCY &OD->list[6]
#define OD_ENTRY_H1016_CONSUMER_HEARTBEAT_TIME &OD->list[7]
#define OD_ENTRY_H1017_PRODUCER_HEARTBEAT_TIME &OD->list[8]
#define OD_ENTRY_H1018_IDENTITY &OD->list[9]
#define OD_ENTRY_H1019_SYNCHRONOUS_COUNTER_OVERFLOW_VALUE &OD->list[10]
#define OD_ENTRY_H1023_OS_COMMAND &OD->list[11]
#define OD_ENTRY_H1200_SDO_SERVER_PARAMETER &OD->list[12]
#define OD_ENTRY_H1280_SDO_CLIENT_PARAMETER &OD->list[13]
#define OD_ENTRY_H1400_RPDO_1_COMMUNICATION_PARAMETERS &OD->list[14]
#define OD_ENTRY_H1401_RPDO_2_COMMUNICATION_PARAMETERS &OD->list[15]
#define OD_ENTRY_H1402_RPDO_3_COMMUNICATION_PARAMETERS &OD->list[16]
#define OD_ENTRY_H1403_RPDO_4_COMMUNICATION_PARAMETERS &OD->list[17]
#define OD_ENTRY_H1404_RPDO_5_COMMUNICATION_PARAMETERS &OD->list[18]
#define OD_ENTRY_H1405_RPDO_6_COMMUNICATION_PARAMETERS &OD->list[19]
#define OD_ENTRY_H1406_RPDO_7_COMMUNICATION_PARAMETERS &OD->list[20]
#define OD_ENTRY_H1407_RPDO_8_COMMUNICATION_PARAMETERS &OD->list[21]
#define OD_ENTRY_H1408_RPDO_9_COMMUNICATION_PARAMETERS &OD->list[22]
#define OD_ENTRY_H1409_RPDO_10_COMMUNICATION_PARAMETERS &OD->list[23]
#define OD_ENTRY_H140A_RPDO_11_COMMUNICATION_PARAMETERS &OD->list[24]
#define OD_ENTRY_H140B_RPDO_12_COMMUNICATION_PARAMETERS &OD->list[25]
#define OD_ENTRY_H140C_RPDO_13_COMMUNICATION_PARAMETERS &OD->list[26]
#define OD_ENTRY_H140D_RPDO_14_COMMUNICATION_PARAMETERS &OD->list[27]
#define OD_ENTRY_H140E_RPDO_15_COMMUNICATION_PARAMETERS &OD->list[28]
#define OD_ENTRY_H140F_RPDO_16_COMMUNICATION_PARAMETERS &OD->list[29]
#define OD_ENTRY_H1410_RPDO_17_COMMUNICATION_PARAMETERS &OD->list[30]
#define OD_ENTRY_H1411_RPDO_18_COMMUNICATION_PARAMETERS &OD->list[31]
#define OD_ENTRY_H1412_RPDO_19_COMMUNICATION_PARAMETERS &OD->list[32]
#define OD_ENTRY_H1413_RPDO_20_COMMUNICATION_PARAMETERS &OD->list[33]
#define OD_ENTRY_H1414_RPDO_21_COMMUNICATION_PARAMETERS &OD->list[34]
#define OD_ENTRY_H1415_RPDO_22_COMMUNICATION_PARAMETERS &OD->list[35]
#define OD_ENTRY_H1416_RPDO_23_COMMUNICATION_PARAMETERS &OD->list[36]
#define OD_ENTRY_H1417_RPDO_24_COMMUNICATION_PARAMETERS &OD->list[37]
#define OD_ENTRY_H1418_RPDO_25_COMMUNICATION_PARAMETERS &OD->list[38]
#define OD_ENTRY_H1419_RPDO_26_COMMUNICATION_PARAMETERS &OD->list[39]
#define OD_ENTRY_H141A_RPDO_27_COMMUNICATION_PARAMETERS &OD->list[40]
#define OD_ENTRY_H141B_RPDO_28_COMMUNICATION_PARAMETERS &OD->list[41]
#define OD_ENTRY_H141C_RPDO_29_COMMUNICATION_PARAMETERS &OD->list[42]
#define OD_ENTRY_H141D_RPDO_30_COMMUNICATION_PARAMETERS &OD->list[43]
#define OD_ENTRY_H141E_RPDO_31_COMMUNICATION_PARAMETERS &OD->list[44]
#define OD_ENTRY_H141F_RPDO_32_COMMUNICATION_PARAMETERS &OD->list[45]
#define OD_ENTRY_H1420_RPDO_33_COMMUNICATION_PARAMETERS &OD->list[46]
#define OD_ENTRY_H1421_RPDO_34_COMMUNICATION_PARAMETERS &OD->list[47]
#define OD_ENTRY_H1422_RPDO_35_COMMUNICATION_PARAMETERS &OD->list[48]
#define OD_ENTRY_H1423_RPDO_36_COMMUNICATION_PARAMETERS &OD->list[49]
#define OD_ENTRY_H1424_RPDO_37_COMMUNICATION_PARAMETERS &OD->list[50]
#define OD_ENTRY_H1425_RPDO_38_COMMUNICATION_PARAMETERS &OD->list[51]
#define OD_ENTRY_H1426_RPDO_39_COMMUNICATION_PARAMETERS &OD->list[52]
#define OD_ENTRY_H1427_RPDO_40_COMMUNICATION_PARAMETERS &OD->list[53]
#define OD_ENTRY_H1428_RPDO_41_COMMUNICATION_PARAMETERS &OD->list[54]
#define OD_ENTRY_H1429_RPDO_42_COMMUNICATION_PARAMETERS &OD->list[55]
#define OD_ENTRY_H142A_RPDO_43_COMMUNICATION_PARAMETERS &OD->list[56]
#define OD_ENTRY_H142B_RPDO_44_COMMUNICATION_PARAMETERS &OD->list[57]
#define OD_ENTRY_H142C_RPDO_45_COMMUNICATION_PARAMETERS &OD->list[58]
#define OD_ENTRY_H142D_RPDO_46_COMMUNICATION_PARAMETERS &OD->list[59]
#define OD_ENTRY_H142E_RPDO_47_COMMUNICATION_PARAMETERS &OD->list[60]
#define OD_ENTRY_H142F_RPDO_48_COMMUNICATION_PARAMETERS &OD->list[61]
#define OD_ENTRY_H1430_RPDO_49_COMMUNICATION_PARAMETERS &OD->list[62]
#define OD_ENTRY_H1431_RPDO_50_COMMUNICATION_PARAMETERS &OD->list[63]
#define OD_ENTRY_H1432_RPDO_51_COMMUNICATION_PARAMETERS &OD->list[64]
#define OD_ENTRY_H1433_RPDO_52_COMMUNICATION_PARAMETERS &OD->list[65]
#define OD_ENTRY_H1434_RPDO_53_COMMUNICATION_PARAMETERS &OD->list[66]
#define OD_ENTRY_H1435_RPDO_54_COMMUNICATION_PARAMETERS &OD->list[67]
#define OD_ENTRY_H1436_RPDO_55_COMMUNICATION_PARAMETERS &OD->list[68]
#define OD_ENTRY_H1437_RPDO_56_COMMUNICATION_PARAMETERS &OD->list[69]
#define OD_ENTRY_H1438_RPDO_57_COMMUNICATION_PARAMETERS &OD->list[70]
#define OD_ENTRY_H1439_RPDO_58_COMMUNICATION_PARAMETERS &OD->list[71]
#define OD_ENTRY_H143A_RPDO_59_COMMUNICATION_PARAMETERS &OD->list[72]
#define OD_ENTRY_H143B_RPDO_60_COMMUNICATION_PARAMETERS &OD->list[73]
#define OD_ENTRY_H143C_RPDO_61_COMMUNICATION_PARAMETERS &OD->list[74]
#define OD_ENTRY_H143D_RPDO_62_COMMUNICATION_PARAMETERS &OD->list[75]
#define OD_ENTRY_H143E_RPDO_63_COMMUNICATION_PARAMETERS &OD->list[76]
#define OD_ENTRY_H143F_RPDO_64_COMMUNICATION_PARAMETERS &OD->list[77]
#define OD_ENTRY_H1440_RPDO_65_COMMUNICATION_PARAMETERS &OD->list[78]
#define OD_ENTRY_H1441_RPDO_66_COMMUNICATION_PARAMETERS &OD->list[79]
#define OD_ENTRY_H1442_RPDO_67_COMMUNICATION_PARAMETERS &OD->list[80]
#define OD_ENTRY_H1443_RPDO_68_COMMUNICATION_PARAMETERS &OD->list[81]
#define OD_ENTRY_H1444_RPDO_69_COMMUNICATION_PARAMETERS &OD->list[82]
#define OD_ENTRY_H1445_RPDO_70_COMMUNICATION_PARAMETERS &OD->list[83]
#define OD_ENTRY_H1446_RPDO_71_COMMUNICATION_PARAMETERS &OD->list[84]
#define OD_ENTRY_H1447_RPDO_72_COMMUNICATION_PARAMETERS &OD->list[85]
#define OD_ENTRY_H1448_RPDO_73_COMMUNICATION_PARAMETERS &OD->list[86]
#define OD_ENTRY_H1449_RPDO_74_COMMUNICATION_PARAMETERS &OD->list[87]
#define OD_ENTRY_H144A_RPDO_75_COMMUNICATION_PARAMETERS &OD->list[88]
#define OD_ENTRY_H144B_RPDO_76_COMMUNICATION_PARAMETERS &OD->list[89]
#define OD_ENTRY_H144C_RPDO_77_COMMUNICATION_PARAMETERS &OD->list[90]
#define OD_ENTRY_H144D_RPDO_78_COMMUNICATION_PARAMETERS &OD->list[91]
#define OD_ENTRY_H144E_RPDO_79_COMMUNICATION_PARAMETERS &OD->list[92]
#define OD_ENTRY_H144F_RPDO_80_COMMUNICATION_PARAMETERS &OD->list[93]
#define OD_ENTRY_H1600_RPDO_1_MAPPING_PARAMETERS &OD->list[94]
#define OD_ENTRY_H1601_RPDO_2_MAPPING_PARAMETERS &OD->list[95]
#define OD_ENTRY_H1602_RPDO_3_MAPPING_PARAMETERS &OD->list[96]
#define OD_ENTRY_H1603_RPDO_4_MAPPING_PARAMETERS &OD->list[97]
#define OD_ENTRY_H1604_RPDO_5_MAPPING_PARAMETERS &OD->list[98]
#define OD_ENTRY_H1605_RPDO_6_MAPPING_PARAMETERS &OD->list[99]
#define OD_ENTRY_H1606_RPDO_7_MAPPING_PARAMETERS &OD->list[100]
#define OD_ENTRY_H1607_RPDO_8_MAPPING_PARAMETERS &OD->list[101]
#define OD_ENTRY_H1608_RPDO_9_MAPPING_PARAMETERS &OD->list[102]
#define OD_ENTRY_H1609_RPDO_10_MAPPING_PARAMETERS &OD->list[103]
#define OD_ENTRY_H160A_RPDO_11_MAPPING_PARAMETERS &OD->list[104]
#define OD_ENTRY_H160B_RPDO_12_MAPPING_PARAMETERS &OD->list[105]
#define OD_ENTRY_H160C_RPDO_13_MAPPING_PARAMETERS &OD->list[106]
#define OD_ENTRY_H160D_RPDO_14_MAPPING_PARAMETERS &OD->list[107]
#define OD_ENTRY_H160E_RPDO_15_MAPPING_PARAMETERS &OD->list[108]
#define OD_ENTRY_H160F_RPDO_16_MAPPING_PARAMETERS &OD->list[109]
#define OD_ENTRY_H1610_RPDO_17_MAPPING_PARAMETERS &OD->list[110]
#define OD_ENTRY_H1611_RPDO_18_MAPPING_PARAMETERS &OD->list[111]
#define OD_ENTRY_H1612_RPDO_19_MAPPING_PARAMETERS &OD->list[112]
#define OD_ENTRY_H1613_RPDO_20_MAPPING_PARAMETERS &OD->list[113]
#define OD_ENTRY_H1614_RPDO_21_MAPPING_PARAMETERS &OD->list[114]
#define OD_ENTRY_H1615_RPDO_22_MAPPING_PARAMETERS &OD->list[115]
#define OD_ENTRY_H1616_RPDO_23_MAPPING_PARAMETERS &OD->list[116]
#define OD_ENTRY_H1617_RPDO_24_MAPPING_PARAMETERS &OD->list[117]
#define OD_ENTRY_H1618_RPDO_25_MAPPING_PARAMETERS &OD->list[118]
#define OD_ENTRY_H1619_RPDO_26_MAPPING_PARAMETERS &OD->list[119]
#define OD_ENTRY_H161A_RPDO_27_MAPPING_PARAMETERS &OD->list[120]
#define OD_ENTRY_H161B_RPDO_28_MAPPING_PARAMETERS &OD->list[121]
#define OD_ENTRY_H161C_RPDO_29_MAPPING_PARAMETERS &OD->list[122]
#define OD_ENTRY_H161D_RPDO_30_MAPPING_PARAMETERS &OD->list[123]
#define OD_ENTRY_H161E_RPDO_31_MAPPING_PARAMETERS &OD->list[124]
#define OD_ENTRY_H161F_RPDO_32_MAPPING_PARAMETERS &OD->list[125]
#define OD_ENTRY_H1620_RPDO_33_MAPPING_PARAMETERS &OD->list[126]
#define OD_ENTRY_H1621_RPDO_34_MAPPING_PARAMETERS &OD->list[127]
#define OD_ENTRY_H1622_RPDO_35_MAPPING_PARAMETERS &OD->list[128]
#define OD_ENTRY_H1623_RPDO_36_MAPPING_PARAMETERS &OD->list[129]
#define OD_ENTRY_H1624_RPDO_37_MAPPING_PARAMETERS &OD->list[130]
#define OD_ENTRY_H1625_RPDO_38_MAPPING_PARAMETERS &OD->list[131]
#define OD_ENTRY_H1626_RPDO_39_MAPPING_PARAMETERS &OD->list[132]
#define OD_ENTRY_H1627_RPDO_40_MAPPING_PARAMETERS &OD->list[133]
#define OD_ENTRY_H1628_RPDO_41_MAPPING_PARAMETERS &OD->list[134]
#define OD_ENTRY_H1629_RPDO_42_MAPPING_PARAMETERS &OD->list[135]
#define OD_ENTRY_H162A_RPDO_43_MAPPING_PARAMETERS &OD->list[136]
#define OD_ENTRY_H162B_RPDO_44_MAPPING_PARAMETERS &OD->list[137]
#define OD_ENTRY_H162C_RPDO_45_MAPPING_PARAMETERS &OD->list[138]
#define OD_ENTRY_H162D_RPDO_46_MAPPING_PARAMETERS &OD->list[139]
#define OD_ENTRY_H162E_RPDO_47_MAPPING_PARAMETERS &OD->list[140]
#define OD_ENTRY_H162F_RPDO_48_MAPPING_PARAMETERS &OD->list[141]
#define OD_ENTRY_H1630_RPDO_49_MAPPING_PARAMETERS &OD->list[142]
#define OD_ENTRY_H1631_RPDO_50_MAPPING_PARAMETERS &OD->list[143]
#define OD_ENTRY_H1632_RPDO_51_MAPPING_PARAMETERS &OD->list[144]
#define OD_ENTRY_H1633_RPDO_52_MAPPING_PARAMETERS &OD->list[145]
#define OD_ENTRY_H1634_RPDO_53_MAPPING_PARAMETERS &OD->list[146]
#define OD_ENTRY_H1635_RPDO_54_MAPPING_PARAMETERS &OD->list[147]
#define OD_ENTRY_H1636_RPDO_55_MAPPING_PARAMETERS &OD->list[148]
#define OD_ENTRY_H1637_RPDO_56_MAPPING_PARAMETERS &OD->list[149]
#define OD_ENTRY_H1638_RPDO_57_MAPPING_PARAMETERS &OD->list[150]
#define OD_ENTRY_H1639_RPDO_58_MAPPING_PARAMETERS &OD->list[151]
#define OD_ENTRY_H163A_RPDO_59_MAPPING_PARAMETERS &OD->list[152]
#define OD_ENTRY_H163B_RPDO_60_MAPPING_PARAMETERS &OD->list[153]
#define OD_ENTRY_H163C_RPDO_61_MAPPING_PARAMETERS &OD->list[154]
#define OD_ENTRY_H163D_RPDO_62_MAPPING_PARAMETERS &OD->list[155]
#define OD_ENTRY_H163E_RPDO_63_MAPPING_PARAMETERS &OD->list[156]
#define OD_ENTRY_H163F_RPDO_64_MAPPING_PARAMETERS &OD->list[157]
#define OD_ENTRY_H1640_RPDO_65_MAPPING_PARAMETERS &OD->list[158]
#define OD_ENTRY_H1641_RPDO_66_MAPPING_PARAMETERS &OD->list[159]
#define OD_ENTRY_H1642_RPDO_67_MAPPING_PARAMETERS &OD->list[160]
#define OD_ENTRY_H1643_RPDO_68_MAPPING_PARAMETERS &OD->list[161]
#define OD_ENTRY_H1644_RPDO_69_MAPPING_PARAMETERS &OD->list[162]
#define OD_ENTRY_H1645_RPDO_70_MAPPING_PARAMETERS &OD->list[163]
#define OD_ENTRY_H1646_RPDO_71_MAPPING_PARAMETERS &OD->list[164]
#define OD_ENTRY_H1647_RPDO_72_MAPPING_PARAMETERS &OD->list[165]
#define OD_ENTRY_H1648_RPDO_73_MAPPING_PARAMETERS &OD->list[166]
#define OD_ENTRY_H1649_RPDO_74_MAPPING_PARAMETERS &OD->list[167]
#define OD_ENTRY_H164A_RPDO_75_MAPPING_PARAMETERS &OD->list[168]
#define OD_ENTRY_H164B_RPDO_76_MAPPING_PARAMETERS &OD->list[169]
#define OD_ENTRY_H164C_RPDO_77_MAPPING_PARAMETERS &OD->list[170]
#define OD_ENTRY_H164D_RPDO_78_MAPPING_PARAMETERS &OD->list[171]
#define OD_ENTRY_H164E_RPDO_79_MAPPING_PARAMETERS &OD->list[172]
#define OD_ENTRY_H164F_RPDO_80_MAPPING_PARAMETERS &OD->list[173]
#define OD_ENTRY_H1800_TPDO_1_COMMUNICATION_PARAMETERS &OD->list[174]
#define OD_ENTRY_H1801_TPDO_2_COMMUNICATION_PARAMETERS &OD->list[175]
#define OD_ENTRY_H1802_TPDO_3_COMMUNICATION_PARAMETERS &OD->list[176]
#define OD_ENTRY_H1803_TPDO_4_COMMUNICATION_PARAMETERS &OD->list[177]
#define OD_ENTRY_H1804_TPDO_5_COMMUNICATION_PARAMETERS &OD->list[178]
#define OD_ENTRY_H1805_TPDO_6_COMMUNICATION_PARAMETERS &OD->list[179]
#define OD_ENTRY_H1806_TPDO_7_COMMUNICATION_PARAMETERS &OD->list[180]
#define OD_ENTRY_H1A00_TPDO_1_MAPPING_PARAMETERS &OD->list[181]
#define OD_ENTRY_H1A01_TPDO_2_MAPPING_PARAMETERS &OD->list[182]
#define OD_ENTRY_H1A02_TPDO_3_MAPPING_PARAMETERS &OD->list[183]
#define OD_ENTRY_H1A03_TPDO_4_MAPPING_PARAMETERS &OD->list[184]
#define OD_ENTRY_H1A04_TPDO_5_MAPPING_PARAMETERS &OD->list[185]
#define OD_ENTRY_H1A05_TPDO_6_MAPPING_PARAMETERS &OD->list[186]
#define OD_ENTRY_H1A06_TPDO_7_MAPPING_PARAMETERS &OD->list[187]
#define OD_ENTRY_H2010_SCET &OD->list[188]
#define OD_ENTRY_H2011_UTC &OD->list[189]
#define OD_ENTRY_H3000_SATELLITE_ID &OD->list[190]
#define OD_ENTRY_H3001_FLIGHT_MODE &OD->list[191]
#define OD_ENTRY_H3002_VERSIONS &OD->list[192]
#define OD_ENTRY_H3003_SYSTEM &OD->list[193]
#define OD_ENTRY_H3004_FREAD_CACHE &OD->list[194]
#define OD_ENTRY_H3005_FWRITE_CACHE &OD->list[195]
#define OD_ENTRY_H3006_UPDATER &OD->list[196]
#define OD_ENTRY_H3007_LOGS &OD->list[197]
#define OD_ENTRY_H3008_DAEMONS &OD->list[198]
#define OD_ENTRY_H3009_BOARD_ID &OD->list[199]
#define OD_ENTRY_H4000_STATUS &OD->list[200]
#define OD_ENTRY_H4001_RESET_TIMEOUT &OD->list[201]
#define OD_ENTRY_H4002_MODE &OD->list[202]
#define OD_ENTRY_H4003_HW_ID &OD->list[203]
#define OD_ENTRY_H4004_TX_CONTROL &OD->list[204]
#define OD_ENTRY_H4005_ANTENNAS &OD->list[205]
#define OD_ENTRY_H4006_LBAND &OD->list[206]
#define OD_ENTRY_H4007_UHF &OD->list[207]
#define OD_ENTRY_H4008_EDL &OD->list[208]
#define OD_ENTRY_H4009_OPD &OD->list[209]
#define OD_ENTRY_H400A_BEACON &OD->list[210]
#define OD_ENTRY_H400B_RTC &OD->list[211]
#define OD_ENTRY_H400C_NODE_MANAGER &OD->list[212]
#define OD_ENTRY_H400D_NODE_STATUS &OD->list[213]
#define OD_ENTRY_H400E_ADCS_MANAGER &OD->list[214]
#define OD_ENTRY_H5004_BATTERY_1 &OD->list[215]
#define OD_ENTRY_H500C_SOLAR_1 &OD->list[216]
#define OD_ENTRY_H5010_SOLAR_2 &OD->list[217]
#define OD_ENTRY_H5014_SOLAR_3 &OD->list[218]
#define OD_ENTRY_H5018_SOLAR_4 &OD->list[219]
#define OD_ENTRY_H501C_SOLAR_5 &OD->list[220]
#define OD_ENTRY_H5020_SOLAR_6 &OD->list[221]
#define OD_ENTRY_H502C_STAR_TRACKER_1 &OD->list[222]
#define OD_ENTRY_H5034_GPS &OD->list[223]
#define OD_ENTRY_H5038_ADCS &OD->list[224]
#define OD_ENTRY_H503C_RW_1 &OD->list[225]
#define OD_ENTRY_H5040_RW_2 &OD->list[226]
#define OD_ENTRY_H5044_RW_3 &OD->list[227]
#define OD_ENTRY_H5048_RW_4 &OD->list[228]
#define OD_ENTRY_H504C_DXWIFI &OD->list[229]
#define OD_ENTRY_H5050_CFC_PROCESSOR &OD->list[230]
#define OD_ENTRY_H5054_DIODE_TEST &OD->list[231]

#define OD_INDEX_SCET 0x2010

#define OD_INDEX_UTC 0x2011

#define OD_INDEX_SATELLITE_ID 0x3000

#define OD_INDEX_FLIGHT_MODE 0x3001

#define OD_INDEX_VERSIONS 0x3002
#define OD_SUBINDEX_VERSIONS_HW_VERSION 0x1
#define OD_SUBINDEX_VERSIONS_CONFIGS_VERSION 0x2
#define OD_SUBINDEX_VERSIONS_OLAF_VERSION 0x3
#define OD_SUBINDEX_VERSIONS_SW_VERSION 0x4

#define OD_INDEX_SYSTEM 0x3003
#define OD_SUBINDEX_SYSTEM_RESET 0x1
#define OD_SUBINDEX_SYSTEM_STORAGE_PERCENT 0x2
#define OD_SUBINDEX_SYSTEM_RAM_PERCENT 0x3
#define OD_SUBINDEX_SYSTEM_UNIX_TIME 0x4
#define OD_SUBINDEX_SYSTEM_UPTIME 0x5
#define OD_SUBINDEX_SYSTEM_POWER_CYCLES 0x6
#define OD_SUBINDEX_SYSTEM_BOOT_SELECT 0x9

#define OD_INDEX_FREAD_CACHE 0x3004
#define OD_SUBINDEX_FREAD_CACHE_LENGTH 0x1
#define OD_SUBINDEX_FREAD_CACHE_FILES_JSON 0x2
#define OD_SUBINDEX_FREAD_CACHE_FILE_NAME 0x3
#define OD_SUBINDEX_FREAD_CACHE_FILE_DATA 0x4
#define OD_SUBINDEX_FREAD_CACHE_REMOVE 0x5

#define OD_INDEX_FWRITE_CACHE 0x3005
#define OD_SUBINDEX_FWRITE_CACHE_LENGTH 0x1
#define OD_SUBINDEX_FWRITE_CACHE_FILES_JSON 0x2
#define OD_SUBINDEX_FWRITE_CACHE_FILE_NAME 0x3
#define OD_SUBINDEX_FWRITE_CACHE_FILE_DATA 0x4
#define OD_SUBINDEX_FWRITE_CACHE_REMOVE 0x5

#define OD_INDEX_UPDATER 0x3006
#define OD_SUBINDEX_UPDATER_STATUS 0x1
#define OD_SUBINDEX_UPDATER_CACHE_LENGTH 0x2
#define OD_SUBINDEX_UPDATER_CACHE_FILES_JSON 0x3
#define OD_SUBINDEX_UPDATER_UPDATE 0x4
#define OD_SUBINDEX_UPDATER_MAKE_STATUS_FILE 0x5

#define OD_INDEX_LOGS 0x3007
#define OD_SUBINDEX_LOGS_MAKE_FILE 0x1
#define OD_SUBINDEX_LOGS_SINCE_BOOT 0x2

#define OD_INDEX_DAEMONS 0x3008
#define OD_SUBINDEX_DAEMONS_TOTAL 0x1
#define OD_SUBINDEX_DAEMONS_ACTIVE 0x2
#define OD_SUBINDEX_DAEMONS_FAILED 0x3

#define OD_INDEX_BOARD_ID 0x3009

#define OD_INDEX_STATUS 0x4000

#define OD_INDEX_RESET_TIMEOUT 0x4001

#define OD_INDEX_MODE 0x4002

#define OD_INDEX_HW_ID 0x4003

#define OD_INDEX_TX_CONTROL 0x4004
#define OD_SUBINDEX_TX_CONTROL_ENABLE 0x1
#define OD_SUBINDEX_TX_CONTROL_TIMEOUT 0x2
#define OD_SUBINDEX_TX_CONTROL_LAST_ENABLE_TIMESTAMP 0x3

#define OD_INDEX_ANTENNAS 0x4005
#define OD_SUBINDEX_ANTENNAS_DEPLOYED 0x1
#define OD_SUBINDEX_ANTENNAS_ATTEMPTS 0x2
#define OD_SUBINDEX_ANTENNAS_PRE_ATTEMPT_TIMEOUT 0x3
#define OD_SUBINDEX_ANTENNAS_ATTEMPT_TIMEOUT 0x4
#define OD_SUBINDEX_ANTENNAS_REATTEMPT_TIMEOUT 0x5
#define OD_SUBINDEX_ANTENNAS_DEPLOY_MONOPOLE_NOW 0x6
#define OD_SUBINDEX_ANTENNAS_DEPLOY_HELICAL_NOW 0x7
#define OD_SUBINDEX_ANTENNAS_GOOD_TEST_THRESHOLD 0x8
#define OD_SUBINDEX_ANTENNAS_TEST_MONOPOLE_IS_GOOD 0x9
#define OD_SUBINDEX_ANTENNAS_TEST_HELICAL_IS_GOOD 0xA
#define OD_SUBINDEX_ANTENNAS_MONOPOLE_VOLTAGE 0xB
#define OD_SUBINDEX_ANTENNAS_HELICAL_VOLTAGE 0xC
#define OD_SUBINDEX_ANTENNAS_ATTEMPT_BETWEEN_TIMEOUT 0xD

#define OD_INDEX_LBAND 0x4006
#define OD_SUBINDEX_LBAND_RX_BYTES 0x1
#define OD_SUBINDEX_LBAND_RX_PACKETS 0x2
#define OD_SUBINDEX_LBAND_RSSI 0x3
#define OD_SUBINDEX_LBAND_SYNTH_LOCK 0x4
#define OD_SUBINDEX_LBAND_SYNTH_RELOCK_COUNT 0x5

#define OD_INDEX_UHF 0x4007
#define OD_SUBINDEX_UHF_RX_BYTES 0x1
#define OD_SUBINDEX_UHF_RX_PACKETS 0x2
#define OD_SUBINDEX_UHF_RSSI 0x3

#define OD_INDEX_EDL 0x4008
#define OD_SUBINDEX_EDL_CRYPTO_KEY_0 0x1
#define OD_SUBINDEX_EDL_CRYPTO_KEY_1 0x2
#define OD_SUBINDEX_EDL_CRYPTO_KEY_2 0x3
#define OD_SUBINDEX_EDL_CRYPTO_KEY_3 0x4
#define OD_SUBINDEX_EDL_ACTIVE_CRYPTO_KEY 0x5
#define OD_SUBINDEX_EDL_SEQUENCE_COUNT 0x6
#define OD_SUBINDEX_EDL_REJECTED_COUNT 0x7
#define OD_SUBINDEX_EDL_VC1_SEQUENCE_COUNT 0x8
#define OD_SUBINDEX_EDL_VC1_REJECTED_COUNT 0x9
#define OD_SUBINDEX_EDL_VC1_EXPEDITE_COUNT 0xA
#define OD_SUBINDEX_EDL_LAST_TIMESTAMP 0xB
#define OD_SUBINDEX_EDL_TIMEOUT 0xC

#define OD_INDEX_OPD 0x4009
#define OD_SUBINDEX_OPD_STATUS 0x1
#define OD_SUBINDEX_OPD_HAS_FAULT 0x2
#define OD_SUBINDEX_OPD_CURRENT 0x3
#define OD_SUBINDEX_OPD_SCAN 0x4
#define OD_SUBINDEX_OPD_RESET 0x5
#define OD_SUBINDEX_OPD_RESET_ATTEMPTS 0x6
#define OD_SUBINDEX_OPD_RESET_DELAY 0x7
#define OD_SUBINDEX_OPD_NODES_STATUS_JSON 0x8
#define OD_SUBINDEX_OPD_NODE_SELECT 0x9
#define OD_SUBINDEX_OPD_NODE_STATUS 0xA
#define OD_SUBINDEX_OPD_NODE_RESET 0xB
#define OD_SUBINDEX_OPD_NODE_RESET_ATTEMPTS 0xC
#define OD_SUBINDEX_OPD_UART_NODE_SELECT 0xD

#define OD_INDEX_BEACON 0x400A
#define OD_SUBINDEX_BEACON_REVISION 0x1
#define OD_SUBINDEX_BEACON_SRC_CALLSIGN 0x2
#define OD_SUBINDEX_BEACON_DEST_CALLSIGN 0x3
#define OD_SUBINDEX_BEACON_START_CHARS 0x4
#define OD_SUBINDEX_BEACON_DELAY 0x5
#define OD_SUBINDEX_BEACON_SEND_NOW 0x6
#define OD_SUBINDEX_BEACON_LAST_TIMESTAMP 0x7
#define OD_SUBINDEX_BEACON_SRC_SSID 0x8
#define OD_SUBINDEX_BEACON_DEST_SSID 0x9
#define OD_SUBINDEX_BEACON_CONTROL 0xA
#define OD_SUBINDEX_BEACON_PID 0xB
#define OD_SUBINDEX_BEACON_COMMAND 0xC
#define OD_SUBINDEX_BEACON_RESPONSE 0xD

#define OD_INDEX_RTC 0x400B
#define OD_SUBINDEX_RTC_TIMESTAMP 0x1
#define OD_SUBINDEX_RTC_ALARM_A 0x2
#define OD_SUBINDEX_RTC_ALARM_B 0x3
#define OD_SUBINDEX_RTC_WAKEUP_INTERVAL 0x4

#define OD_INDEX_NODE_MANAGER 0x400C
#define OD_SUBINDEX_NODE_MANAGER_STATUS_JSON 0x1
#define OD_SUBINDEX_NODE_MANAGER_TOTAL_NODES 0x2
#define OD_SUBINDEX_NODE_MANAGER_NODES_OFF 0x3
#define OD_SUBINDEX_NODE_MANAGER_NODES_BOOTING 0x4
#define OD_SUBINDEX_NODE_MANAGER_NODES_ON 0x5
#define OD_SUBINDEX_NODE_MANAGER_NODES_WITH_ERRORS 0x6
#define OD_SUBINDEX_NODE_MANAGER_NODES_NOT_FOUND 0x7
#define OD_SUBINDEX_NODE_MANAGER_NODES_DEAD 0x8

#define OD_INDEX_NODE_STATUS 0x400D
#define OD_SUBINDEX_NODE_STATUS_C3 0x1
#define OD_SUBINDEX_NODE_STATUS_BATTERY_1 0x4
#define OD_SUBINDEX_NODE_STATUS_SOLAR_1 0xC
#define OD_SUBINDEX_NODE_STATUS_SOLAR_2 0x10
#define OD_SUBINDEX_NODE_STATUS_SOLAR_3 0x14
#define OD_SUBINDEX_NODE_STATUS_SOLAR_4 0x18
#define OD_SUBINDEX_NODE_STATUS_SOLAR_5 0x1C
#define OD_SUBINDEX_NODE_STATUS_SOLAR_6 0x20
#define OD_SUBINDEX_NODE_STATUS_STAR_TRACKER_1 0x2C
#define OD_SUBINDEX_NODE_STATUS_GPS 0x34
#define OD_SUBINDEX_NODE_STATUS_ADCS 0x38
#define OD_SUBINDEX_NODE_STATUS_RW_1 0x3C
#define OD_SUBINDEX_NODE_STATUS_RW_2 0x40
#define OD_SUBINDEX_NODE_STATUS_RW_3 0x44
#define OD_SUBINDEX_NODE_STATUS_RW_4 0x48
#define OD_SUBINDEX_NODE_STATUS_DXWIFI 0x4C
#define OD_SUBINDEX_NODE_STATUS_CFC_PROCESSOR 0x50
#define OD_SUBINDEX_NODE_STATUS_DIODE_TEST 0x54

#define OD_INDEX_ADCS_MANAGER 0x400E
#define OD_SUBINDEX_ADCS_MANAGER_MODE 0x1
#define OD_SUBINDEX_ADCS_MANAGER_STATUS 0x2
#define OD_SUBINDEX_ADCS_MANAGER_SIGNALS 0x3
#define OD_SUBINDEX_ADCS_MANAGER_FEEDBACK 0x4

#define OD_INDEX_BATTERY_1 0x5004
#define OD_SUBINDEX_BATTERY_1_PACK_1_VBATT 0x1
#define OD_SUBINDEX_BATTERY_1_PACK_1_VCELL_MAX 0x2
#define OD_SUBINDEX_BATTERY_1_PACK_1_VCELL_MIN 0x3
#define OD_SUBINDEX_BATTERY_1_PACK_1_VCELL 0x4
#define OD_SUBINDEX_BATTERY_1_PACK_1_VCELL_1 0x5
#define OD_SUBINDEX_BATTERY_1_PACK_1_VCELL_2 0x6
#define OD_SUBINDEX_BATTERY_1_PACK_1_VCELL_AVG 0x7
#define OD_SUBINDEX_BATTERY_1_PACK_1_CURRENT 0x8
#define OD_SUBINDEX_BATTERY_1_PACK_1_CURRENT_AVG 0x9
#define OD_SUBINDEX_BATTERY_1_PACK_1_CURRENT_MAX 0xA
#define OD_SUBINDEX_BATTERY_1_PACK_1_CURRENT_MIN 0xB
#define OD_SUBINDEX_BATTERY_1_PACK_1_TEMPERATURE 0xC
#define OD_SUBINDEX_BATTERY_1_PACK_1_TEMPERATURE_AVG 0xD
#define OD_SUBINDEX_BATTERY_1_PACK_1_TEMPERATURE_MAX 0xE
#define OD_SUBINDEX_BATTERY_1_PACK_1_TEMPERATURE_MIN 0xF
#define OD_SUBINDEX_BATTERY_1_PACK_1_FULL_CAPACITY 0x10
#define OD_SUBINDEX_BATTERY_1_PACK_1_REPORTED_CAPACITY 0x11
#define OD_SUBINDEX_BATTERY_1_PACK_1_REPORTED_STATE_OF_CHARGE 0x12
#define OD_SUBINDEX_BATTERY_1_PACK_1_STATUS 0x13
#define OD_SUBINDEX_BATTERY_1_PACK_2_VBATT 0x14
#define OD_SUBINDEX_BATTERY_1_PACK_2_VCELL_MAX 0x15
#define OD_SUBINDEX_BATTERY_1_PACK_2_VCELL_MIN 0x16
#define OD_SUBINDEX_BATTERY_1_PACK_2_VCELL 0x17
#define OD_SUBINDEX_BATTERY_1_PACK_2_VCELL_1 0x18
#define OD_SUBINDEX_BATTERY_1_PACK_2_VCELL_2 0x19
#define OD_SUBINDEX_BATTERY_1_PACK_2_VCELL_AVG 0x1A
#define OD_SUBINDEX_BATTERY_1_PACK_2_CURRENT 0x1B
#define OD_SUBINDEX_BATTERY_1_PACK_2_CURRENT_AVG 0x1C
#define OD_SUBINDEX_BATTERY_1_PACK_2_CURRENT_MAX 0x1D
#define OD_SUBINDEX_BATTERY_1_PACK_2_CURRENT_MIN 0x1E
#define OD_SUBINDEX_BATTERY_1_PACK_2_TEMPERATURE 0x1F
#define OD_SUBINDEX_BATTERY_1_PACK_2_TEMPERATURE_AVG 0x20
#define OD_SUBINDEX_BATTERY_1_PACK_2_TEMPERATURE_MAX 0x21
#define OD_SUBINDEX_BATTERY_1_PACK_2_TEMPERATURE_MIN 0x22
#define OD_SUBINDEX_BATTERY_1_PACK_2_FULL_CAPACITY 0x23
#define OD_SUBINDEX_BATTERY_1_PACK_2_REPORTED_CAPACITY 0x24
#define OD_SUBINDEX_BATTERY_1_PACK_2_REPORTED_STATE_OF_CHARGE 0x25
#define OD_SUBINDEX_BATTERY_1_PACK_2_STATUS 0x26

#define OD_INDEX_SOLAR_1 0x500C
#define OD_SUBINDEX_SOLAR_1_OUTPUT_VOLTAGE 0x1
#define OD_SUBINDEX_SOLAR_1_OUTPUT_CURRENT 0x2
#define OD_SUBINDEX_SOLAR_1_OUTPUT_POWER 0x3
#define OD_SUBINDEX_SOLAR_1_OUTPUT_VOLTAGE_AVG 0x4
#define OD_SUBINDEX_SOLAR_1_OUTPUT_CURRENT_AVG 0x5
#define OD_SUBINDEX_SOLAR_1_OUTPUT_POWER_AVG 0x6
#define OD_SUBINDEX_SOLAR_1_OUTPUT_VOLTAGE_MAX 0x7
#define OD_SUBINDEX_SOLAR_1_OUTPUT_CURRENT_MAX 0x8
#define OD_SUBINDEX_SOLAR_1_OUTPUT_POWER_MAX 0x9
#define OD_SUBINDEX_SOLAR_1_OUTPUT_ENERGY 0xA
#define OD_SUBINDEX_SOLAR_1_CELL_1_TEMPERATURE 0xB
#define OD_SUBINDEX_SOLAR_1_CELL_2_TEMPERATURE 0xC
#define OD_SUBINDEX_SOLAR_1_CELL_1_TEMPERATURE_MIN 0xD
#define OD_SUBINDEX_SOLAR_1_CELL_2_TEMPERATURE_MIN 0xE
#define OD_SUBINDEX_SOLAR_1_CELL_1_TEMPERATURE_MAX 0xF
#define OD_SUBINDEX_SOLAR_1_CELL_2_TEMPERATURE_MAX 0x10

#define OD_INDEX_SOLAR_2 0x5010
#define OD_SUBINDEX_SOLAR_2_OUTPUT_VOLTAGE 0x1
#define OD_SUBINDEX_SOLAR_2_OUTPUT_CURRENT 0x2
#define OD_SUBINDEX_SOLAR_2_OUTPUT_POWER 0x3
#define OD_SUBINDEX_SOLAR_2_OUTPUT_VOLTAGE_AVG 0x4
#define OD_SUBINDEX_SOLAR_2_OUTPUT_CURRENT_AVG 0x5
#define OD_SUBINDEX_SOLAR_2_OUTPUT_POWER_AVG 0x6
#define OD_SUBINDEX_SOLAR_2_OUTPUT_VOLTAGE_MAX 0x7
#define OD_SUBINDEX_SOLAR_2_OUTPUT_CURRENT_MAX 0x8
#define OD_SUBINDEX_SOLAR_2_OUTPUT_POWER_MAX 0x9
#define OD_SUBINDEX_SOLAR_2_OUTPUT_ENERGY 0xA
#define OD_SUBINDEX_SOLAR_2_CELL_1_TEMPERATURE 0xB
#define OD_SUBINDEX_SOLAR_2_CELL_2_TEMPERATURE 0xC
#define OD_SUBINDEX_SOLAR_2_CELL_1_TEMPERATURE_MIN 0xD
#define OD_SUBINDEX_SOLAR_2_CELL_2_TEMPERATURE_MIN 0xE
#define OD_SUBINDEX_SOLAR_2_CELL_1_TEMPERATURE_MAX 0xF
#define OD_SUBINDEX_SOLAR_2_CELL_2_TEMPERATURE_MAX 0x10

#define OD_INDEX_SOLAR_3 0x5014
#define OD_SUBINDEX_SOLAR_3_OUTPUT_VOLTAGE 0x1
#define OD_SUBINDEX_SOLAR_3_OUTPUT_CURRENT 0x2
#define OD_SUBINDEX_SOLAR_3_OUTPUT_POWER 0x3
#define OD_SUBINDEX_SOLAR_3_OUTPUT_VOLTAGE_AVG 0x4
#define OD_SUBINDEX_SOLAR_3_OUTPUT_CURRENT_AVG 0x5
#define OD_SUBINDEX_SOLAR_3_OUTPUT_POWER_AVG 0x6
#define OD_SUBINDEX_SOLAR_3_OUTPUT_VOLTAGE_MAX 0x7
#define OD_SUBINDEX_SOLAR_3_OUTPUT_CURRENT_MAX 0x8
#define OD_SUBINDEX_SOLAR_3_OUTPUT_POWER_MAX 0x9
#define OD_SUBINDEX_SOLAR_3_OUTPUT_ENERGY 0xA
#define OD_SUBINDEX_SOLAR_3_CELL_1_TEMPERATURE 0xB
#define OD_SUBINDEX_SOLAR_3_CELL_2_TEMPERATURE 0xC
#define OD_SUBINDEX_SOLAR_3_CELL_1_TEMPERATURE_MIN 0xD
#define OD_SUBINDEX_SOLAR_3_CELL_2_TEMPERATURE_MIN 0xE
#define OD_SUBINDEX_SOLAR_3_CELL_1_TEMPERATURE_MAX 0xF
#define OD_SUBINDEX_SOLAR_3_CELL_2_TEMPERATURE_MAX 0x10

#define OD_INDEX_SOLAR_4 0x5018
#define OD_SUBINDEX_SOLAR_4_OUTPUT_VOLTAGE 0x1
#define OD_SUBINDEX_SOLAR_4_OUTPUT_CURRENT 0x2
#define OD_SUBINDEX_SOLAR_4_OUTPUT_POWER 0x3
#define OD_SUBINDEX_SOLAR_4_OUTPUT_VOLTAGE_AVG 0x4
#define OD_SUBINDEX_SOLAR_4_OUTPUT_CURRENT_AVG 0x5
#define OD_SUBINDEX_SOLAR_4_OUTPUT_POWER_AVG 0x6
#define OD_SUBINDEX_SOLAR_4_OUTPUT_VOLTAGE_MAX 0x7
#define OD_SUBINDEX_SOLAR_4_OUTPUT_CURRENT_MAX 0x8
#define OD_SUBINDEX_SOLAR_4_OUTPUT_POWER_MAX 0x9
#define OD_SUBINDEX_SOLAR_4_OUTPUT_ENERGY 0xA
#define OD_SUBINDEX_SOLAR_4_CELL_1_TEMPERATURE 0xB
#define OD_SUBINDEX_SOLAR_4_CELL_2_TEMPERATURE 0xC
#define OD_SUBINDEX_SOLAR_4_CELL_1_TEMPERATURE_MIN 0xD
#define OD_SUBINDEX_SOLAR_4_CELL_2_TEMPERATURE_MIN 0xE
#define OD_SUBINDEX_SOLAR_4_CELL_1_TEMPERATURE_MAX 0xF
#define OD_SUBINDEX_SOLAR_4_CELL_2_TEMPERATURE_MAX 0x10

#define OD_INDEX_SOLAR_5 0x501C
#define OD_SUBINDEX_SOLAR_5_OUTPUT_VOLTAGE 0x1
#define OD_SUBINDEX_SOLAR_5_OUTPUT_CURRENT 0x2
#define OD_SUBINDEX_SOLAR_5_OUTPUT_POWER 0x3
#define OD_SUBINDEX_SOLAR_5_OUTPUT_VOLTAGE_AVG 0x4
#define OD_SUBINDEX_SOLAR_5_OUTPUT_CURRENT_AVG 0x5
#define OD_SUBINDEX_SOLAR_5_OUTPUT_POWER_AVG 0x6
#define OD_SUBINDEX_SOLAR_5_OUTPUT_VOLTAGE_MAX 0x7
#define OD_SUBINDEX_SOLAR_5_OUTPUT_CURRENT_MAX 0x8
#define OD_SUBINDEX_SOLAR_5_OUTPUT_POWER_MAX 0x9
#define OD_SUBINDEX_SOLAR_5_OUTPUT_ENERGY 0xA
#define OD_SUBINDEX_SOLAR_5_CELL_1_TEMPERATURE 0xB
#define OD_SUBINDEX_SOLAR_5_CELL_2_TEMPERATURE 0xC
#define OD_SUBINDEX_SOLAR_5_CELL_1_TEMPERATURE_MIN 0xD
#define OD_SUBINDEX_SOLAR_5_CELL_2_TEMPERATURE_MIN 0xE
#define OD_SUBINDEX_SOLAR_5_CELL_1_TEMPERATURE_MAX 0xF
#define OD_SUBINDEX_SOLAR_5_CELL_2_TEMPERATURE_MAX 0x10

#define OD_INDEX_SOLAR_6 0x5020
#define OD_SUBINDEX_SOLAR_6_OUTPUT_VOLTAGE 0x1
#define OD_SUBINDEX_SOLAR_6_OUTPUT_CURRENT 0x2
#define OD_SUBINDEX_SOLAR_6_OUTPUT_POWER 0x3
#define OD_SUBINDEX_SOLAR_6_OUTPUT_VOLTAGE_AVG 0x4
#define OD_SUBINDEX_SOLAR_6_OUTPUT_CURRENT_AVG 0x5
#define OD_SUBINDEX_SOLAR_6_OUTPUT_POWER_AVG 0x6
#define OD_SUBINDEX_SOLAR_6_OUTPUT_VOLTAGE_MAX 0x7
#define OD_SUBINDEX_SOLAR_6_OUTPUT_CURRENT_MAX 0x8
#define OD_SUBINDEX_SOLAR_6_OUTPUT_POWER_MAX 0x9
#define OD_SUBINDEX_SOLAR_6_OUTPUT_ENERGY 0xA
#define OD_SUBINDEX_SOLAR_6_CELL_1_TEMPERATURE 0xB
#define OD_SUBINDEX_SOLAR_6_CELL_2_TEMPERATURE 0xC
#define OD_SUBINDEX_SOLAR_6_CELL_1_TEMPERATURE_MIN 0xD
#define OD_SUBINDEX_SOLAR_6_CELL_2_TEMPERATURE_MIN 0xE
#define OD_SUBINDEX_SOLAR_6_CELL_1_TEMPERATURE_MAX 0xF
#define OD_SUBINDEX_SOLAR_6_CELL_2_TEMPERATURE_MAX 0x10

#define OD_INDEX_STAR_TRACKER_1 0x502C
#define OD_SUBINDEX_STAR_TRACKER_1_SYSTEM_STORAGE_PERCENT 0x1
#define OD_SUBINDEX_STAR_TRACKER_1_SYSTEM_RAM_PERCENT 0x2
#define OD_SUBINDEX_STAR_TRACKER_1_FREAD_CACHE_LENGTH 0x3
#define OD_SUBINDEX_STAR_TRACKER_1_FWRITE_CACHE_LENGTH 0x4
#define OD_SUBINDEX_STAR_TRACKER_1_DAEMONS_ACTIVE 0x5
#define OD_SUBINDEX_STAR_TRACKER_1_DAEMONS_FAILED 0x6
#define OD_SUBINDEX_STAR_TRACKER_1_UPDATER_STATUS 0x7
#define OD_SUBINDEX_STAR_TRACKER_1_UPDATER_CACHE_LENGTH 0x8
#define OD_SUBINDEX_STAR_TRACKER_1_STATUS 0x9
#define OD_SUBINDEX_STAR_TRACKER_1_ORIENTATION_RIGHT_ASCENSION 0xA
#define OD_SUBINDEX_STAR_TRACKER_1_ORIENTATION_DECLINATION 0xB
#define OD_SUBINDEX_STAR_TRACKER_1_ORIENTATION_ROLL 0xC
#define OD_SUBINDEX_STAR_TRACKER_1_ORIENTATION_TIME_SINCE_MIDNIGHT 0xD

#define OD_INDEX_GPS 0x5034
#define OD_SUBINDEX_GPS_SYSTEM_STORAGE_PERCENT 0x1
#define OD_SUBINDEX_GPS_SYSTEM_RAM_PERCENT 0x2
#define OD_SUBINDEX_GPS_FREAD_CACHE_LENGTH 0x3
#define OD_SUBINDEX_GPS_FWRITE_CACHE_LENGTH 0x4
#define OD_SUBINDEX_GPS_DAEMONS_ACTIVE 0x5
#define OD_SUBINDEX_GPS_DAEMONS_FAILED 0x6
#define OD_SUBINDEX_GPS_UPDATER_STATUS 0x7
#define OD_SUBINDEX_GPS_UPDATER_CACHE_LENGTH 0x8
#define OD_SUBINDEX_GPS_SKYTRAQ_TIME_SINCE_MIDNIGHT 0x9
#define OD_SUBINDEX_GPS_SKYTRAQ_ECEF_X 0xA
#define OD_SUBINDEX_GPS_SKYTRAQ_ECEF_Y 0xB
#define OD_SUBINDEX_GPS_SKYTRAQ_ECEF_Z 0xC
#define OD_SUBINDEX_GPS_SKYTRAQ_ECEF_VX 0xD
#define OD_SUBINDEX_GPS_SKYTRAQ_ECEF_VY 0xE
#define OD_SUBINDEX_GPS_SKYTRAQ_ECEF_VZ 0xF
#define OD_SUBINDEX_GPS_STATUS 0x10
#define OD_SUBINDEX_GPS_SKYTRAQ_NUMBER_OF_SV 0x11
#define OD_SUBINDEX_GPS_SKYTRAQ_FIX_MODE 0x12
#define OD_SUBINDEX_GPS_TIME_SYNCD 0x13
#define OD_SUBINDEX_GPS_SCET 0x14

#define OD_INDEX_ADCS 0x5038
#define OD_SUBINDEX_ADCS_GYROSCOPE_PITCH_RATE 0x1
#define OD_SUBINDEX_ADCS_GYROSCOPE_YAW_RATE 0x2
#define OD_SUBINDEX_ADCS_GYROSCOPE_ROLL_RATE 0x3
#define OD_SUBINDEX_ADCS_ACCELEROMETER_X 0x4
#define OD_SUBINDEX_ADCS_ACCELEROMETER_Y 0x5
#define OD_SUBINDEX_ADCS_ACCELEROMETER_Z 0x6
#define OD_SUBINDEX_ADCS_TEMPERATURE 0x7
#define OD_SUBINDEX_ADCS_POS_Z_MAGNETOMETER_1_X 0x8
#define OD_SUBINDEX_ADCS_POS_Z_MAGNETOMETER_1_Y 0x9
#define OD_SUBINDEX_ADCS_POS_Z_MAGNETOMETER_1_Z 0xA
#define OD_SUBINDEX_ADCS_POS_Z_MAGNETOMETER_2_X 0xB
#define OD_SUBINDEX_ADCS_POS_Z_MAGNETOMETER_2_Y 0xC
#define OD_SUBINDEX_ADCS_POS_Z_MAGNETOMETER_2_Z 0xD
#define OD_SUBINDEX_ADCS_MIN_Z_MAGNETOMETER_1_X 0xE
#define OD_SUBINDEX_ADCS_MIN_Z_MAGNETOMETER_1_Y 0xF
#define OD_SUBINDEX_ADCS_MIN_Z_MAGNETOMETER_1_Z 0x10
#define OD_SUBINDEX_ADCS_MIN_Z_MAGNETOMETER_2_X 0x11
#define OD_SUBINDEX_ADCS_MIN_Z_MAGNETOMETER_2_Y 0x12
#define OD_SUBINDEX_ADCS_MIN_Z_MAGNETOMETER_2_Z 0x13
#define OD_SUBINDEX_ADCS_MAGNETORQUER_CURRENT_X 0x14
#define OD_SUBINDEX_ADCS_MAGNETORQUER_PWM_X 0x15
#define OD_SUBINDEX_ADCS_MAGNETORQUER_CURRENT_Y 0x16
#define OD_SUBINDEX_ADCS_MAGNETORQUER_PWM_Y 0x17
#define OD_SUBINDEX_ADCS_MAGNETORQUER_CURRENT_Z 0x18
#define OD_SUBINDEX_ADCS_MAGNETORQUER_PWM_Z 0x19

#define OD_INDEX_RW_1 0x503C
#define OD_SUBINDEX_RW_1_CTRL_STAT_CURRENT_STATE 0x1
#define OD_SUBINDEX_RW_1_CTRL_STAT_PROCEDURE_RESULT 0x2
#define OD_SUBINDEX_RW_1_CTRL_STAT_ERRORS 0x3
#define OD_SUBINDEX_RW_1_MOTOR_VELOCITY 0x4
#define OD_SUBINDEX_RW_1_MOTOR_CURRENT 0x5
#define OD_SUBINDEX_RW_1_BUS_VOLTAGE 0x6
#define OD_SUBINDEX_RW_1_BUS_CURRENT 0x7
#define OD_SUBINDEX_RW_1_TEMPERATURE_SENSOR_1 0x8
#define OD_SUBINDEX_RW_1_TEMPERATURE_SENSOR_2 0x9
#define OD_SUBINDEX_RW_1_TEMPERATURE_SENSOR_3 0xA

#define OD_INDEX_RW_2 0x5040
#define OD_SUBINDEX_RW_2_CTRL_STAT_CURRENT_STATE 0x1
#define OD_SUBINDEX_RW_2_CTRL_STAT_PROCEDURE_RESULT 0x2
#define OD_SUBINDEX_RW_2_CTRL_STAT_ERRORS 0x3
#define OD_SUBINDEX_RW_2_MOTOR_VELOCITY 0x4
#define OD_SUBINDEX_RW_2_MOTOR_CURRENT 0x5
#define OD_SUBINDEX_RW_2_BUS_VOLTAGE 0x6
#define OD_SUBINDEX_RW_2_BUS_CURRENT 0x7
#define OD_SUBINDEX_RW_2_TEMPERATURE_SENSOR_1 0x8
#define OD_SUBINDEX_RW_2_TEMPERATURE_SENSOR_2 0x9
#define OD_SUBINDEX_RW_2_TEMPERATURE_SENSOR_3 0xA

#define OD_INDEX_RW_3 0x5044
#define OD_SUBINDEX_RW_3_CTRL_STAT_CURRENT_STATE 0x1
#define OD_SUBINDEX_RW_3_CTRL_STAT_PROCEDURE_RESULT 0x2
#define OD_SUBINDEX_RW_3_CTRL_STAT_ERRORS 0x3
#define OD_SUBINDEX_RW_3_MOTOR_VELOCITY 0x4
#define OD_SUBINDEX_RW_3_MOTOR_CURRENT 0x5
#define OD_SUBINDEX_RW_3_BUS_VOLTAGE 0x6
#define OD_SUBINDEX_RW_3_BUS_CURRENT 0x7
#define OD_SUBINDEX_RW_3_TEMPERATURE_SENSOR_1 0x8
#define OD_SUBINDEX_RW_3_TEMPERATURE_SENSOR_2 0x9
#define OD_SUBINDEX_RW_3_TEMPERATURE_SENSOR_3 0xA

#define OD_INDEX_RW_4 0x5048
#define OD_SUBINDEX_RW_4_CTRL_STAT_CURRENT_STATE 0x1
#define OD_SUBINDEX_RW_4_CTRL_STAT_PROCEDURE_RESULT 0x2
#define OD_SUBINDEX_RW_4_CTRL_STAT_ERRORS 0x3
#define OD_SUBINDEX_RW_4_MOTOR_VELOCITY 0x4
#define OD_SUBINDEX_RW_4_MOTOR_CURRENT 0x5
#define OD_SUBINDEX_RW_4_BUS_VOLTAGE 0x6
#define OD_SUBINDEX_RW_4_BUS_CURRENT 0x7
#define OD_SUBINDEX_RW_4_TEMPERATURE_SENSOR_1 0x8
#define OD_SUBINDEX_RW_4_TEMPERATURE_SENSOR_2 0x9
#define OD_SUBINDEX_RW_4_TEMPERATURE_SENSOR_3 0xA

#define OD_INDEX_DXWIFI 0x504C
#define OD_SUBINDEX_DXWIFI_SYSTEM_STORAGE_PERCENT 0x1
#define OD_SUBINDEX_DXWIFI_SYSTEM_RAM_PERCENT 0x2
#define OD_SUBINDEX_DXWIFI_FREAD_CACHE_LENGTH 0x3
#define OD_SUBINDEX_DXWIFI_FWRITE_CACHE_LENGTH 0x4
#define OD_SUBINDEX_DXWIFI_DAEMONS_ACTIVE 0x5
#define OD_SUBINDEX_DXWIFI_DAEMONS_FAILED 0x6
#define OD_SUBINDEX_DXWIFI_UPDATER_STATUS 0x7
#define OD_SUBINDEX_DXWIFI_UPDATER_CACHE_LENGTH 0x8
#define OD_SUBINDEX_DXWIFI_STATUS 0x9
#define OD_SUBINDEX_DXWIFI_RADIO_TEMPERATURE 0xA
#define OD_SUBINDEX_DXWIFI_TRANSMISSION_BIT_RATE 0xB
#define OD_SUBINDEX_DXWIFI_TRANSMISSION_IMAGES_TRANSMITTED 0xC
#define OD_SUBINDEX_DXWIFI_TRANSMISSION_ENABLE_PA 0xD

#define OD_INDEX_CFC_PROCESSOR 0x5050
#define OD_SUBINDEX_CFC_PROCESSOR_SYSTEM_STORAGE_PERCENT 0x1
#define OD_SUBINDEX_CFC_PROCESSOR_SYSTEM_RAM_PERCENT 0x2
#define OD_SUBINDEX_CFC_PROCESSOR_FREAD_CACHE_LENGTH 0x3
#define OD_SUBINDEX_CFC_PROCESSOR_FWRITE_CACHE_LENGTH 0x4
#define OD_SUBINDEX_CFC_PROCESSOR_DAEMONS_ACTIVE 0x5
#define OD_SUBINDEX_CFC_PROCESSOR_DAEMONS_FAILED 0x6
#define OD_SUBINDEX_CFC_PROCESSOR_UPDATER_STATUS 0x7
#define OD_SUBINDEX_CFC_PROCESSOR_UPDATER_CACHE_LENGTH 0x8
#define OD_SUBINDEX_CFC_PROCESSOR_CAMERA_STATUS 0x9
#define OD_SUBINDEX_CFC_PROCESSOR_CAMERA_TEMPERATURE 0xA
#define OD_SUBINDEX_CFC_PROCESSOR_TEC_STATUS 0xB
#define OD_SUBINDEX_CFC_PROCESSOR_TEC_SATURATED 0xC
#define OD_SUBINDEX_CFC_PROCESSOR_TEC_SATURATION_DIFF 0xD
#define OD_SUBINDEX_CFC_PROCESSOR_TEC_PID_SETPOINT 0xE
#define OD_SUBINDEX_CFC_PROCESSOR_TEC_COOLDOWN_TEMPERATURE 0xF

#define OD_INDEX_DIODE_TEST 0x5054
#define OD_SUBINDEX_DIODE_TEST_DTC_CTRL 0x1
#define OD_SUBINDEX_DIODE_TEST_DTC_MUX_SELECT 0x2
#define OD_SUBINDEX_DIODE_TEST_DTC_DAC 0x3
#define OD_SUBINDEX_DIODE_TEST_DTC_STATUS 0x4
#define OD_SUBINDEX_DIODE_TEST_DTC_ERROR 0x5
#define OD_SUBINDEX_DIODE_TEST_ADCSAMPLE_LED_CURRENT 0x6
#define OD_SUBINDEX_DIODE_TEST_ADCSAMPLE_LED_SWIR_PD_CURRENT 0x7
#define OD_SUBINDEX_DIODE_TEST_ADCSAMPLE_UV_PD_CURRENT 0x8

#endif /* OD_H */
