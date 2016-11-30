/*
** Copyright (c) 2013 by Silicon Laboratories
**
** $Id: mlt28x_a_regs.h 4551 2014-10-27 20:57:24Z nizajerk $
**
*/
/*! \file mlt28x_a_regs.h
**
**  \brief Register/RAM map abstracted for MLT
**
**  \author Silicon Laboratories, Inc.
**
**  \attention
**  This file contains proprietary information. 
**  No dissemination allowed without prior written permission
**  from Silicon Laboratories, Inc.
**
**  This file is auto generated. Do no modify.
**
*/
#ifndef MLT28X_A_REGS_H
#define MLT28X_A_REGS_H


/*
** MLT28X_A Unique SPI Registers
*/
enum MLT28X_A_REG {
MLT28X_A_REG_DIAG3                       = 74,
MLT28X_A_REG_PCLK_FAULT_CNTL             = 76,
};

/*
** MLT28X_A_RAM
*/
enum MLT28X_A_RAM {
MLT28X_A_RAM_UNUSED15                    = 15,
MLT28X_A_RAM_P_Q3_D                      = 16,
MLT28X_A_RAM_UNUSED17                    = 17,
MLT28X_A_RAM_UNUSED18                    = 18,
MLT28X_A_RAM_UNUSED19                    = 19,
MLT28X_A_RAM_METER_LPF_OUT               = 328,
MLT28X_A_RAM_UNUSED333                   = 333,
MLT28X_A_RAM_UNUSED334                   = 334,
MLT28X_A_RAM_I_SOURCE1                   = 385,
MLT28X_A_RAM_I_SOURCE2                   = 386,
MLT28X_A_RAM_VTR1                        = 387,
MLT28X_A_RAM_VTR2                        = 388,
MLT28X_A_RAM_STOP_TIMER1                 = 389,
MLT28X_A_RAM_STOP_TIMER2                 = 390,
MLT28X_A_RAM_UNUSED391                   = 391,
MLT28X_A_RAM_UNUSED392                   = 392,
MLT28X_A_RAM_UNUSED416                   = 416,
MLT28X_A_RAM_P_OFFLOAD                   = 440,
MLT28X_A_RAM_UNUSED443                   = 443,
MLT28X_A_RAM_UNUSED459                   = 459,
MLT28X_A_RAM_INIT_GUESS                  = 487,
MLT28X_A_RAM_Y1                          = 488,
MLT28X_A_RAM_Y2                          = 489,
MLT28X_A_RAM_Y3                          = 490,
MLT28X_A_RAM_UNUSED491                   = 491,
MLT28X_A_RAM_CAL_TEMP11                  = 501,
MLT28X_A_RAM_METER_RAMP                  = 502,
MLT28X_A_RAM_METER_RAMP_DIR              = 503,
MLT28X_A_RAM_METER_ON_T                  = 504,
MLT28X_A_RAM_METER_PK_DET                = 505,
MLT28X_A_RAM_METER_PK_DET_T              = 506,
MLT28X_A_RAM_THERM_CNT                   = 507,
MLT28X_A_RAM_VDIFF_SENSE_DELAY           = 508,
MLT28X_A_RAM_UNUSED509                   = 509,
MLT28X_A_RAM_CPUMP_DEB_CNT               = 510,
MLT28X_A_RAM_UNUSED757                   = 757,
MLT28X_A_RAM_UNUSED758                   = 758,
MLT28X_A_RAM_COEF_Q1256                  = 760,
MLT28X_A_RAM_UNUSED761                   = 761,
MLT28X_A_RAM_UNUSED762                   = 762,
MLT28X_A_RAM_UNUSED763                   = 763,
MLT28X_A_RAM_UNUSED778                   = 778,
MLT28X_A_RAM_UNUSED779                   = 779,
MLT28X_A_RAM_UNUSED792                   = 792,
MLT28X_A_RAM_UNUSED793                   = 793,
MLT28X_A_RAM_UNUSED794                   = 794,
MLT28X_A_RAM_UNUSED795                   = 795,
MLT28X_A_RAM_UNUSED796                   = 796,
MLT28X_A_RAM_UNUSED797                   = 797,
MLT28X_A_RAM_UNUSED798                   = 798,
MLT28X_A_RAM_UNUSED799                   = 799,
MLT28X_A_RAM_UNUSED800                   = 800,
MLT28X_A_RAM_UNUSED870                   = 870,
MLT28X_A_RAM_UNUSED872                   = 872,
MLT28X_A_RAM_UNUSED873                   = 873,
MLT28X_A_RAM_OFFLD_DAC_SCALE             = 876,
MLT28X_A_RAM_OFFLD_DAC_OS                = 878,
MLT28X_A_RAM_UNUSED885                   = 885,
MLT28X_A_RAM_MADC_VBAT_SCALE             = 886,
MLT28X_A_RAM_UNUSED892                   = 892,
MLT28X_A_RAM_P_TH_OFFLOAD                = 897,
MLT28X_A_RAM_UNUSED911                   = 911,
MLT28X_A_RAM_XTALK_TIMER                 = 918,
MLT28X_A_RAM_VBAT_TRACK_MIN              = 919,
MLT28X_A_RAM_VBAT_TRACK_MIN_RNG          = 920,
MLT28X_A_RAM_UNUSED921                   = 921,
MLT28X_A_RAM_UNUSED922                   = 922,
MLT28X_A_RAM_UNUSED923                   = 923,
MLT28X_A_RAM_UNUSED924                   = 924,
MLT28X_A_RAM_UNUSED925                   = 925,
MLT28X_A_RAM_UNUSED926                   = 926,
MLT28X_A_RAM_DIAG_GAIN_DC                = 928,
MLT28X_A_RAM_METER_GAIN                  = 961,
MLT28X_A_RAM_METER_GAIN_TEMP             = 968,
MLT28X_A_RAM_METER_RAMP_STEP             = 969,
MLT28X_A_RAM_THERM_DBI                   = 970,
MLT28X_A_RAM_LPR_SCALE                   = 971,
MLT28X_A_RAM_LPR_CM_OS                   = 972,
MLT28X_A_RAM_VOV_DCDC_SLOPE              = 973,
MLT28X_A_RAM_VOV_DCDC_OS                 = 974,
MLT28X_A_RAM_VOV_RING_BAT_MAX            = 975,
MLT28X_A_RAM_SLOPE_VLIM1                 = 976,
MLT28X_A_RAM_SLOPE_RFEED1                = 977,
MLT28X_A_RAM_SLOPE_ILIM1                 = 978,
MLT28X_A_RAM_V_VLIM1                     = 979,
MLT28X_A_RAM_V_RFEED1                    = 980,
MLT28X_A_RAM_V_ILIM1                     = 981,
MLT28X_A_RAM_CONST_RFEED1                = 982,
MLT28X_A_RAM_CONST_ILIM1                 = 983,
MLT28X_A_RAM_I_VLIM1                     = 984,
MLT28X_A_RAM_SLOPE_VLIM2                 = 985,
MLT28X_A_RAM_SLOPE_RFEED2                = 986,
MLT28X_A_RAM_SLOPE_ILIM2                 = 987,
MLT28X_A_RAM_V_VLIM2                     = 988,
MLT28X_A_RAM_V_RFEED2                    = 989,
MLT28X_A_RAM_V_ILIM2                     = 990,
MLT28X_A_RAM_CONST_RFEED2                = 991,
MLT28X_A_RAM_CONST_ILIM2                 = 992,
MLT28X_A_RAM_I_VLIM2                     = 993,
MLT28X_A_RAM_DIAG_V_TAR                  = 994,
MLT28X_A_RAM_DIAG_V_TAR2                 = 995,
MLT28X_A_RAM_STOP_TIMER1_VAL             = 996,
MLT28X_A_RAM_STOP_TIMER2_VAL             = 997,
MLT28X_A_RAM_DIAG_VCM1_TAR               = 998,
MLT28X_A_RAM_DIAG_VCM_STEP               = 999,
MLT28X_A_RAM_LKG_DNT_HIRES               = 1000,
MLT28X_A_RAM_LKG_DNR_HIRES               = 1001,
MLT28X_A_RAM_LINEAR_OS                   = 1002,
MLT28X_A_RAM_CPUMP_DEB                   = 1003,
MLT28X_A_RAM_DCDC_VERR                   = 1004,
MLT28X_A_RAM_DCDC_VERR_HYST              = 1005,
MLT28X_A_RAM_DCDC_OITHRESH_LO            = 1006,
MLT28X_A_RAM_DCDC_OITHRESH_HI            = 1007,
MLT28X_A_RAM_HV_BIAS_ONHK                = 1008,
MLT28X_A_RAM_HV_BIAS_OFFHK               = 1009,
MLT28X_A_RAM_UVTHRESH_BIAS               = 1010,
MLT28X_A_RAM_UVTHRESH_SCALE              = 1011,
MLT28X_A_RAM_UVTHRESH_MAX                = 1012,
MLT28X_A_RAM_VBATH_DELTA                 = 1013,
MLT28X_A_RAM_UNUSED1014                  = 1014,
MLT28X_A_RAM_VOV_RING_BAT_DCDC           = 1015,
MLT28X_A_RAM_P_OFFLOAD_VBAT_HYST         = 1016,
MLT28X_A_RAM_LKG_LB_OFFSET               = 1017,
MLT28X_A_RAM_LKG_OFHK_OFFSET             = 1018,
MLT28X_A_RAM_UNUSED1019                  = 1019,
MLT28X_A_RAM_UNUSED1020                  = 1020,
MLT28X_A_RAM_UNUSED1021                  = 1021,
MLT28X_A_RAM_DAC_OFFSET                  = 1280,
MLT28X_A_RAM_UNUSED_REG280               = 1304,
MLT28X_A_RAM_ADC_CAL                     = 1306,
MLT28X_A_RAM_VOC_DAC                     = 1311,
MLT28X_A_RAM_CHAN_ZERO                   = 1316,
MLT28X_A_RAM_CHAN_TOG                    = 1317,
MLT28X_A_RAM_CHAN_POP                    = 1318,
MLT28X_A_RAM_BIAS                        = 1321,
MLT28X_A_RAM_SLIC_DIAG_CLR               = 1353,
MLT28X_A_RAM_UNUSED_REG342               = 1366,
MLT28X_A_RAM_UNUSED_REG343               = 1367,
MLT28X_A_RAM_UNUSED_REG344               = 1368,
MLT28X_A_RAM_UNUSED_REG356               = 1380,
MLT28X_A_RAM_UNUSED_REG360               = 1384,
MLT28X_A_RAM_UNUSED_REG364               = 1388,
MLT28X_A_RAM_UNUSED_REG380               = 1404,
MLT28X_A_RAM_UNUSED_REG381               = 1405,
MLT28X_A_RAM_UNUSED_REG384               = 1408,
MLT28X_A_RAM_CAL_HVIC_CNTL               = 1409,
MLT28X_A_RAM_UNUSED_REG401               = 1425,
MLT28X_A_RAM_UNUSED_REG402               = 1426,
MLT28X_A_RAM_UNUSED_REG405               = 1429,
MLT28X_A_RAM_UNUSED_REG407               = 1431,
MLT28X_A_RAM_UNUSED_REG411               = 1435,
MLT28X_A_RAM_UNUSED_REG416               = 1440,
MLT28X_A_RAM_UNUSED_REG421               = 1445,
MLT28X_A_RAM_UNUSED_REG427               = 1451,
MLT28X_A_RAM_CAL_DCADC_CNTL              = 1455,
MLT28X_A_RAM_LKG_UPT_OHT                 = 1464,
MLT28X_A_RAM_LKG_UPR_OHT                 = 1465,
MLT28X_A_RAM_LKG_DNT_OHT                 = 1466,
MLT28X_A_RAM_LKG_DNR_OHT                 = 1467,
MLT28X_A_RAM_CAL_GPIO0_CTRL              = 1470,
MLT28X_A_RAM_UNUSED_REG460               = 1484,
MLT28X_A_RAM_OFFLD_DAC                   = 1485,
MLT28X_A_RAM_UNUSED_REG470               = 1494,
MLT28X_A_RAM_UNUSED_REG471               = 1495,
MLT28X_A_RAM_UNUSED_REG474               = 1498,
MLT28X_A_RAM_UNUSED_REG476               = 1500,
MLT28X_A_RAM_UNUSED_REG477               = 1501,
MLT28X_A_RAM_UNUSED_REG478               = 1502,
MLT28X_A_RAM_UNUSED_REG479               = 1503,
MLT28X_A_RAM_UNUSED_REG480               = 1504,
MLT28X_A_RAM_UNUSED_REG481               = 1505,
MLT28X_A_RAM_PD_OFFLD_DAC                = 1512,
MLT28X_A_RAM_PD_OFFLD_GM                 = 1513,
MLT28X_A_RAM_BATSEL_MAN                  = 1519,
MLT28X_A_RAM_HVIC_MAN                    = 1520,
MLT28X_A_RAM_UNUSED_REG497               = 1521,
MLT28X_A_RAM_UNUSED_REG502               = 1526,
MLT28X_A_RAM_UNUSED_REG505               = 1529,
MLT28X_A_RAM_UNUSED_REG513               = 1537,
MLT28X_A_RAM_UNUSED_REG520               = 1544,
MLT28X_A_RAM_UNUSED_REG525               = 1549,
MLT28X_A_RAM_UNUSED_REG526               = 1550,
MLT28X_A_RAM_UNUSED_REG528               = 1552,
MLT28X_A_RAM_DCDC_CPUMP                  = 1555,
MLT28X_A_RAM_UNUSED_REG532               = 1556,
MLT28X_A_RAM_UNUSED_REG535               = 1559,
MLT28X_A_RAM_UNUSED_REG538               = 1562,
MLT28X_A_RAM_UNUSED_REG542               = 1566,
MLT28X_A_RAM_UNUSED_REG543               = 1567,
MLT28X_A_RAM_UNUSED_REG548               = 1572,
MLT28X_A_RAM_UNUSED_REG557               = 1581,
MLT28X_A_RAM_UNUSED_REG558               = 1582,
MLT28X_A_RAM_UNUSED_REG569               = 1593,
MLT28X_A_RAM_UNUSED_REG570               = 1594,
MLT28X_A_RAM_JMP8                        = 1597,
MLT28X_A_RAM_JMP9                        = 1598,
MLT28X_A_RAM_JMP10                       = 1599,
MLT28X_A_RAM_JMP11                       = 1600,
MLT28X_A_RAM_JMP12                       = 1601,
MLT28X_A_RAM_JMP13                       = 1602,
MLT28X_A_RAM_JMP14                       = 1603,
MLT28X_A_RAM_JMP15                       = 1604,
MLT28X_A_RAM_METER_TRIG                  = 1605,
MLT28X_A_RAM_PM_ACTIVE                   = 1606,
MLT28X_A_RAM_PM_INACTIVE                 = 1607,
MLT28X_A_RAM_HVIC_VERSION                = 1608,
MLT28X_A_RAM_THERM_OFF                   = 1609,
MLT28X_A_RAM_THERM_HI                    = 1610,
MLT28X_A_RAM_TEST_LOAD                   = 1611,
MLT28X_A_RAM_DC_HOLD_MAN                 = 1612,
MLT28X_A_RAM_DC_HOLD_DAC_MAN             = 1613,
MLT28X_A_RAM_DCDC_AUXB_INVERT            = 1614,
MLT28X_A_RAM_DCDC_CPUMP_LP               = 1615,
MLT28X_A_RAM_DCDC_CPUMP_LP_MASK          = 1616,
MLT28X_A_RAM_DCDC_CPUMP_PULLDOWN         = 1617,
MLT28X_A_RAM_BOND_STATUS                 = 1618,
MLT28X_A_RAM_BOND_MAN                    = 1619,
MLT28X_A_RAM_BOND_VAL                    = 1620,
MLT28X_A_RAM_CB_MODE_TX                  = 1621,
MLT28X_A_RAM_CB_MODE_RX                  = 1622,
MLT28X_A_RAM_CB_PD_RX_OPA                = 1623,
MLT28X_A_RAM_CB_PD_HYB_OPA               = 1624,
MLT28X_A_RAM_CB_PD_HYB                   = 1625,
MLT28X_A_RAM_CB_GAIN_RX                  = 1626,
MLT28X_A_RAM_CB_PREBAL                   = 1627,
MLT28X_A_RAM_CB_CB                       = 1628,
MLT28X_A_RAM_CB_PD_HYB_CM_BUF            = 1629,
MLT28X_A_RAM_CB_HYB_CHEN_B               = 1630,
MLT28X_A_RAM_CB_VRX_CHEN_B               = 1631,
MLT28X_A_RAM_PLL2_MARGIN                 = 1632,
MLT28X_A_RAM_REF_DEBOUNCE_PCLK           = 1633,
MLT28X_A_RAM_REF_DEBOUNCE_FSYNC          = 1634,
MLT28X_A_RAM_DCDC_LIFT_EN                = 1635,
MLT28X_A_RAM_DCDC_CPUMP_PGOOD            = 1636,
MLT28X_A_RAM_DCDC_CPUMP_PGOOD_WKEN       = 1637,
MLT28X_A_RAM_DCDC_CPUMP_PGOOD_FRC        = 1638,
MLT28X_A_RAM_DCDC_CPUMP_LP_MASK_SH       = 1639,
MLT28X_A_RAM_DCDC_UV_MAN                 = 1640,
MLT28X_A_RAM_DCDC_UV_DEBOUNCE            = 1641,
MLT28X_A_RAM_DCDC_OV_MAN                 = 1642,
MLT28X_A_RAM_DCDC_OV_DEBOUNCE            = 1643,
MLT28X_A_RAM_ANALOG5_TEST_MUX            = 1644,
MLT28X_A_RAM_OFFLD_DAC_MAN               = 1645,
MLT28X_A_RAM_MAILBOX0                    = 1646,
MLT28X_A_RAM_MAILBOX1                    = 1647,
};

#endif