#pragma once
/******************************************************************************/
/* File   : Template.hpp                                                      */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "tle_variants.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
typedef enum{
      Reset_IRQn            = -15
   ,  NonMaskableInt_IRQn   = -14
   ,  HardFault_IRQn        = -13
   ,  MemoryManagement_IRQn = -12
   ,  BusFault_IRQn         = -11
   ,  UsageFault_IRQn       = -10
   ,  SVCall_IRQn           =  -5
   ,  DebugMonitor_IRQn     =  -4
   ,  PendSV_IRQn           =  -2
   ,  SysTick_IRQn          =  -1
   ,  GPT1_Int              =   0
   ,  GPT2_Int              =   1
   ,  ADC2_Tmr3_Int         =   2
   ,  ADC1_VREF5_Int        =   3
   ,  CCU6_SR0_Int          =   4
   ,  CCU6_SR1_Int          =   5
   ,  CCU6_SR2_Int          =   6
   ,  CCU6_SR3_Int          =   7
   ,  SSC1_Int              =   8
   ,  SSC2_Int              =   9
   ,  UART1_LIN_Tmr2_Int    =  10
   ,  UART2_Tmr21_EINT2_Int =  11
   ,  EXINT0_MON_Int        =  12
   ,  EXINT1_Int            =  13
   ,  BDRV_CP_Int           =  14
   ,  DMA_Int               =  15
}IRQn_Type;

#define __CM3_REV                 0x0000U
#define __NVIC_PRIO_BITS               4
#define __Vendor_SysTickConfig         0
#define __MPU_PRESENT                  0
#define __FPU_PRESENT                  0

#include "core_cm3.hpp"
#include "system_tle987x.hpp"

#ifndef __IM
#define __IM   __I
#endif
#ifndef __OM
#define __OM   __O
#endif
#ifndef __IOM
#define __IOM  __IO
#endif

typedef struct{
  union{
    __IOM uint32_t reg;
    struct{
      __IOM uint32_t PD_N       : 1;
      __IM  uint32_t            : 1;
      __IOM uint32_t SOC        : 1;
      __IM  uint32_t EOC        : 1;
      __IOM uint32_t IN_MUX_SEL : 3;
    }bit;
  }CTRL_STS;

  union{
    __IOM uint32_t reg;
    struct{
      __IOM uint32_t DIVA       : 6;
      __IM  uint32_t            : 2;
      __IOM uint32_t ANON       : 2;
    }bit;
  }GLOBCTR;

  union{
    __IOM uint32_t reg;
    struct{
      __IOM uint32_t CHx        : 3;
      __IM  uint32_t            : 1;
      __IOM uint32_t REP        : 3;
      __IM  uint32_t            : 9;
      __IOM uint32_t TRIG_SEL   : 3;
    }bit;
  }CHx_EIM;

  union{
    __IOM uint32_t reg;
    struct{
      __IOM uint32_t ESM_0      : 8;
      __IM  uint32_t            : 8;
      __IOM uint32_t TRIG_SEL   : 3;
    }bit;
  }CHx_ESM;
  __IM  uint32_t  RESERVED[2];

  union{
    __IOM uint32_t reg;
    struct{
      __IOM uint32_t SQ1        : 8;
      __IOM uint32_t SQ2        : 8;
      __IOM uint32_t SQ3        : 8;
      __IOM uint32_t SQ4        : 8;
    }bit;
  }SQ1_4;

  union{
    __IOM uint32_t reg;
    struct{
      __IOM uint32_t SQ5        : 8;
      __IOM uint32_t SQ6        : 8;
      __IOM uint32_t SQ7        : 8;
      __IOM uint32_t SQ8        : 8;
    }bit;
  }SQ5_8;
  __IM  uint32_t  RESERVED1;

  union{
    __IOM uint32_t reg;
    struct{
      __IOM uint32_t ch0        : 1;
      __IOM uint32_t ch1        : 1;
      __IOM uint32_t ch2        : 1;
      __IOM uint32_t ch3        : 1;
      __IOM uint32_t ch4        : 1;
      __IOM uint32_t ch5        : 1;
      __IOM uint32_t ch6        : 1;
      __IOM uint32_t ch7        : 1;
    }bit;
  }DWSEL;

  union{
    __IOM uint32_t reg;
    struct{
      __IOM uint32_t ch0        : 8;
      __IOM uint32_t ch1        : 8;
      __IOM uint32_t ch2        : 8;
      __IOM uint32_t ch3        : 8;
    }bit;
  }STC_0_3;

  union{
    __IOM uint32_t reg;
    struct{
      __IOM uint32_t ch4        : 8;
      __IOM uint32_t ch5        : 8;
      __IOM uint32_t ch6        : 8;
      __IOM uint32_t ch7        : 8;
    }bit;
  }STC_4_7;
  __IM  uint32_t  RESERVED2[4];

  union{
    __IOM uint32_t reg;
    struct{
      __IM  uint32_t OUT_CH_EIM : 12;
      __IM  uint32_t            : 4;
      __IOM uint32_t WFR8       : 1;
      __IM  uint32_t VF8        : 1;
      __IM  uint32_t OF8        : 1;
    }bit;
  }RES_OUT_EIM;
  __IM  uint32_t  RESERVED3[3];

  union{
    __IOM uint32_t reg;
    struct{
      __IM  uint32_t            : 8;
      __IOM uint32_t SQ_RUN     : 1;
      __IM  uint32_t EIM_ACTIVE : 1;
      __IM  uint32_t ESM_ACTIVE : 1;
      __IM  uint32_t SQx        : 3;
      __IM  uint32_t            : 2;
      __IM  uint32_t CHx        : 3;
    }bit;
  }SQ_FB;

  union{
    __IOM uint32_t reg;
    struct{
      __IM  uint32_t OUT_CH7    : 12;
      __IM  uint32_t            : 4;
      __IOM uint32_t WFR7       : 1;
      __IM  uint32_t VF7        : 1;
      __IM  uint32_t OF7        : 1;
    }bit;
  }RES_OUT7;

  union{
    __IOM uint32_t reg;
    struct{
      __IM  uint32_t OUT_CH6    : 12;
      __IM  uint32_t            : 4;
      __IOM uint32_t WFR6       : 1;
      __IM  uint32_t VF6        : 1;
      __IM  uint32_t OF6        : 1;
    }bit;
  }RES_OUT6;

  union{
    __IOM uint32_t reg;
    struct{
      __IM  uint32_t OUT_CH5    : 12;
      __IM  uint32_t            : 4;
      __IOM uint32_t WFR5       : 1;
      __IM  uint32_t VF5        : 1;
      __IM  uint32_t OF5        : 1;
    }bit;
  }RES_OUT5;

  union{
    __IOM uint32_t reg;
    struct{
      __IM  uint32_t OUT_CH4    : 12;
      __IM  uint32_t            : 4;
      __IOM uint32_t WFR4       : 1;
      __IM  uint32_t VF4        : 1;
      __IM  uint32_t OF4        : 1;
    }bit;
  }RES_OUT4;

  union{
    __IOM uint32_t reg;
    struct{
      __IM  uint32_t OUT_CH3    : 12;
      __IM  uint32_t            : 4;
      __IOM uint32_t WFR3       : 1;
      __IM  uint32_t VF3        : 1;
      __IM  uint32_t OF3        : 1;
    }bit;
  }RES_OUT3;

  union{
    __IOM uint32_t reg;
    struct{
      __IM  uint32_t OUT_CH2    : 12;
      __IM  uint32_t            : 4;
      __IOM uint32_t WFR2       : 1;
      __IM  uint32_t VF2        : 1;
      __IM  uint32_t OF2        : 1;
    }bit;
  }RES_OUT2;

  union{
    __IOM uint32_t reg;
    struct{
      __IM  uint32_t OUT_CH1    : 12;
      __IM  uint32_t            : 4;
      __IOM uint32_t WFR1       : 1;
      __IM  uint32_t VF1        : 1;
      __IM  uint32_t OF1        : 1;
    }bit;
  }RES_OUT1;

  union{
    __IOM uint32_t reg;
    struct{
      __IM  uint32_t OUT_CH0    : 12;
      __IM  uint32_t            : 4;
      __IOM uint32_t WFR0       : 1;
      __IM  uint32_t VF0        : 1;
      __IM  uint32_t OF0        : 1;
    }bit;
  }RES_OUT0;

  union{
    __IOM uint32_t reg;
    struct{
      __IM  uint32_t BUSY       : 1;
      __IM  uint32_t SAMPLE     : 1;
      __IM  uint32_t            : 1;
      __IM  uint32_t CHNR       : 3;
      __IM  uint32_t            : 2;
      __IM  uint32_t ANON_ST    : 2;
    }bit;
  }GLOBSTR;

  union{
    __IOM uint32_t reg;
    struct{
      __IM  uint32_t CH0_STS    : 1;
      __IM  uint32_t CH1_STS    : 1;
      __IM  uint32_t CH2_STS    : 1;
      __IM  uint32_t CH3_STS    : 1;
      __IM  uint32_t CH4_STS    : 1;
      __IM  uint32_t CH5_STS    : 1;
      __IM  uint32_t CH6_STS    : 1;
      __IM  uint32_t CH7_STS    : 1;
      __IM  uint32_t EIM_STS    : 1;
      __IM  uint32_t ESM_STS    : 1;
    }bit;
  }IS;

  union{
    __IOM uint32_t reg;
    struct{
      __IOM uint32_t CH0_IE     : 1;
      __IOM uint32_t CH1_IE     : 1;
      __IOM uint32_t CH2_IE     : 1;
      __IOM uint32_t CH3_IE     : 1;
      __IOM uint32_t CH4_IE     : 1;
      __IOM uint32_t CH5_IE     : 1;
      __IOM uint32_t CH6_IE     : 1;
      __IOM uint32_t CH7_IE     : 1;
      __IOM uint32_t EIM_IE     : 1;
      __IOM uint32_t ESM_IE     : 1;
    }bit;
  }IE;

  union{
    __IOM uint32_t reg;
    struct{
      __OM  uint32_t CH0_ICLR   : 1;
      __OM  uint32_t CH1_ICLR   : 1;
      __OM  uint32_t CH2_ICLR   : 1;
      __OM  uint32_t CH3_ICLR   : 1;
      __OM  uint32_t CH4_ICLR   : 1;
      __OM  uint32_t CH5_ICLR   : 1;
      __OM  uint32_t CH6_ICLR   : 1;
      __OM  uint32_t CH7_ICLR   : 1;
      __OM  uint32_t EIM_ICLR   : 1;
      __OM  uint32_t ESM_ICLR   : 1;
    }bit;
  }ICLR;
}ADC1_Type;

typedef struct{

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t            : 17;
      __IOM uint32_t VS_RANGE   : 1;
    }bit;
  }CTRL_STS;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t SQ_FB      : 4;
      __IM  uint32_t            : 4;
      __IM  uint32_t SQ_STOP    : 1;
      __IM  uint32_t EIM_ACTIVE : 1;
      __IM  uint32_t ESM_ACTIVE : 1;
      __IM  uint32_t SQx        : 4;
      __IM  uint32_t            : 1;
      __IM  uint32_t CHx        : 5;
    }bit;
  }SQ_FB;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t CHx        : 5;
      __IM  uint32_t            : 3;
      __IOM uint32_t REP        : 3;
      __IOM uint32_t EN         : 1;
      __IOM uint32_t SEL        : 1;
    }bit;
  }CHx_EIM;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t ESM_0      : 6;
      __IOM uint32_t ESM_1      : 4;
      __IOM uint32_t SEL        : 1;
      __IM  uint32_t            : 5;
      __IOM uint32_t EN         : 1;
      __IM  uint32_t STS        : 1;
    }bit;
  }CHx_ESM;
  __IM  uint32_t  RESERVED;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t CALIB_EN   : 6;
    }bit;
  }CTRL1;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t MCM_PD_N   : 1;
      __IOM uint32_t TS_SD_SEL_CONF : 1;
      __IOM uint32_t TSENSE_SD_SEL : 1;
      __IM  uint32_t            : 4;
      __IM  uint32_t MCM_RDY    : 1;
      __IOM uint32_t SAMPLE_TIME_int : 4;
      __IM  uint32_t            : 4;
      __IOM uint32_t SEL_TS_COUNT : 4;
    }bit;
  }CTRL2;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t FILT_OUT_SEL_5_0 : 6;
      __IM  uint32_t            : 2;
      __IOM uint32_t FILT_OUT_SEL_9_6 : 4;
    }bit;
  }CTRL4;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t SQ1        : 6;
      __IM  uint32_t            : 2;
      __IOM uint32_t SQ2        : 6;
      __IM  uint32_t            : 2;
      __IOM uint32_t SQ3        : 6;
      __IM  uint32_t            : 2;
      __IOM uint32_t SQ4        : 6;
    }bit;
  }SQ1_4;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t SQ5        : 6;
      __IM  uint32_t            : 2;
      __IOM uint32_t SQ6        : 6;
      __IM  uint32_t            : 2;
      __IOM uint32_t SQ7        : 6;
      __IM  uint32_t            : 2;
      __IOM uint32_t SQ8        : 6;
    }bit;
  }SQ5_8;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t SQ9        : 6;
      __IM  uint32_t            : 2;
      __IOM uint32_t SQ10       : 6;
    }bit;
  }SQ9_10;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t SQ1_int    : 4;
      __IM  uint32_t SQ2_int    : 4;
      __IM  uint32_t SQ3_int    : 4;
      __IM  uint32_t SQ4_int    : 4;
      __IM  uint32_t SQ5_int    : 4;
      __IM  uint32_t SQ6_int    : 4;
      __IM  uint32_t SQ7_int    : 4;
      __IM  uint32_t SQ8_int    : 4;
    }bit;
  }SQ1_8_int;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t SQ9_int    : 4;
      __IM  uint32_t SQ10_int   : 4;
    }bit;
  }SQ9_10_int;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t OFFS_CH0   : 8;
      __IOM uint32_t GAIN_CH0   : 8;
      __IOM uint32_t OFFS_CH1   : 8;
      __IOM uint32_t GAIN_CH1   : 8;
    }bit;
  }CAL_CH0_1;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t OFFS_CH2   : 8;
      __IOM uint32_t GAIN_CH2   : 8;
      __IOM uint32_t OFFS_CH3   : 8;
      __IOM uint32_t GAIN_CH3   : 8;
    }bit;
  }CAL_CH2_3;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t OFFS_CH4   : 8;
      __IOM uint32_t GAIN_CH4   : 8;
      __IOM uint32_t OFFS_CH5   : 8;
      __IOM uint32_t GAIN_CH5   : 8;
    }bit;
  }CAL_CH4_5;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t OFFS_CH6   : 8;
      __IM  uint32_t GAIN_CH6   : 8;
      __IM  uint32_t OFFS_CH7   : 8;
      __IM  uint32_t GAIN_CH7   : 8;
    }bit;
  }CAL_CH6_7;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t OFFS_CH8   : 8;
      __IM  uint32_t GAIN_CH8   : 8;
      __IM  uint32_t OFFS_CH9   : 8;
      __IM  uint32_t GAIN_CH9   : 8;
    }bit;
  }CAL_CH8_9;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t CH0        : 2;
      __IOM uint32_t CH1        : 2;
      __IOM uint32_t CH2        : 2;
      __IOM uint32_t CH3        : 2;
      __IOM uint32_t CH4        : 2;
      __IOM uint32_t CH5        : 2;
    }bit;
  }FILTCOEFF0_5;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t CH6        : 2;
      __IM  uint32_t CH7        : 2;
      __IM  uint32_t CH8        : 2;
      __IM  uint32_t CH9        : 2;
    }bit;
  }FILTCOEFF6_9;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t OUT_CH0    : 10;
    }bit;
  }FILT_OUT0;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t OUT_CH1    : 10;
    }bit;
  }FILT_OUT1;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t OUT_CH2    : 10;
    }bit;
  }FILT_OUT2;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t OUT_CH3    : 10;
    }bit;
  }FILT_OUT3;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t OUT_CH4    : 10;
    }bit;
  }FILT_OUT4;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t OUT_CH5    : 10;
    }bit;
  }FILT_OUT5;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t OUT_CH6    : 10;
    }bit;
  }FILT_OUT6;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t OUT_CH7    : 10;
    }bit;
  }FILT_OUT7;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t OUT_CH8    : 10;
    }bit;
  }FILT_OUT8;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t OUT_CH9    : 10;
    }bit;
  }FILT_OUT9;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t Ch0_EN     : 1;
      __IOM uint32_t Ch1_EN     : 1;
      __IOM uint32_t Ch2_EN     : 1;
      __IOM uint32_t Ch3_EN     : 1;
      __IOM uint32_t Ch4_EN     : 1;
      __IOM uint32_t Ch5_EN     : 1;
    }bit;
  }FILT_UP_CTRL;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t Ch0_EN     : 1;
      __IOM uint32_t Ch1_EN     : 1;
      __IOM uint32_t Ch2_EN     : 1;
      __IOM uint32_t Ch3_EN     : 1;
      __IOM uint32_t Ch4_EN     : 1;
      __IOM uint32_t Ch5_EN     : 1;
    }bit;
  }FILT_LO_CTRL;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t CH0        : 8;
      __IOM uint32_t CH1        : 8;
      __IOM uint32_t CH2        : 8;
      __IOM uint32_t CH3        : 8;
    }bit;
  }TH0_3_LOWER;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t CH4        : 8;
      __IOM uint32_t CH5        : 8;
    }bit;
  }TH4_5_LOWER;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t CH6        : 8;
      __IM  uint32_t CH7        : 8;
      __IOM uint32_t CH8        : 8;
      __IOM uint32_t CH9        : 8;
    }bit;
  }TH6_9_LOWER;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t CH0        : 8;
      __IOM uint32_t CH1        : 8;
      __IOM uint32_t CH2        : 8;
      __IOM uint32_t CH3        : 8;
    }bit;
  }TH0_3_UPPER;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t CH4        : 8;
      __IOM uint32_t CH5        : 8;
    }bit;
  }TH4_5_UPPER;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t CH6        : 8;
      __IM  uint32_t CH7        : 8;
      __IM  uint32_t CH8        : 8;
      __IM  uint32_t CH9        : 8;
    }bit;
  }TH6_9_UPPER;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t CNT_LO_CH0 : 3;
      __IOM uint32_t HYST_LO_CH0 : 2;
      __IM  uint32_t            : 3;
      __IOM uint32_t CNT_LO_CH1 : 3;
      __IOM uint32_t HYST_LO_CH1 : 2;
      __IM  uint32_t            : 3;
      __IOM uint32_t CNT_LO_CH2 : 3;
      __IOM uint32_t HYST_LO_CH2 : 2;
      __IM  uint32_t            : 3;
      __IOM uint32_t CNT_LO_CH3 : 3;
      __IOM uint32_t HYST_LO_CH3 : 2;
    }bit;
  }CNT0_3_LOWER;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t CNT_LO_CH4 : 3;
      __IOM uint32_t HYST_LO_CH4 : 2;
      __IM  uint32_t            : 3;
      __IOM uint32_t CNT_LO_CH5 : 3;
      __IOM uint32_t HYST_LO_CH5 : 2;
    }bit;
  }CNT4_5_LOWER;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t CNT_LO_CH6 : 3;
      __IM  uint32_t HYST_LO_CH6 : 2;
      __IM  uint32_t            : 3;
      __IM  uint32_t CNT_LO_CH7 : 3;
      __IM  uint32_t HYST_LO_CH7 : 2;
      __IM  uint32_t            : 3;
      __IM  uint32_t CNT_LO_CH8 : 3;
      __IM  uint32_t HYST_LO_CH8 : 2;
      __IM  uint32_t            : 3;
      __IM  uint32_t CNT_LO_CH9 : 3;
      __IM  uint32_t HYST_LO_CH9 : 2;
    }bit;
  }CNT6_9_LOWER;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t CNT_UP_CH0 : 3;
      __IOM uint32_t HYST_UP_CH0 : 2;
      __IM  uint32_t            : 3;
      __IOM uint32_t CNT_UP_CH1 : 3;
      __IOM uint32_t HYST_UP_CH1 : 2;
      __IM  uint32_t            : 3;
      __IOM uint32_t CNT_UP_CH2 : 3;
      __IOM uint32_t HYST_UP_CH2 : 2;
      __IM  uint32_t            : 3;
      __IOM uint32_t CNT_UP_CH3 : 3;
      __IOM uint32_t HYST_UP_CH3 : 2;
    }bit;
  }CNT0_3_UPPER;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t CNT_UP_CH4 : 3;
      __IOM uint32_t HYST_UP_CH4 : 2;
      __IM  uint32_t            : 3;
      __IOM uint32_t CNT_UP_CH5 : 3;
      __IOM uint32_t HYST_UP_CH5 : 2;
    }bit;
  }CNT4_5_UPPER;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t CNT_UP_CH6 : 3;
      __IM  uint32_t HYST_UP_CH6 : 2;
      __IM  uint32_t            : 3;
      __IM  uint32_t CNT_UP_CH7 : 3;
      __IM  uint32_t HYST_UP_CH7 : 2;
      __IM  uint32_t            : 3;
      __IM  uint32_t CNT_UP_CH8 : 3;
      __IM  uint32_t HYST_UP_CH8 : 2;
      __IM  uint32_t            : 3;
      __IM  uint32_t CNT_UP_CH9 : 3;
      __IM  uint32_t HYST_UP_CH9 : 2;
    }bit;
  }CNT6_9_UPPER;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t Ch0        : 2;
      __IOM uint32_t Ch1        : 2;
      __IOM uint32_t Ch2        : 2;
      __IOM uint32_t Ch3        : 2;
      __IOM uint32_t Ch4        : 2;
      __IOM uint32_t Ch5        : 2;
    }bit;
  }MMODE0_5;
  __IM  uint32_t  RESERVED1[2];

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t            : 1;
      __IM  uint32_t READY      : 1;
    }bit;
  }HV_STS;
}ADC2_Type;

typedef struct{
   __IOM uint32_t ADC3_EN          : 1;
   __IOM uint32_t ADC3_OFS_MEAS_EN : 1;
   __IOM uint32_t ADC3_SOC         : 1;
   __IM  uint32_t                  : 1;
   __IM  uint32_t ADC3_EoC_STS     : 1;
   __IM  uint32_t ADC34_DREQ_SEL   : 2;
   __IM  uint32_t                  : 4;
   __IOM uint32_t ADC34_REF_SEL    : 1;
   __IOM uint32_t ADC3_OSR         : 4;
   __IOM uint32_t ADC4_EN          : 1;
   __IOM uint32_t ADC4_OFS_MEAS_EN : 1;
   __IOM uint32_t ADC4_SOC         : 1;
   __IM  uint32_t                  : 1;
   __IM  uint32_t ADC4_EoC_STS     : 1;
   __IOM uint32_t ADC34_EoC_CNT    : 2;
   __IOM uint32_t ADC34_DITHEN     : 1;
   __IOM uint32_t ADC34_DITHVAL    : 4;
   __IOM uint32_t ADC4_OSR         : 4;
}tCTRL_STS_bits;

typedef union{
   __IOM uint32_t reg;
   tCTRL_STS_bits bit;
}tCTRL_STS;

typedef struct{
   __IM  uint32_t ADC3_RESU  : 16;
   __IM  uint32_t ADC4_RESU  : 16;
}tRESUbits;

typedef union{
   __IOM uint32_t reg;
   tRESUbits      bit;
}tRESU;

typedef struct{
   tCTRL_STS CTRL_STS;
   tRESU     RESU;
}ADC34_Type;

typedef struct{

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t LS1_EN     : 1;
      __IOM uint32_t LS1_PWM    : 1;
      __IOM uint32_t LS1_ON     : 1;
      __IOM uint32_t LS1_DCS_EN : 1;
      __IM  uint32_t LS1_DS_STS : 1;
      __IM  uint32_t LS1_SUPERR_STS : 1;
      __IM  uint32_t LS1_OC_STS : 1;
      __IOM uint32_t LS1_OC_DIS : 1;
      __IOM uint32_t LS2_EN     : 1;
      __IOM uint32_t LS2_PWM    : 1;
      __IOM uint32_t LS2_ON     : 1;
      __IOM uint32_t LS2_DCS_EN : 1;
      __IM  uint32_t LS2_DS_STS : 1;
      __IM  uint32_t LS2_SUPERR_STS : 1;
      __IM  uint32_t LS2_OC_STS : 1;
      __IOM uint32_t LS2_OC_DIS : 1;
      __IOM uint32_t HS1_EN     : 1;
      __IOM uint32_t HS1_PWM    : 1;
      __IOM uint32_t HS1_ON     : 1;
      __IOM uint32_t HS1_DCS_EN : 1;
      __IM  uint32_t HS1_DS_STS : 1;
      __IM  uint32_t HS1_SUPERR_STS : 1;
      __IM  uint32_t HS1_OC_STS : 1;
      __IOM uint32_t HS1_OC_DIS : 1;
      __IOM uint32_t HS2_EN     : 1;
      __IOM uint32_t HS2_PWM    : 1;
      __IOM uint32_t HS2_ON     : 1;
      __IOM uint32_t HS2_DCS_EN : 1;
      __IM  uint32_t HS2_DS_STS : 1;
      __IM  uint32_t HS2_SUPERR_STS : 1;
      __IM  uint32_t HS2_OC_STS : 1;
      __IOM uint32_t HS2_OC_DIS : 1;
    }bit;
  }CTRL1;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t LS3_EN     : 1;
      __IOM uint32_t LS3_PWM    : 1;
      __IOM uint32_t LS3_ON     : 1;
      __IOM uint32_t LS3_DCS_EN : 1;
      __IM  uint32_t LS3_DS_STS : 1;
      __IM  uint32_t LS3_SUPERR_STS : 1;
      __IM  uint32_t LS3_OC_STS : 1;
      __IOM uint32_t LS3_OC_DIS : 1;
      __IOM uint32_t HS3_EN     : 1;
      __IOM uint32_t HS3_PWM    : 1;
      __IOM uint32_t HS3_ON     : 1;
      __IOM uint32_t HS3_DCS_EN : 1;
      __IM  uint32_t HS3_DS_STS : 1;
      __IM  uint32_t HS3_SUPERR_STS : 1;
      __IM  uint32_t HS3_OC_STS : 1;
      __IOM uint32_t HS3_OC_DIS : 1;
      __IM  uint32_t DLY_DIAG_TIM : 10;
      __OM  uint32_t DLY_DIAG_SCLR : 1;
      __IM  uint32_t DLY_DIAG_STS : 1;
      __IOM uint32_t DLY_DIAG_CHSEL : 3;
      __IOM uint32_t DLY_DIAG_DIRSEL : 1;
    }bit;
  }CTRL2;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t ICHARGE_TRIM : 5;
      __IM  uint32_t            : 1;
      __IOM uint32_t ICHARGEDIV2_N : 1;
      __IOM uint32_t ON_SEQ_EN  : 1;
      __IOM uint32_t IDISCHARGE_TRIM : 5;
      __IM  uint32_t            : 1;
      __IOM uint32_t IDISCHARGEDIV2_N : 1;
      __IOM uint32_t OFF_SEQ_EN : 1;
      __IOM uint32_t DSMONVTH   : 3;
      __IM  uint32_t            : 5;
      __IOM uint32_t DRV_CCP_TIMSEL : 2;
      __IOM uint32_t DRV_CCP_DIS : 1;
    }bit;
  }CTRL3;
  __IM  uint32_t  RESERVED;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t DRV_OFF_t_4 : 3;
      __IOM uint32_t DRV_OFF_I_4 : 5;
      __IOM uint32_t DRV_OFF_t_3 : 3;
      __IOM uint32_t DRV_OFF_I_3 : 5;
      __IOM uint32_t DRV_OFF_t_2 : 3;
      __IOM uint32_t DRV_OFF_I_2 : 5;
      __IOM uint32_t DRV_OFF_t_1 : 3;
      __IOM uint32_t DRV_OFF_I_1 : 5;
    }bit;
  }OFF_SEQ_CTRL;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t DRV_ON_t_4 : 3;
      __IOM uint32_t DRV_ON_I_4 : 5;
      __IOM uint32_t DRV_ON_t_3 : 3;
      __IOM uint32_t DRV_ON_I_3 : 5;
      __IOM uint32_t DRV_ON_t_2 : 3;
      __IOM uint32_t DRV_ON_I_2 : 5;
      __IOM uint32_t DRV_ON_t_1 : 3;
      __IOM uint32_t DRV_ON_I_1 : 5;
    }bit;
  }ON_SEQ_CTRL;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t LS_HS_BT_TFILT_SEL : 2;
      __IM  uint32_t            : 3;
      __IOM uint32_t DRV_CCPTIMMUL : 2;
      __IM  uint32_t            : 1;
      __IOM uint32_t LSDRV_DS_TFILT_SEL : 2;
      __IOM uint32_t LS1DRV_FDISCHG_DIS : 1;
      __IOM uint32_t LS2DRV_FDISCHG_DIS : 1;
      __IOM uint32_t LS3DRV_FDISCHG_DIS : 1;
      __IOM uint32_t LS1DRV_OCSDN_DIS : 1;
      __IOM uint32_t LS2DRV_OCSDN_DIS : 1;
      __IOM uint32_t LS3DRV_OCSDN_DIS : 1;
      __IOM uint32_t HSDRV_DS_TFILT_SEL : 2;
      __IOM uint32_t HS1DRV_FDISCHG_DIS : 1;
      __IOM uint32_t HS2DRV_FDISCHG_DIS : 1;
      __IOM uint32_t HS3DRV_FDISCHG_DIS : 1;
      __IOM uint32_t HS1DRV_OCSDN_DIS : 1;
      __IOM uint32_t HS2DRV_OCSDN_DIS : 1;
      __IOM uint32_t HS3DRV_OCSDN_DIS : 1;
      __IOM uint32_t CPLOW_TFILT_SEL : 2;
    }bit;
  }TRIM_DRVx;
  __IM  uint32_t  RESERVED1;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t CP_EN      : 1;
      __IM  uint32_t            : 1;
      __IOM uint32_t CP_RDY_EN  : 1;
      __IM  uint32_t            : 2;
      __IM  uint32_t VCP_LOTH2_STS : 1;
      __IM  uint32_t            : 2;
      __IOM uint32_t VCP_LOWTH2 : 3;
      __IM  uint32_t            : 5;
      __IOM uint32_t DRVx_VCPLO_DIS : 1;
      __IM  uint32_t VCP_LOTH1_STS : 1;
      __IOM uint32_t DRVx_VCPUP_DIS : 1;
      __IM  uint32_t VCP_UPTH_STS : 1;
      __IOM uint32_t DRVx_VSDLO_DIS : 1;
      __IM  uint32_t VSD_LOTH_STS : 1;
      __IOM uint32_t DRVx_VSDUP_DIS : 1;
      __IM  uint32_t VSD_UPTH_STS : 1;
      __IOM uint32_t CPLOPWRM_EN : 1;
      __IOM uint32_t VCP9V_SET  : 1;
      __IOM uint32_t VTHVCP9V_TRIM : 2;
    }bit;
  }CP_CTRL_STS;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t DITH_LOWER : 5;
      __IM  uint32_t            : 3;
      __IOM uint32_t DITH_UPPER : 5;
      __IOM uint32_t F_CP       : 2;
      __IOM uint32_t CPCLK_EN   : 1;
    }bit;
  }CP_CLK_CTRL;
}BDRV_Type;

typedef struct{

  union{
    __IOM uint16_t reg;

    struct{
      __IM  uint16_t CCV        : 16;
    }bit;
  }CC63R;
  __IM  uint16_t  RESERVED;

  union{
    __IOM uint16_t reg;

    struct{
      __OM  uint16_t T12RR      : 1;
      __OM  uint16_t T12RS      : 1;
      __OM  uint16_t T12RES     : 1;
      __OM  uint16_t DTRES      : 1;
      __IM  uint16_t            : 1;
      __OM  uint16_t T12CNT     : 1;
      __OM  uint16_t T12STR     : 1;
      __OM  uint16_t T12STD     : 1;
      __OM  uint16_t T13RR      : 1;
      __OM  uint16_t T13RS      : 1;
      __OM  uint16_t T13RES     : 1;
      __IM  uint16_t            : 2;
      __OM  uint16_t T13CNT     : 1;
      __OM  uint16_t T13STR     : 1;
      __OM  uint16_t T13STD     : 1;
    }bit;
  }TCTR4;
  __IM  uint16_t  RESERVED1;

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t MCMPS      : 6;
      __IM  uint16_t            : 1;
      __IOM uint16_t STRMCM     : 1;
      __IOM uint16_t EXPHS      : 3;
      __IOM uint16_t CURHS      : 3;
      __IM  uint16_t            : 1;
      __IOM uint16_t STRHP      : 1;
    }bit;
  }MCMOUTS;
  __IM  uint16_t  RESERVED2;

  union{
    __IOM uint16_t reg;

    struct{
      __OM  uint16_t RCC60R     : 1;
      __OM  uint16_t RCC60F     : 1;
      __OM  uint16_t RCC61R     : 1;
      __OM  uint16_t RCC61F     : 1;
      __OM  uint16_t RCC62R     : 1;
      __OM  uint16_t RCC62F     : 1;
      __OM  uint16_t RT12OM     : 1;
      __OM  uint16_t RT12PM     : 1;
      __OM  uint16_t RT13CM     : 1;
      __OM  uint16_t RT13PM     : 1;
      __OM  uint16_t RTRPF      : 1;
      __IM  uint16_t            : 1;
      __OM  uint16_t RCHE       : 1;
      __OM  uint16_t RWHE       : 1;
      __OM  uint16_t RIDLE      : 1;
      __OM  uint16_t RSTR       : 1;
    }bit;
  }ISR;
  __IM  uint16_t  RESERVED3;

  union{
    __IOM uint16_t reg;

    struct{
      __OM  uint16_t MCC60S     : 1;
      __OM  uint16_t MCC61S     : 1;
      __OM  uint16_t MCC62S     : 1;
      __IM  uint16_t            : 3;
      __OM  uint16_t MCC63S     : 1;
      __IM  uint16_t            : 1;
      __OM  uint16_t MCC60R     : 1;
      __OM  uint16_t MCC61R     : 1;
      __OM  uint16_t MCC62R     : 1;
      __IM  uint16_t            : 3;
      __OM  uint16_t MCC63R     : 1;
    }bit;
  }CMPMODIF;
  __IM  uint16_t  RESERVED4;

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t CCS        : 16;
    }bit;
  }CC60SR;
  __IM  uint16_t  RESERVED5;

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t CCS        : 16;
    }bit;
  }CC61SR;
  __IM  uint16_t  RESERVED6;

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t CCS        : 16;
    }bit;
  }CC62SR;
  __IM  uint16_t  RESERVED7;

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t CCS        : 16;
    }bit;
  }CC63SR;
  __IM  uint16_t  RESERVED8;

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t T12PV      : 16;
    }bit;
  }T12PR;
  __IM  uint16_t  RESERVED9;

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t T13PV      : 16;
    }bit;
  }T13PR;
  __IM  uint16_t  RESERVED10;

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t DTM        : 8;
      __IOM uint16_t DTE0       : 1;
      __IOM uint16_t DTE1       : 1;
      __IOM uint16_t DTE2       : 1;
      __IM  uint16_t            : 1;
      __IM  uint16_t DTR0       : 1;
      __IM  uint16_t DTR1       : 1;
      __IM  uint16_t DTR2       : 1;
    }bit;
  }T12DTC;
  __IM  uint16_t  RESERVED11;

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t T12CLK     : 3;
      __IOM uint16_t T12PRE     : 1;
      __IM  uint16_t T12R       : 1;
      __IM  uint16_t STE12      : 1;
      __IM  uint16_t CDIR       : 1;
      __IOM uint16_t CTM        : 1;
      __IOM uint16_t T13CLK     : 3;
      __IOM uint16_t T13PRE     : 1;
      __IM  uint16_t T13R       : 1;
      __IM  uint16_t STE13      : 1;
    }bit;
  }TCTR0;
  __IM  uint16_t  RESERVED12;

  union{
    __IOM uint16_t reg;

    struct{
      __IM  uint16_t CCV        : 16;
    }bit;
  }CC60R;
  __IM  uint16_t  RESERVED13;

  union{
    __IOM uint16_t reg;

    struct{
      __IM  uint16_t CCV        : 16;
    }bit;
  }CC61R;
  __IM  uint16_t  RESERVED14;

  union{
    __IOM uint16_t reg;

    struct{
      __IM  uint16_t CCV        : 16;
    }bit;
  }CC62R;
  __IM  uint16_t  RESERVED15;

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t MSEL60     : 4;
      __IOM uint16_t MSEL61     : 4;
      __IOM uint16_t MSEL62     : 4;
      __IOM uint16_t HSYNC      : 3;
      __IOM uint16_t DBYP       : 1;
    }bit;
  }T12MSEL;
  __IM  uint16_t  RESERVED16;

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t ENCC60R    : 1;
      __IOM uint16_t ENCC60F    : 1;
      __IOM uint16_t ENCC61R    : 1;
      __IOM uint16_t ENCC61F    : 1;
      __IOM uint16_t ENCC62R    : 1;
      __IOM uint16_t ENCC62F    : 1;
      __IOM uint16_t ENT12OM    : 1;
      __IOM uint16_t ENT12PM    : 1;
      __IOM uint16_t ENT13CM    : 1;
      __IOM uint16_t ENT13PM    : 1;
      __IOM uint16_t ENTRPF     : 1;
      __IM  uint16_t            : 1;
      __IOM uint16_t ENCHE      : 1;
      __IOM uint16_t ENWHE      : 1;
      __IOM uint16_t ENIDLE     : 1;
      __IOM uint16_t ENSTR      : 1;
    }bit;
  }IEN;
  __IM  uint16_t  RESERVED17;

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t INPCC60    : 2;
      __IOM uint16_t INPCC61    : 2;
      __IOM uint16_t INPCC62    : 2;
      __IOM uint16_t INPCHE     : 2;
      __IOM uint16_t INPERR     : 2;
      __IOM uint16_t INPT12     : 2;
      __IOM uint16_t INPT13     : 2;
    }bit;
  }INP;
  __IM  uint16_t  RESERVED18;

  union{
    __IOM uint16_t reg;

    struct{
      __OM  uint16_t SCC60R     : 1;
      __OM  uint16_t SCC60F     : 1;
      __OM  uint16_t SCC61R     : 1;
      __OM  uint16_t SCC61F     : 1;
      __OM  uint16_t SCC62R     : 1;
      __OM  uint16_t SCC62F     : 1;
      __OM  uint16_t ST12OM     : 1;
      __OM  uint16_t ST12PM     : 1;
      __OM  uint16_t ST13CM     : 1;
      __OM  uint16_t ST13PM     : 1;
      __OM  uint16_t STRPF      : 1;
      __OM  uint16_t SWHC       : 1;
      __OM  uint16_t SCHE       : 1;
      __OM  uint16_t SWHE       : 1;
      __OM  uint16_t SIDLE      : 1;
      __OM  uint16_t SSTR       : 1;
    }bit;
  }ISS;
  __IM  uint16_t  RESERVED19;

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t PSL        : 6;
      __IM  uint16_t            : 1;
      __IOM uint16_t PSL63      : 1;
    }bit;
  }PSLR;
  __IM  uint16_t  RESERVED20;

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t SWSEL      : 3;
      __IM  uint16_t            : 1;
      __IOM uint16_t SWSYN      : 2;
      __IM  uint16_t            : 2;
      __IOM uint16_t STE12U     : 1;
      __IOM uint16_t STE12D     : 1;
      __IOM uint16_t STE13U     : 1;
    }bit;
  }MCMCTR;
  __IM  uint16_t  RESERVED21;

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t T12SSC     : 1;
      __IOM uint16_t T13SSC     : 1;
      __IOM uint16_t T13TEC     : 3;
      __IOM uint16_t T13TED     : 2;
      __IM  uint16_t            : 1;
      __IOM uint16_t T12RSEL    : 2;
      __IOM uint16_t T13RSEL    : 2;
    }bit;
  }TCTR2;
  __IM  uint16_t  RESERVED22;

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t T12MODEN   : 6;
      __IM  uint16_t            : 1;
      __IOM uint16_t MCMEN      : 1;
      __IOM uint16_t T13MODEN   : 6;
      __IM  uint16_t            : 1;
      __IOM uint16_t ECT13O     : 1;
    }bit;
  }MODCTR;
  __IM  uint16_t  RESERVED23;

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t TRPM0      : 1;
      __IOM uint16_t TRPM1      : 1;
      __IOM uint16_t TRPM2      : 1;
      __IM  uint16_t            : 5;
      __IOM uint16_t TRPEN      : 6;
      __IOM uint16_t TRPEN13    : 1;
      __IOM uint16_t TRPPEN     : 1;
    }bit;
  }TRPCTR;
  __IM  uint16_t  RESERVED24;

  union{
    __IOM uint16_t reg;

    struct{
      __IM  uint16_t MCMP       : 6;
      __IM  uint16_t R          : 1;
      __IM  uint16_t            : 1;
      __IM  uint16_t EXPH       : 3;
      __IM  uint16_t CURH       : 3;
    }bit;
  }MCMOUT;
  __IM  uint16_t  RESERVED25;

  union{
    __IOM uint16_t reg;

    struct{
      __IM  uint16_t ICC60R     : 1;
      __IM  uint16_t ICC60F     : 1;
      __IM  uint16_t ICC61R     : 1;
      __IM  uint16_t ICC61F     : 1;
      __IM  uint16_t ICC62R     : 1;
      __IM  uint16_t ICC62F     : 1;
      __IM  uint16_t T12OM      : 1;
      __IM  uint16_t T12PM      : 1;
      __IM  uint16_t T13CM      : 1;
      __IM  uint16_t T13PM      : 1;
      __IM  uint16_t TRPF       : 1;
      __IM  uint16_t TRPS       : 1;
      __IM  uint16_t CHE        : 1;
      __IM  uint16_t WHE        : 1;
      __IM  uint16_t IDLE       : 1;
      __IM  uint16_t STR        : 1;
    }bit;
  }IS;
  __IM  uint16_t  RESERVED26;

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t ISCC60     : 2;
      __IOM uint16_t ISCC61     : 2;
      __IOM uint16_t ISCC62     : 2;
      __IOM uint16_t ISTRP      : 2;
      __IOM uint16_t ISPOS0     : 2;
      __IOM uint16_t ISPOS1     : 2;
      __IOM uint16_t ISPOS2     : 2;
      __IOM uint16_t IST12HR    : 2;
    }bit;
  }PISEL0;
  __IM  uint16_t  RESERVED27[3];

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t IST13HR    : 2;
      __IOM uint16_t ISCNT12    : 2;
      __IOM uint16_t ISCNT13    : 2;
      __IOM uint16_t T12EXT     : 1;
      __IOM uint16_t T13EXT     : 1;
    }bit;
  }PISEL2;
  __IM  uint16_t  RESERVED28;

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t T12CV      : 16;
    }bit;
  }T12;
  __IM  uint16_t  RESERVED29;

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t T13CV      : 16;
    }bit;
  }T13;
  __IM  uint16_t  RESERVED30;

  union{
    __IOM uint16_t reg;

    struct{
      __IM  uint16_t CC60ST     : 1;
      __IM  uint16_t CC61ST     : 1;
      __IM  uint16_t CC62ST     : 1;
      __IM  uint16_t CCPOS0     : 1;
      __IM  uint16_t CCPOS1     : 1;
      __IM  uint16_t CCPOS2     : 1;
      __IM  uint16_t CC63ST     : 1;
      __IM  uint16_t            : 1;
      __IOM uint16_t CC60PS     : 1;
      __IOM uint16_t COUT60PS   : 1;
      __IOM uint16_t CC61PS     : 1;
      __IOM uint16_t COUT61PS   : 1;
      __IOM uint16_t CC62PS     : 1;
      __IOM uint16_t COUT62PS   : 1;
      __IOM uint16_t COUT63PS   : 1;
      __IOM uint16_t T13IM      : 1;
    }bit;
  }CMPSTAT;
}CCU6_Type;

typedef struct{
  __IM  uint32_t  RESERVED;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t INTLINESNUM : 5;
    }bit;
  }ICT;
  __IM  uint32_t  RESERVED1[2];

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t ENABLE     : 1;
      __IOM uint32_t TICKINT    : 1;
      __IOM uint32_t CLKSOURCE  : 1;
      __IM  uint32_t            : 13;
      __IOM uint32_t COUNTFLAG  : 1;
    }bit;
  }SYSTICK_CS;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t RELOAD     : 24;
    }bit;
  }SYSTICK_RL;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t CURRENT    : 24;
    }bit;
  }SYSTICK_CUR;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t TENMS      : 24;
      __IM  uint32_t            : 6;
      __IM  uint32_t SKEW       : 1;
      __IM  uint32_t NOREF      : 1;
    }bit;
  }SYSTICK_CAL;
  __IM  uint32_t  RESERVED2[56];

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t Int_GPT1   : 1;
      __IOM uint32_t Int_GPT2   : 1;
      __IOM uint32_t Int_ADC2   : 1;
      __IOM uint32_t Int_ADC1   : 1;
      __IOM uint32_t Int_CCU6SR0 : 1;
      __IOM uint32_t Int_CCU6SR1 : 1;
      __IOM uint32_t Int_CCU6SR2 : 1;
      __IOM uint32_t Int_CCU6SR3 : 1;
      __IOM uint32_t Int_SSC1   : 1;
      __IOM uint32_t Int_SSC2   : 1;
      __IOM uint32_t Int_UART1  : 1;
      __IOM uint32_t Int_UART2  : 1;
      __IOM uint32_t Int_EXINT0 : 1;
      __IOM uint32_t Int_EXINT1 : 1;
      __IOM uint32_t Int_BDRV   : 1;
      __IOM uint32_t Int_DMA    : 1;
    }bit;
  }NVIC_ISER0;
  __IM  uint32_t  RESERVED3[31];

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t Int_GPT1   : 1;
      __IOM uint32_t Int_GPT2   : 1;
      __IOM uint32_t Int_ADC2   : 1;
      __IOM uint32_t Int_ADC1   : 1;
      __IOM uint32_t Int_CCU6SR0 : 1;
      __IOM uint32_t Int_CCU6SR1 : 1;
      __IOM uint32_t Int_CCU6SR2 : 1;
      __IOM uint32_t Int_CCU6SR3 : 1;
      __IOM uint32_t Int_SSC1   : 1;
      __IOM uint32_t Int_SSC2   : 1;
      __IOM uint32_t Int_UART1  : 1;
      __IOM uint32_t Int_UART2  : 1;
      __IOM uint32_t Int_EXINT0 : 1;
      __IOM uint32_t Int_EXINT1 : 1;
      __IOM uint32_t Int_BDRV   : 1;
      __IOM uint32_t Int_DMA    : 1;
    }bit;
  }NVIC_ICER0;
  __IM  uint32_t  RESERVED4[31];

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t Int_GPT1   : 1;
      __IOM uint32_t Int_GPT2   : 1;
      __IOM uint32_t Int_ADC2   : 1;
      __IOM uint32_t Int_ADC1   : 1;
      __IOM uint32_t Int_CCU6SR0 : 1;
      __IOM uint32_t Int_CCU6SR1 : 1;
      __IOM uint32_t Int_CCU6SR2 : 1;
      __IOM uint32_t Int_CCU6SR3 : 1;
      __IOM uint32_t Int_SSC1   : 1;
      __IOM uint32_t Int_SSC2   : 1;
      __IOM uint32_t Int_UART1  : 1;
      __IOM uint32_t Int_UART2  : 1;
      __IOM uint32_t Int_EXINT0 : 1;
      __IOM uint32_t Int_EXINT1 : 1;
      __IOM uint32_t Int_BDRV   : 1;
      __IOM uint32_t Int_DMA    : 1;
    }bit;
  }NVIC_ISPR0;
  __IM  uint32_t  RESERVED5[31];

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t Int_GPT1   : 1;
      __IOM uint32_t Int_GPT2   : 1;
      __IOM uint32_t Int_ADC2   : 1;
      __IOM uint32_t Int_ADC1   : 1;
      __IOM uint32_t Int_CCU6SR0 : 1;
      __IOM uint32_t Int_CCU6SR1 : 1;
      __IOM uint32_t Int_CCU6SR2 : 1;
      __IOM uint32_t Int_CCU6SR3 : 1;
      __IOM uint32_t Int_SSC1   : 1;
      __IOM uint32_t Int_SSC2   : 1;
      __IOM uint32_t Int_UART1  : 1;
      __IOM uint32_t Int_UART2  : 1;
      __IOM uint32_t Int_EXINT0 : 1;
      __IOM uint32_t Int_EXINT1 : 1;
      __IOM uint32_t Int_BDRV   : 1;
      __IOM uint32_t Int_DMA    : 1;
    }bit;
  }NVIC_ICPR0;
  __IM  uint32_t  RESERVED6[31];

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t Int_GPT1   : 1;
      __IM  uint32_t Int_GPT2   : 1;
      __IM  uint32_t Int_ADC2   : 1;
      __IM  uint32_t Int_ADC1   : 1;
      __IM  uint32_t Int_CCU6SR0 : 1;
      __IM  uint32_t Int_CCU6SR1 : 1;
      __IM  uint32_t Int_CCU6SR2 : 1;
      __IM  uint32_t Int_CCU6SR3 : 1;
      __IM  uint32_t Int_SSC1   : 1;
      __IM  uint32_t Int_SSC2   : 1;
      __IM  uint32_t Int_UART1  : 1;
      __IM  uint32_t Int_UART2  : 1;
      __IM  uint32_t Int_EXINT0 : 1;
      __IM  uint32_t Int_EXINT1 : 1;
      __IM  uint32_t Int_BDRV   : 1;
      __IM  uint32_t Int_DMA    : 1;
    }bit;
  }NVIC_IABR0;
  __IM  uint32_t  RESERVED7[63];

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t PRI_GPT1   : 8;
      __IOM uint32_t PRI_GPT2   : 8;
      __IOM uint32_t PRI_ADC2   : 8;
      __IOM uint32_t PRI_ADC1   : 8;
    }bit;
  }NVIC_IPR0;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t PRI_CCU6SR0 : 8;
      __IOM uint32_t PRI_CCU6SR1 : 8;
      __IOM uint32_t PRI_CCU6SR2 : 8;
      __IOM uint32_t PRI_CCU6SR3 : 8;
    }bit;
  }NVIC_IPR1;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t PRI_SSC1   : 8;
      __IOM uint32_t PRI_SSC2   : 8;
      __IOM uint32_t PRI_UART1  : 8;
      __IOM uint32_t PRI_UART2  : 8;
    }bit;
  }NVIC_IPR2;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t PRI_EXINT0 : 8;
      __IOM uint32_t PRI_EXINT1 : 8;
      __IOM uint32_t PRI_BDRV   : 8;
      __IOM uint32_t PRI_DMA    : 8;
    }bit;
  }NVIC_IPR3;
  __IM  uint32_t  RESERVED8[572];

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t REVISION   : 4;
      __IM  uint32_t PARTNO     : 12;
      __IM  uint32_t ARCHITECTURE : 4;
      __IM  uint32_t VARIANT    : 4;
      __IM  uint32_t IMPLEMENTER : 8;
    }bit;
  }CPUID;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t VECTACTIVE : 9;
      __IM  uint32_t            : 2;
      __IM  uint32_t RETTOBASE  : 1;
      __IM  uint32_t VECTPENDING : 9;
      __IM  uint32_t            : 1;
      __IM  uint32_t ISRPENDING : 1;
      __IM  uint32_t ISRPREEMPT : 1;
      __IM  uint32_t            : 1;
      __OM  uint32_t PENDSTCLR  : 1;
      __IOM uint32_t PENDSTSET  : 1;
      __OM  uint32_t PENDSVCLR  : 1;
      __IOM uint32_t PENDSVSET  : 1;
      __IM  uint32_t            : 2;
      __IOM uint32_t NMIPENDSET : 1;
    }bit;
  }ICSR;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t            : 7;
      __IOM uint32_t TBLOFF     : 25;
    }bit;
  }VTOR;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t VECTRESET  : 1;
      __IOM uint32_t VECTCLRACTIVE : 1;
      __IOM uint32_t SYSRESETREQ : 1;
      __IM  uint32_t            : 5;
      __IOM uint32_t PRIGROUP   : 3;
      __IM  uint32_t            : 4;
      __IM  uint32_t ENDIANNESS : 1;
      __IOM uint32_t VECTKEY    : 16;
    }bit;
  }AIRCR;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t            : 1;
      __IOM uint32_t SLEEPONEXIT : 1;
      __IOM uint32_t SLEEPDEEP  : 1;
      __IM  uint32_t            : 1;
      __IOM uint32_t SEVONPEND  : 1;
    }bit;
  }SCR;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t NONBASETHRDENA : 1;
      __IOM uint32_t USERSETMPEND : 1;
      __IM  uint32_t            : 1;
      __IOM uint32_t UNALIGN_TRP : 1;
      __IOM uint32_t DIV_0_TRP  : 1;
      __IM  uint32_t            : 3;
      __IOM uint32_t BFHFMIGN   : 1;
      __IOM uint32_t STKALIGN   : 1;
    }bit;
  }CCR;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t PRI_4      : 8;
      __IOM uint32_t PRI_5      : 8;
      __IOM uint32_t PRI_6      : 8;
      __IOM uint32_t PRI_7      : 8;
    }bit;
  }SHPR1;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t PRI_8      : 8;
      __IOM uint32_t PRI_9      : 8;
      __IOM uint32_t PRI_10     : 8;
      __IOM uint32_t PRI_11     : 8;
    }bit;
  }SHPR2;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t PRI_12     : 8;
      __IOM uint32_t PRI_13     : 8;
      __IOM uint32_t PRI_14     : 8;
      __IOM uint32_t PRI_15     : 8;
    }bit;
  }SHPR3;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t MEMFAULTACT : 1;
      __IOM uint32_t BUSFAULTACT : 1;
      __IM  uint32_t            : 1;
      __IOM uint32_t USGFAULTACT : 1;
      __IM  uint32_t            : 3;
      __IOM uint32_t SVCALLACT  : 1;
      __IOM uint32_t MONITORACT : 1;
      __IM  uint32_t            : 1;
      __IOM uint32_t PENDSVACT  : 1;
      __IOM uint32_t SYSTICKACT : 1;
      __IOM uint32_t USGFAULTPENDED : 1;
      __IOM uint32_t MEMFAULTPENDED : 1;
      __IOM uint32_t BUSFAULTPENDED : 1;
      __IOM uint32_t SVCALLPENDED : 1;
      __IOM uint32_t MEMFAULTENA : 1;
      __IOM uint32_t BUSFAULTENA : 1;
      __IOM uint32_t USGFAULTENA : 1;
    }bit;
  }SHCSR;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t IACCVIOL   : 1;
      __IOM uint32_t DACCVIOL   : 1;
      __IM  uint32_t            : 1;
      __IOM uint32_t MUNSTKERR  : 1;
      __IOM uint32_t MSTERR     : 1;
      __IM  uint32_t            : 2;
      __IOM uint32_t MMARVALID  : 1;
      __IOM uint32_t IBUSERR    : 1;
      __IOM uint32_t PRECISERR  : 1;
      __IOM uint32_t IMPRECISERR : 1;
      __IOM uint32_t UNSTKERR   : 1;
      __IOM uint32_t STKERR     : 1;
      __IM  uint32_t            : 2;
      __IOM uint32_t BFARVALID  : 1;
      __IOM uint32_t UNDEFINSTR : 1;
      __IOM uint32_t INVSTATE   : 1;
      __IOM uint32_t INVPC      : 1;
      __IOM uint32_t NOCP       : 1;
      __IM  uint32_t            : 4;
      __IOM uint32_t UNALIGNED  : 1;
      __IOM uint32_t DIVBYZERO  : 1;
    }bit;
  }CFSR;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t            : 1;
      __IOM uint32_t VECTTBL    : 1;
      __IM  uint32_t            : 28;
      __IOM uint32_t FORCED     : 1;
      __IOM uint32_t DEBUGEVT   : 1;
    }bit;
  }HFSR;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t HALTED     : 1;
      __IOM uint32_t BKPT       : 1;
      __IOM uint32_t DWTTRAP    : 1;
      __IOM uint32_t VCATCH     : 1;
      __IOM uint32_t EXTERNAL   : 1;
    }bit;
  }DFSR;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t ADDRESS    : 32;
    }bit;
  }MMFAR;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t ADDRESS    : 32;
    }bit;
  }BFAR;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t CP0        : 2;
      __IOM uint32_t CP1        : 2;
      __IOM uint32_t CP2        : 2;
      __IOM uint32_t CP3        : 2;
      __IOM uint32_t CP4        : 2;
      __IOM uint32_t CP5        : 2;
      __IOM uint32_t CP6        : 2;
      __IOM uint32_t CP7        : 2;
      __IM  uint32_t            : 4;
      __IOM uint32_t CP10       : 2;
      __IOM uint32_t CP11       : 2;
    }bit;
  }AFSR;
}CPU_Type;

typedef struct{
  __I  uint32_t  RESERVED0[3];

  union{
    __IO uint32_t  reg;

    struct{
      __IO uint32_t  EN         :  1;
      __IO uint32_t  GAIN       :  2;
      uint32_t             :  5;
      __IO uint32_t  VZERO      :  1;
    }bit;
  }CTRL;
}CSA_Type;

typedef struct{

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t MASTER_ENABLE : 1;
      __IM  uint32_t            : 3;
      __IM  uint32_t STATE      : 4;
      __IM  uint32_t            : 8;
      __IM  uint32_t CHNLS_MINUS1 : 5;
    }bit;
  }STATUS;

  union{
    __IOM uint32_t reg;

    struct{
      __OM  uint32_t MASTER_ENABLE : 1;
      __IM  uint32_t            : 4;
      __OM  uint32_t CHN1_PROT_CTRL : 3;
    }bit;
  }CFG;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t            : 9;
      __IOM uint32_t CTRL_BASE_PTR : 23;
    }bit;
  }CTRL_BASE_PTR;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t ALT_CTRL_BASE_PTR : 32;
    }bit;
  }ALT_CTRL_BASE_PTR;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t WAITONREQ_STATUS : 14;
    }bit;
  }WAITONREQ_STATUS;

  union{
    __IOM uint32_t reg;

    struct{
      __OM  uint32_t CHNL_SW_REQUEST : 14;
    }bit;
  }CHNL_SW_REQUEST;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t CHNL_USEBURST_SET : 14;
    }bit;
  }CHNL_USEBURST_SET;

  union{
    __IOM uint32_t reg;

    struct{
      __OM  uint32_t CHNL_USEBURST_CLR : 14;
    }bit;
  }CHNL_USEBURST_CLR;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t CHNL_REQ_MASK_SET : 14;
    }bit;
  }CHNL_REQ_MASK_SET;

  union{
    __IOM uint32_t reg;

    struct{
      __OM  uint32_t CHNL_REQ_MASK_CLR : 14;
    }bit;
  }CHNL_REQ_MASK_CLR;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t CHNL_ENABLE_SET : 14;
    }bit;
  }CHNL_ENABLE_SET;

  union{
    __IOM uint32_t reg;

    struct{
      __OM  uint32_t CHNL_ENABLE_CLR : 14;
    }bit;
  }CHNL_ENABLE_CLR;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t CHNL_PRI_ALT_SET : 14;
    }bit;
  }CHNL_PRI_ALT_SET;

  union{
    __IOM uint32_t reg;

    struct{
      __OM  uint32_t CHNL_PRI_ALT_CLR : 14;
    }bit;
  }CHNL_PRI_ALT_CLR;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t CHNL_PRIORITY_SET : 14;
    }bit;
  }CHNL_PRIORITY_SET;

  union{
    __IOM uint32_t reg;

    struct{
      __OM  uint32_t CHNL_PRIORITY_CLR : 14;
    }bit;
  }CHNL_PRIORITY_CLR;
  __IM  uint32_t  RESERVED[3];

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t ERR_CLR    : 1;
    }bit;
  }ERR_CLR;
}DMA_Type;

typedef struct{

  union{
    __IOM uint16_t reg;

    struct{
      __IM  uint16_t MOD_REV    : 8;
      __IM  uint16_t MOD_TYPE   : 8;
    }bit;
  }ID;
  __IM  uint16_t  RESERVED;

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t IST2IN     : 1;
      __IOM uint16_t IST2EUD    : 1;
      __IOM uint16_t IST3IN     : 2;
      __IOM uint16_t IST3EUD    : 2;
      __IOM uint16_t IST4IN     : 2;
      __IOM uint16_t IST4EUD    : 2;
      __IOM uint16_t IST5IN     : 1;
      __IOM uint16_t IST5EUD    : 1;
      __IOM uint16_t IST6IN     : 1;
      __IOM uint16_t IST6EUD    : 1;
      __IOM uint16_t ISCAPIN    : 2;
    }bit;
  }PISEL;
  __IM  uint16_t  RESERVED1;

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t T2I        : 3;
      __IOM uint16_t T2M        : 3;
      __IOM uint16_t T2R        : 1;
      __IOM uint16_t T2UD       : 1;
      __IOM uint16_t T2UDE      : 1;
      __IOM uint16_t T2RC       : 1;
      __IM  uint16_t            : 2;
      __IOM uint16_t T2IRDIS    : 1;
      __IOM uint16_t T2EDGE     : 1;
      __IOM uint16_t T2CHDIR    : 1;
      __IM  uint16_t T2RDIR     : 1;
    }bit;
  }T2CON;
  __IM  uint16_t  RESERVED2;

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t T3I        : 3;
      __IOM uint16_t T3M        : 3;
      __IOM uint16_t T3R        : 1;
      __IOM uint16_t T3UD       : 1;
      __IOM uint16_t T3UDE      : 1;
      __IOM uint16_t T3OE       : 1;
      __IOM uint16_t T3OTL      : 1;
      __IOM uint16_t BPS1       : 2;
      __IOM uint16_t T3EDGE     : 1;
      __IOM uint16_t T3CHDIR    : 1;
      __IM  uint16_t T3RDIR     : 1;
    }bit;
  }T3CON;
  __IM  uint16_t  RESERVED3;

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t T4I        : 3;
      __IOM uint16_t T4M        : 3;
      __IOM uint16_t T4R        : 1;
      __IOM uint16_t T4UD       : 1;
      __IOM uint16_t T4UDE      : 1;
      __IOM uint16_t T4RC       : 1;
      __IOM uint16_t CLRT2EN    : 1;
      __IOM uint16_t CLRT3EN    : 1;
      __IOM uint16_t T4IRDIS    : 1;
      __IOM uint16_t T4EDGE     : 1;
      __IOM uint16_t T4CHDIR    : 1;
      __IM  uint16_t T4RDIR     : 1;
    }bit;
  }T4CON;
  __IM  uint16_t  RESERVED4;

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t T5I        : 3;
      __IOM uint16_t T5M        : 2;
      __IM  uint16_t            : 1;
      __IOM uint16_t T5R        : 1;
      __IOM uint16_t T5UD       : 1;
      __IOM uint16_t T5UDE      : 1;
      __IOM uint16_t T5RC       : 1;
      __IOM uint16_t CT3        : 1;
      __IM  uint16_t            : 1;
      __IOM uint16_t CI         : 2;
      __IOM uint16_t T5CLR      : 1;
      __IOM uint16_t T5SC       : 1;
    }bit;
  }T5CON;
  __IM  uint16_t  RESERVED5;

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t T6I        : 3;
      __IOM uint16_t T6M        : 3;
      __IOM uint16_t T6R        : 1;
      __IOM uint16_t T6UD       : 1;
      __IOM uint16_t T6UDE      : 1;
      __IOM uint16_t T6OE       : 1;
      __IOM uint16_t T6OTL      : 1;
      __IOM uint16_t BPS2       : 2;
      __IM  uint16_t            : 1;
      __IOM uint16_t T6CLR      : 1;
      __IOM uint16_t T6SR       : 1;
    }bit;
  }T6CON;
  __IM  uint16_t  RESERVED6;

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t CAPREL     : 16;
    }bit;
  }CAPREL;
  __IM  uint16_t  RESERVED7;

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t T2         : 16;
    }bit;
  }T2;
  __IM  uint16_t  RESERVED8;

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t T3         : 16;
    }bit;
  }T3;
  __IM  uint16_t  RESERVED9;

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t T4         : 16;
    }bit;
  }T4;
  __IM  uint16_t  RESERVED10;

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t T5         : 16;
    }bit;
  }T5;
  __IM  uint16_t  RESERVED11;

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t T6         : 16;
    }bit;
  }T6;
}GPT12E_Type;

typedef struct{

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t            : 1;
      __IOM uint32_t MODE       : 2;
      __IM  uint32_t M_SM_ERR   : 1;
      __IM  uint32_t OT_STS     : 1;
      __IM  uint32_t OC_STS     : 1;
      __IM  uint32_t TXD_TMOUT_STS : 1;
      __IM  uint32_t            : 2;
      __IOM uint32_t TXD        : 1;
      __IM  uint32_t RXD        : 1;
      __IOM uint32_t SM         : 2;
      __IM  uint32_t FB_SM1     : 1;
      __IM  uint32_t FB_SM2     : 1;
      __IM  uint32_t FB_SM3     : 1;
      __IM  uint32_t MODE_FB    : 3;
      __IM  uint32_t            : 2;
      __IOM uint32_t HV_MODE    : 1;
      __IM  uint32_t            : 2;
      __IOM uint32_t M_SM_ERR_CLR : 1;
    }bit;
  }CTRL_STS;
}LIN_Type;

typedef struct{

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t P2_0_ADC_SEL : 1;
      __IOM uint32_t P2_2_ADC_SEL : 1;
      __IOM uint32_t P2_3_ADC_SEL : 1;
      __IOM uint32_t P2_4_ADC_SEL : 1;
      __IOM uint32_t P2_5_ADC_SEL : 1;
      __IM  uint32_t            : 3;
      __IOM uint32_t ADC3_INP_SEL : 1;
      __IOM uint32_t ADC3_INN_SEL : 1;
      __IOM uint32_t ADC1_CH1_SEL : 1;
    }bit;
  }P2_ADCSEL_CTRL;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t VMON_SEN_PD_N : 1;
      __IM  uint32_t            : 3;
      __IOM uint32_t VMON_SEN_HRESO_5V : 1;
      __IOM uint32_t VMON_SEN_SEL_INRANGE : 1;
    }bit;
  }VMON_SEN_CTRL;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t PHUCOMP_EN : 1;
      __IOM uint32_t PHVCOMP_EN : 1;
      __IOM uint32_t PHWCOMP_EN : 1;
      __IOM uint32_t DEMGFILTDIS : 1;
      __IOM uint32_t FILTBYPS   : 1;
      __IOM uint32_t GPT12CAPINSW : 1;
      __IM  uint32_t            : 2;
      __IOM uint32_t PHUCOMP_ON : 1;
      __IOM uint32_t PHVCOMP_ON : 1;
      __IOM uint32_t PHWCOMP_ON : 1;
      __IM  uint32_t            : 1;
      __IOM uint32_t CCPOS_INSEL : 1;
      __IM  uint32_t            : 3;
      __IM  uint32_t PHU_ZC_STS : 1;
      __IM  uint32_t PHV_ZC_STS : 1;
      __IM  uint32_t PHW_ZC_STS : 1;
    }bit;
  }BEMFC_CTRL_STS;
  __IM  uint32_t  RESERVED0;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t            : 4;
      __IM  uint32_t PMU_OTWARN_STS : 1;
      __IM  uint32_t PMU_OT_STS : 1;
      __IM  uint32_t SYS_OTWARN_STS : 1;
      __IM  uint32_t SYS_OT_STS : 1;
    }bit;
  }TEMPSENSE_CTRL;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t            : 4;
      __IM  uint32_t REFBG_LOTHWARN_STS : 1;
      __IM  uint32_t REFBG_UPTHWARN_STS : 1;
    }bit;
  }REF1_STS;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t VREF5V_PD_N : 1;
      __IM  uint32_t VREF5V_OVL_STS : 1;
      __IM  uint32_t VREF5V_UV_STS : 1;
      __IM  uint32_t VREF5V_OV_STS : 1;
    }bit;
  }REF2_CTRL;
  __IM  uint32_t  RESERVED1;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t BEMF_BT_TFILT_SEL : 3;
      __IM  uint32_t            : 1;
      __IOM uint32_t BEMF_GPT_CAPIN_SEL : 2;
      __IM  uint32_t            : 2;
      __IOM uint32_t BEMF_TFILT_SEL : 2;
    }bit;
  }TRIM_BEMFx;
}MF_Type;

typedef struct{
  __I  uint32_t  RESERVED0[13];

  union{
    __IO uint8_t   reg;

    struct{
      __IO uint8_t   EN         :  1;
      __IO uint8_t   FALL       :  1;
      __IO uint8_t   RISE       :  1;
      __IO uint8_t   CYC        :  1;
      __IO uint8_t   PD         :  1;
      __IO uint8_t   PU         :  1;
      uint8_t              :  1;
      __I  uint8_t   STS        :  1;
    }bit;
  }CNF;
}MON_Type;

typedef struct{

  union{
    __IOM uint8_t reg;

    struct{
      __IM  uint8_t LIN_WAKE    : 1;
      __IM  uint8_t MON_WAKE    : 1;
      __IM  uint8_t GPIO0       : 1;
      __IM  uint8_t GPIO1       : 1;
      __IM  uint8_t CYC_WAKE    : 1;
      __IM  uint8_t FAIL        : 1;
    }bit;
  }WAKE_STATUS;
  __IM  uint8_t   RESERVED[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IM  uint8_t PMU_1V5_OVERVOLT : 1;
      __IM  uint8_t PMU_1V5_OVERLOAD : 1;
      __IOM uint8_t PMU_1V5_FAIL_EN : 1;
      __IM  uint8_t             : 1;
      __IM  uint8_t PMU_5V_OVERVOLT : 1;
      __IM  uint8_t PMU_5V_OVERLOAD : 1;
      __IOM uint8_t PMU_5V_FAIL_EN : 1;
    }bit;
  }PMU_SUPPLY_STS;
  __IM  uint8_t   RESERVED1[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t ENABLE      : 1;
      __IOM uint8_t CYC_EN      : 1;
      __IOM uint8_t FAIL_EN     : 1;
      __IOM uint8_t SHORT       : 1;
      __IOM uint8_t OVERVOLT    : 1;
      __IOM uint8_t OVERLOAD    : 1;
      __IM  uint8_t OK          : 1;
      __IM  uint8_t STABLE      : 1;
    }bit;
  }VDDEXT_CTRL;
  __IM  uint8_t   RESERVED2[7];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t SYS_FAIL    : 1;
      __IOM uint8_t PMU_WAKE    : 1;
      __IOM uint8_t PMU_SleepEX : 1;
      __IOM uint8_t PMU_LPR     : 1;
      __IOM uint8_t PMU_ClkWDT  : 1;
      __IOM uint8_t PMU_ExtWDT  : 1;
      __IOM uint8_t PMU_PIN     : 1;
      __IOM uint8_t PMU_1V5DidPOR : 1;
    }bit;
  }PMU_RESET_STS1;
  __IM  uint8_t   RESERVED3[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t PMU_IntWDT  : 1;
      __IOM uint8_t PMU_SOFT    : 1;
      __IOM uint8_t LOCKUP      : 1;
    }bit;
  }PMU_RESET_STS2;
  __IM  uint8_t   RESERVED4[11];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t WAKE_W_RST  : 1;
      __IOM uint8_t EN_0V9_N    : 1;
      __IOM uint8_t CYC_WAKE_EN : 1;
      __IOM uint8_t CYC_SENSE_EN : 1;
      __IM  uint8_t             : 3;
      __IOM uint8_t EN_VDDEXT_OC_OFF_N : 1;
    }bit;
  }CNF_PMU_SETTINGS;
  __IM  uint8_t   RESERVED5[7];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t M03         : 4;
      __IOM uint8_t E01         : 2;
      __IM  uint8_t             : 1;
      __IOM uint8_t OSC_100kHz_EN : 1;
    }bit;
  }CNF_CYC_SENSE;
  __IM  uint8_t   RESERVED6[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t M03         : 4;
      __IOM uint8_t E01         : 2;
    }bit;
  }CNF_CYC_WAKE;
  __IM  uint8_t   RESERVED7[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t M03         : 4;
    }bit;
  }CNF_CYC_SAMPLE_DEL;
  __IM  uint8_t   RESERVED9[31];

  union{
    __IOM uint8_t reg;

    struct{
      __IM  uint8_t             : 7;
      __IOM uint8_t LIN_EN      : 1;
    }bit;
  }LIN_WAKE_EN;
  __IM  uint8_t   RESERVED10[27];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t RST_TFB     : 2;
    }bit;
  }CNF_RST_TFB;
  __IM  uint8_t   RESERVED11[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t SUPP_SHORT  : 1;
      __IOM uint8_t SUPP_TMOUT  : 1;
      __IOM uint8_t PMU_1V5_OVL : 1;
      __IOM uint8_t PMU_5V_OVL  : 1;
      __IM  uint8_t             : 1;
      __IOM uint8_t SYS_OT      : 1;
      __IOM uint8_t WDT1_SEQ_FAIL : 1;
    }bit;
  }SYS_FAIL_STS;
  __IM  uint8_t   RESERVED12[15];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t SUPPFAIL    : 1;
      __IM  uint8_t             : 1;
      __IOM uint8_t VDDEXTSHORT : 1;
    }bit;
  }WAKE_STS_FAIL;
  __IM  uint8_t   RESERVED13[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IM  uint8_t WAKE_STS    : 1;
    }bit;
  }WAKE_STS_MON;
  __IM  uint8_t   RESERVED14[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IM  uint8_t GPIO0_STS_0 : 1;
      __IM  uint8_t GPIO0_STS_1 : 1;
      __IM  uint8_t GPIO0_STS_2 : 1;
      __IM  uint8_t GPIO0_STS_3 : 1;
      __IM  uint8_t GPIO0_STS_4 : 1;
    }bit;
  }WAKE_STS_GPIO0;
  __IM  uint8_t   RESERVED15[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IM  uint8_t GPIO1_STS_0 : 1;
      __IM  uint8_t GPIO1_STS_1 : 1;
      __IM  uint8_t GPIO1_STS_2 : 1;
      __IM  uint8_t GPIO1_STS_3 : 1;
      __IM  uint8_t GPIO1_STS_4 : 1;
    }bit;
  }WAKE_STS_GPIO1;
  __IM  uint8_t   RESERVED16[31];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t CNF_LIN_FT  : 1;
      __IOM uint8_t CNF_MON_FT  : 1;
      __IOM uint8_t CNF_GPIO_FT : 2;
    }bit;
  }CNF_WAKE_FILTER;
  __IM  uint8_t   RESERVED17[19];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t DATA0       : 8;
    }bit;
  }GPUDATA00;
  __IM  uint8_t   RESERVED18[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t DATA1       : 8;
    }bit;
  }GPUDATA01;
  __IM  uint8_t   RESERVED19[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t DATA2       : 8;
    }bit;
  }GPUDATA02;
  __IM  uint8_t   RESERVED20[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t DATA3       : 8;
    }bit;
  }GPUDATA03;
  __IM  uint8_t   RESERVED21[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t DATA4       : 8;
    }bit;
  }GPUDATA04;
  __IM  uint8_t   RESERVED22[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t DATA5       : 8;
    }bit;
  }GPUDATA05;
  __IM  uint8_t   RESERVED23[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t GPIO0_RI_0  : 1;
      __IOM uint8_t GPIO0_RI_1  : 1;
      __IOM uint8_t GPIO0_RI_2  : 1;
      __IOM uint8_t GPIO0_RI_3  : 1;
      __IOM uint8_t GPIO0_RI_4  : 1;
    }bit;
  }WAKE_CONF_GPIO0_RISE;
  __IM  uint8_t   RESERVED24[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t GPIO0_FA_0  : 1;
      __IOM uint8_t GPIO0_FA_1  : 1;
      __IOM uint8_t GPIO0_FA_2  : 1;
      __IOM uint8_t GPIO0_FA_3  : 1;
      __IOM uint8_t GPIO0_FA_4  : 1;
    }bit;
  }WAKE_CONF_GPIO0_FALL;
  __IM  uint8_t   RESERVED25[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t GPIO0_CYC_0 : 1;
      __IOM uint8_t GPIO0_CYC_1 : 1;
      __IOM uint8_t GPIO0_CYC_2 : 1;
      __IOM uint8_t GPIO0_CYC_3 : 1;
      __IOM uint8_t GPIO0_CYC_4 : 1;
    }bit;
  }WAKE_CONF_GPIO0_CYC;
  __IM  uint8_t   RESERVED26[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t GPIO1_RI_0  : 1;
      __IOM uint8_t GPIO1_RI_1  : 1;
      __IOM uint8_t GPIO1_RI_2  : 1;
      __IOM uint8_t GPIO1_RI_3  : 1;
      __IOM uint8_t GPIO1_RI_4  : 1;
    }bit;
  }WAKE_CONF_GPIO1_RISE;
  __IM  uint8_t   RESERVED27[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t GPIO1_FA_0  : 1;
      __IOM uint8_t GPIO1_FA_1  : 1;
      __IOM uint8_t GPIO1_FA_2  : 1;
      __IOM uint8_t GPIO1_FA_3  : 1;
      __IOM uint8_t GPIO1_FA_4  : 1;
    }bit;
  }WAKE_CONF_GPIO1_FALL;
  __IM  uint8_t   RESERVED28[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t GPIO1_CYC_0 : 1;
      __IOM uint8_t GPIO1_CYC_1 : 1;
      __IOM uint8_t GPIO1_CYC_2 : 1;
      __IOM uint8_t GPIO1_CYC_3 : 1;
      __IOM uint8_t GPIO1_CYC_4 : 1;
    }bit;
  }WAKE_CONF_GPIO1_CYC;
  __IM  uint8_t   RESERVED29[487];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t MBIST_EN    : 1;
    }bit;
  }SystemStartConfig;
}PMU_Type;

typedef struct{

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t P0          : 1;
      __IOM uint8_t P1          : 1;
      __IOM uint8_t P2          : 1;
      __IOM uint8_t P3          : 1;
      __IOM uint8_t P4          : 1;
    }bit;
  }P0_DATA;
  __IM  uint8_t   RESERVED[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t P0          : 1;
      __IOM uint8_t P1          : 1;
      __IOM uint8_t P2          : 1;
      __IOM uint8_t P3          : 1;
      __IOM uint8_t P4          : 1;
    }bit;
  }P0_DIR;
  __IM  uint8_t   RESERVED1[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t P0          : 1;
      __IOM uint8_t P1          : 1;
      __IOM uint8_t P2          : 1;
      __IOM uint8_t P3          : 1;
      __IOM uint8_t P4          : 1;
    }bit;
  }P1_DATA;
  __IM  uint8_t   RESERVED2[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t P0          : 1;
      __IOM uint8_t P1          : 1;
      __IOM uint8_t P2          : 1;
      __IOM uint8_t P3          : 1;
      __IOM uint8_t P4          : 1;
    }bit;
  }P1_DIR;
  __IM  uint8_t   RESERVED3[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IM  uint8_t P0          : 1;
      __IM  uint8_t             : 1;
      __IM  uint8_t P2          : 1;
      __IM  uint8_t P3          : 1;
      __IM  uint8_t P4          : 1;
      __IM  uint8_t P5          : 1;
    }bit;
  }P2_DATA;
  __IM  uint8_t   RESERVED4[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t P0          : 1;
      __IM  uint8_t             : 1;
      __IOM uint8_t P2          : 1;
      __IOM uint8_t P3          : 1;
      __IOM uint8_t P4          : 1;
      __IOM uint8_t P5          : 1;
    }bit;
  }P2_DIR;
  __IM  uint8_t   RESERVED5[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t P0          : 1;
      __IOM uint8_t P1          : 1;
      __IOM uint8_t P2          : 1;
      __IOM uint8_t P3          : 1;
      __IOM uint8_t P4          : 1;
    }bit;
  }P0_PUDSEL;
  __IM  uint8_t   RESERVED6[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t P0          : 1;
      __IOM uint8_t P1          : 1;
      __IOM uint8_t P2          : 1;
      __IOM uint8_t P3          : 1;
      __IOM uint8_t P4          : 1;
    }bit;
  }P0_PUDEN;
  __IM  uint8_t   RESERVED7[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t P0          : 1;
      __IOM uint8_t P1          : 1;
      __IOM uint8_t P2          : 1;
      __IOM uint8_t P3          : 1;
      __IOM uint8_t P4          : 1;
    }bit;
  }P1_PUDSEL;
  __IM  uint8_t   RESERVED8[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t P0          : 1;
      __IOM uint8_t P1          : 1;
      __IOM uint8_t P2          : 1;
      __IOM uint8_t P3          : 1;
      __IOM uint8_t P4          : 1;
    }bit;
  }P1_PUDEN;
  __IM  uint8_t   RESERVED9[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t P0          : 1;
      __IM  uint8_t             : 1;
      __IOM uint8_t P2          : 1;
      __IOM uint8_t P3          : 1;
      __IOM uint8_t P4          : 1;
      __IOM uint8_t P5          : 1;
    }bit;
  }P2_PUDSEL;
  __IM  uint8_t   RESERVED10[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t P0          : 1;
      __IM  uint8_t             : 1;
      __IOM uint8_t P2          : 1;
      __IOM uint8_t P3          : 1;
      __IOM uint8_t P4          : 1;
      __IOM uint8_t P5          : 1;
    }bit;
  }P2_PUDEN;
  __IM  uint8_t   RESERVED11[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t P0          : 1;
      __IOM uint8_t P1          : 1;
      __IOM uint8_t P2          : 1;
      __IOM uint8_t P3          : 1;
      __IOM uint8_t P4          : 1;
    }bit;
  }P0_ALTSEL0;
  __IM  uint8_t   RESERVED12[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t P0          : 1;
      __IOM uint8_t P1          : 1;
      __IOM uint8_t P2          : 1;
      __IOM uint8_t P3          : 1;
      __IOM uint8_t P4          : 1;
    }bit;
  }P0_ALTSEL1;
  __IM  uint8_t   RESERVED13[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t P0          : 1;
      __IOM uint8_t P1          : 1;
      __IOM uint8_t P2          : 1;
      __IOM uint8_t P3          : 1;
      __IOM uint8_t P4          : 1;
    }bit;
  }P1_ALTSEL0;
  __IM  uint8_t   RESERVED14[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t P0          : 1;
      __IOM uint8_t P1          : 1;
      __IOM uint8_t P2          : 1;
      __IOM uint8_t P3          : 1;
      __IOM uint8_t P4          : 1;
    }bit;
  }P1_ALTSEL1;
  __IM  uint8_t   RESERVED15[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t P0          : 1;
      __IOM uint8_t P1          : 1;
      __IOM uint8_t P2          : 1;
      __IOM uint8_t P3          : 1;
      __IOM uint8_t P4          : 1;
    }bit;
  }P0_OD;
  __IM  uint8_t   RESERVED16[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IM  uint8_t             : 1;
      __IOM uint8_t P0          : 1;
      __IOM uint8_t P1          : 1;
      __IOM uint8_t P3_P2       : 1;
      __IOM uint8_t P4          : 1;
    }bit;
  }P1_OD;
}PORT_Type;

typedef struct{

  union{
    __IOM uint8_t reg;

    struct{
      __OM  uint8_t NMIWDTC     : 1;
      __OM  uint8_t NMIPLLC     : 1;
      __OM  uint8_t NMINVMC     : 1;
      __OM  uint8_t NMIOTC      : 1;
      __OM  uint8_t NMIOWDC     : 1;
      __OM  uint8_t NMIMAPC     : 1;
      __OM  uint8_t NMIECCC     : 1;
      __OM  uint8_t NMISUPC     : 1;
    }bit;
  }NMICLR;
  __IM  uint8_t   RESERVED[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IM  uint8_t EXINT0R     : 1;
      __IM  uint8_t EXINT0F     : 1;
      __IM  uint8_t EXINT1R     : 1;
      __IM  uint8_t EXINT1F     : 1;
      __IM  uint8_t EXINT2R     : 1;
      __IM  uint8_t EXINT2F     : 1;
      __IM  uint8_t MONR        : 1;
      __IM  uint8_t MONF        : 1;
    }bit;
  }IRCON0;
  __IM  uint8_t   RESERVED1[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IM  uint8_t EIR         : 1;
      __IM  uint8_t TIR         : 1;
      __IM  uint8_t RIR         : 1;
    }bit;
  }IRCON1;
  __IM  uint8_t   RESERVED2[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IM  uint8_t EIR         : 1;
      __IM  uint8_t TIR         : 1;
      __IM  uint8_t RIR         : 1;
    }bit;
  }IRCON2;
  __IM  uint8_t   RESERVED3[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IM  uint8_t CCU6SR0     : 1;
      __IM  uint8_t             : 3;
      __IM  uint8_t CCU6SR1     : 1;
    }bit;
  }IRCON3;
  __IM  uint8_t   RESERVED4[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IM  uint8_t CCU6SR2     : 1;
      __IM  uint8_t             : 3;
      __IM  uint8_t CCU6SR3     : 1;
    }bit;
  }IRCON4;
  __IM  uint8_t   RESERVED5[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IM  uint8_t FNMIWDT     : 1;
      __IM  uint8_t FNMIPLL     : 1;
      __IM  uint8_t FNMINVM     : 1;
      __IM  uint8_t FNMIOT      : 1;
      __IM  uint8_t FNMIOWD     : 1;
      __IM  uint8_t FNMIMAP     : 1;
      __IM  uint8_t FNMIECC     : 1;
      __IM  uint8_t FNMISUP     : 1;
    }bit;
  }NMISR;
  __IM  uint8_t   RESERVED6[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IM  uint8_t             : 7;
      __IOM uint8_t EA          : 1;
    }bit;
  }IEN0;
  __IM  uint8_t   RESERVED7[7];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t NMIWDT      : 1;
      __IOM uint8_t NMIPLL      : 1;
      __IOM uint8_t NMINVM      : 1;
      __IOM uint8_t NMIOT       : 1;
      __IOM uint8_t NMIOWD      : 1;
      __IOM uint8_t NMIMAP      : 1;
      __IOM uint8_t NMIECC      : 1;
      __IOM uint8_t NMISUP      : 1;
    }bit;
  }NMICON;
  __IM  uint8_t   RESERVED8[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t EXINT0      : 2;
      __IOM uint8_t EXINT1      : 2;
      __IOM uint8_t EXINT2      : 2;
      __IOM uint8_t MON_Trig_Sel : 2;
    }bit;
  }EXICON0;
  __IM  uint8_t   RESERVED9[3];

  union{
    __IOM uint8_t reg;

    struct{
      __OM  uint8_t EXINT0RC    : 1;
      __OM  uint8_t EXINT0FC    : 1;
      __OM  uint8_t EXINT1RC    : 1;
      __OM  uint8_t EXINT1FC    : 1;
      __OM  uint8_t EXINT2RC    : 1;
      __OM  uint8_t EXINT2FC    : 1;
      __OM  uint8_t MONRC       : 1;
      __OM  uint8_t MONFC       : 1;
    }bit;
  }IRCON0CLR;
  __IM  uint8_t   RESERVED10[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t EIREN1      : 1;
      __IOM uint8_t TIREN1      : 1;
      __IOM uint8_t RIREN1      : 1;
      __IM  uint8_t             : 3;
      __IOM uint8_t RIEN1       : 1;
      __IOM uint8_t TIEN1       : 1;
    }bit;
  }MODIEN1;
  __IM  uint8_t   RESERVED11[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t EIREN2      : 1;
      __IOM uint8_t TIREN2      : 1;
      __IOM uint8_t RIREN2      : 1;
      __IM  uint8_t             : 2;
      __IOM uint8_t EXINT2_EN   : 1;
      __IOM uint8_t RIEN2       : 1;
      __IOM uint8_t TIEN2       : 1;
    }bit;
  }MODIEN2;
  __IM  uint8_t   RESERVED12[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t IE0         : 1;
      __IM  uint8_t             : 3;
      __IOM uint8_t MONIE       : 1;
      __IM  uint8_t MONSTS      : 1;
    }bit;
  }MODIEN3;
  __IM  uint8_t   RESERVED13[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t IE1         : 1;
    }bit;
  }MODIEN4;
  __IM  uint8_t   RESERVED14[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t XTAL_ON     : 1;
      __IOM uint8_t SL          : 1;
      __IOM uint8_t PD          : 1;
      __IOM uint8_t SD          : 1;
    }bit;
  }PMCON0;
  __IM  uint8_t   RESERVED15[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IM  uint8_t LOCK        : 1;
      __IOM uint8_t RESLD       : 1;
      __IOM uint8_t OSCDISC     : 1;
      __IOM uint8_t VCOBYP      : 1;
      __IOM uint8_t NDIV        : 4;
    }bit;
  }PLL_CON;
  __IM  uint8_t   RESERVED16[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t CLKREL      : 4;
      __IOM uint8_t K2DIV       : 2;
      __IOM uint8_t K1DIV       : 1;
      __IOM uint8_t VCOSEL      : 1;
    }bit;
  }CMCON1;
  __IM  uint8_t   RESERVED17[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t PBA0CLKREL  : 1;
    }bit;
  }CMCON2;
  __IM  uint8_t   RESERVED18[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t WDTIN       : 1;
      __IOM uint8_t WDTRS       : 1;
      __IOM uint8_t WDTEN       : 1;
      __IM  uint8_t             : 1;
      __IM  uint8_t WDTPR       : 1;
      __IOM uint8_t WINBEN      : 1;
    }bit;
  }WDTCON;
  __IM  uint8_t   RESERVED19[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IM  uint8_t PLL_LOCK    : 1;
      __IOM uint8_t APCLK_SET   : 1;
      __IOM uint8_t T3CLK_SEL   : 1;
      __IOM uint8_t CLKWDT_IE   : 1;
      __IOM uint8_t BGCLK_SEL   : 1;
      __IOM uint8_t BGCLK_DIV   : 1;
      __IOM uint8_t CPCLK_SEL   : 1;
      __IOM uint8_t CPCLK_DIV   : 1;
    }bit;
  }APCLK_CTRL1;
  __IM  uint8_t   RESERVED20[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t APCLK1FAC   : 2;
      __IOM uint8_t APCLK1SCLR  : 1;
      __IM  uint8_t             : 1;
      __IM  uint8_t APCLK1STS   : 2;
      __IM  uint8_t APCLK3STS   : 1;
      __IOM uint8_t APCLK3SCLR  : 1;
    }bit;
  }APCLK1;
  __IM  uint8_t   RESERVED21[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t APCLK2FAC   : 5;
      __IM  uint8_t APCLK2STS   : 2;
      __IOM uint8_t APCLK2SCLR  : 1;
    }bit;
  }APCLK2;
  __IM  uint8_t   RESERVED22[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t ADC1_DIS    : 1;
      __IOM uint8_t SSC1_DIS    : 1;
      __IOM uint8_t CCU6_DIS    : 1;
      __IOM uint8_t T2_DIS      : 1;
      __IOM uint8_t GPT12_DIS   : 1;
    }bit;
  }PMCON1;
  __IM  uint8_t   RESERVED23[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IM  uint8_t             : 1;
      __IOM uint8_t SSC2_DIS    : 1;
      __IM  uint8_t             : 1;
      __IOM uint8_t T21_DIS     : 1;
      __IM  uint8_t             : 1;
      __IOM uint8_t T3_DIS      : 1;
    }bit;
  }PMCON2;
  __IM  uint8_t   RESERVED24[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t LOCKUP      : 1;
      __IM  uint8_t             : 6;
      __IOM uint8_t LOCKUP_EN   : 1;
    }bit;
  }RSTCON;
  __IM  uint8_t   RESERVED25[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t SDADCCLK_DIV : 2;
      __IOM uint8_t T3CLK_DIV   : 2;
    }bit;
  }APCLK_CTRL2;
  __IM  uint8_t   RESERVED26[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IM  uint8_t             : 4;
      __IOM uint8_t NVMCLKFAC   : 2;
      __IOM uint8_t SYSCLKSEL   : 2;
    }bit;
  }SYSCON0;
  __IM  uint8_t   RESERVED27[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t INIT_FAIL   : 1;
      __IOM uint8_t MRAMINITSTS : 1;
      __IOM uint8_t PG100TP_CHKS_ERR : 1;
    }bit;
  }SYS_STRTUP_STS;
  __IM  uint8_t   RESERVED28[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t WDTREL      : 8;
    }bit;
  }WDTREL;
  __IM  uint8_t   RESERVED29[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t WDTWINB     : 8;
    }bit;
  }WDTWINB;
  __IM  uint8_t   RESERVED30[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IM  uint8_t WDT         : 8;
    }bit;
  }WDTL;
  __IM  uint8_t   RESERVED31[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IM  uint8_t WDT         : 8;
    }bit;
  }WDTH;
  __IM  uint8_t   RESERVED32[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t R           : 1;
      __IOM uint8_t BRPRE       : 3;
    }bit;
  }BCON1;
  __IM  uint8_t   RESERVED33[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t FD_SEL      : 5;
      __IOM uint8_t BR_VALUE    : 3;
    }bit;
  }BGL1;
  __IM  uint8_t   RESERVED34[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t BR_VALUE    : 8;
    }bit;
  }BGH1;
  __IM  uint8_t   RESERVED35[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t BRDIS       : 1;
      __IOM uint8_t BGSEL       : 2;
      __IM  uint8_t BRK         : 1;
      __IM  uint8_t EOFSYN      : 1;
      __IM  uint8_t ERRSYN      : 1;
      __IOM uint8_t SYNEN       : 1;
    }bit;
  }LINST;
  __IM  uint8_t   RESERVED36[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t R           : 1;
      __IOM uint8_t BRPRE       : 3;
    }bit;
  }BCON2;
  __IM  uint8_t   RESERVED37[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t FD_SEL      : 5;
      __IOM uint8_t BR_VALUE    : 3;
    }bit;
  }BGL2;
  __IM  uint8_t   RESERVED38[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t BR_VALUE    : 8;
    }bit;
  }BGH2;
  __IM  uint8_t   RESERVED39[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IM  uint8_t             : 3;
      __OM  uint8_t BRKC        : 1;
      __OM  uint8_t EOFSYNC     : 1;
      __OM  uint8_t ERRSYNC     : 1;
    }bit;
  }LINSCLR;
  __IM  uint8_t   RESERVED40[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IM  uint8_t VERID       : 3;
      __IM  uint8_t PRODID      : 5;
    }bit;
  }ID;
  __IM  uint8_t   RESERVED41[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t MODE        : 2;
      __IM  uint8_t PROTECT_S   : 1;
      __IOM uint8_t PASS        : 5;
    }bit;
  }PASSWD;
  __IM  uint8_t   RESERVED42[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t OSCSS       : 2;
      __IOM uint8_t OSCWDTRST   : 1;
      __IM  uint8_t OSC2L       : 1;
      __IOM uint8_t XPD         : 1;
      __IM  uint8_t             : 2;
      __IOM uint8_t OSCTRIM_8   : 1;
    }bit;
  }OSC_CON;
  __IM  uint8_t   RESERVED43[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t COREL       : 4;
      __IOM uint8_t COUTS0      : 1;
      __IOM uint8_t TLEN        : 1;
      __IOM uint8_t COUTS1      : 1;
      __IOM uint8_t EN          : 1;
    }bit;
  }COCON;
  __IM  uint8_t   RESERVED44[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t EXINT0IS    : 2;
      __IOM uint8_t EXINT1IS    : 2;
      __IOM uint8_t EXINT2IS    : 2;
      __IOM uint8_t URIOS1      : 1;
      __IOM uint8_t U_TX_CONDIS : 1;
    }bit;
  }MODPISEL;
  __IM  uint8_t   RESERVED45[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t GPT12CAPINB : 1;
      __IM  uint8_t             : 5;
      __IOM uint8_t T2EXCON     : 1;
      __IOM uint8_t T21EXCON    : 1;
    }bit;
  }MODPISEL1;
  __IM  uint8_t   RESERVED46[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t T2IS        : 2;
      __IOM uint8_t T21IS       : 2;
      __IOM uint8_t T2EXIS      : 2;
      __IOM uint8_t T21EXIS     : 2;
    }bit;
  }MODPISEL2;
  __IM  uint8_t   RESERVED47[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IM  uint8_t             : 6;
      __IOM uint8_t URIOS2      : 1;
    }bit;
  }MODPISEL3;
  __IM  uint8_t   RESERVED48[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t WDTSUSP     : 1;
      __IOM uint8_t T12SUSP     : 1;
      __IOM uint8_t T13SUSP     : 1;
      __IOM uint8_t T2_SUSP     : 1;
      __IOM uint8_t GPT12_SUSP  : 1;
      __IM  uint8_t             : 1;
      __IOM uint8_t T21_SUSP    : 1;
    }bit;
  }MODSUSP1;
  __IM  uint8_t   RESERVED49[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t T3_SUSP     : 1;
      __IOM uint8_t MU_SUSP     : 1;
      __IOM uint8_t ADC1_SUSP   : 1;
    }bit;
  }MODSUSP2;
  __IM  uint8_t   RESERVED50[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t GPT12       : 4;
      __IOM uint8_t TRIG_CONF   : 1;
      __IOM uint8_t T3_GPT12_SEL : 1;
    }bit;
  }GPT12PISEL;
  __IM  uint8_t   RESERVED51[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t RIE         : 1;
      __IM  uint8_t             : 1;
      __IOM uint8_t NVMIE       : 1;
    }bit;
  }EDCCON;
  __IM  uint8_t   RESERVED52[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IM  uint8_t RDBE        : 1;
      __IM  uint8_t             : 1;
      __IM  uint8_t NVMDBE      : 1;
      __IM  uint8_t             : 1;
      __IM  uint8_t RSBE        : 1;
    }bit;
  }EDCSTAT;
  __IM  uint8_t   RESERVED53[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t SECTORINFO  : 6;
      __IOM uint8_t SASTATUS    : 2;
    }bit;
  }MEMSTAT;
  __IM  uint8_t   RESERVED54[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t NVMPROTSTSL_0 : 1;
      __IOM uint8_t NVMPROTSTSL_1 : 1;
      __IOM uint8_t NVMPROTSTSL_2 : 1;
      __IOM uint8_t NVMPROTSTSL_3 : 1;
    }bit;
  }NVM_PROT_STS;
  __IM  uint8_t   RESERVED55[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IM  uint8_t NVM_PROT_ERR : 1;
      __IM  uint8_t NVM_ADDR_ERR : 1;
      __IM  uint8_t NVM_SFR_PROT_ERR : 1;
      __IM  uint8_t NVM_SFR_ADDR_ERR : 1;
      __IM  uint8_t ROM_PROT_ERR : 1;
      __IM  uint8_t ROM_ADDR_ERR : 1;
      __IM  uint8_t RAM_PROT_ERR : 1;
    }bit;
  }MEM_ACC_STS;
  __IM  uint8_t   RESERVED56[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t PDM0        : 3;
      __IM  uint8_t             : 1;
      __IOM uint8_t PDM1        : 3;
    }bit;
  }P0_POCON0;
  __IM  uint8_t   RESERVED57[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t PDM2        : 3;
      __IM  uint8_t             : 1;
      __IOM uint8_t PDM3        : 3;
    }bit;
  }P0_POCON1;
  __IM  uint8_t   RESERVED58[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t PDM4        : 3;
    }bit;
  }P0_POCON2;
  __IM  uint8_t   RESERVED59[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t TCC         : 2;
    }bit;
  }TCCR;
  __IM  uint8_t   RESERVED60[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t PDM0        : 3;
      __IM  uint8_t             : 1;
      __IOM uint8_t PDM1        : 3;
    }bit;
  }P1_POCON0;
  __IM  uint8_t   RESERVED61[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t PDM2        : 3;
      __IM  uint8_t             : 1;
      __IOM uint8_t PDM3        : 3;
    }bit;
  }P1_POCON1;
  __IM  uint8_t   RESERVED62[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t PDM4        : 3;
    }bit;
  }P1_POCON2;
  __IM  uint8_t   RESERVED63[11];

  union{
    __IOM uint8_t reg;

    struct{
      __OM  uint8_t RDBEC       : 1;
      __IM  uint8_t             : 1;
      __OM  uint8_t NVMDBEC     : 1;
      __IM  uint8_t             : 1;
      __OM  uint8_t RSBEC       : 1;
    }bit;
  }EDCSCLR;
  __IM  uint8_t   RESERVED64[55];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t CH1IE       : 1;
      __IOM uint8_t CH2IE       : 1;
      __IOM uint8_t CH3IE       : 1;
      __IOM uint8_t CH4IE       : 1;
      __IOM uint8_t CH5IE       : 1;
      __IOM uint8_t CH6IE       : 1;
      __IOM uint8_t CH7IE       : 1;
      __IOM uint8_t CH8IE       : 1;
    }bit;
  }DMAIEN1;
  __IM  uint8_t   RESERVED65[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t TRERRIE     : 1;
      __IOM uint8_t TRSEQ1RDYIE : 1;
      __IOM uint8_t TRSEQ2RDYIE : 1;
      __IOM uint8_t SSCTXIE     : 1;
      __IOM uint8_t SSCRXIE     : 1;
      __IOM uint8_t GPT12IE     : 1;
      __IOM uint8_t SDADCIE     : 1;
    }bit;
  }DMAIEN2;
  __IM  uint8_t   RESERVED66[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t SSCTXSRCSEL : 1;
      __IOM uint8_t SSCRXSRCSEL : 1;
      __IOM uint8_t T12ZM_DMAEN : 1;
      __IOM uint8_t T12PM_DMAEN : 1;
      __IM  uint8_t             : 1;
      __IM  uint8_t SSCTX       : 1;
      __IM  uint8_t SSCRX       : 1;
      __IM  uint8_t GPT12_T3    : 1;
    }bit;
  }DMASRCSEL;
  __IM  uint8_t   RESERVED67[7];

  union{
    __IOM uint8_t reg;

    struct{
      __IM  uint8_t CH1         : 1;
      __IM  uint8_t CH2         : 1;
      __IM  uint8_t CH3         : 1;
      __IM  uint8_t CH4         : 1;
      __IM  uint8_t CH5         : 1;
      __IM  uint8_t CH6         : 1;
      __IM  uint8_t CH7         : 1;
      __IM  uint8_t CH8         : 1;
    }bit;
  }DMAIRC1;
  __IM  uint8_t   RESERVED68[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IM  uint8_t STRDY       : 1;
      __IM  uint8_t TRSEQ1DY    : 1;
      __IM  uint8_t TRSEQ2DY    : 1;
      __IM  uint8_t SSC1RDY     : 1;
      __IM  uint8_t SSC2RDY     : 1;
      __IM  uint8_t GPT12       : 1;
      __IM  uint8_t SDADC       : 1;
    }bit;
  }DMAIRC2;
  __IM  uint8_t   RESERVED69[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t T2IE        : 1;
      __IOM uint8_t T3IE        : 1;
      __IOM uint8_t T4IE        : 1;
      __IOM uint8_t T5IE        : 1;
      __IOM uint8_t T6IE        : 1;
      __IOM uint8_t CRIE        : 1;
    }bit;
  }GPT12IEN;
  __IM  uint8_t   RESERVED70[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IM  uint8_t T2          : 1;
      __IM  uint8_t T3          : 1;
      __IM  uint8_t T4          : 1;
      __IM  uint8_t T5          : 1;
      __IM  uint8_t T6          : 1;
      __IM  uint8_t CR          : 1;
    }bit;
  }GPT12IRC;
  __IM  uint8_t   RESERVED71[3];

  union{
    __IOM uint8_t reg;

    struct{
      __OM  uint8_t T2C         : 1;
      __OM  uint8_t T3C         : 1;
      __OM  uint8_t T4C         : 1;
      __OM  uint8_t T5C         : 1;
      __OM  uint8_t T6C         : 1;
      __OM  uint8_t CRC         : 1;
    }bit;
  }GPT12ICLR;
  __IM  uint8_t   RESERVED72[19];

  union{
    __IOM uint8_t reg;

    struct{
      __OM  uint8_t EIRC        : 1;
      __OM  uint8_t TIRC        : 1;
      __OM  uint8_t RIRC        : 1;
    }bit;
  }IRCON1CLR;
  __IM  uint8_t   RESERVED73[3];

  union{
    __IOM uint8_t reg;

    struct{
      __OM  uint8_t EIRC        : 1;
      __OM  uint8_t TIRC        : 1;
      __OM  uint8_t RIRC        : 1;
    }bit;
  }IRCON2CLR;
  __IM  uint8_t   RESERVED74[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t GPT12_DMAEN : 2;
    }bit;
  }DMASRCSEL2;
  __IM  uint8_t   RESERVED75[3];

  union{
    __IOM uint8_t reg;

    struct{
      __OM  uint8_t CH1C        : 1;
      __OM  uint8_t CH2C        : 1;
      __OM  uint8_t CH3C        : 1;
      __OM  uint8_t CH4C        : 1;
      __OM  uint8_t CH5C        : 1;
      __OM  uint8_t CH6C        : 1;
      __OM  uint8_t CH7C        : 1;
      __OM  uint8_t CH8C        : 1;
    }bit;
  }DMAIRC1CLR;
  __IM  uint8_t   RESERVED76[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IM  uint8_t             : 1;
      __OM  uint8_t TRSEQ1DYC   : 1;
      __OM  uint8_t TRSEQ2DYC   : 1;
      __OM  uint8_t SSC1C       : 1;
      __OM  uint8_t SSC2C       : 1;
      __OM  uint8_t GPT12C      : 1;
      __OM  uint8_t SDADCC      : 1;
    }bit;
  }DMAIRC2CLR;
  __IM  uint8_t   RESERVED77[7];

  union{
    __IOM uint8_t reg;

    struct{
      __OM  uint8_t CCU6SR0C    : 1;
      __IM  uint8_t             : 3;
      __OM  uint8_t CCU6SR1C    : 1;
    }bit;
  }IRCON3CLR;
  __IM  uint8_t   RESERVED78[3];

  union{
    __IOM uint8_t reg;

    struct{
      __OM  uint8_t CCU6SR2C    : 1;
      __IM  uint8_t             : 3;
      __OM  uint8_t CCU6SR3C    : 1;
    }bit;
  }IRCON4CLR;
  __IM  uint8_t   RESERVED79[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IM  uint8_t             : 5;
      __OM  uint8_t SSCTXC      : 1;
      __OM  uint8_t SSCRXC      : 1;
      __OM  uint8_t GPT12_T3C   : 1;
    }bit;
  }DMASRCCLR;
}SCU_Type;

typedef struct{

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t AMCLK1_FREQ : 6;
      __IM  uint32_t            : 2;
      __IM  uint32_t AMCLK2_FREQ : 6;
    }bit;
  }AMCLK_FREQ_STS;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t CLKWDT_PD_N : 1;
    }bit;
  }AMCLK_CTRL;
  __IM  uint32_t  RESERVED;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t AMCLK1_UP_TH : 6;
      __IOM uint32_t AMCLK1_UP_HYS : 2;
      __IOM uint32_t AMCLK1_LOW_TH : 6;
      __IOM uint32_t AMCLK1_LOW_HYS : 2;
      __IOM uint32_t AMCLK2_UP_TH : 6;
      __IOM uint32_t AMCLK2_UP_HYS : 2;
      __IOM uint32_t AMCLK2_LOW_TH : 6;
      __IOM uint32_t AMCLK2_LOW_HYS : 2;
    }bit;
  }AMCLK_TH_HYS;
  __IM  uint32_t  RESERVED1;

  union{
    __IOM uint32_t reg;

    struct{
      __OM  uint32_t LIN_OC_ICLR : 1;
      __OM  uint32_t LIN_OT_ICLR : 1;
      __OM  uint32_t LIN_TMOUT_ICLR : 1;
      __IM  uint32_t            : 3;
      __OM  uint32_t PMU_OTWARN_ICLR : 1;
      __OM  uint32_t PMU_OT_ICLR : 1;
      __OM  uint32_t SYS_OTWARN_ICLR : 1;
      __OM  uint32_t SYS_OT_ICLR : 1;
      __OM  uint32_t REFBG_LOTHWARN_ICLR : 1;
      __OM  uint32_t REFBG_UPTHWARN_ICLR : 1;
      __OM  uint32_t VREF5V_LOWTH_ICLR : 1;
      __OM  uint32_t VREF5V_UPTH_ICLR : 1;
      __OM  uint32_t VREF5V_OVL_ICLR : 1;
      __OM  uint32_t ADC2_ESM_ICLR : 1;
      __OM  uint32_t PHU_ZCLOW_ICLR : 1;
      __OM  uint32_t PHU_ZCHI_ICLR : 1;
      __OM  uint32_t PHV_ZCLOW_ICLR : 1;
      __OM  uint32_t PHV_ZCHI_ICLR : 1;
      __OM  uint32_t PHW_ZCLOW_ICLR : 1;
      __OM  uint32_t PHW_ZCHI_ICLR : 1;
      __OM  uint32_t ADC3_EOC_ICLR : 1;
      __OM  uint32_t ADC4_EOC_ICLR : 1;
      __OM  uint32_t PHU_ZCLOW_SCLR : 1;
      __OM  uint32_t PHU_ZCHI_SCLR : 1;
      __OM  uint32_t PHV_ZCLOW_SCLR : 1;
      __OM  uint32_t PHV_ZCHI_SCLR : 1;
      __OM  uint32_t PHW_ZCLOW_SCLR : 1;
      __OM  uint32_t PHW_ZCHI_SCLR : 1;
    }bit;
  }SYS_ISCLR;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t LIN_OC_IS  : 1;
      __IM  uint32_t LIN_OT_IS  : 1;
      __IM  uint32_t LIN_TMOUT_IS : 1;
      __IM  uint32_t            : 3;
      __IM  uint32_t PMU_OTWARN_IS : 1;
      __IM  uint32_t PMU_OT_IS  : 1;
      __IM  uint32_t SYS_OTWARN_IS : 1;
      __IM  uint32_t SYS_OT_IS  : 1;
      __IM  uint32_t REFBG_LOTHWARN_IS : 1;
      __IM  uint32_t REFBG_UPTHWARN_IS : 1;
      __IM  uint32_t VREF5V_LOWTH_IS : 1;
      __IM  uint32_t VREF5V_UPTH_IS : 1;
      __IM  uint32_t VREF5V_OVL_IS : 1;
      __IM  uint32_t ADC2_ESM_IS : 1;
      __IM  uint32_t PHU_ZCLOW_IS : 1;
      __IM  uint32_t PHU_ZCHI_IS : 1;
      __IM  uint32_t PHV_ZCLOW_IS : 1;
      __IM  uint32_t PHV_ZCHI_IS : 1;
      __IM  uint32_t PHW_ZCLOW_IS : 1;
      __IM  uint32_t PHW_ZCHI_IS : 1;
      __IM  uint32_t ADC3_EOC_IS : 1;
      __IM  uint32_t ADC4_EOC_IS : 1;
      __IM  uint32_t PHU_ZCLOW_STS : 1;
      __IM  uint32_t PHU_ZCHI_STS : 1;
      __IM  uint32_t PHV_ZCLOW_STS : 1;
      __IM  uint32_t PHV_ZCHI_STS : 1;
      __IM  uint32_t PHW_ZCLOW_STS : 1;
      __IM  uint32_t PHW_ZCHI_STS : 1;
    }bit;
  }SYS_IS;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t MON_UV_IS  : 1;
      __IM  uint32_t VS_UV_IS   : 1;
      __IM  uint32_t VDD5V_UV_IS : 1;
      __IM  uint32_t VDD1V5_UV_IS : 1;
      __IM  uint32_t MON_OV_IS  : 1;
      __IM  uint32_t VS_OV_IS   : 1;
      __IM  uint32_t VDD5V_OV_IS : 1;
      __IM  uint32_t VDD1V5_OV_IS : 1;
      __IM  uint32_t            : 8;
      __IM  uint32_t MON_UV_STS : 1;
      __IM  uint32_t VS_UV_STS  : 1;
      __IM  uint32_t VDD5V_UV_STS : 1;
      __IM  uint32_t VDD1V5_UV_STS : 1;
      __IM  uint32_t MON_OV_STS : 1;
      __IM  uint32_t VS_OV_STS  : 1;
      __IM  uint32_t VDD5V_OV_STS : 1;
      __IM  uint32_t VDD1V5_OV_STS : 1;
    }bit;
  }SYS_SUPPLY_IRQ_STS;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t MON_UV_IE  : 1;
      __IOM uint32_t VS_UV_IE   : 1;
      __IOM uint32_t VDD5V_UV_IE : 1;
      __IOM uint32_t VDD1V5_UV_IE : 1;
      __IOM uint32_t MON_OV_IE  : 1;
      __IOM uint32_t VS_OV_IE   : 1;
      __IOM uint32_t VDD5V_OV_IE : 1;
      __IOM uint32_t VDD1V5_OV_IE : 1;
    }bit;
  }SYS_SUPPLY_IRQ_CTRL;

  union{
    __IOM uint32_t reg;

    struct{
      __OM  uint32_t MON_UV_ICLR : 1;
      __OM  uint32_t VS_UV_ICLR : 1;
      __OM  uint32_t VDD5V_UV_ICLR : 1;
      __OM  uint32_t VDD1V5_UV_ICLR : 1;
      __OM  uint32_t MON_OV_ICLR : 1;
      __OM  uint32_t VS_OV_ICLR : 1;
      __OM  uint32_t VDD5V_OV_ICLR : 1;
      __OM  uint32_t VDD1V5_OV_ICLR : 1;
      __IM  uint32_t            : 8;
      __OM  uint32_t MON_UV_SCLR : 1;
      __OM  uint32_t VS_UV_SCLR : 1;
      __OM  uint32_t VDD5V_UV_SCLR : 1;
      __OM  uint32_t VDD1V5_UV_SCLR : 1;
      __OM  uint32_t MON_OV_SCLR : 1;
      __OM  uint32_t VS_OV_SCLR : 1;
      __OM  uint32_t VDD5V_OV_SCLR : 1;
      __OM  uint32_t VDD1V5_OV_SCLR : 1;
    }bit;
  }SYS_SUPPLY_IRQ_CLR;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t LIN_OC_IE  : 1;
      __IOM uint32_t LIN_OT_IE  : 1;
      __IOM uint32_t LIN_TMOUT_IE : 1;
      __IM  uint32_t            : 3;
      __IOM uint32_t PMU_OTWARN_IE : 1;
      __IOM uint32_t PMU_OT_IE  : 1;
      __IOM uint32_t SYS_OTWARN_IE : 1;
      __IOM uint32_t SYS_OT_IE  : 1;
      __IOM uint32_t REFBG_LOTHWARN_IE : 1;
      __IOM uint32_t REFBG_UPTHWARN_IE : 1;
      __IOM uint32_t VREF5V_LOWTH_IE : 1;
      __IOM uint32_t VREF5V_UPTH_IE : 1;
      __IOM uint32_t VREF5V_OVL_IE : 1;
      __IOM uint32_t ADC2_ESM_IE : 1;
      __IOM uint32_t PHU_ZCLOW_IE : 1;
      __IOM uint32_t PHU_ZCHI_IE : 1;
      __IOM uint32_t PHV_ZCLOW_IE : 1;
      __IOM uint32_t PHV_ZCHI_IE : 1;
      __IOM uint32_t PHW_ZCLOW_IE : 1;
      __IOM uint32_t PHW_ZCHI_IE : 1;
      __IOM uint32_t ADC3_EOC_IE : 1;
      __IOM uint32_t ADC4_EOC_IE : 1;
    }bit;
  }SYS_IRQ_CTRL;
  __IM  uint32_t  RESERVED2;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t            : 1;
      __IOM uint32_t CLKWDT_SD_DIS : 1;
      __IM  uint32_t            : 5;
      __IOM uint32_t FAIL_PS_DIS : 1;
      __IOM uint32_t LIN_VS_UV_SD_DIS : 1;
      __IM  uint32_t            : 5;
      __IOM uint32_t SYS_VSD_OV_SLM_DIS : 1;
      __IM  uint32_t            : 9;
      __IOM uint32_t SYS_OT_PS_DIS : 1;
      __IOM uint32_t CLKLOSS_SD_DIS : 1;
      __IOM uint32_t CLKWDT_RES_SD_DIS : 1;
    }bit;
  }PCU_CTRL_STS;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t WDP_SEL    : 6;
      __IOM uint32_t SOWCONF    : 2;
    }bit;
  }WDT1_TRIG;
  __IM  uint32_t  RESERVED3[7];

  union{
    __IOM uint32_t reg;

    struct{
      __OM  uint32_t LS1_DS_ICLR : 1;
      __OM  uint32_t LS2_DS_ICLR : 1;
      __OM  uint32_t HS1_DS_ICLR : 1;
      __OM  uint32_t HS2_DS_ICLR : 1;
      __OM  uint32_t LS3_DS_ICLR : 1;
      __OM  uint32_t HS3_DS_ICLR : 1;
      __IM  uint32_t            : 4;
      __OM  uint32_t LS1_OC_ICLR : 1;
      __OM  uint32_t LS2_OC_ICLR : 1;
      __OM  uint32_t HS1_OC_ICLR : 1;
      __OM  uint32_t HS2_OC_ICLR : 1;
      __OM  uint32_t LS3_OC_ICLR : 1;
      __OM  uint32_t HS3_OC_ICLR : 1;
      __OM  uint32_t VCP_LOWTH2_ICLR : 1;
      __OM  uint32_t VCP_LOWTH1_ICLR : 1;
      __OM  uint32_t VCP_UPTH_ICLR : 1;
      __OM  uint32_t VSD_LOWTH_ICLR : 1;
      __OM  uint32_t VSD_UPTH_ICLR : 1;
      __IM  uint32_t            : 3;
      __OM  uint32_t VCP_LOWTH2_SCLR : 1;
      __OM  uint32_t VCP_LOWTH1_SCLR : 1;
      __OM  uint32_t VCP_UPTH_SCLR : 1;
      __OM  uint32_t VSD_LOWTH_SCLR : 1;
      __OM  uint32_t VSD_UPTH_SCLR : 1;

    }bit;
  }BDRV_ISCLR;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t LS1_DS_IS  : 1;
      __IM  uint32_t LS2_DS_IS  : 1;
      __IM  uint32_t HS1_DS_IS  : 1;
      __IM  uint32_t HS2_DS_IS  : 1;
      __IM  uint32_t LS3_DS_IS  : 1;
      __IM  uint32_t HS3_DS_IS  : 1;
      __IM  uint32_t            : 4;
      __IM  uint32_t LS1_OC_IS  : 1;
      __IM  uint32_t LS2_OC_IS  : 1;
      __IM  uint32_t HS1_OC_IS  : 1;
      __IM  uint32_t HS2_OC_IS  : 1;
      __IM  uint32_t LS3_OC_IS  : 1;
      __IM  uint32_t HS3_OC_IS  : 1;
      __IM  uint32_t VCP_LOWTH2_IS : 1;
      __IM  uint32_t VCP_LOWTH1_IS : 1;
      __IM  uint32_t VCP_UPTH_IS : 1;
      __IM  uint32_t VSD_LOWTH_IS : 1;
      __IM  uint32_t VSD_UPTH_IS : 1;
      __IM  uint32_t            : 3;
      __IM  uint32_t VCP_LOWTH2_STS : 1;
      __IM  uint32_t VCP_LOWTH1_STS : 1;
      __IM  uint32_t VCP_UPTH_STS : 1;
      __IM  uint32_t VSD_LOWTH_STS : 1;
      __IM  uint32_t VSD_UPTH_STS : 1;

    }bit;
  }BDRV_IS;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t LS1_DS_IE  : 1;
      __IOM uint32_t LS2_DS_IE  : 1;
      __IOM uint32_t HS1_DS_IE  : 1;
      __IOM uint32_t HS2_DS_IE  : 1;
      __IOM uint32_t LS3_DS_IE  : 1;
      __IOM uint32_t HS3_DS_IE  : 1;
      __IM  uint32_t            : 4;
      __IOM uint32_t LS1_OC_IE  : 1;
      __IOM uint32_t LS2_OC_IE  : 1;
      __IOM uint32_t HS1_OC_IE  : 1;
      __IOM uint32_t HS2_OC_IE  : 1;
      __IOM uint32_t LS3_OC_IE  : 1;
      __IOM uint32_t HS3_OC_IE  : 1;
      __IOM uint32_t VCP_LOWTH2_IE : 1;
      __IOM uint32_t VCP_LOWTH1_IE : 1;
      __IOM uint32_t VCP_UPTH_IE : 1;
      __IOM uint32_t VSD_LOWTH_IE : 1;
      __IOM uint32_t VSD_UPTH_IE : 1;
    }bit;
  }BDRV_IRQ_CTRL;
  __IM  uint32_t  RESERVED4[3];

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t STCALIB    : 26;
    }bit;
  }STCALIB;
  __IM  uint32_t  RESERVED5[4];

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t DBFSTS     : 1;
      __IM  uint32_t SBFSTS     : 1;
    }bit;
  }BFSTS;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t DBFA       : 32;
    }bit;
  }DBFA;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t SBFA       : 32;
    }bit;
  }SBFA;

  union{
    __IOM uint32_t reg;

    struct{
      __OM  uint32_t DBFSTSCLR  : 1;
      __OM  uint32_t SBFSTSCLR  : 1;
    }bit;
  }BFSTS_CLR;
}SCUPM_Type;

typedef struct{

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t MIS_0      : 1;
      __IOM uint16_t SIS        : 1;
      __IOM uint16_t CIS        : 1;
      __IOM uint16_t MIS_1      : 1;
    }bit;
  }PISEL;
  __IM  uint16_t  RESERVED;

  union{
    __IOM uint16_t reg;

    struct{
      __IM  uint16_t BC         : 4;
      __IM  uint16_t            : 4;
      __IM  uint16_t TE         : 1;
      __IM  uint16_t RE         : 1;
      __IM  uint16_t PE         : 1;
      __IM  uint16_t BE         : 1;
      __IM  uint16_t BSY        : 1;
      __IM  uint16_t            : 1;
      __IOM uint16_t MS         : 1;
      __IOM uint16_t EN         : 1;
    }bit;
  }CON;
  __IM  uint16_t  RESERVED1;

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t TB_VALUE   : 16;
    }bit;
  }TB;
  __IM  uint16_t  RESERVED2;

  union{
    __IOM uint16_t reg;

    struct{
      __IM  uint16_t RB_VALUE   : 16;
    }bit;
  }RB;
  __IM  uint16_t  RESERVED3;

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t BR_VALUE   : 16;
    }bit;
  }BR;
  __IM  uint16_t  RESERVED4;

  union{
    __IOM uint16_t reg;

    struct{
      __IM  uint16_t            : 8;
      __OM  uint16_t TECLR      : 1;
      __OM  uint16_t RECLR      : 1;
      __OM  uint16_t PECLR      : 1;
      __OM  uint16_t BECLR      : 1;
    }bit;
  }ISRCLR;
}SSC1_Type;

typedef struct{

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t MIS_0      : 1;
      __IOM uint16_t SIS        : 1;
      __IOM uint16_t CIS        : 1;
      __IOM uint16_t MIS_1      : 1;
    }bit;
  }PISEL;
  __IM  uint16_t  RESERVED;

  union{
    __IOM uint16_t reg;

    struct{
      __IM  uint16_t BC         : 4;
      __IM  uint16_t            : 4;
      __IM  uint16_t TE         : 1;
      __IM  uint16_t RE         : 1;
      __IM  uint16_t PE         : 1;
      __IM  uint16_t BE         : 1;
      __IM  uint16_t BSY        : 1;
      __IM  uint16_t            : 1;
      __IOM uint16_t MS         : 1;
      __IOM uint16_t EN         : 1;
    }bit;
  }CON;
  __IM  uint16_t  RESERVED1;

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t TB_VALUE   : 16;
    }bit;
  }TB;
  __IM  uint16_t  RESERVED2;

  union{
    __IOM uint16_t reg;

    struct{
      __IM  uint16_t RB_VALUE   : 16;
    }bit;
  }RB;
  __IM  uint16_t  RESERVED3;

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t BR_VALUE   : 16;
    }bit;
  }BR;
  __IM  uint16_t  RESERVED4;

  union{
    __IOM uint16_t reg;

    struct{
      __IM  uint16_t            : 8;
      __OM  uint16_t TECLR      : 1;
      __OM  uint16_t RECLR      : 1;
      __OM  uint16_t PECLR      : 1;
      __OM  uint16_t BECLR      : 1;
    }bit;
  }ISRCLR;
}SSC2_Type;

typedef struct{

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t CP_RL2      : 1;
      __IOM uint8_t C_T2        : 1;
      __IOM uint8_t TR2         : 1;
      __IOM uint8_t EXEN2       : 1;
      __IM  uint8_t             : 2;
      __IM  uint8_t EXF2        : 1;
      __IM  uint8_t TF2         : 1;
    }bit;
  }T2CON;
  __IM  uint8_t   RESERVED[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t DCEN        : 1;
      __IOM uint8_t T2PRE       : 3;
      __IOM uint8_t PREN        : 1;
      __IOM uint8_t EDGESEL     : 1;
      __IOM uint8_t T2RHEN      : 1;
      __IOM uint8_t T2REGS      : 1;
    }bit;
  }T2MOD;
  __IM  uint8_t   RESERVED1[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t RC2         : 8;
    }bit;
  }RC2L;
  __IM  uint8_t   RESERVED2[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t RC2         : 8;
    }bit;
  }RC2H;
  __IM  uint8_t   RESERVED3[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t T2L         : 8;
    }bit;
  }T2L;
  __IM  uint8_t   RESERVED4[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t T2H         : 8;
    }bit;
  }T2H;
  __IM  uint8_t   RESERVED5[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t EXF2EN      : 1;
      __IOM uint8_t TF2EN       : 1;
    }bit;
  }T2CON1;
  __IM  uint8_t   RESERVED6[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IM  uint8_t             : 6;
      __OM  uint8_t EXF2CLR     : 1;
      __OM  uint8_t TF2CLR      : 1;
    }bit;
  }T2ICLR;
}TIMER2x_Type;

typedef struct{

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t T3_TRIGG_INP_SEL : 3;
      __IM  uint32_t            : 1;
      __IOM uint32_t T3_RES_CONF : 2;
      __IOM uint32_t RETRIG     : 1;
    }bit;
  }T3_TRIGG_CTRL;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t LO         : 8;
      __IOM uint32_t HI         : 8;
    }bit;
  }CMP;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t LO         : 8;
      __IOM uint32_t HI         : 8;
    }bit;
  }CNT;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t T3_PD_N    : 1;
      __IOM uint32_t T3_RD_REQ  : 1;
      __IOM uint32_t T3_RD_REQ_CONF : 1;
      __IOM uint32_t CNT_RDY    : 1;
      __IOM uint32_t TR3H       : 1;
      __IM  uint32_t T3H_OVF_STS : 1;
      __IOM uint32_t TR3L       : 1;
      __IM  uint32_t T3L_OVF_STS : 1;
      __IOM uint32_t T3L_OVF_IE : 1;
      __IOM uint32_t T3H_OVF_IE : 1;
    }bit;
  }CTRL;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t T3M        : 2;
      __IM  uint32_t            : 4;
      __IOM uint32_t T3_SUBM    : 2;
    }bit;
  }MODE_CONF;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t            : 5;
      __OM  uint32_t T3H_OVF_ICLR : 1;
      __IM  uint32_t            : 1;
      __OM  uint32_t T3L_OVF_ICLR : 1;
    }bit;
  }ISRCLR;
}TIMER3_Type;

typedef struct{

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t RI          : 1;
      __IOM uint8_t TI          : 1;
      __IOM uint8_t RB8         : 1;
      __IOM uint8_t TB8         : 1;
      __IOM uint8_t REN         : 1;
      __IOM uint8_t SM2         : 1;
      __IOM uint8_t SM1         : 1;
      __IOM uint8_t SM0         : 1;
    }bit;
  }SCON;
  __IM  uint8_t   RESERVED[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t VAL         : 8;
    }bit;
  }SBUF;
  __IM  uint8_t   RESERVED1[3];

  union{
    __IOM uint8_t reg;

    struct{
      __OM  uint8_t RICLR       : 1;
      __OM  uint8_t TICLR       : 1;
    }bit;
  }SCONCLR;
}UART_Type;


extern ADC1_Type    ADC1;
extern ADC2_Type    ADC2;
extern ADC34_Type   ADC34;
extern BDRV_Type    BDRV;
extern CCU6_Type    CCU6;
extern CSA_Type     CSA;
extern CPU_Type     CPU;
extern DMA_Type     DMA;
extern GPT12E_Type  GPT12E;
extern LIN_Type     LIN;
extern MF_Type      MF;
extern MON_Type     MON;
extern PMU_Type     PMU;
extern PORT_Type    PORT;
extern SCU_Type     SCU;
extern SCUPM_Type   SCUPM;
extern SSC1_Type    SSC1;
extern SSC2_Type    SSC2;
extern TIMER2x_Type TIMER2;
extern TIMER2x_Type TIMER21;
extern TIMER3_Type  TIMER3;
extern UART_Type    UART1;
extern UART_Type    UART2;

#define ADC1_CHx_EIM_TRIG_SEL_Pos         (16UL)
#define ADC1_CHx_EIM_TRIG_SEL_Msk         (0x70000UL)
#define ADC1_CHx_EIM_REP_Pos              (4UL)
#define ADC1_CHx_EIM_REP_Msk              (0x70UL)
#define ADC1_CHx_EIM_CHx_Pos              (0UL)
#define ADC1_CHx_EIM_CHx_Msk              (0x7UL)

#define ADC1_CHx_ESM_TRIG_SEL_Pos         (16UL)
#define ADC1_CHx_ESM_TRIG_SEL_Msk         (0x70000UL)
#define ADC1_CHx_ESM_ESM_0_Pos            (0UL)
#define ADC1_CHx_ESM_ESM_0_Msk            (0xffUL)

#define ADC1_CTRL_STS_IN_MUX_SEL_Pos      (4UL)
#define ADC1_CTRL_STS_IN_MUX_SEL_Msk      (0x70UL)
#define ADC1_CTRL_STS_EOC_Pos             (3UL)
#define ADC1_CTRL_STS_EOC_Msk             (0x8UL)
#define ADC1_CTRL_STS_SOC_Pos             (2UL)
#define ADC1_CTRL_STS_SOC_Msk             (0x4UL)
#define ADC1_CTRL_STS_PD_N_Pos            (0UL)
#define ADC1_CTRL_STS_PD_N_Msk            (0x1UL)

#define ADC1_DWSEL_ch7_Pos                (7UL)
#define ADC1_DWSEL_ch7_Msk                (0x80UL)
#define ADC1_DWSEL_ch6_Pos                (6UL)
#define ADC1_DWSEL_ch6_Msk                (0x40UL)
#define ADC1_DWSEL_ch5_Pos                (5UL)
#define ADC1_DWSEL_ch5_Msk                (0x20UL)
#define ADC1_DWSEL_ch4_Pos                (4UL)
#define ADC1_DWSEL_ch4_Msk                (0x10UL)
#define ADC1_DWSEL_ch3_Pos                (3UL)
#define ADC1_DWSEL_ch3_Msk                (0x8UL)
#define ADC1_DWSEL_ch2_Pos                (2UL)
#define ADC1_DWSEL_ch2_Msk                (0x4UL)
#define ADC1_DWSEL_ch1_Pos                (1UL)
#define ADC1_DWSEL_ch1_Msk                (0x2UL)
#define ADC1_DWSEL_ch0_Pos                (0UL)
#define ADC1_DWSEL_ch0_Msk                (0x1UL)

#define ADC1_GLOBCTR_ANON_Pos             (8UL)
#define ADC1_GLOBCTR_ANON_Msk             (0x300UL)
#define ADC1_GLOBCTR_DIVA_Pos             (0UL)
#define ADC1_GLOBCTR_DIVA_Msk             (0x3fUL)

#define ADC1_GLOBSTR_ANON_ST_Pos          (8UL)
#define ADC1_GLOBSTR_ANON_ST_Msk          (0x300UL)
#define ADC1_GLOBSTR_CHNR_Pos             (3UL)
#define ADC1_GLOBSTR_CHNR_Msk             (0x38UL)
#define ADC1_GLOBSTR_SAMPLE_Pos           (1UL)
#define ADC1_GLOBSTR_SAMPLE_Msk           (0x2UL)
#define ADC1_GLOBSTR_BUSY_Pos             (0UL)
#define ADC1_GLOBSTR_BUSY_Msk             (0x1UL)

#define ADC1_ICLR_ESM_ICLR_Pos            (9UL)
#define ADC1_ICLR_ESM_ICLR_Msk            (0x200UL)
#define ADC1_ICLR_EIM_ICLR_Pos            (8UL)
#define ADC1_ICLR_EIM_ICLR_Msk            (0x100UL)
#define ADC1_ICLR_CH7_ICLR_Pos            (7UL)
#define ADC1_ICLR_CH7_ICLR_Msk            (0x80UL)
#define ADC1_ICLR_CH6_ICLR_Pos            (6UL)
#define ADC1_ICLR_CH6_ICLR_Msk            (0x40UL)
#define ADC1_ICLR_CH5_ICLR_Pos            (5UL)
#define ADC1_ICLR_CH5_ICLR_Msk            (0x20UL)
#define ADC1_ICLR_CH4_ICLR_Pos            (4UL)
#define ADC1_ICLR_CH4_ICLR_Msk            (0x10UL)
#define ADC1_ICLR_CH3_ICLR_Pos            (3UL)
#define ADC1_ICLR_CH3_ICLR_Msk            (0x8UL)
#define ADC1_ICLR_CH2_ICLR_Pos            (2UL)
#define ADC1_ICLR_CH2_ICLR_Msk            (0x4UL)
#define ADC1_ICLR_CH1_ICLR_Pos            (1UL)
#define ADC1_ICLR_CH1_ICLR_Msk            (0x2UL)
#define ADC1_ICLR_CH0_ICLR_Pos            (0UL)
#define ADC1_ICLR_CH0_ICLR_Msk            (0x1UL)

#define ADC1_IE_ESM_IE_Pos                (9UL)
#define ADC1_IE_ESM_IE_Msk                (0x200UL)
#define ADC1_IE_EIM_IE_Pos                (8UL)
#define ADC1_IE_EIM_IE_Msk                (0x100UL)
#define ADC1_IE_CH7_IE_Pos                (7UL)
#define ADC1_IE_CH7_IE_Msk                (0x80UL)
#define ADC1_IE_CH6_IE_Pos                (6UL)
#define ADC1_IE_CH6_IE_Msk                (0x40UL)
#define ADC1_IE_CH5_IE_Pos                (5UL)
#define ADC1_IE_CH5_IE_Msk                (0x20UL)
#define ADC1_IE_CH4_IE_Pos                (4UL)
#define ADC1_IE_CH4_IE_Msk                (0x10UL)
#define ADC1_IE_CH3_IE_Pos                (3UL)
#define ADC1_IE_CH3_IE_Msk                (0x8UL)
#define ADC1_IE_CH2_IE_Pos                (2UL)
#define ADC1_IE_CH2_IE_Msk                (0x4UL)
#define ADC1_IE_CH1_IE_Pos                (1UL)
#define ADC1_IE_CH1_IE_Msk                (0x2UL)
#define ADC1_IE_CH0_IE_Pos                (0UL)
#define ADC1_IE_CH0_IE_Msk                (0x1UL)

#define ADC1_IS_ESM_STS_Pos               (9UL)
#define ADC1_IS_ESM_STS_Msk               (0x200UL)
#define ADC1_IS_EIM_STS_Pos               (8UL)
#define ADC1_IS_EIM_STS_Msk               (0x100UL)
#define ADC1_IS_CH7_STS_Pos               (7UL)
#define ADC1_IS_CH7_STS_Msk               (0x80UL)
#define ADC1_IS_CH6_STS_Pos               (6UL)
#define ADC1_IS_CH6_STS_Msk               (0x40UL)
#define ADC1_IS_CH5_STS_Pos               (5UL)
#define ADC1_IS_CH5_STS_Msk               (0x20UL)
#define ADC1_IS_CH4_STS_Pos               (4UL)
#define ADC1_IS_CH4_STS_Msk               (0x10UL)
#define ADC1_IS_CH3_STS_Pos               (3UL)
#define ADC1_IS_CH3_STS_Msk               (0x8UL)
#define ADC1_IS_CH2_STS_Pos               (2UL)
#define ADC1_IS_CH2_STS_Msk               (0x4UL)
#define ADC1_IS_CH1_STS_Pos               (1UL)
#define ADC1_IS_CH1_STS_Msk               (0x2UL)
#define ADC1_IS_CH0_STS_Pos               (0UL)
#define ADC1_IS_CH0_STS_Msk               (0x1UL)

#define ADC1_RES_OUT0_OF0_Pos             (18UL)
#define ADC1_RES_OUT0_OF0_Msk             (0x40000UL)
#define ADC1_RES_OUT0_VF0_Pos             (17UL)
#define ADC1_RES_OUT0_VF0_Msk             (0x20000UL)
#define ADC1_RES_OUT0_WFR0_Pos            (16UL)
#define ADC1_RES_OUT0_WFR0_Msk            (0x10000UL)
#define ADC1_RES_OUT0_OUT_CH0_Pos         (0UL)
#define ADC1_RES_OUT0_OUT_CH0_Msk         (0xfffUL)

#define ADC1_RES_OUT1_OF1_Pos             (18UL)
#define ADC1_RES_OUT1_OF1_Msk             (0x40000UL)
#define ADC1_RES_OUT1_VF1_Pos             (17UL)
#define ADC1_RES_OUT1_VF1_Msk             (0x20000UL)
#define ADC1_RES_OUT1_WFR1_Pos            (16UL)
#define ADC1_RES_OUT1_WFR1_Msk            (0x10000UL)
#define ADC1_RES_OUT1_OUT_CH1_Pos         (0UL)
#define ADC1_RES_OUT1_OUT_CH1_Msk         (0xfffUL)

#define ADC1_RES_OUT2_OF2_Pos             (18UL)
#define ADC1_RES_OUT2_OF2_Msk             (0x40000UL)
#define ADC1_RES_OUT2_VF2_Pos             (17UL)
#define ADC1_RES_OUT2_VF2_Msk             (0x20000UL)
#define ADC1_RES_OUT2_WFR2_Pos            (16UL)
#define ADC1_RES_OUT2_WFR2_Msk            (0x10000UL)
#define ADC1_RES_OUT2_OUT_CH2_Pos         (0UL)
#define ADC1_RES_OUT2_OUT_CH2_Msk         (0xfffUL)

#define ADC1_RES_OUT3_OF3_Pos             (18UL)
#define ADC1_RES_OUT3_OF3_Msk             (0x40000UL)
#define ADC1_RES_OUT3_VF3_Pos             (17UL)
#define ADC1_RES_OUT3_VF3_Msk             (0x20000UL)
#define ADC1_RES_OUT3_WFR3_Pos            (16UL)
#define ADC1_RES_OUT3_WFR3_Msk            (0x10000UL)
#define ADC1_RES_OUT3_OUT_CH3_Pos         (0UL)
#define ADC1_RES_OUT3_OUT_CH3_Msk         (0xfffUL)

#define ADC1_RES_OUT4_OF4_Pos             (18UL)
#define ADC1_RES_OUT4_OF4_Msk             (0x40000UL)
#define ADC1_RES_OUT4_VF4_Pos             (17UL)
#define ADC1_RES_OUT4_VF4_Msk             (0x20000UL)
#define ADC1_RES_OUT4_WFR4_Pos            (16UL)
#define ADC1_RES_OUT4_WFR4_Msk            (0x10000UL)
#define ADC1_RES_OUT4_OUT_CH4_Pos         (0UL)
#define ADC1_RES_OUT4_OUT_CH4_Msk         (0xfffUL)

#define ADC1_RES_OUT5_OF5_Pos             (18UL)
#define ADC1_RES_OUT5_OF5_Msk             (0x40000UL)
#define ADC1_RES_OUT5_VF5_Pos             (17UL)
#define ADC1_RES_OUT5_VF5_Msk             (0x20000UL)
#define ADC1_RES_OUT5_WFR5_Pos            (16UL)
#define ADC1_RES_OUT5_WFR5_Msk            (0x10000UL)
#define ADC1_RES_OUT5_OUT_CH5_Pos         (0UL)
#define ADC1_RES_OUT5_OUT_CH5_Msk         (0xfffUL)

#define ADC1_RES_OUT6_OF6_Pos             (18UL)
#define ADC1_RES_OUT6_OF6_Msk             (0x40000UL)
#define ADC1_RES_OUT6_VF6_Pos             (17UL)
#define ADC1_RES_OUT6_VF6_Msk             (0x20000UL)
#define ADC1_RES_OUT6_WFR6_Pos            (16UL)
#define ADC1_RES_OUT6_WFR6_Msk            (0x10000UL)
#define ADC1_RES_OUT6_OUT_CH6_Pos         (0UL)
#define ADC1_RES_OUT6_OUT_CH6_Msk         (0xfffUL)

#define ADC1_RES_OUT7_OF7_Pos             (18UL)
#define ADC1_RES_OUT7_OF7_Msk             (0x40000UL)
#define ADC1_RES_OUT7_VF7_Pos             (17UL)
#define ADC1_RES_OUT7_VF7_Msk             (0x20000UL)
#define ADC1_RES_OUT7_WFR7_Pos            (16UL)
#define ADC1_RES_OUT7_WFR7_Msk            (0x10000UL)
#define ADC1_RES_OUT7_OUT_CH7_Pos         (0UL)
#define ADC1_RES_OUT7_OUT_CH7_Msk         (0xfffUL)

#define ADC1_RES_OUT_EIM_OF8_Pos          (18UL)
#define ADC1_RES_OUT_EIM_OF8_Msk          (0x40000UL)
#define ADC1_RES_OUT_EIM_VF8_Pos          (17UL)
#define ADC1_RES_OUT_EIM_VF8_Msk          (0x20000UL)
#define ADC1_RES_OUT_EIM_WFR8_Pos         (16UL)
#define ADC1_RES_OUT_EIM_WFR8_Msk         (0x10000UL)
#define ADC1_RES_OUT_EIM_OUT_CH_EIM_Pos   (0UL)
#define ADC1_RES_OUT_EIM_OUT_CH_EIM_Msk   (0xfffUL)

#define ADC1_SQ1_4_SQ4_Pos                (24UL)
#define ADC1_SQ1_4_SQ4_Msk                (0xff000000UL)
#define ADC1_SQ1_4_SQ3_Pos                (16UL)
#define ADC1_SQ1_4_SQ3_Msk                (0xff0000UL)
#define ADC1_SQ1_4_SQ2_Pos                (8UL)
#define ADC1_SQ1_4_SQ2_Msk                (0xff00UL)
#define ADC1_SQ1_4_SQ1_Pos                (0UL)
#define ADC1_SQ1_4_SQ1_Msk                (0xffUL)

#define ADC1_SQ5_8_SQ8_Pos                (24UL)
#define ADC1_SQ5_8_SQ8_Msk                (0xff000000UL)
#define ADC1_SQ5_8_SQ7_Pos                (16UL)
#define ADC1_SQ5_8_SQ7_Msk                (0xff0000UL)
#define ADC1_SQ5_8_SQ6_Pos                (8UL)
#define ADC1_SQ5_8_SQ6_Msk                (0xff00UL)
#define ADC1_SQ5_8_SQ5_Pos                (0UL)
#define ADC1_SQ5_8_SQ5_Msk                (0xffUL)

#define ADC1_SQ_FB_CHx_Pos                (16UL)
#define ADC1_SQ_FB_CHx_Msk                (0x70000UL)
#define ADC1_SQ_FB_SQx_Pos                (11UL)
#define ADC1_SQ_FB_SQx_Msk                (0x3800UL)
#define ADC1_SQ_FB_ESM_ACTIVE_Pos         (10UL)
#define ADC1_SQ_FB_ESM_ACTIVE_Msk         (0x400UL)
#define ADC1_SQ_FB_EIM_ACTIVE_Pos         (9UL)
#define ADC1_SQ_FB_EIM_ACTIVE_Msk         (0x200UL)
#define ADC1_SQ_FB_SQ_RUN_Pos             (8UL)
#define ADC1_SQ_FB_SQ_RUN_Msk             (0x100UL)

#define ADC1_STC_0_3_ch3_Pos              (24UL)
#define ADC1_STC_0_3_ch3_Msk              (0xff000000UL)
#define ADC1_STC_0_3_ch2_Pos              (16UL)
#define ADC1_STC_0_3_ch2_Msk              (0xff0000UL)
#define ADC1_STC_0_3_ch1_Pos              (8UL)
#define ADC1_STC_0_3_ch1_Msk              (0xff00UL)
#define ADC1_STC_0_3_ch0_Pos              (0UL)
#define ADC1_STC_0_3_ch0_Msk              (0xffUL)

#define ADC1_STC_4_7_ch7_Pos              (24UL)
#define ADC1_STC_4_7_ch7_Msk              (0xff000000UL)
#define ADC1_STC_4_7_ch6_Pos              (16UL)
#define ADC1_STC_4_7_ch6_Msk              (0xff0000UL)
#define ADC1_STC_4_7_ch5_Pos              (8UL)
#define ADC1_STC_4_7_ch5_Msk              (0xff00UL)
#define ADC1_STC_4_7_ch4_Pos              (0UL)
#define ADC1_STC_4_7_ch4_Msk              (0xffUL)

#define ADC2_CAL_CH0_1_GAIN_CH1_Pos       (24UL)
#define ADC2_CAL_CH0_1_GAIN_CH1_Msk       (0xff000000UL)
#define ADC2_CAL_CH0_1_OFFS_CH1_Pos       (16UL)
#define ADC2_CAL_CH0_1_OFFS_CH1_Msk       (0xff0000UL)
#define ADC2_CAL_CH0_1_GAIN_CH0_Pos       (8UL)
#define ADC2_CAL_CH0_1_GAIN_CH0_Msk       (0xff00UL)
#define ADC2_CAL_CH0_1_OFFS_CH0_Pos       (0UL)
#define ADC2_CAL_CH0_1_OFFS_CH0_Msk       (0xffUL)

#define ADC2_CAL_CH2_3_GAIN_CH3_Pos       (24UL)
#define ADC2_CAL_CH2_3_GAIN_CH3_Msk       (0xff000000UL)
#define ADC2_CAL_CH2_3_OFFS_CH3_Pos       (16UL)
#define ADC2_CAL_CH2_3_OFFS_CH3_Msk       (0xff0000UL)
#define ADC2_CAL_CH2_3_GAIN_CH2_Pos       (8UL)
#define ADC2_CAL_CH2_3_GAIN_CH2_Msk       (0xff00UL)
#define ADC2_CAL_CH2_3_OFFS_CH2_Pos       (0UL)
#define ADC2_CAL_CH2_3_OFFS_CH2_Msk       (0xffUL)

#define ADC2_CAL_CH4_5_GAIN_CH5_Pos       (24UL)
#define ADC2_CAL_CH4_5_GAIN_CH5_Msk       (0xff000000UL)
#define ADC2_CAL_CH4_5_OFFS_CH5_Pos       (16UL)
#define ADC2_CAL_CH4_5_OFFS_CH5_Msk       (0xff0000UL)
#define ADC2_CAL_CH4_5_GAIN_CH4_Pos       (8UL)
#define ADC2_CAL_CH4_5_GAIN_CH4_Msk       (0xff00UL)
#define ADC2_CAL_CH4_5_OFFS_CH4_Pos       (0UL)
#define ADC2_CAL_CH4_5_OFFS_CH4_Msk       (0xffUL)

#define ADC2_CAL_CH6_7_GAIN_CH7_Pos       (24UL)
#define ADC2_CAL_CH6_7_GAIN_CH7_Msk       (0xff000000UL)
#define ADC2_CAL_CH6_7_OFFS_CH7_Pos       (16UL)
#define ADC2_CAL_CH6_7_OFFS_CH7_Msk       (0xff0000UL)
#define ADC2_CAL_CH6_7_GAIN_CH6_Pos       (8UL)
#define ADC2_CAL_CH6_7_GAIN_CH6_Msk       (0xff00UL)
#define ADC2_CAL_CH6_7_OFFS_CH6_Pos       (0UL)
#define ADC2_CAL_CH6_7_OFFS_CH6_Msk       (0xffUL)

#define ADC2_CAL_CH8_9_GAIN_CH9_Pos       (24UL)
#define ADC2_CAL_CH8_9_GAIN_CH9_Msk       (0xff000000UL)
#define ADC2_CAL_CH8_9_OFFS_CH9_Pos       (16UL)
#define ADC2_CAL_CH8_9_OFFS_CH9_Msk       (0xff0000UL)
#define ADC2_CAL_CH8_9_GAIN_CH8_Pos       (8UL)
#define ADC2_CAL_CH8_9_GAIN_CH8_Msk       (0xff00UL)
#define ADC2_CAL_CH8_9_OFFS_CH8_Pos       (0UL)
#define ADC2_CAL_CH8_9_OFFS_CH8_Msk       (0xffUL)

#define ADC2_CHx_EIM_SEL_Pos              (12UL)
#define ADC2_CHx_EIM_SEL_Msk              (0x1000UL)
#define ADC2_CHx_EIM_EN_Pos               (11UL)
#define ADC2_CHx_EIM_EN_Msk               (0x800UL)
#define ADC2_CHx_EIM_REP_Pos              (8UL)
#define ADC2_CHx_EIM_REP_Msk              (0x700UL)
#define ADC2_CHx_EIM_CHx_Pos              (0UL)
#define ADC2_CHx_EIM_CHx_Msk              (0x1fUL)

#define ADC2_CHx_ESM_STS_Pos              (17UL)
#define ADC2_CHx_ESM_STS_Msk              (0x20000UL)
#define ADC2_CHx_ESM_EN_Pos               (16UL)
#define ADC2_CHx_ESM_EN_Msk               (0x10000UL)
#define ADC2_CHx_ESM_SEL_Pos              (10UL)
#define ADC2_CHx_ESM_SEL_Msk              (0x400UL)
#define ADC2_CHx_ESM_ESM_1_Pos            (6UL)
#define ADC2_CHx_ESM_ESM_1_Msk            (0x3c0UL)
#define ADC2_CHx_ESM_ESM_0_Pos            (0UL)
#define ADC2_CHx_ESM_ESM_0_Msk            (0x3fUL)

#define ADC2_CNT0_3_LOWER_HYST_LO_CH3_Pos (27UL)
#define ADC2_CNT0_3_LOWER_HYST_LO_CH3_Msk (0x18000000UL)
#define ADC2_CNT0_3_LOWER_CNT_LO_CH3_Pos  (24UL)
#define ADC2_CNT0_3_LOWER_CNT_LO_CH3_Msk  (0x7000000UL)
#define ADC2_CNT0_3_LOWER_HYST_LO_CH2_Pos (19UL)
#define ADC2_CNT0_3_LOWER_HYST_LO_CH2_Msk (0x180000UL)
#define ADC2_CNT0_3_LOWER_CNT_LO_CH2_Pos  (16UL)
#define ADC2_CNT0_3_LOWER_CNT_LO_CH2_Msk  (0x70000UL)
#define ADC2_CNT0_3_LOWER_HYST_LO_CH1_Pos (11UL)
#define ADC2_CNT0_3_LOWER_HYST_LO_CH1_Msk (0x1800UL)
#define ADC2_CNT0_3_LOWER_CNT_LO_CH1_Pos  (8UL)
#define ADC2_CNT0_3_LOWER_CNT_LO_CH1_Msk  (0x700UL)
#define ADC2_CNT0_3_LOWER_HYST_LO_CH0_Pos (3UL)
#define ADC2_CNT0_3_LOWER_HYST_LO_CH0_Msk (0x18UL)
#define ADC2_CNT0_3_LOWER_CNT_LO_CH0_Pos  (0UL)
#define ADC2_CNT0_3_LOWER_CNT_LO_CH0_Msk  (0x7UL)

#define ADC2_CNT0_3_UPPER_HYST_UP_CH3_Pos (27UL)
#define ADC2_CNT0_3_UPPER_HYST_UP_CH3_Msk (0x18000000UL)
#define ADC2_CNT0_3_UPPER_CNT_UP_CH3_Pos  (24UL)
#define ADC2_CNT0_3_UPPER_CNT_UP_CH3_Msk  (0x7000000UL)
#define ADC2_CNT0_3_UPPER_HYST_UP_CH2_Pos (19UL)
#define ADC2_CNT0_3_UPPER_HYST_UP_CH2_Msk (0x180000UL)
#define ADC2_CNT0_3_UPPER_CNT_UP_CH2_Pos  (16UL)
#define ADC2_CNT0_3_UPPER_CNT_UP_CH2_Msk  (0x70000UL)
#define ADC2_CNT0_3_UPPER_HYST_UP_CH1_Pos (11UL)
#define ADC2_CNT0_3_UPPER_HYST_UP_CH1_Msk (0x1800UL)
#define ADC2_CNT0_3_UPPER_CNT_UP_CH1_Pos  (8UL)
#define ADC2_CNT0_3_UPPER_CNT_UP_CH1_Msk  (0x700UL)
#define ADC2_CNT0_3_UPPER_HYST_UP_CH0_Pos (3UL)
#define ADC2_CNT0_3_UPPER_HYST_UP_CH0_Msk (0x18UL)
#define ADC2_CNT0_3_UPPER_CNT_UP_CH0_Pos  (0UL)
#define ADC2_CNT0_3_UPPER_CNT_UP_CH0_Msk  (0x7UL)

#define ADC2_CNT4_5_LOWER_HYST_LO_CH5_Pos (11UL)
#define ADC2_CNT4_5_LOWER_HYST_LO_CH5_Msk (0x1800UL)
#define ADC2_CNT4_5_LOWER_CNT_LO_CH5_Pos  (8UL)
#define ADC2_CNT4_5_LOWER_CNT_LO_CH5_Msk  (0x700UL)
#define ADC2_CNT4_5_LOWER_HYST_LO_CH4_Pos (3UL)
#define ADC2_CNT4_5_LOWER_HYST_LO_CH4_Msk (0x18UL)
#define ADC2_CNT4_5_LOWER_CNT_LO_CH4_Pos  (0UL)
#define ADC2_CNT4_5_LOWER_CNT_LO_CH4_Msk  (0x7UL)

#define ADC2_CNT4_5_UPPER_HYST_UP_CH5_Pos (11UL)
#define ADC2_CNT4_5_UPPER_HYST_UP_CH5_Msk (0x1800UL)
#define ADC2_CNT4_5_UPPER_CNT_UP_CH5_Pos  (8UL)
#define ADC2_CNT4_5_UPPER_CNT_UP_CH5_Msk  (0x700UL)
#define ADC2_CNT4_5_UPPER_HYST_UP_CH4_Pos (3UL)
#define ADC2_CNT4_5_UPPER_HYST_UP_CH4_Msk (0x18UL)
#define ADC2_CNT4_5_UPPER_CNT_UP_CH4_Pos  (0UL)
#define ADC2_CNT4_5_UPPER_CNT_UP_CH4_Msk  (0x7UL)

#define ADC2_CNT6_9_LOWER_HYST_LO_CH9_Pos (27UL)
#define ADC2_CNT6_9_LOWER_HYST_LO_CH9_Msk (0x18000000UL)
#define ADC2_CNT6_9_LOWER_CNT_LO_CH9_Pos  (24UL)
#define ADC2_CNT6_9_LOWER_CNT_LO_CH9_Msk  (0x7000000UL)
#define ADC2_CNT6_9_LOWER_HYST_LO_CH8_Pos (19UL)
#define ADC2_CNT6_9_LOWER_HYST_LO_CH8_Msk (0x180000UL)
#define ADC2_CNT6_9_LOWER_CNT_LO_CH8_Pos  (16UL)
#define ADC2_CNT6_9_LOWER_CNT_LO_CH8_Msk  (0x70000UL)
#define ADC2_CNT6_9_LOWER_HYST_LO_CH7_Pos (11UL)
#define ADC2_CNT6_9_LOWER_HYST_LO_CH7_Msk (0x1800UL)
#define ADC2_CNT6_9_LOWER_CNT_LO_CH7_Pos  (8UL)
#define ADC2_CNT6_9_LOWER_CNT_LO_CH7_Msk  (0x700UL)
#define ADC2_CNT6_9_LOWER_HYST_LO_CH6_Pos (3UL)
#define ADC2_CNT6_9_LOWER_HYST_LO_CH6_Msk (0x18UL)
#define ADC2_CNT6_9_LOWER_CNT_LO_CH6_Pos  (0UL)
#define ADC2_CNT6_9_LOWER_CNT_LO_CH6_Msk  (0x7UL)

#define ADC2_CNT6_9_UPPER_HYST_UP_CH9_Pos (27UL)
#define ADC2_CNT6_9_UPPER_HYST_UP_CH9_Msk (0x18000000UL)
#define ADC2_CNT6_9_UPPER_CNT_UP_CH9_Pos  (24UL)
#define ADC2_CNT6_9_UPPER_CNT_UP_CH9_Msk  (0x7000000UL)
#define ADC2_CNT6_9_UPPER_HYST_UP_CH8_Pos (19UL)
#define ADC2_CNT6_9_UPPER_HYST_UP_CH8_Msk (0x180000UL)
#define ADC2_CNT6_9_UPPER_CNT_UP_CH8_Pos  (16UL)
#define ADC2_CNT6_9_UPPER_CNT_UP_CH8_Msk  (0x70000UL)
#define ADC2_CNT6_9_UPPER_HYST_UP_CH7_Pos (11UL)
#define ADC2_CNT6_9_UPPER_HYST_UP_CH7_Msk (0x1800UL)
#define ADC2_CNT6_9_UPPER_CNT_UP_CH7_Pos  (8UL)
#define ADC2_CNT6_9_UPPER_CNT_UP_CH7_Msk  (0x700UL)
#define ADC2_CNT6_9_UPPER_HYST_UP_CH6_Pos (3UL)
#define ADC2_CNT6_9_UPPER_HYST_UP_CH6_Msk (0x18UL)
#define ADC2_CNT6_9_UPPER_CNT_UP_CH6_Pos  (0UL)
#define ADC2_CNT6_9_UPPER_CNT_UP_CH6_Msk  (0x7UL)

#define ADC2_CTRL1_CALIB_EN_Pos           (0UL)
#define ADC2_CTRL1_CALIB_EN_Msk           (0x3fUL)

#define ADC2_CTRL2_SEL_TS_COUNT_Pos       (16UL)
#define ADC2_CTRL2_SEL_TS_COUNT_Msk       (0xf0000UL)
#define ADC2_CTRL2_SAMPLE_TIME_int_Pos    (8UL)
#define ADC2_CTRL2_SAMPLE_TIME_int_Msk    (0xf00UL)
#define ADC2_CTRL2_MCM_RDY_Pos            (7UL)
#define ADC2_CTRL2_MCM_RDY_Msk            (0x80UL)
#define ADC2_CTRL2_TSENSE_SD_SEL_Pos      (2UL)
#define ADC2_CTRL2_TSENSE_SD_SEL_Msk      (0x4UL)
#define ADC2_CTRL2_TS_SD_SEL_CONF_Pos     (1UL)
#define ADC2_CTRL2_TS_SD_SEL_CONF_Msk     (0x2UL)
#define ADC2_CTRL2_MCM_PD_N_Pos           (0UL)
#define ADC2_CTRL2_MCM_PD_N_Msk           (0x1UL)

#define ADC2_CTRL4_FILT_OUT_SEL_9_6_Pos   (8UL)
#define ADC2_CTRL4_FILT_OUT_SEL_9_6_Msk   (0xf00UL)
#define ADC2_CTRL4_FILT_OUT_SEL_5_0_Pos   (0UL)
#define ADC2_CTRL4_FILT_OUT_SEL_5_0_Msk   (0x3fUL)

#define ADC2_CTRL_STS_VS_RANGE_Pos        (17UL)
#define ADC2_CTRL_STS_VS_RANGE_Msk        (0x20000UL)

#define ADC2_FILT_LO_CTRL_Ch5_EN_Pos      (5UL)
#define ADC2_FILT_LO_CTRL_Ch5_EN_Msk      (0x20UL)
#define ADC2_FILT_LO_CTRL_Ch4_EN_Pos      (4UL)
#define ADC2_FILT_LO_CTRL_Ch4_EN_Msk      (0x10UL)
#define ADC2_FILT_LO_CTRL_Ch3_EN_Pos      (3UL)
#define ADC2_FILT_LO_CTRL_Ch3_EN_Msk      (0x8UL)
#define ADC2_FILT_LO_CTRL_Ch2_EN_Pos      (2UL)
#define ADC2_FILT_LO_CTRL_Ch2_EN_Msk      (0x4UL)
#define ADC2_FILT_LO_CTRL_Ch1_EN_Pos      (1UL)
#define ADC2_FILT_LO_CTRL_Ch1_EN_Msk      (0x2UL)
#define ADC2_FILT_LO_CTRL_Ch0_EN_Pos      (0UL)
#define ADC2_FILT_LO_CTRL_Ch0_EN_Msk      (0x1UL)

#define ADC2_FILT_OUT0_OUT_CH0_Pos        (0UL)
#define ADC2_FILT_OUT0_OUT_CH0_Msk        (0x3ffUL)

#define ADC2_FILT_OUT1_OUT_CH1_Pos        (0UL)
#define ADC2_FILT_OUT1_OUT_CH1_Msk        (0x3ffUL)

#define ADC2_FILT_OUT2_OUT_CH2_Pos        (0UL)
#define ADC2_FILT_OUT2_OUT_CH2_Msk        (0x3ffUL)

#define ADC2_FILT_OUT3_OUT_CH3_Pos        (0UL)
#define ADC2_FILT_OUT3_OUT_CH3_Msk        (0x3ffUL)

#define ADC2_FILT_OUT4_OUT_CH4_Pos        (0UL)
#define ADC2_FILT_OUT4_OUT_CH4_Msk        (0x3ffUL)

#define ADC2_FILT_OUT5_OUT_CH5_Pos        (0UL)
#define ADC2_FILT_OUT5_OUT_CH5_Msk        (0x3ffUL)

#define ADC2_FILT_OUT6_OUT_CH6_Pos        (0UL)
#define ADC2_FILT_OUT6_OUT_CH6_Msk        (0x3ffUL)

#define ADC2_FILT_OUT7_OUT_CH7_Pos        (0UL)
#define ADC2_FILT_OUT7_OUT_CH7_Msk        (0x3ffUL)

#define ADC2_FILT_OUT8_OUT_CH8_Pos        (0UL)
#define ADC2_FILT_OUT8_OUT_CH8_Msk        (0x3ffUL)

#define ADC2_FILT_OUT9_OUT_CH9_Pos        (0UL)
#define ADC2_FILT_OUT9_OUT_CH9_Msk        (0x3ffUL)

#define ADC2_FILT_UP_CTRL_Ch5_EN_Pos      (5UL)
#define ADC2_FILT_UP_CTRL_Ch5_EN_Msk      (0x20UL)
#define ADC2_FILT_UP_CTRL_Ch4_EN_Pos      (4UL)
#define ADC2_FILT_UP_CTRL_Ch4_EN_Msk      (0x10UL)
#define ADC2_FILT_UP_CTRL_Ch3_EN_Pos      (3UL)
#define ADC2_FILT_UP_CTRL_Ch3_EN_Msk      (0x8UL)
#define ADC2_FILT_UP_CTRL_Ch2_EN_Pos      (2UL)
#define ADC2_FILT_UP_CTRL_Ch2_EN_Msk      (0x4UL)
#define ADC2_FILT_UP_CTRL_Ch1_EN_Pos      (1UL)
#define ADC2_FILT_UP_CTRL_Ch1_EN_Msk      (0x2UL)
#define ADC2_FILT_UP_CTRL_Ch0_EN_Pos      (0UL)
#define ADC2_FILT_UP_CTRL_Ch0_EN_Msk      (0x1UL)

#define ADC2_FILTCOEFF0_5_CH5_Pos         (10UL)
#define ADC2_FILTCOEFF0_5_CH5_Msk         (0xc00UL)
#define ADC2_FILTCOEFF0_5_CH4_Pos         (8UL)
#define ADC2_FILTCOEFF0_5_CH4_Msk         (0x300UL)
#define ADC2_FILTCOEFF0_5_CH3_Pos         (6UL)
#define ADC2_FILTCOEFF0_5_CH3_Msk         (0xc0UL)
#define ADC2_FILTCOEFF0_5_CH2_Pos         (4UL)
#define ADC2_FILTCOEFF0_5_CH2_Msk         (0x30UL)
#define ADC2_FILTCOEFF0_5_CH1_Pos         (2UL)
#define ADC2_FILTCOEFF0_5_CH1_Msk         (0xcUL)
#define ADC2_FILTCOEFF0_5_CH0_Pos         (0UL)
#define ADC2_FILTCOEFF0_5_CH0_Msk         (0x3UL)

#define ADC2_FILTCOEFF6_9_CH9_Pos         (6UL)
#define ADC2_FILTCOEFF6_9_CH9_Msk         (0xc0UL)
#define ADC2_FILTCOEFF6_9_CH8_Pos         (4UL)
#define ADC2_FILTCOEFF6_9_CH8_Msk         (0x30UL)
#define ADC2_FILTCOEFF6_9_CH7_Pos         (2UL)
#define ADC2_FILTCOEFF6_9_CH7_Msk         (0xcUL)
#define ADC2_FILTCOEFF6_9_CH6_Pos         (0UL)
#define ADC2_FILTCOEFF6_9_CH6_Msk         (0x3UL)

#define ADC2_HV_STS_READY_Pos             (1UL)
#define ADC2_HV_STS_READY_Msk             (0x2UL)

#define ADC2_MMODE0_5_Ch5_Pos             (10UL)
#define ADC2_MMODE0_5_Ch5_Msk             (0xc00UL)
#define ADC2_MMODE0_5_Ch4_Pos             (8UL)
#define ADC2_MMODE0_5_Ch4_Msk             (0x300UL)
#define ADC2_MMODE0_5_Ch3_Pos             (6UL)
#define ADC2_MMODE0_5_Ch3_Msk             (0xc0UL)
#define ADC2_MMODE0_5_Ch2_Pos             (4UL)
#define ADC2_MMODE0_5_Ch2_Msk             (0x30UL)
#define ADC2_MMODE0_5_Ch1_Pos             (2UL)
#define ADC2_MMODE0_5_Ch1_Msk             (0xcUL)
#define ADC2_MMODE0_5_Ch0_Pos             (0UL)
#define ADC2_MMODE0_5_Ch0_Msk             (0x3UL)

#define ADC2_SQ1_4_SQ4_Pos                (24UL)
#define ADC2_SQ1_4_SQ4_Msk                (0x3f000000UL)
#define ADC2_SQ1_4_SQ3_Pos                (16UL)
#define ADC2_SQ1_4_SQ3_Msk                (0x3f0000UL)
#define ADC2_SQ1_4_SQ2_Pos                (8UL)
#define ADC2_SQ1_4_SQ2_Msk                (0x3f00UL)
#define ADC2_SQ1_4_SQ1_Pos                (0UL)
#define ADC2_SQ1_4_SQ1_Msk                (0x3fUL)

#define ADC2_SQ1_8_int_SQ8_int_Pos        (28UL)
#define ADC2_SQ1_8_int_SQ8_int_Msk        (0xf0000000UL)
#define ADC2_SQ1_8_int_SQ7_int_Pos        (24UL)
#define ADC2_SQ1_8_int_SQ7_int_Msk        (0xf000000UL)
#define ADC2_SQ1_8_int_SQ6_int_Pos        (20UL)
#define ADC2_SQ1_8_int_SQ6_int_Msk        (0xf00000UL)
#define ADC2_SQ1_8_int_SQ5_int_Pos        (16UL)
#define ADC2_SQ1_8_int_SQ5_int_Msk        (0xf0000UL)
#define ADC2_SQ1_8_int_SQ4_int_Pos        (12UL)
#define ADC2_SQ1_8_int_SQ4_int_Msk        (0xf000UL)
#define ADC2_SQ1_8_int_SQ3_int_Pos        (8UL)
#define ADC2_SQ1_8_int_SQ3_int_Msk        (0xf00UL)
#define ADC2_SQ1_8_int_SQ2_int_Pos        (4UL)
#define ADC2_SQ1_8_int_SQ2_int_Msk        (0xf0UL)
#define ADC2_SQ1_8_int_SQ1_int_Pos        (0UL)
#define ADC2_SQ1_8_int_SQ1_int_Msk        (0xfUL)

#define ADC2_SQ5_8_SQ8_Pos                (24UL)
#define ADC2_SQ5_8_SQ8_Msk                (0x3f000000UL)
#define ADC2_SQ5_8_SQ7_Pos                (16UL)
#define ADC2_SQ5_8_SQ7_Msk                (0x3f0000UL)
#define ADC2_SQ5_8_SQ6_Pos                (8UL)
#define ADC2_SQ5_8_SQ6_Msk                (0x3f00UL)
#define ADC2_SQ5_8_SQ5_Pos                (0UL)
#define ADC2_SQ5_8_SQ5_Msk                (0x3fUL)

#define ADC2_SQ9_10_SQ10_Pos              (8UL)
#define ADC2_SQ9_10_SQ10_Msk              (0x3f00UL)
#define ADC2_SQ9_10_SQ9_Pos               (0UL)
#define ADC2_SQ9_10_SQ9_Msk               (0x3fUL)

#define ADC2_SQ9_10_int_SQ10_int_Pos      (4UL)
#define ADC2_SQ9_10_int_SQ10_int_Msk      (0xf0UL)
#define ADC2_SQ9_10_int_SQ9_int_Pos       (0UL)
#define ADC2_SQ9_10_int_SQ9_int_Msk       (0xfUL)

#define ADC2_SQ_FB_CHx_Pos                (16UL)
#define ADC2_SQ_FB_CHx_Msk                (0x1f0000UL)
#define ADC2_SQ_FB_SQx_Pos                (11UL)
#define ADC2_SQ_FB_SQx_Msk                (0x7800UL)
#define ADC2_SQ_FB_ESM_ACTIVE_Pos         (10UL)
#define ADC2_SQ_FB_ESM_ACTIVE_Msk         (0x400UL)
#define ADC2_SQ_FB_EIM_ACTIVE_Pos         (9UL)
#define ADC2_SQ_FB_EIM_ACTIVE_Msk         (0x200UL)
#define ADC2_SQ_FB_SQ_STOP_Pos            (8UL)
#define ADC2_SQ_FB_SQ_STOP_Msk            (0x100UL)
#define ADC2_SQ_FB_SQ_FB_Pos              (0UL)
#define ADC2_SQ_FB_SQ_FB_Msk              (0xfUL)

#define ADC2_TH0_3_LOWER_CH3_Pos          (24UL)
#define ADC2_TH0_3_LOWER_CH3_Msk          (0xff000000UL)
#define ADC2_TH0_3_LOWER_CH2_Pos          (16UL)
#define ADC2_TH0_3_LOWER_CH2_Msk          (0xff0000UL)
#define ADC2_TH0_3_LOWER_CH1_Pos          (8UL)
#define ADC2_TH0_3_LOWER_CH1_Msk          (0xff00UL)
#define ADC2_TH0_3_LOWER_CH0_Pos          (0UL)
#define ADC2_TH0_3_LOWER_CH0_Msk          (0xffUL)

#define ADC2_TH0_3_UPPER_CH3_Pos          (24UL)
#define ADC2_TH0_3_UPPER_CH3_Msk          (0xff000000UL)
#define ADC2_TH0_3_UPPER_CH2_Pos          (16UL)
#define ADC2_TH0_3_UPPER_CH2_Msk          (0xff0000UL)
#define ADC2_TH0_3_UPPER_CH1_Pos          (8UL)
#define ADC2_TH0_3_UPPER_CH1_Msk          (0xff00UL)
#define ADC2_TH0_3_UPPER_CH0_Pos          (0UL)
#define ADC2_TH0_3_UPPER_CH0_Msk          (0xffUL)

#define ADC2_TH4_5_LOWER_CH5_Pos          (8UL)
#define ADC2_TH4_5_LOWER_CH5_Msk          (0xff00UL)
#define ADC2_TH4_5_LOWER_CH4_Pos          (0UL)
#define ADC2_TH4_5_LOWER_CH4_Msk          (0xffUL)

#define ADC2_TH4_5_UPPER_CH5_Pos          (8UL)
#define ADC2_TH4_5_UPPER_CH5_Msk          (0xff00UL)
#define ADC2_TH4_5_UPPER_CH4_Pos          (0UL)
#define ADC2_TH4_5_UPPER_CH4_Msk          (0xffUL)

#define ADC2_TH6_9_LOWER_CH9_Pos          (24UL)
#define ADC2_TH6_9_LOWER_CH9_Msk          (0xff000000UL)
#define ADC2_TH6_9_LOWER_CH8_Pos          (16UL)
#define ADC2_TH6_9_LOWER_CH8_Msk          (0xff0000UL)
#define ADC2_TH6_9_LOWER_CH7_Pos          (8UL)
#define ADC2_TH6_9_LOWER_CH7_Msk          (0xff00UL)
#define ADC2_TH6_9_LOWER_CH6_Pos          (0UL)
#define ADC2_TH6_9_LOWER_CH6_Msk          (0xffUL)

#define ADC2_TH6_9_UPPER_CH9_Pos          (24UL)
#define ADC2_TH6_9_UPPER_CH9_Msk          (0xff000000UL)
#define ADC2_TH6_9_UPPER_CH8_Pos          (16UL)
#define ADC2_TH6_9_UPPER_CH8_Msk          (0xff0000UL)
#define ADC2_TH6_9_UPPER_CH7_Pos          (8UL)
#define ADC2_TH6_9_UPPER_CH7_Msk          (0xff00UL)
#define ADC2_TH6_9_UPPER_CH6_Pos          (0UL)
#define ADC2_TH6_9_UPPER_CH6_Msk          (0xffUL)

#define ADC34_CTRL_STS_ADC4_OSR_Pos       (28UL)
#define ADC34_CTRL_STS_ADC4_OSR_Msk       (0xf0000000UL)
#define ADC34_CTRL_STS_ADC34_DITHVAL_Pos  (24UL)
#define ADC34_CTRL_STS_ADC34_DITHVAL_Msk  (0xf000000UL)
#define ADC34_CTRL_STS_ADC34_DITHEN_Pos   (23UL)
#define ADC34_CTRL_STS_ADC34_DITHEN_Msk   (0x800000UL)
#define ADC34_CTRL_STS_ADC34_EoC_CNT_Pos  (21UL)
#define ADC34_CTRL_STS_ADC34_EoC_CNT_Msk  (0x600000UL)
#define ADC34_CTRL_STS_ADC4_EoC_STS_Pos   (20UL)
#define ADC34_CTRL_STS_ADC4_EoC_STS_Msk   (0x100000UL)
#define ADC34_CTRL_STS_ADC4_SOC_Pos       (18UL)
#define ADC34_CTRL_STS_ADC4_SOC_Msk       (0x40000UL)
#define ADC34_CTRL_STS_ADC4_OFS_MEAS_EN_Pos (17UL)
#define ADC34_CTRL_STS_ADC4_OFS_MEAS_EN_Msk (0x20000UL)
#define ADC34_CTRL_STS_ADC4_EN_Pos        (16UL)
#define ADC34_CTRL_STS_ADC4_EN_Msk        (0x10000UL)
#define ADC34_CTRL_STS_ADC3_OSR_Pos       (12UL)
#define ADC34_CTRL_STS_ADC3_OSR_Msk       (0xf000UL)
#define ADC34_CTRL_STS_ADC34_REF_SEL_Pos  (11UL)
#define ADC34_CTRL_STS_ADC34_REF_SEL_Msk  (0x800UL)
#define ADC34_CTRL_STS_ADC34_DREQ_SEL_Pos (5UL)
#define ADC34_CTRL_STS_ADC34_DREQ_SEL_Msk (0x60UL)
#define ADC34_CTRL_STS_ADC3_EoC_STS_Pos   (4UL)
#define ADC34_CTRL_STS_ADC3_EoC_STS_Msk   (0x10UL)
#define ADC34_CTRL_STS_ADC3_SOC_Pos       (2UL)
#define ADC34_CTRL_STS_ADC3_SOC_Msk       (0x4UL)
#define ADC34_CTRL_STS_ADC3_OFS_MEAS_EN_Pos (1UL)
#define ADC34_CTRL_STS_ADC3_OFS_MEAS_EN_Msk (0x2UL)
#define ADC34_CTRL_STS_ADC3_EN_Pos        (0UL)
#define ADC34_CTRL_STS_ADC3_EN_Msk        (0x1UL)

#define ADC34_RESU_ADC4_RESU_Pos          (16UL)
#define ADC34_RESU_ADC4_RESU_Msk          (0xffff0000UL)
#define ADC34_RESU_ADC3_RESU_Pos          (0UL)
#define ADC34_RESU_ADC3_RESU_Msk          (0xffffUL)

#define BDRV_CP_CLK_CTRL_CPCLK_EN_Pos     (15UL)
#define BDRV_CP_CLK_CTRL_CPCLK_EN_Msk     (0x8000UL)
#define BDRV_CP_CLK_CTRL_F_CP_Pos         (13UL)
#define BDRV_CP_CLK_CTRL_F_CP_Msk         (0x6000UL)
#define BDRV_CP_CLK_CTRL_DITH_UPPER_Pos   (8UL)
#define BDRV_CP_CLK_CTRL_DITH_UPPER_Msk   (0x1f00UL)
#define BDRV_CP_CLK_CTRL_DITH_LOWER_Pos   (0UL)
#define BDRV_CP_CLK_CTRL_DITH_LOWER_Msk   (0x1fUL)

#define BDRV_CP_CTRL_STS_VTHVCP9V_TRIM_Pos (26UL)
#define BDRV_CP_CTRL_STS_VTHVCP9V_TRIM_Msk (0xc000000UL)
#define BDRV_CP_CTRL_STS_VCP9V_SET_Pos    (25UL)
#define BDRV_CP_CTRL_STS_VCP9V_SET_Msk    (0x2000000UL)
#define BDRV_CP_CTRL_STS_CPLOPWRM_EN_Pos  (24UL)
#define BDRV_CP_CTRL_STS_CPLOPWRM_EN_Msk  (0x1000000UL)
#define BDRV_CP_CTRL_STS_VSD_UPTH_STS_Pos (23UL)
#define BDRV_CP_CTRL_STS_VSD_UPTH_STS_Msk (0x800000UL)
#define BDRV_CP_CTRL_STS_DRVx_VSDUP_DIS_Pos (22UL)
#define BDRV_CP_CTRL_STS_DRVx_VSDUP_DIS_Msk (0x400000UL)
#define BDRV_CP_CTRL_STS_VSD_LOTH_STS_Pos (21UL)
#define BDRV_CP_CTRL_STS_VSD_LOTH_STS_Msk (0x200000UL)
#define BDRV_CP_CTRL_STS_DRVx_VSDLO_DIS_Pos (20UL)
#define BDRV_CP_CTRL_STS_DRVx_VSDLO_DIS_Msk (0x100000UL)
#define BDRV_CP_CTRL_STS_VCP_UPTH_STS_Pos (19UL)
#define BDRV_CP_CTRL_STS_VCP_UPTH_STS_Msk (0x80000UL)
#define BDRV_CP_CTRL_STS_DRVx_VCPUP_DIS_Pos (18UL)
#define BDRV_CP_CTRL_STS_DRVx_VCPUP_DIS_Msk (0x40000UL)
#define BDRV_CP_CTRL_STS_VCP_LOTH1_STS_Pos (17UL)
#define BDRV_CP_CTRL_STS_VCP_LOTH1_STS_Msk (0x20000UL)
#define BDRV_CP_CTRL_STS_DRVx_VCPLO_DIS_Pos (16UL)
#define BDRV_CP_CTRL_STS_DRVx_VCPLO_DIS_Msk (0x10000UL)
#define BDRV_CP_CTRL_STS_VCP_LOWTH2_Pos   (8UL)
#define BDRV_CP_CTRL_STS_VCP_LOWTH2_Msk   (0x700UL)
#define BDRV_CP_CTRL_STS_VCP_LOTH2_STS_Pos (5UL)
#define BDRV_CP_CTRL_STS_VCP_LOTH2_STS_Msk (0x20UL)
#define BDRV_CP_CTRL_STS_CP_RDY_EN_Pos    (2UL)
#define BDRV_CP_CTRL_STS_CP_RDY_EN_Msk    (0x4UL)
#define BDRV_CP_CTRL_STS_CP_EN_Pos        (0UL)
#define BDRV_CP_CTRL_STS_CP_EN_Msk        (0x1UL)

#define BDRV_CTRL1_HS2_OC_DIS_Pos         (31UL)
#define BDRV_CTRL1_HS2_OC_DIS_Msk         (0x80000000UL)
#define BDRV_CTRL1_HS2_OC_STS_Pos         (30UL)
#define BDRV_CTRL1_HS2_OC_STS_Msk         (0x40000000UL)
#define BDRV_CTRL1_HS2_SUPERR_STS_Pos     (29UL)
#define BDRV_CTRL1_HS2_SUPERR_STS_Msk     (0x20000000UL)
#define BDRV_CTRL1_HS2_DS_STS_Pos         (28UL)
#define BDRV_CTRL1_HS2_DS_STS_Msk         (0x10000000UL)
#define BDRV_CTRL1_HS2_DCS_EN_Pos         (27UL)
#define BDRV_CTRL1_HS2_DCS_EN_Msk         (0x8000000UL)
#define BDRV_CTRL1_HS2_ON_Pos             (26UL)
#define BDRV_CTRL1_HS2_ON_Msk             (0x4000000UL)
#define BDRV_CTRL1_HS2_PWM_Pos            (25UL)
#define BDRV_CTRL1_HS2_PWM_Msk            (0x2000000UL)
#define BDRV_CTRL1_HS2_EN_Pos             (24UL)
#define BDRV_CTRL1_HS2_EN_Msk             (0x1000000UL)
#define BDRV_CTRL1_HS1_OC_DIS_Pos         (23UL)
#define BDRV_CTRL1_HS1_OC_DIS_Msk         (0x800000UL)
#define BDRV_CTRL1_HS1_OC_STS_Pos         (22UL)
#define BDRV_CTRL1_HS1_OC_STS_Msk         (0x400000UL)
#define BDRV_CTRL1_HS1_SUPERR_STS_Pos     (21UL)
#define BDRV_CTRL1_HS1_SUPERR_STS_Msk     (0x200000UL)
#define BDRV_CTRL1_HS1_DS_STS_Pos         (20UL)
#define BDRV_CTRL1_HS1_DS_STS_Msk         (0x100000UL)
#define BDRV_CTRL1_HS1_DCS_EN_Pos         (19UL)
#define BDRV_CTRL1_HS1_DCS_EN_Msk         (0x80000UL)
#define BDRV_CTRL1_HS1_ON_Pos             (18UL)
#define BDRV_CTRL1_HS1_ON_Msk             (0x40000UL)
#define BDRV_CTRL1_HS1_PWM_Pos            (17UL)
#define BDRV_CTRL1_HS1_PWM_Msk            (0x20000UL)
#define BDRV_CTRL1_HS1_EN_Pos             (16UL)
#define BDRV_CTRL1_HS1_EN_Msk             (0x10000UL)
#define BDRV_CTRL1_LS2_OC_DIS_Pos         (15UL)
#define BDRV_CTRL1_LS2_OC_DIS_Msk         (0x8000UL)
#define BDRV_CTRL1_LS2_OC_STS_Pos         (14UL)
#define BDRV_CTRL1_LS2_OC_STS_Msk         (0x4000UL)
#define BDRV_CTRL1_LS2_SUPERR_STS_Pos     (13UL)
#define BDRV_CTRL1_LS2_SUPERR_STS_Msk     (0x2000UL)
#define BDRV_CTRL1_LS2_DS_STS_Pos         (12UL)
#define BDRV_CTRL1_LS2_DS_STS_Msk         (0x1000UL)
#define BDRV_CTRL1_LS2_DCS_EN_Pos         (11UL)
#define BDRV_CTRL1_LS2_DCS_EN_Msk         (0x800UL)
#define BDRV_CTRL1_LS2_ON_Pos             (10UL)
#define BDRV_CTRL1_LS2_ON_Msk             (0x400UL)
#define BDRV_CTRL1_LS2_PWM_Pos            (9UL)
#define BDRV_CTRL1_LS2_PWM_Msk            (0x200UL)
#define BDRV_CTRL1_LS2_EN_Pos             (8UL)
#define BDRV_CTRL1_LS2_EN_Msk             (0x100UL)
#define BDRV_CTRL1_LS1_OC_DIS_Pos         (7UL)
#define BDRV_CTRL1_LS1_OC_DIS_Msk         (0x80UL)
#define BDRV_CTRL1_LS1_OC_STS_Pos         (6UL)
#define BDRV_CTRL1_LS1_OC_STS_Msk         (0x40UL)
#define BDRV_CTRL1_LS1_SUPERR_STS_Pos     (5UL)
#define BDRV_CTRL1_LS1_SUPERR_STS_Msk     (0x20UL)
#define BDRV_CTRL1_LS1_DS_STS_Pos         (4UL)
#define BDRV_CTRL1_LS1_DS_STS_Msk         (0x10UL)
#define BDRV_CTRL1_LS1_DCS_EN_Pos         (3UL)
#define BDRV_CTRL1_LS1_DCS_EN_Msk         (0x8UL)
#define BDRV_CTRL1_LS1_ON_Pos             (2UL)
#define BDRV_CTRL1_LS1_ON_Msk             (0x4UL)
#define BDRV_CTRL1_LS1_PWM_Pos            (1UL)
#define BDRV_CTRL1_LS1_PWM_Msk            (0x2UL)
#define BDRV_CTRL1_LS1_EN_Pos             (0UL)
#define BDRV_CTRL1_LS1_EN_Msk             (0x1UL)

#define BDRV_CTRL2_DLY_DIAG_DIRSEL_Pos    (31UL)
#define BDRV_CTRL2_DLY_DIAG_DIRSEL_Msk    (0x80000000UL)
#define BDRV_CTRL2_DLY_DIAG_CHSEL_Pos     (28UL)
#define BDRV_CTRL2_DLY_DIAG_CHSEL_Msk     (0x70000000UL)
#define BDRV_CTRL2_DLY_DIAG_STS_Pos       (27UL)
#define BDRV_CTRL2_DLY_DIAG_STS_Msk       (0x8000000UL)
#define BDRV_CTRL2_DLY_DIAG_SCLR_Pos      (26UL)
#define BDRV_CTRL2_DLY_DIAG_SCLR_Msk      (0x4000000UL)
#define BDRV_CTRL2_DLY_DIAG_TIM_Pos       (16UL)
#define BDRV_CTRL2_DLY_DIAG_TIM_Msk       (0x3ff0000UL)
#define BDRV_CTRL2_HS3_OC_DIS_Pos         (15UL)
#define BDRV_CTRL2_HS3_OC_DIS_Msk         (0x8000UL)
#define BDRV_CTRL2_HS3_OC_STS_Pos         (14UL)
#define BDRV_CTRL2_HS3_OC_STS_Msk         (0x4000UL)
#define BDRV_CTRL2_HS3_SUPERR_STS_Pos     (13UL)
#define BDRV_CTRL2_HS3_SUPERR_STS_Msk     (0x2000UL)
#define BDRV_CTRL2_HS3_DS_STS_Pos         (12UL)
#define BDRV_CTRL2_HS3_DS_STS_Msk         (0x1000UL)
#define BDRV_CTRL2_HS3_DCS_EN_Pos         (11UL)
#define BDRV_CTRL2_HS3_DCS_EN_Msk         (0x800UL)
#define BDRV_CTRL2_HS3_ON_Pos             (10UL)
#define BDRV_CTRL2_HS3_ON_Msk             (0x400UL)
#define BDRV_CTRL2_HS3_PWM_Pos            (9UL)
#define BDRV_CTRL2_HS3_PWM_Msk            (0x200UL)
#define BDRV_CTRL2_HS3_EN_Pos             (8UL)
#define BDRV_CTRL2_HS3_EN_Msk             (0x100UL)
#define BDRV_CTRL2_LS3_OC_DIS_Pos         (7UL)
#define BDRV_CTRL2_LS3_OC_DIS_Msk         (0x80UL)
#define BDRV_CTRL2_LS3_OC_STS_Pos         (6UL)
#define BDRV_CTRL2_LS3_OC_STS_Msk         (0x40UL)
#define BDRV_CTRL2_LS3_SUPERR_STS_Pos     (5UL)
#define BDRV_CTRL2_LS3_SUPERR_STS_Msk     (0x20UL)
#define BDRV_CTRL2_LS3_DS_STS_Pos         (4UL)
#define BDRV_CTRL2_LS3_DS_STS_Msk         (0x10UL)
#define BDRV_CTRL2_LS3_DCS_EN_Pos         (3UL)
#define BDRV_CTRL2_LS3_DCS_EN_Msk         (0x8UL)
#define BDRV_CTRL2_LS3_ON_Pos             (2UL)
#define BDRV_CTRL2_LS3_ON_Msk             (0x4UL)
#define BDRV_CTRL2_LS3_PWM_Pos            (1UL)
#define BDRV_CTRL2_LS3_PWM_Msk            (0x2UL)
#define BDRV_CTRL2_LS3_EN_Pos             (0UL)
#define BDRV_CTRL2_LS3_EN_Msk             (0x1UL)

#define BDRV_CTRL3_DRV_CCP_DIS_Pos        (26UL)
#define BDRV_CTRL3_DRV_CCP_DIS_Msk        (0x4000000UL)
#define BDRV_CTRL3_DRV_CCP_TIMSEL_Pos     (24UL)
#define BDRV_CTRL3_DRV_CCP_TIMSEL_Msk     (0x3000000UL)
#define BDRV_CTRL3_DSMONVTH_Pos           (16UL)
#define BDRV_CTRL3_DSMONVTH_Msk           (0x70000UL)
#define BDRV_CTRL3_OFF_SEQ_EN_Pos         (15UL)
#define BDRV_CTRL3_OFF_SEQ_EN_Msk         (0x8000UL)
#define BDRV_CTRL3_IDISCHARGEDIV2_N_Pos   (14UL)
#define BDRV_CTRL3_IDISCHARGEDIV2_N_Msk   (0x4000UL)
#define BDRV_CTRL3_IDISCHARGE_TRIM_Pos    (8UL)
#define BDRV_CTRL3_IDISCHARGE_TRIM_Msk    (0x1f00UL)
#define BDRV_CTRL3_ON_SEQ_EN_Pos          (7UL)
#define BDRV_CTRL3_ON_SEQ_EN_Msk          (0x80UL)
#define BDRV_CTRL3_ICHARGEDIV2_N_Pos      (6UL)
#define BDRV_CTRL3_ICHARGEDIV2_N_Msk      (0x40UL)
#define BDRV_CTRL3_ICHARGE_TRIM_Pos       (0UL)
#define BDRV_CTRL3_ICHARGE_TRIM_Msk       (0x1fUL)

#define BDRV_OFF_SEQ_CTRL_DRV_OFF_I_1_Pos (27UL)
#define BDRV_OFF_SEQ_CTRL_DRV_OFF_I_1_Msk (0xf8000000UL)
#define BDRV_OFF_SEQ_CTRL_DRV_OFF_t_1_Pos (24UL)
#define BDRV_OFF_SEQ_CTRL_DRV_OFF_t_1_Msk (0x7000000UL)
#define BDRV_OFF_SEQ_CTRL_DRV_OFF_I_2_Pos (19UL)
#define BDRV_OFF_SEQ_CTRL_DRV_OFF_I_2_Msk (0xf80000UL)
#define BDRV_OFF_SEQ_CTRL_DRV_OFF_t_2_Pos (16UL)
#define BDRV_OFF_SEQ_CTRL_DRV_OFF_t_2_Msk (0x70000UL)
#define BDRV_OFF_SEQ_CTRL_DRV_OFF_I_3_Pos (11UL)
#define BDRV_OFF_SEQ_CTRL_DRV_OFF_I_3_Msk (0xf800UL)
#define BDRV_OFF_SEQ_CTRL_DRV_OFF_t_3_Pos (8UL)
#define BDRV_OFF_SEQ_CTRL_DRV_OFF_t_3_Msk (0x700UL)
#define BDRV_OFF_SEQ_CTRL_DRV_OFF_I_4_Pos (3UL)
#define BDRV_OFF_SEQ_CTRL_DRV_OFF_I_4_Msk (0xf8UL)
#define BDRV_OFF_SEQ_CTRL_DRV_OFF_t_4_Pos (0UL)
#define BDRV_OFF_SEQ_CTRL_DRV_OFF_t_4_Msk (0x7UL)

#define BDRV_ON_SEQ_CTRL_DRV_ON_I_1_Pos   (27UL)
#define BDRV_ON_SEQ_CTRL_DRV_ON_I_1_Msk   (0xf8000000UL)
#define BDRV_ON_SEQ_CTRL_DRV_ON_t_1_Pos   (24UL)
#define BDRV_ON_SEQ_CTRL_DRV_ON_t_1_Msk   (0x7000000UL)
#define BDRV_ON_SEQ_CTRL_DRV_ON_I_2_Pos   (19UL)
#define BDRV_ON_SEQ_CTRL_DRV_ON_I_2_Msk   (0xf80000UL)
#define BDRV_ON_SEQ_CTRL_DRV_ON_t_2_Pos   (16UL)
#define BDRV_ON_SEQ_CTRL_DRV_ON_t_2_Msk   (0x70000UL)
#define BDRV_ON_SEQ_CTRL_DRV_ON_I_3_Pos   (11UL)
#define BDRV_ON_SEQ_CTRL_DRV_ON_I_3_Msk   (0xf800UL)
#define BDRV_ON_SEQ_CTRL_DRV_ON_t_3_Pos   (8UL)
#define BDRV_ON_SEQ_CTRL_DRV_ON_t_3_Msk   (0x700UL)
#define BDRV_ON_SEQ_CTRL_DRV_ON_I_4_Pos   (3UL)
#define BDRV_ON_SEQ_CTRL_DRV_ON_I_4_Msk   (0xf8UL)
#define BDRV_ON_SEQ_CTRL_DRV_ON_t_4_Pos   (0UL)
#define BDRV_ON_SEQ_CTRL_DRV_ON_t_4_Msk   (0x7UL)

#define BDRV_TRIM_DRVx_CPLOW_TFILT_SEL_Pos (24UL)
#define BDRV_TRIM_DRVx_CPLOW_TFILT_SEL_Msk (0x3000000UL)
#define BDRV_TRIM_DRVx_HS3DRV_OCSDN_DIS_Pos (23UL)
#define BDRV_TRIM_DRVx_HS3DRV_OCSDN_DIS_Msk (0x800000UL)
#define BDRV_TRIM_DRVx_HS2DRV_OCSDN_DIS_Pos (22UL)
#define BDRV_TRIM_DRVx_HS2DRV_OCSDN_DIS_Msk (0x400000UL)
#define BDRV_TRIM_DRVx_HS1DRV_OCSDN_DIS_Pos (21UL)
#define BDRV_TRIM_DRVx_HS1DRV_OCSDN_DIS_Msk (0x200000UL)
#define BDRV_TRIM_DRVx_HS3DRV_FDISCHG_DIS_Pos (20UL)
#define BDRV_TRIM_DRVx_HS3DRV_FDISCHG_DIS_Msk (0x100000UL)
#define BDRV_TRIM_DRVx_HS2DRV_FDISCHG_DIS_Pos (19UL)
#define BDRV_TRIM_DRVx_HS2DRV_FDISCHG_DIS_Msk (0x80000UL)
#define BDRV_TRIM_DRVx_HS1DRV_FDISCHG_DIS_Pos (18UL)
#define BDRV_TRIM_DRVx_HS1DRV_FDISCHG_DIS_Msk (0x40000UL)
#define BDRV_TRIM_DRVx_HSDRV_DS_TFILT_SEL_Pos (16UL)
#define BDRV_TRIM_DRVx_HSDRV_DS_TFILT_SEL_Msk (0x30000UL)
#define BDRV_TRIM_DRVx_LS3DRV_OCSDN_DIS_Pos (15UL)
#define BDRV_TRIM_DRVx_LS3DRV_OCSDN_DIS_Msk (0x8000UL)
#define BDRV_TRIM_DRVx_LS2DRV_OCSDN_DIS_Pos (14UL)
#define BDRV_TRIM_DRVx_LS2DRV_OCSDN_DIS_Msk (0x4000UL)
#define BDRV_TRIM_DRVx_LS1DRV_OCSDN_DIS_Pos (13UL)
#define BDRV_TRIM_DRVx_LS1DRV_OCSDN_DIS_Msk (0x2000UL)
#define BDRV_TRIM_DRVx_LS3DRV_FDISCHG_DIS_Pos (12UL)
#define BDRV_TRIM_DRVx_LS3DRV_FDISCHG_DIS_Msk (0x1000UL)
#define BDRV_TRIM_DRVx_LS2DRV_FDISCHG_DIS_Pos (11UL)
#define BDRV_TRIM_DRVx_LS2DRV_FDISCHG_DIS_Msk (0x800UL)
#define BDRV_TRIM_DRVx_LS1DRV_FDISCHG_DIS_Pos (10UL)
#define BDRV_TRIM_DRVx_LS1DRV_FDISCHG_DIS_Msk (0x400UL)
#define BDRV_TRIM_DRVx_LSDRV_DS_TFILT_SEL_Pos (8UL)
#define BDRV_TRIM_DRVx_LSDRV_DS_TFILT_SEL_Msk (0x300UL)
#define BDRV_TRIM_DRVx_DRV_CCPTIMMUL_Pos  (5UL)
#define BDRV_TRIM_DRVx_DRV_CCPTIMMUL_Msk  (0x60UL)
#define BDRV_TRIM_DRVx_LS_HS_BT_TFILT_SEL_Pos (0UL)
#define BDRV_TRIM_DRVx_LS_HS_BT_TFILT_SEL_Msk (0x3UL)

#define CCU6_CC60R_CCV_Pos                (0UL)
#define CCU6_CC60R_CCV_Msk                (0xffffUL)

#define CCU6_CC60SR_CCS_Pos               (0UL)
#define CCU6_CC60SR_CCS_Msk               (0xffffUL)

#define CCU6_CC61R_CCV_Pos                (0UL)
#define CCU6_CC61R_CCV_Msk                (0xffffUL)

#define CCU6_CC61SR_CCS_Pos               (0UL)
#define CCU6_CC61SR_CCS_Msk               (0xffffUL)

#define CCU6_CC62R_CCV_Pos                (0UL)
#define CCU6_CC62R_CCV_Msk                (0xffffUL)

#define CCU6_CC62SR_CCS_Pos               (0UL)
#define CCU6_CC62SR_CCS_Msk               (0xffffUL)

#define CCU6_CC63R_CCV_Pos                (0UL)
#define CCU6_CC63R_CCV_Msk                (0xffffUL)

#define CCU6_CC63SR_CCS_Pos               (0UL)
#define CCU6_CC63SR_CCS_Msk               (0xffffUL)

#define CCU6_CMPMODIF_MCC60S_Pos          (0UL)
#define CCU6_CMPMODIF_MCC60S_Msk          (0x1UL)
#define CCU6_CMPMODIF_MCC61S_Pos          (1UL)
#define CCU6_CMPMODIF_MCC61S_Msk          (0x2UL)
#define CCU6_CMPMODIF_MCC62S_Pos          (2UL)
#define CCU6_CMPMODIF_MCC62S_Msk          (0x4UL)
#define CCU6_CMPMODIF_MCC63S_Pos          (6UL)
#define CCU6_CMPMODIF_MCC63S_Msk          (0x40UL)
#define CCU6_CMPMODIF_MCC60R_Pos          (8UL)
#define CCU6_CMPMODIF_MCC60R_Msk          (0x100UL)
#define CCU6_CMPMODIF_MCC61R_Pos          (9UL)
#define CCU6_CMPMODIF_MCC61R_Msk          (0x200UL)
#define CCU6_CMPMODIF_MCC62R_Pos          (10UL)
#define CCU6_CMPMODIF_MCC62R_Msk          (0x400UL)
#define CCU6_CMPMODIF_MCC63R_Pos          (14UL)
#define CCU6_CMPMODIF_MCC63R_Msk          (0x4000UL)

#define CCU6_CMPSTAT_CC60ST_Pos           (0UL)
#define CCU6_CMPSTAT_CC60ST_Msk           (0x1UL)
#define CCU6_CMPSTAT_CC61ST_Pos           (1UL)
#define CCU6_CMPSTAT_CC61ST_Msk           (0x2UL)
#define CCU6_CMPSTAT_CC62ST_Pos           (2UL)
#define CCU6_CMPSTAT_CC62ST_Msk           (0x4UL)
#define CCU6_CMPSTAT_CC63ST_Pos           (6UL)
#define CCU6_CMPSTAT_CC63ST_Msk           (0x40UL)
#define CCU6_CMPSTAT_CCPOS0_Pos           (3UL)
#define CCU6_CMPSTAT_CCPOS0_Msk           (0x8UL)
#define CCU6_CMPSTAT_CCPOS1_Pos           (4UL)
#define CCU6_CMPSTAT_CCPOS1_Msk           (0x10UL)
#define CCU6_CMPSTAT_CCPOS2_Pos           (5UL)
#define CCU6_CMPSTAT_CCPOS2_Msk           (0x20UL)
#define CCU6_CMPSTAT_CC60PS_Pos           (8UL)
#define CCU6_CMPSTAT_CC60PS_Msk           (0x100UL)
#define CCU6_CMPSTAT_CC61PS_Pos           (10UL)
#define CCU6_CMPSTAT_CC61PS_Msk           (0x400UL)
#define CCU6_CMPSTAT_CC62PS_Pos           (12UL)
#define CCU6_CMPSTAT_CC62PS_Msk           (0x1000UL)
#define CCU6_CMPSTAT_COUT60PS_Pos         (9UL)
#define CCU6_CMPSTAT_COUT60PS_Msk         (0x200UL)
#define CCU6_CMPSTAT_COUT61PS_Pos         (11UL)
#define CCU6_CMPSTAT_COUT61PS_Msk         (0x800UL)
#define CCU6_CMPSTAT_COUT62PS_Pos         (13UL)
#define CCU6_CMPSTAT_COUT62PS_Msk         (0x2000UL)
#define CCU6_CMPSTAT_COUT63PS_Pos         (14UL)
#define CCU6_CMPSTAT_COUT63PS_Msk         (0x4000UL)
#define CCU6_CMPSTAT_T13IM_Pos            (15UL)
#define CCU6_CMPSTAT_T13IM_Msk            (0x8000UL)

#define CCU6_IEN_ENCC60R_Pos              (0UL)
#define CCU6_IEN_ENCC60R_Msk              (0x1UL)
#define CCU6_IEN_ENCC60F_Pos              (1UL)
#define CCU6_IEN_ENCC60F_Msk              (0x2UL)
#define CCU6_IEN_ENCC61R_Pos              (2UL)
#define CCU6_IEN_ENCC61R_Msk              (0x4UL)
#define CCU6_IEN_ENCC61F_Pos              (3UL)
#define CCU6_IEN_ENCC61F_Msk              (0x8UL)
#define CCU6_IEN_ENCC62R_Pos              (4UL)
#define CCU6_IEN_ENCC62R_Msk              (0x10UL)
#define CCU6_IEN_ENCC62F_Pos              (5UL)
#define CCU6_IEN_ENCC62F_Msk              (0x20UL)
#define CCU6_IEN_ENT12OM_Pos              (6UL)
#define CCU6_IEN_ENT12OM_Msk              (0x40UL)
#define CCU6_IEN_ENT12PM_Pos              (7UL)
#define CCU6_IEN_ENT12PM_Msk              (0x80UL)
#define CCU6_IEN_ENT13CM_Pos              (8UL)
#define CCU6_IEN_ENT13CM_Msk              (0x100UL)
#define CCU6_IEN_ENT13PM_Pos              (9UL)
#define CCU6_IEN_ENT13PM_Msk              (0x200UL)
#define CCU6_IEN_ENTRPF_Pos               (10UL)
#define CCU6_IEN_ENTRPF_Msk               (0x400UL)
#define CCU6_IEN_ENCHE_Pos                (12UL)
#define CCU6_IEN_ENCHE_Msk                (0x1000UL)
#define CCU6_IEN_ENWHE_Pos                (13UL)
#define CCU6_IEN_ENWHE_Msk                (0x2000UL)
#define CCU6_IEN_ENIDLE_Pos               (14UL)
#define CCU6_IEN_ENIDLE_Msk               (0x4000UL)
#define CCU6_IEN_ENSTR_Pos                (15UL)
#define CCU6_IEN_ENSTR_Msk                (0x8000UL)

#define CCU6_INP_INPCC60_Pos              (0UL)
#define CCU6_INP_INPCC60_Msk              (0x3UL)
#define CCU6_INP_INPCC61_Pos              (2UL)
#define CCU6_INP_INPCC61_Msk              (0xcUL)
#define CCU6_INP_INPCC62_Pos              (4UL)
#define CCU6_INP_INPCC62_Msk              (0x30UL)
#define CCU6_INP_INPCHE_Pos               (6UL)
#define CCU6_INP_INPCHE_Msk               (0xc0UL)
#define CCU6_INP_INPERR_Pos               (8UL)
#define CCU6_INP_INPERR_Msk               (0x300UL)
#define CCU6_INP_INPT12_Pos               (10UL)
#define CCU6_INP_INPT12_Msk               (0xc00UL)
#define CCU6_INP_INPT13_Pos               (12UL)
#define CCU6_INP_INPT13_Msk               (0x3000UL)

#define CCU6_IS_ICC60R_Pos                (0UL)
#define CCU6_IS_ICC60R_Msk                (0x1UL)
#define CCU6_IS_ICC61R_Pos                (2UL)
#define CCU6_IS_ICC61R_Msk                (0x4UL)
#define CCU6_IS_ICC62R_Pos                (4UL)
#define CCU6_IS_ICC62R_Msk                (0x10UL)
#define CCU6_IS_ICC60F_Pos                (1UL)
#define CCU6_IS_ICC60F_Msk                (0x2UL)
#define CCU6_IS_ICC61F_Pos                (3UL)
#define CCU6_IS_ICC61F_Msk                (0x8UL)
#define CCU6_IS_ICC62F_Pos                (5UL)
#define CCU6_IS_ICC62F_Msk                (0x20UL)
#define CCU6_IS_T12OM_Pos                 (6UL)
#define CCU6_IS_T12OM_Msk                 (0x40UL)
#define CCU6_IS_T12PM_Pos                 (7UL)
#define CCU6_IS_T12PM_Msk                 (0x80UL)
#define CCU6_IS_T13CM_Pos                 (8UL)
#define CCU6_IS_T13CM_Msk                 (0x100UL)
#define CCU6_IS_T13PM_Pos                 (9UL)
#define CCU6_IS_T13PM_Msk                 (0x200UL)
#define CCU6_IS_TRPF_Pos                  (10UL)
#define CCU6_IS_TRPF_Msk                  (0x400UL)
#define CCU6_IS_TRPS_Pos                  (11UL)
#define CCU6_IS_TRPS_Msk                  (0x800UL)
#define CCU6_IS_CHE_Pos                   (12UL)
#define CCU6_IS_CHE_Msk                   (0x1000UL)
#define CCU6_IS_WHE_Pos                   (13UL)
#define CCU6_IS_WHE_Msk                   (0x2000UL)
#define CCU6_IS_IDLE_Pos                  (14UL)
#define CCU6_IS_IDLE_Msk                  (0x4000UL)
#define CCU6_IS_STR_Pos                   (15UL)
#define CCU6_IS_STR_Msk                   (0x8000UL)

#define CCU6_ISR_RCC60R_Pos               (0UL)
#define CCU6_ISR_RCC60R_Msk               (0x1UL)
#define CCU6_ISR_RCC60F_Pos               (1UL)
#define CCU6_ISR_RCC60F_Msk               (0x2UL)
#define CCU6_ISR_RCC61R_Pos               (2UL)
#define CCU6_ISR_RCC61R_Msk               (0x4UL)
#define CCU6_ISR_RCC61F_Pos               (3UL)
#define CCU6_ISR_RCC61F_Msk               (0x8UL)
#define CCU6_ISR_RCC62R_Pos               (4UL)
#define CCU6_ISR_RCC62R_Msk               (0x10UL)
#define CCU6_ISR_RCC62F_Pos               (5UL)
#define CCU6_ISR_RCC62F_Msk               (0x20UL)
#define CCU6_ISR_RT12OM_Pos               (6UL)
#define CCU6_ISR_RT12OM_Msk               (0x40UL)
#define CCU6_ISR_RT12PM_Pos               (7UL)
#define CCU6_ISR_RT12PM_Msk               (0x80UL)
#define CCU6_ISR_RT13CM_Pos               (8UL)
#define CCU6_ISR_RT13CM_Msk               (0x100UL)
#define CCU6_ISR_RT13PM_Pos               (9UL)
#define CCU6_ISR_RT13PM_Msk               (0x200UL)
#define CCU6_ISR_RTRPF_Pos                (10UL)
#define CCU6_ISR_RTRPF_Msk                (0x400UL)
#define CCU6_ISR_RCHE_Pos                 (12UL)
#define CCU6_ISR_RCHE_Msk                 (0x1000UL)
#define CCU6_ISR_RWHE_Pos                 (13UL)
#define CCU6_ISR_RWHE_Msk                 (0x2000UL)
#define CCU6_ISR_RIDLE_Pos                (14UL)
#define CCU6_ISR_RIDLE_Msk                (0x4000UL)
#define CCU6_ISR_RSTR_Pos                 (15UL)
#define CCU6_ISR_RSTR_Msk                 (0x8000UL)

#define CCU6_ISS_SCC60R_Pos               (0UL)
#define CCU6_ISS_SCC60R_Msk               (0x1UL)
#define CCU6_ISS_SCC60F_Pos               (1UL)
#define CCU6_ISS_SCC60F_Msk               (0x2UL)
#define CCU6_ISS_SCC61R_Pos               (2UL)
#define CCU6_ISS_SCC61R_Msk               (0x4UL)
#define CCU6_ISS_SCC61F_Pos               (3UL)
#define CCU6_ISS_SCC61F_Msk               (0x8UL)
#define CCU6_ISS_SCC62R_Pos               (4UL)
#define CCU6_ISS_SCC62R_Msk               (0x10UL)
#define CCU6_ISS_SCC62F_Pos               (5UL)
#define CCU6_ISS_SCC62F_Msk               (0x20UL)
#define CCU6_ISS_ST12OM_Pos               (6UL)
#define CCU6_ISS_ST12OM_Msk               (0x40UL)
#define CCU6_ISS_ST12PM_Pos               (7UL)
#define CCU6_ISS_ST12PM_Msk               (0x80UL)
#define CCU6_ISS_ST13CM_Pos               (8UL)
#define CCU6_ISS_ST13CM_Msk               (0x100UL)
#define CCU6_ISS_ST13PM_Pos               (9UL)
#define CCU6_ISS_ST13PM_Msk               (0x200UL)
#define CCU6_ISS_STRPF_Pos                (10UL)
#define CCU6_ISS_STRPF_Msk                (0x400UL)
#define CCU6_ISS_SWHC_Pos                 (11UL)
#define CCU6_ISS_SWHC_Msk                 (0x800UL)
#define CCU6_ISS_SCHE_Pos                 (12UL)
#define CCU6_ISS_SCHE_Msk                 (0x1000UL)
#define CCU6_ISS_SWHE_Pos                 (13UL)
#define CCU6_ISS_SWHE_Msk                 (0x2000UL)
#define CCU6_ISS_SIDLE_Pos                (14UL)
#define CCU6_ISS_SIDLE_Msk                (0x4000UL)
#define CCU6_ISS_SSTR_Pos                 (15UL)
#define CCU6_ISS_SSTR_Msk                 (0x8000UL)

#define CCU6_MCMCTR_SWSEL_Pos             (0UL)
#define CCU6_MCMCTR_SWSEL_Msk             (0x7UL)
#define CCU6_MCMCTR_SWSYN_Pos             (4UL)
#define CCU6_MCMCTR_SWSYN_Msk             (0x30UL)
#define CCU6_MCMCTR_STE12U_Pos            (8UL)
#define CCU6_MCMCTR_STE12U_Msk            (0x100UL)
#define CCU6_MCMCTR_STE12D_Pos            (9UL)
#define CCU6_MCMCTR_STE12D_Msk            (0x200UL)
#define CCU6_MCMCTR_STE13U_Pos            (10UL)
#define CCU6_MCMCTR_STE13U_Msk            (0x400UL)

#define CCU6_MCMOUT_MCMP_Pos              (0UL)
#define CCU6_MCMOUT_MCMP_Msk              (0x3fUL)
#define CCU6_MCMOUT_R_Pos                 (6UL)
#define CCU6_MCMOUT_R_Msk                 (0x40UL)
#define CCU6_MCMOUT_EXPH_Pos              (8UL)
#define CCU6_MCMOUT_EXPH_Msk              (0x700UL)
#define CCU6_MCMOUT_CURH_Pos              (11UL)
#define CCU6_MCMOUT_CURH_Msk              (0x3800UL)

#define CCU6_MCMOUTS_MCMPS_Pos            (0UL)
#define CCU6_MCMOUTS_MCMPS_Msk            (0x3fUL)
#define CCU6_MCMOUTS_STRMCM_Pos           (7UL)
#define CCU6_MCMOUTS_STRMCM_Msk           (0x80UL)
#define CCU6_MCMOUTS_EXPHS_Pos            (8UL)
#define CCU6_MCMOUTS_EXPHS_Msk            (0x700UL)
#define CCU6_MCMOUTS_CURHS_Pos            (11UL)
#define CCU6_MCMOUTS_CURHS_Msk            (0x3800UL)
#define CCU6_MCMOUTS_STRHP_Pos            (15UL)
#define CCU6_MCMOUTS_STRHP_Msk            (0x8000UL)

#define CCU6_MODCTR_T12MODEN_Pos          (0UL)
#define CCU6_MODCTR_T12MODEN_Msk          (0x3fUL)
#define CCU6_MODCTR_MCMEN_Pos             (7UL)
#define CCU6_MODCTR_MCMEN_Msk             (0x80UL)
#define CCU6_MODCTR_T13MODEN_Pos          (8UL)
#define CCU6_MODCTR_T13MODEN_Msk          (0x3f00UL)
#define CCU6_MODCTR_ECT13O_Pos            (15UL)
#define CCU6_MODCTR_ECT13O_Msk            (0x8000UL)

#define CCU6_PISEL0_ISCC60_Pos            (0UL)
#define CCU6_PISEL0_ISCC60_Msk            (0x3UL)
#define CCU6_PISEL0_ISCC61_Pos            (2UL)
#define CCU6_PISEL0_ISCC61_Msk            (0xcUL)
#define CCU6_PISEL0_ISCC62_Pos            (4UL)
#define CCU6_PISEL0_ISCC62_Msk            (0x30UL)
#define CCU6_PISEL0_ISTRP_Pos             (6UL)
#define CCU6_PISEL0_ISTRP_Msk             (0xc0UL)
#define CCU6_PISEL0_ISPOS0_Pos            (8UL)
#define CCU6_PISEL0_ISPOS0_Msk            (0x300UL)
#define CCU6_PISEL0_ISPOS1_Pos            (10UL)
#define CCU6_PISEL0_ISPOS1_Msk            (0xc00UL)
#define CCU6_PISEL0_ISPOS2_Pos            (12UL)
#define CCU6_PISEL0_ISPOS2_Msk            (0x3000UL)
#define CCU6_PISEL0_IST12HR_Pos           (14UL)
#define CCU6_PISEL0_IST12HR_Msk           (0xc000UL)

#define CCU6_PISEL2_IST13HR_Pos           (0UL)
#define CCU6_PISEL2_IST13HR_Msk           (0x3UL)
#define CCU6_PISEL2_ISCNT12_Pos           (2UL)
#define CCU6_PISEL2_ISCNT12_Msk           (0xcUL)
#define CCU6_PISEL2_ISCNT13_Pos           (4UL)
#define CCU6_PISEL2_ISCNT13_Msk           (0x30UL)
#define CCU6_PISEL2_T12EXT_Pos            (6UL)
#define CCU6_PISEL2_T12EXT_Msk            (0x40UL)
#define CCU6_PISEL2_T13EXT_Pos            (7UL)
#define CCU6_PISEL2_T13EXT_Msk            (0x80UL)

#define CCU6_PSLR_PSL_Pos                 (0UL)
#define CCU6_PSLR_PSL_Msk                 (0x3fUL)
#define CCU6_PSLR_PSL63_Pos               (7UL)
#define CCU6_PSLR_PSL63_Msk               (0x80UL)

#define CCU6_T12_T12CV_Pos                (0UL)
#define CCU6_T12_T12CV_Msk                (0xffffUL)

#define CCU6_T12DTC_DTM_Pos               (0UL)
#define CCU6_T12DTC_DTM_Msk               (0xffUL)
#define CCU6_T12DTC_DTE0_Pos              (8UL)
#define CCU6_T12DTC_DTE0_Msk              (0x100UL)
#define CCU6_T12DTC_DTE1_Pos              (9UL)
#define CCU6_T12DTC_DTE1_Msk              (0x200UL)
#define CCU6_T12DTC_DTE2_Pos              (10UL)
#define CCU6_T12DTC_DTE2_Msk              (0x400UL)
#define CCU6_T12DTC_DTR0_Pos              (12UL)
#define CCU6_T12DTC_DTR0_Msk              (0x1000UL)
#define CCU6_T12DTC_DTR1_Pos              (13UL)
#define CCU6_T12DTC_DTR1_Msk              (0x2000UL)
#define CCU6_T12DTC_DTR2_Pos              (14UL)
#define CCU6_T12DTC_DTR2_Msk              (0x4000UL)

#define CCU6_T12MSEL_MSEL60_Pos           (0UL)
#define CCU6_T12MSEL_MSEL60_Msk           (0xfUL)
#define CCU6_T12MSEL_MSEL61_Pos           (4UL)
#define CCU6_T12MSEL_MSEL61_Msk           (0xf0UL)
#define CCU6_T12MSEL_MSEL62_Pos           (8UL)
#define CCU6_T12MSEL_MSEL62_Msk           (0xf00UL)
#define CCU6_T12MSEL_HSYNC_Pos            (12UL)
#define CCU6_T12MSEL_HSYNC_Msk            (0x7000UL)
#define CCU6_T12MSEL_DBYP_Pos             (15UL)
#define CCU6_T12MSEL_DBYP_Msk             (0x8000UL)

#define CCU6_T12PR_T12PV_Pos              (0UL)
#define CCU6_T12PR_T12PV_Msk              (0xffffUL)

#define CCU6_T13_T13CV_Pos                (0UL)
#define CCU6_T13_T13CV_Msk                (0xffffUL)

#define CCU6_T13PR_T13PV_Pos              (0UL)
#define CCU6_T13PR_T13PV_Msk              (0xffffUL)

#define CCU6_TCTR0_T12CLK_Pos             (0UL)
#define CCU6_TCTR0_T12CLK_Msk             (0x7UL)
#define CCU6_TCTR0_T12PRE_Pos             (3UL)
#define CCU6_TCTR0_T12PRE_Msk             (0x8UL)
#define CCU6_TCTR0_T12R_Pos               (4UL)
#define CCU6_TCTR0_T12R_Msk               (0x10UL)
#define CCU6_TCTR0_STE12_Pos              (5UL)
#define CCU6_TCTR0_STE12_Msk              (0x20UL)
#define CCU6_TCTR0_CDIR_Pos               (6UL)
#define CCU6_TCTR0_CDIR_Msk               (0x40UL)
#define CCU6_TCTR0_CTM_Pos                (7UL)
#define CCU6_TCTR0_CTM_Msk                (0x80UL)
#define CCU6_TCTR0_T13CLK_Pos             (8UL)
#define CCU6_TCTR0_T13CLK_Msk             (0x700UL)
#define CCU6_TCTR0_T13PRE_Pos             (11UL)
#define CCU6_TCTR0_T13PRE_Msk             (0x800UL)
#define CCU6_TCTR0_T13R_Pos               (12UL)
#define CCU6_TCTR0_T13R_Msk               (0x1000UL)
#define CCU6_TCTR0_STE13_Pos              (13UL)
#define CCU6_TCTR0_STE13_Msk              (0x2000UL)

#define CCU6_TCTR2_T12SSC_Pos             (0UL)
#define CCU6_TCTR2_T12SSC_Msk             (0x1UL)
#define CCU6_TCTR2_T13SSC_Pos             (1UL)
#define CCU6_TCTR2_T13SSC_Msk             (0x2UL)
#define CCU6_TCTR2_T13TEC_Pos             (2UL)
#define CCU6_TCTR2_T13TEC_Msk             (0x1cUL)
#define CCU6_TCTR2_T13TED_Pos             (5UL)
#define CCU6_TCTR2_T13TED_Msk             (0x60UL)
#define CCU6_TCTR2_T12RSEL_Pos            (8UL)
#define CCU6_TCTR2_T12RSEL_Msk            (0x300UL)
#define CCU6_TCTR2_T13RSEL_Pos            (10UL)
#define CCU6_TCTR2_T13RSEL_Msk            (0xc00UL)

#define CCU6_TCTR4_T12RR_Pos              (0UL)
#define CCU6_TCTR4_T12RR_Msk              (0x1UL)
#define CCU6_TCTR4_T12RS_Pos              (1UL)
#define CCU6_TCTR4_T12RS_Msk              (0x2UL)
#define CCU6_TCTR4_T12RES_Pos             (2UL)
#define CCU6_TCTR4_T12RES_Msk             (0x4UL)
#define CCU6_TCTR4_DTRES_Pos              (3UL)
#define CCU6_TCTR4_DTRES_Msk              (0x8UL)
#define CCU6_TCTR4_T12CNT_Pos             (5UL)
#define CCU6_TCTR4_T12CNT_Msk             (0x20UL)
#define CCU6_TCTR4_T12STR_Pos             (6UL)
#define CCU6_TCTR4_T12STR_Msk             (0x40UL)
#define CCU6_TCTR4_T12STD_Pos             (7UL)
#define CCU6_TCTR4_T12STD_Msk             (0x80UL)
#define CCU6_TCTR4_T13RR_Pos              (8UL)
#define CCU6_TCTR4_T13RR_Msk              (0x100UL)
#define CCU6_TCTR4_T13RS_Pos              (9UL)
#define CCU6_TCTR4_T13RS_Msk              (0x200UL)
#define CCU6_TCTR4_T13RES_Pos             (10UL)
#define CCU6_TCTR4_T13RES_Msk             (0x400UL)
#define CCU6_TCTR4_T13CNT_Pos             (13UL)
#define CCU6_TCTR4_T13CNT_Msk             (0x2000UL)
#define CCU6_TCTR4_T13STR_Pos             (14UL)
#define CCU6_TCTR4_T13STR_Msk             (0x4000UL)
#define CCU6_TCTR4_T13STD_Pos             (15UL)
#define CCU6_TCTR4_T13STD_Msk             (0x8000UL)

#define CCU6_TRPCTR_TRPM0_Pos             (0UL)
#define CCU6_TRPCTR_TRPM0_Msk             (0x1UL)
#define CCU6_TRPCTR_TRPM1_Pos             (1UL)
#define CCU6_TRPCTR_TRPM1_Msk             (0x2UL)
#define CCU6_TRPCTR_TRPM2_Pos             (2UL)
#define CCU6_TRPCTR_TRPM2_Msk             (0x4UL)
#define CCU6_TRPCTR_TRPEN_Pos             (8UL)
#define CCU6_TRPCTR_TRPEN_Msk             (0x3f00UL)
#define CCU6_TRPCTR_TRPEN13_Pos           (14UL)
#define CCU6_TRPCTR_TRPEN13_Msk           (0x4000UL)
#define CCU6_TRPCTR_TRPPEN_Pos            (15UL)
#define CCU6_TRPCTR_TRPPEN_Msk            (0x8000UL)

#define CPU_AFSR_CP0_Pos                  (0UL)
#define CPU_AFSR_CP0_Msk                  (0x3UL)
#define CPU_AFSR_CP1_Pos                  (2UL)
#define CPU_AFSR_CP1_Msk                  (0xcUL)
#define CPU_AFSR_CP2_Pos                  (4UL)
#define CPU_AFSR_CP2_Msk                  (0x30UL)
#define CPU_AFSR_CP3_Pos                  (6UL)
#define CPU_AFSR_CP3_Msk                  (0xc0UL)
#define CPU_AFSR_CP4_Pos                  (8UL)
#define CPU_AFSR_CP4_Msk                  (0x300UL)
#define CPU_AFSR_CP5_Pos                  (10UL)
#define CPU_AFSR_CP5_Msk                  (0xc00UL)
#define CPU_AFSR_CP6_Pos                  (12UL)
#define CPU_AFSR_CP6_Msk                  (0x3000UL)
#define CPU_AFSR_CP7_Pos                  (14UL)
#define CPU_AFSR_CP7_Msk                  (0xc000UL)
#define CPU_AFSR_CP10_Pos                 (20UL)
#define CPU_AFSR_CP10_Msk                 (0x300000UL)
#define CPU_AFSR_CP11_Pos                 (22UL)
#define CPU_AFSR_CP11_Msk                 (0xc00000UL)

#define CPU_AIRCR_VECTKEY_Pos             (16UL)
#define CPU_AIRCR_VECTKEY_Msk             (0xffff0000UL)
#define CPU_AIRCR_ENDIANNESS_Pos          (15UL)
#define CPU_AIRCR_ENDIANNESS_Msk          (0x8000UL)
#define CPU_AIRCR_PRIGROUP_Pos            (8UL)
#define CPU_AIRCR_PRIGROUP_Msk            (0x700UL)
#define CPU_AIRCR_SYSRESETREQ_Pos         (2UL)
#define CPU_AIRCR_SYSRESETREQ_Msk         (0x4UL)
#define CPU_AIRCR_VECTCLRACTIVE_Pos       (1UL)
#define CPU_AIRCR_VECTCLRACTIVE_Msk       (0x2UL)
#define CPU_AIRCR_VECTRESET_Pos           (0UL)
#define CPU_AIRCR_VECTRESET_Msk           (0x1UL)

#define CPU_BFAR_ADDRESS_Pos              (0UL)
#define CPU_BFAR_ADDRESS_Msk              (0xffffffffUL)

#define CPU_CCR_STKALIGN_Pos              (9UL)
#define CPU_CCR_STKALIGN_Msk              (0x200UL)
#define CPU_CCR_BFHFMIGN_Pos              (8UL)
#define CPU_CCR_BFHFMIGN_Msk              (0x100UL)
#define CPU_CCR_DIV_0_TRP_Pos             (4UL)
#define CPU_CCR_DIV_0_TRP_Msk             (0x10UL)
#define CPU_CCR_UNALIGN_TRP_Pos           (3UL)
#define CPU_CCR_UNALIGN_TRP_Msk           (0x8UL)
#define CPU_CCR_USERSETMPEND_Pos          (1UL)
#define CPU_CCR_USERSETMPEND_Msk          (0x2UL)
#define CPU_CCR_NONBASETHRDENA_Pos        (0UL)
#define CPU_CCR_NONBASETHRDENA_Msk        (0x1UL)

#define CPU_CFSR_DIVBYZERO_Pos            (25UL)
#define CPU_CFSR_DIVBYZERO_Msk            (0x2000000UL)
#define CPU_CFSR_UNALIGNED_Pos            (24UL)
#define CPU_CFSR_UNALIGNED_Msk            (0x1000000UL)
#define CPU_CFSR_NOCP_Pos                 (19UL)
#define CPU_CFSR_NOCP_Msk                 (0x80000UL)
#define CPU_CFSR_INVPC_Pos                (18UL)
#define CPU_CFSR_INVPC_Msk                (0x40000UL)
#define CPU_CFSR_INVSTATE_Pos             (17UL)
#define CPU_CFSR_INVSTATE_Msk             (0x20000UL)
#define CPU_CFSR_UNDEFINSTR_Pos           (16UL)
#define CPU_CFSR_UNDEFINSTR_Msk           (0x10000UL)
#define CPU_CFSR_BFARVALID_Pos            (15UL)
#define CPU_CFSR_BFARVALID_Msk            (0x8000UL)
#define CPU_CFSR_STKERR_Pos               (12UL)
#define CPU_CFSR_STKERR_Msk               (0x1000UL)
#define CPU_CFSR_UNSTKERR_Pos             (11UL)
#define CPU_CFSR_UNSTKERR_Msk             (0x800UL)
#define CPU_CFSR_IMPRECISERR_Pos          (10UL)
#define CPU_CFSR_IMPRECISERR_Msk          (0x400UL)
#define CPU_CFSR_PRECISERR_Pos            (9UL)
#define CPU_CFSR_PRECISERR_Msk            (0x200UL)
#define CPU_CFSR_IBUSERR_Pos              (8UL)
#define CPU_CFSR_IBUSERR_Msk              (0x100UL)
#define CPU_CFSR_MMARVALID_Pos            (7UL)
#define CPU_CFSR_MMARVALID_Msk            (0x80UL)
#define CPU_CFSR_MSTERR_Pos               (4UL)
#define CPU_CFSR_MSTERR_Msk               (0x10UL)
#define CPU_CFSR_MUNSTKERR_Pos            (3UL)
#define CPU_CFSR_MUNSTKERR_Msk            (0x8UL)
#define CPU_CFSR_DACCVIOL_Pos             (1UL)
#define CPU_CFSR_DACCVIOL_Msk             (0x2UL)
#define CPU_CFSR_IACCVIOL_Pos             (0UL)
#define CPU_CFSR_IACCVIOL_Msk             (0x1UL)

#define CPU_CPUID_IMPLEMENTER_Pos         (24UL)
#define CPU_CPUID_IMPLEMENTER_Msk         (0xff000000UL)
#define CPU_CPUID_VARIANT_Pos             (20UL)
#define CPU_CPUID_VARIANT_Msk             (0xf00000UL)
#define CPU_CPUID_ARCHITECTURE_Pos        (16UL)
#define CPU_CPUID_ARCHITECTURE_Msk        (0xf0000UL)
#define CPU_CPUID_PARTNO_Pos              (4UL)
#define CPU_CPUID_PARTNO_Msk              (0xfff0UL)
#define CPU_CPUID_REVISION_Pos            (0UL)
#define CPU_CPUID_REVISION_Msk            (0xfUL)

#define CPU_DFSR_EXTERNAL_Pos             (4UL)
#define CPU_DFSR_EXTERNAL_Msk             (0x10UL)
#define CPU_DFSR_VCATCH_Pos               (3UL)
#define CPU_DFSR_VCATCH_Msk               (0x8UL)
#define CPU_DFSR_DWTTRAP_Pos              (2UL)
#define CPU_DFSR_DWTTRAP_Msk              (0x4UL)
#define CPU_DFSR_BKPT_Pos                 (1UL)
#define CPU_DFSR_BKPT_Msk                 (0x2UL)
#define CPU_DFSR_HALTED_Pos               (0UL)
#define CPU_DFSR_HALTED_Msk               (0x1UL)

#define CPU_HFSR_DEBUGEVT_Pos             (31UL)
#define CPU_HFSR_DEBUGEVT_Msk             (0x80000000UL)
#define CPU_HFSR_FORCED_Pos               (30UL)
#define CPU_HFSR_FORCED_Msk               (0x40000000UL)
#define CPU_HFSR_VECTTBL_Pos              (1UL)
#define CPU_HFSR_VECTTBL_Msk              (0x2UL)

#define CPU_ICSR_NMIPENDSET_Pos           (31UL)
#define CPU_ICSR_NMIPENDSET_Msk           (0x80000000UL)
#define CPU_ICSR_PENDSVSET_Pos            (28UL)
#define CPU_ICSR_PENDSVSET_Msk            (0x10000000UL)
#define CPU_ICSR_PENDSVCLR_Pos            (27UL)
#define CPU_ICSR_PENDSVCLR_Msk            (0x8000000UL)
#define CPU_ICSR_PENDSTSET_Pos            (26UL)
#define CPU_ICSR_PENDSTSET_Msk            (0x4000000UL)
#define CPU_ICSR_PENDSTCLR_Pos            (25UL)
#define CPU_ICSR_PENDSTCLR_Msk            (0x2000000UL)
#define CPU_ICSR_ISRPREEMPT_Pos           (23UL)
#define CPU_ICSR_ISRPREEMPT_Msk           (0x800000UL)
#define CPU_ICSR_ISRPENDING_Pos           (22UL)
#define CPU_ICSR_ISRPENDING_Msk           (0x400000UL)
#define CPU_ICSR_VECTPENDING_Pos          (12UL)
#define CPU_ICSR_VECTPENDING_Msk          (0x1ff000UL)
#define CPU_ICSR_RETTOBASE_Pos            (11UL)
#define CPU_ICSR_RETTOBASE_Msk            (0x800UL)
#define CPU_ICSR_VECTACTIVE_Pos           (0UL)
#define CPU_ICSR_VECTACTIVE_Msk           (0x1ffUL)

#define CPU_ICT_INTLINESNUM_Pos           (0UL)
#define CPU_ICT_INTLINESNUM_Msk           (0x1fUL)

#define CPU_MMFAR_ADDRESS_Pos             (0UL)
#define CPU_MMFAR_ADDRESS_Msk             (0xffffffffUL)

#define CPU_NVIC_IABR0_Int_DMA_Pos        (15UL)
#define CPU_NVIC_IABR0_Int_DMA_Msk        (0x8000UL)
#define CPU_NVIC_IABR0_Int_BDRV_Pos       (14UL)
#define CPU_NVIC_IABR0_Int_BDRV_Msk       (0x4000UL)
#define CPU_NVIC_IABR0_Int_EXINT1_Pos     (13UL)
#define CPU_NVIC_IABR0_Int_EXINT1_Msk     (0x2000UL)
#define CPU_NVIC_IABR0_Int_EXINT0_Pos     (12UL)
#define CPU_NVIC_IABR0_Int_EXINT0_Msk     (0x1000UL)
#define CPU_NVIC_IABR0_Int_UART2_Pos      (11UL)
#define CPU_NVIC_IABR0_Int_UART2_Msk      (0x800UL)
#define CPU_NVIC_IABR0_Int_UART1_Pos      (10UL)
#define CPU_NVIC_IABR0_Int_UART1_Msk      (0x400UL)
#define CPU_NVIC_IABR0_Int_SSC2_Pos       (9UL)
#define CPU_NVIC_IABR0_Int_SSC2_Msk       (0x200UL)
#define CPU_NVIC_IABR0_Int_SSC1_Pos       (8UL)
#define CPU_NVIC_IABR0_Int_SSC1_Msk       (0x100UL)
#define CPU_NVIC_IABR0_Int_CCU6SR3_Pos    (7UL)
#define CPU_NVIC_IABR0_Int_CCU6SR3_Msk    (0x80UL)
#define CPU_NVIC_IABR0_Int_CCU6SR2_Pos    (6UL)
#define CPU_NVIC_IABR0_Int_CCU6SR2_Msk    (0x40UL)
#define CPU_NVIC_IABR0_Int_CCU6SR1_Pos    (5UL)
#define CPU_NVIC_IABR0_Int_CCU6SR1_Msk    (0x20UL)
#define CPU_NVIC_IABR0_Int_CCU6SR0_Pos    (4UL)
#define CPU_NVIC_IABR0_Int_CCU6SR0_Msk    (0x10UL)
#define CPU_NVIC_IABR0_Int_ADC1_Pos       (3UL)
#define CPU_NVIC_IABR0_Int_ADC1_Msk       (0x8UL)
#define CPU_NVIC_IABR0_Int_ADC2_Pos       (2UL)
#define CPU_NVIC_IABR0_Int_ADC2_Msk       (0x4UL)
#define CPU_NVIC_IABR0_Int_GPT2_Pos       (1UL)
#define CPU_NVIC_IABR0_Int_GPT2_Msk       (0x2UL)
#define CPU_NVIC_IABR0_Int_GPT1_Pos       (0UL)
#define CPU_NVIC_IABR0_Int_GPT1_Msk       (0x1UL)

#define CPU_NVIC_ICER0_Int_DMA_Pos        (15UL)
#define CPU_NVIC_ICER0_Int_DMA_Msk        (0x8000UL)
#define CPU_NVIC_ICER0_Int_BDRV_Pos       (14UL)
#define CPU_NVIC_ICER0_Int_BDRV_Msk       (0x4000UL)
#define CPU_NVIC_ICER0_Int_EXINT1_Pos     (13UL)
#define CPU_NVIC_ICER0_Int_EXINT1_Msk     (0x2000UL)
#define CPU_NVIC_ICER0_Int_EXINT0_Pos     (12UL)
#define CPU_NVIC_ICER0_Int_EXINT0_Msk     (0x1000UL)
#define CPU_NVIC_ICER0_Int_UART2_Pos      (11UL)
#define CPU_NVIC_ICER0_Int_UART2_Msk      (0x800UL)
#define CPU_NVIC_ICER0_Int_UART1_Pos      (10UL)
#define CPU_NVIC_ICER0_Int_UART1_Msk      (0x400UL)
#define CPU_NVIC_ICER0_Int_SSC2_Pos       (9UL)
#define CPU_NVIC_ICER0_Int_SSC2_Msk       (0x200UL)
#define CPU_NVIC_ICER0_Int_SSC1_Pos       (8UL)
#define CPU_NVIC_ICER0_Int_SSC1_Msk       (0x100UL)
#define CPU_NVIC_ICER0_Int_CCU6SR3_Pos    (7UL)
#define CPU_NVIC_ICER0_Int_CCU6SR3_Msk    (0x80UL)
#define CPU_NVIC_ICER0_Int_CCU6SR2_Pos    (6UL)
#define CPU_NVIC_ICER0_Int_CCU6SR2_Msk    (0x40UL)
#define CPU_NVIC_ICER0_Int_CCU6SR1_Pos    (5UL)
#define CPU_NVIC_ICER0_Int_CCU6SR1_Msk    (0x20UL)
#define CPU_NVIC_ICER0_Int_CCU6SR0_Pos    (4UL)
#define CPU_NVIC_ICER0_Int_CCU6SR0_Msk    (0x10UL)
#define CPU_NVIC_ICER0_Int_ADC1_Pos       (3UL)
#define CPU_NVIC_ICER0_Int_ADC1_Msk       (0x8UL)
#define CPU_NVIC_ICER0_Int_ADC2_Pos       (2UL)
#define CPU_NVIC_ICER0_Int_ADC2_Msk       (0x4UL)
#define CPU_NVIC_ICER0_Int_GPT2_Pos       (1UL)
#define CPU_NVIC_ICER0_Int_GPT2_Msk       (0x2UL)
#define CPU_NVIC_ICER0_Int_GPT1_Pos       (0UL)
#define CPU_NVIC_ICER0_Int_GPT1_Msk       (0x1UL)

#define CPU_NVIC_ICPR0_Int_DMA_Pos        (15UL)
#define CPU_NVIC_ICPR0_Int_DMA_Msk        (0x8000UL)
#define CPU_NVIC_ICPR0_Int_BDRV_Pos       (14UL)
#define CPU_NVIC_ICPR0_Int_BDRV_Msk       (0x4000UL)
#define CPU_NVIC_ICPR0_Int_EXINT1_Pos     (13UL)
#define CPU_NVIC_ICPR0_Int_EXINT1_Msk     (0x2000UL)
#define CPU_NVIC_ICPR0_Int_EXINT0_Pos     (12UL)
#define CPU_NVIC_ICPR0_Int_EXINT0_Msk     (0x1000UL)
#define CPU_NVIC_ICPR0_Int_UART2_Pos      (11UL)
#define CPU_NVIC_ICPR0_Int_UART2_Msk      (0x800UL)
#define CPU_NVIC_ICPR0_Int_UART1_Pos      (10UL)
#define CPU_NVIC_ICPR0_Int_UART1_Msk      (0x400UL)
#define CPU_NVIC_ICPR0_Int_SSC2_Pos       (9UL)
#define CPU_NVIC_ICPR0_Int_SSC2_Msk       (0x200UL)
#define CPU_NVIC_ICPR0_Int_SSC1_Pos       (8UL)
#define CPU_NVIC_ICPR0_Int_SSC1_Msk       (0x100UL)
#define CPU_NVIC_ICPR0_Int_CCU6SR3_Pos    (7UL)
#define CPU_NVIC_ICPR0_Int_CCU6SR3_Msk    (0x80UL)
#define CPU_NVIC_ICPR0_Int_CCU6SR2_Pos    (6UL)
#define CPU_NVIC_ICPR0_Int_CCU6SR2_Msk    (0x40UL)
#define CPU_NVIC_ICPR0_Int_CCU6SR1_Pos    (5UL)
#define CPU_NVIC_ICPR0_Int_CCU6SR1_Msk    (0x20UL)
#define CPU_NVIC_ICPR0_Int_CCU6SR0_Pos    (4UL)
#define CPU_NVIC_ICPR0_Int_CCU6SR0_Msk    (0x10UL)
#define CPU_NVIC_ICPR0_Int_ADC1_Pos       (3UL)
#define CPU_NVIC_ICPR0_Int_ADC1_Msk       (0x8UL)
#define CPU_NVIC_ICPR0_Int_ADC2_Pos       (2UL)
#define CPU_NVIC_ICPR0_Int_ADC2_Msk       (0x4UL)
#define CPU_NVIC_ICPR0_Int_GPT2_Pos       (1UL)
#define CPU_NVIC_ICPR0_Int_GPT2_Msk       (0x2UL)
#define CPU_NVIC_ICPR0_Int_GPT1_Pos       (0UL)
#define CPU_NVIC_ICPR0_Int_GPT1_Msk       (0x1UL)

#define CPU_NVIC_IPR0_PRI_ADC1_Pos        (24UL)
#define CPU_NVIC_IPR0_PRI_ADC1_Msk        (0xff000000UL)
#define CPU_NVIC_IPR0_PRI_ADC2_Pos        (16UL)
#define CPU_NVIC_IPR0_PRI_ADC2_Msk        (0xff0000UL)
#define CPU_NVIC_IPR0_PRI_GPT2_Pos        (8UL)
#define CPU_NVIC_IPR0_PRI_GPT2_Msk        (0xff00UL)
#define CPU_NVIC_IPR0_PRI_GPT1_Pos        (0UL)
#define CPU_NVIC_IPR0_PRI_GPT1_Msk        (0xffUL)

#define CPU_NVIC_IPR1_PRI_CCU6SR3_Pos     (24UL)
#define CPU_NVIC_IPR1_PRI_CCU6SR3_Msk     (0xff000000UL)
#define CPU_NVIC_IPR1_PRI_CCU6SR2_Pos     (16UL)
#define CPU_NVIC_IPR1_PRI_CCU6SR2_Msk     (0xff0000UL)
#define CPU_NVIC_IPR1_PRI_CCU6SR1_Pos     (8UL)
#define CPU_NVIC_IPR1_PRI_CCU6SR1_Msk     (0xff00UL)
#define CPU_NVIC_IPR1_PRI_CCU6SR0_Pos     (0UL)
#define CPU_NVIC_IPR1_PRI_CCU6SR0_Msk     (0xffUL)

#define CPU_NVIC_IPR2_PRI_UART2_Pos       (24UL)
#define CPU_NVIC_IPR2_PRI_UART2_Msk       (0xff000000UL)
#define CPU_NVIC_IPR2_PRI_UART1_Pos       (16UL)
#define CPU_NVIC_IPR2_PRI_UART1_Msk       (0xff0000UL)
#define CPU_NVIC_IPR2_PRI_SSC2_Pos        (8UL)
#define CPU_NVIC_IPR2_PRI_SSC2_Msk        (0xff00UL)
#define CPU_NVIC_IPR2_PRI_SSC1_Pos        (0UL)
#define CPU_NVIC_IPR2_PRI_SSC1_Msk        (0xffUL)

#define CPU_NVIC_IPR3_PRI_DMA_Pos         (24UL)
#define CPU_NVIC_IPR3_PRI_DMA_Msk         (0xff000000UL)
#define CPU_NVIC_IPR3_PRI_BDRV_Pos        (16UL)
#define CPU_NVIC_IPR3_PRI_BDRV_Msk        (0xff0000UL)
#define CPU_NVIC_IPR3_PRI_EXINT1_Pos      (8UL)
#define CPU_NVIC_IPR3_PRI_EXINT1_Msk      (0xff00UL)
#define CPU_NVIC_IPR3_PRI_EXINT0_Pos      (0UL)
#define CPU_NVIC_IPR3_PRI_EXINT0_Msk      (0xffUL)

#define CPU_NVIC_ISER0_Int_DMA_Pos        (15UL)
#define CPU_NVIC_ISER0_Int_DMA_Msk        (0x8000UL)
#define CPU_NVIC_ISER0_Int_BDRV_Pos       (14UL)
#define CPU_NVIC_ISER0_Int_BDRV_Msk       (0x4000UL)
#define CPU_NVIC_ISER0_Int_EXINT1_Pos     (13UL)
#define CPU_NVIC_ISER0_Int_EXINT1_Msk     (0x2000UL)
#define CPU_NVIC_ISER0_Int_EXINT0_Pos     (12UL)
#define CPU_NVIC_ISER0_Int_EXINT0_Msk     (0x1000UL)
#define CPU_NVIC_ISER0_Int_UART2_Pos      (11UL)
#define CPU_NVIC_ISER0_Int_UART2_Msk      (0x800UL)
#define CPU_NVIC_ISER0_Int_UART1_Pos      (10UL)
#define CPU_NVIC_ISER0_Int_UART1_Msk      (0x400UL)
#define CPU_NVIC_ISER0_Int_SSC2_Pos       (9UL)
#define CPU_NVIC_ISER0_Int_SSC2_Msk       (0x200UL)
#define CPU_NVIC_ISER0_Int_SSC1_Pos       (8UL)
#define CPU_NVIC_ISER0_Int_SSC1_Msk       (0x100UL)
#define CPU_NVIC_ISER0_Int_CCU6SR3_Pos    (7UL)
#define CPU_NVIC_ISER0_Int_CCU6SR3_Msk    (0x80UL)
#define CPU_NVIC_ISER0_Int_CCU6SR2_Pos    (6UL)
#define CPU_NVIC_ISER0_Int_CCU6SR2_Msk    (0x40UL)
#define CPU_NVIC_ISER0_Int_CCU6SR1_Pos    (5UL)
#define CPU_NVIC_ISER0_Int_CCU6SR1_Msk    (0x20UL)
#define CPU_NVIC_ISER0_Int_CCU6SR0_Pos    (4UL)
#define CPU_NVIC_ISER0_Int_CCU6SR0_Msk    (0x10UL)
#define CPU_NVIC_ISER0_Int_ADC1_Pos       (3UL)
#define CPU_NVIC_ISER0_Int_ADC1_Msk       (0x8UL)
#define CPU_NVIC_ISER0_Int_ADC2_Pos       (2UL)
#define CPU_NVIC_ISER0_Int_ADC2_Msk       (0x4UL)
#define CPU_NVIC_ISER0_Int_GPT2_Pos       (1UL)
#define CPU_NVIC_ISER0_Int_GPT2_Msk       (0x2UL)
#define CPU_NVIC_ISER0_Int_GPT1_Pos       (0UL)
#define CPU_NVIC_ISER0_Int_GPT1_Msk       (0x1UL)

#define CPU_NVIC_ISPR0_Int_DMA_Pos        (15UL)
#define CPU_NVIC_ISPR0_Int_DMA_Msk        (0x8000UL)
#define CPU_NVIC_ISPR0_Int_BDRV_Pos       (14UL)
#define CPU_NVIC_ISPR0_Int_BDRV_Msk       (0x4000UL)
#define CPU_NVIC_ISPR0_Int_EXINT1_Pos     (13UL)
#define CPU_NVIC_ISPR0_Int_EXINT1_Msk     (0x2000UL)
#define CPU_NVIC_ISPR0_Int_EXINT0_Pos     (12UL)
#define CPU_NVIC_ISPR0_Int_EXINT0_Msk     (0x1000UL)
#define CPU_NVIC_ISPR0_Int_UART2_Pos      (11UL)
#define CPU_NVIC_ISPR0_Int_UART2_Msk      (0x800UL)
#define CPU_NVIC_ISPR0_Int_UART1_Pos      (10UL)
#define CPU_NVIC_ISPR0_Int_UART1_Msk      (0x400UL)
#define CPU_NVIC_ISPR0_Int_SSC2_Pos       (9UL)
#define CPU_NVIC_ISPR0_Int_SSC2_Msk       (0x200UL)
#define CPU_NVIC_ISPR0_Int_SSC1_Pos       (8UL)
#define CPU_NVIC_ISPR0_Int_SSC1_Msk       (0x100UL)
#define CPU_NVIC_ISPR0_Int_CCU6SR3_Pos    (7UL)
#define CPU_NVIC_ISPR0_Int_CCU6SR3_Msk    (0x80UL)
#define CPU_NVIC_ISPR0_Int_CCU6SR2_Pos    (6UL)
#define CPU_NVIC_ISPR0_Int_CCU6SR2_Msk    (0x40UL)
#define CPU_NVIC_ISPR0_Int_CCU6SR1_Pos    (5UL)
#define CPU_NVIC_ISPR0_Int_CCU6SR1_Msk    (0x20UL)
#define CPU_NVIC_ISPR0_Int_CCU6SR0_Pos    (4UL)
#define CPU_NVIC_ISPR0_Int_CCU6SR0_Msk    (0x10UL)
#define CPU_NVIC_ISPR0_Int_ADC1_Pos       (3UL)
#define CPU_NVIC_ISPR0_Int_ADC1_Msk       (0x8UL)
#define CPU_NVIC_ISPR0_Int_ADC2_Pos       (2UL)
#define CPU_NVIC_ISPR0_Int_ADC2_Msk       (0x4UL)
#define CPU_NVIC_ISPR0_Int_GPT2_Pos       (1UL)
#define CPU_NVIC_ISPR0_Int_GPT2_Msk       (0x2UL)
#define CPU_NVIC_ISPR0_Int_GPT1_Pos       (0UL)
#define CPU_NVIC_ISPR0_Int_GPT1_Msk       (0x1UL)

#define CPU_SCR_SEVONPEND_Pos             (4UL)
#define CPU_SCR_SEVONPEND_Msk             (0x10UL)
#define CPU_SCR_SLEEPDEEP_Pos             (2UL)
#define CPU_SCR_SLEEPDEEP_Msk             (0x4UL)
#define CPU_SCR_SLEEPONEXIT_Pos           (1UL)
#define CPU_SCR_SLEEPONEXIT_Msk           (0x2UL)

#define CPU_SHCSR_USGFAULTENA_Pos         (18UL)
#define CPU_SHCSR_USGFAULTENA_Msk         (0x40000UL)
#define CPU_SHCSR_BUSFAULTENA_Pos         (17UL)
#define CPU_SHCSR_BUSFAULTENA_Msk         (0x20000UL)
#define CPU_SHCSR_MEMFAULTENA_Pos         (16UL)
#define CPU_SHCSR_MEMFAULTENA_Msk         (0x10000UL)
#define CPU_SHCSR_SVCALLPENDED_Pos        (15UL)
#define CPU_SHCSR_SVCALLPENDED_Msk        (0x8000UL)
#define CPU_SHCSR_BUSFAULTPENDED_Pos      (14UL)
#define CPU_SHCSR_BUSFAULTPENDED_Msk      (0x4000UL)
#define CPU_SHCSR_MEMFAULTPENDED_Pos      (13UL)
#define CPU_SHCSR_MEMFAULTPENDED_Msk      (0x2000UL)
#define CPU_SHCSR_USGFAULTPENDED_Pos      (12UL)
#define CPU_SHCSR_USGFAULTPENDED_Msk      (0x1000UL)
#define CPU_SHCSR_SYSTICKACT_Pos          (11UL)
#define CPU_SHCSR_SYSTICKACT_Msk          (0x800UL)
#define CPU_SHCSR_PENDSVACT_Pos           (10UL)
#define CPU_SHCSR_PENDSVACT_Msk           (0x400UL)
#define CPU_SHCSR_MONITORACT_Pos          (8UL)
#define CPU_SHCSR_MONITORACT_Msk          (0x100UL)
#define CPU_SHCSR_SVCALLACT_Pos           (7UL)
#define CPU_SHCSR_SVCALLACT_Msk           (0x80UL)
#define CPU_SHCSR_USGFAULTACT_Pos         (3UL)
#define CPU_SHCSR_USGFAULTACT_Msk         (0x8UL)
#define CPU_SHCSR_BUSFAULTACT_Pos         (1UL)
#define CPU_SHCSR_BUSFAULTACT_Msk         (0x2UL)
#define CPU_SHCSR_MEMFAULTACT_Pos         (0UL)
#define CPU_SHCSR_MEMFAULTACT_Msk         (0x1UL)

#define CPU_SHPR1_PRI_7_Pos               (24UL)
#define CPU_SHPR1_PRI_7_Msk               (0xff000000UL)
#define CPU_SHPR1_PRI_6_Pos               (16UL)
#define CPU_SHPR1_PRI_6_Msk               (0xff0000UL)
#define CPU_SHPR1_PRI_5_Pos               (8UL)
#define CPU_SHPR1_PRI_5_Msk               (0xff00UL)
#define CPU_SHPR1_PRI_4_Pos               (0UL)
#define CPU_SHPR1_PRI_4_Msk               (0xffUL)

#define CPU_SHPR2_PRI_11_Pos              (24UL)
#define CPU_SHPR2_PRI_11_Msk              (0xff000000UL)
#define CPU_SHPR2_PRI_10_Pos              (16UL)
#define CPU_SHPR2_PRI_10_Msk              (0xff0000UL)
#define CPU_SHPR2_PRI_9_Pos               (8UL)
#define CPU_SHPR2_PRI_9_Msk               (0xff00UL)
#define CPU_SHPR2_PRI_8_Pos               (0UL)
#define CPU_SHPR2_PRI_8_Msk               (0xffUL)

#define CPU_SHPR3_PRI_15_Pos              (24UL)
#define CPU_SHPR3_PRI_15_Msk              (0xff000000UL)
#define CPU_SHPR3_PRI_14_Pos              (16UL)
#define CPU_SHPR3_PRI_14_Msk              (0xff0000UL)
#define CPU_SHPR3_PRI_13_Pos              (8UL)
#define CPU_SHPR3_PRI_13_Msk              (0xff00UL)
#define CPU_SHPR3_PRI_12_Pos              (0UL)
#define CPU_SHPR3_PRI_12_Msk              (0xffUL)

#define CPU_SYSTICK_CAL_NOREF_Pos         (31UL)
#define CPU_SYSTICK_CAL_NOREF_Msk         (0x80000000UL)
#define CPU_SYSTICK_CAL_SKEW_Pos          (30UL)
#define CPU_SYSTICK_CAL_SKEW_Msk          (0x40000000UL)
#define CPU_SYSTICK_CAL_TENMS_Pos         (0UL)
#define CPU_SYSTICK_CAL_TENMS_Msk         (0xffffffUL)

#define CPU_SYSTICK_CS_COUNTFLAG_Pos      (16UL)
#define CPU_SYSTICK_CS_COUNTFLAG_Msk      (0x10000UL)
#define CPU_SYSTICK_CS_CLKSOURCE_Pos      (2UL)
#define CPU_SYSTICK_CS_CLKSOURCE_Msk      (0x4UL)
#define CPU_SYSTICK_CS_TICKINT_Pos        (1UL)
#define CPU_SYSTICK_CS_TICKINT_Msk        (0x2UL)
#define CPU_SYSTICK_CS_ENABLE_Pos         (0UL)
#define CPU_SYSTICK_CS_ENABLE_Msk         (0x1UL)

#define CPU_SYSTICK_CUR_CURRENT_Pos       (0UL)
#define CPU_SYSTICK_CUR_CURRENT_Msk       (0xffffffUL)

#define CPU_SYSTICK_RL_RELOAD_Pos         (0UL)
#define CPU_SYSTICK_RL_RELOAD_Msk         (0xffffffUL)

#define CPU_VTOR_TBLOFF_Pos               (7UL)
#define CPU_VTOR_TBLOFF_Msk               (0xffffff80UL)

#define DMA_ALT_CTRL_BASE_PTR_ALT_CTRL_BASE_PTR_Pos (0UL)
#define DMA_ALT_CTRL_BASE_PTR_ALT_CTRL_BASE_PTR_Msk (0xffffffffUL)

#define DMA_CFG_CHN1_PROT_CTRL_Pos        (5UL)
#define DMA_CFG_CHN1_PROT_CTRL_Msk        (0xe0UL)
#define DMA_CFG_MASTER_ENABLE_Pos         (0UL)
#define DMA_CFG_MASTER_ENABLE_Msk         (0x1UL)

#define DMA_CHNL_ENABLE_CLR_CHNL_ENABLE_CLR_Pos (0UL)
#define DMA_CHNL_ENABLE_CLR_CHNL_ENABLE_CLR_Msk (0x3fffUL)

#define DMA_CHNL_ENABLE_SET_CHNL_ENABLE_SET_Pos (0UL)
#define DMA_CHNL_ENABLE_SET_CHNL_ENABLE_SET_Msk (0x3fffUL)

#define DMA_CHNL_PRI_ALT_CLR_CHNL_PRI_ALT_CLR_Pos (0UL)
#define DMA_CHNL_PRI_ALT_CLR_CHNL_PRI_ALT_CLR_Msk (0x3fffUL)

#define DMA_CHNL_PRI_ALT_SET_CHNL_PRI_ALT_SET_Pos (0UL)
#define DMA_CHNL_PRI_ALT_SET_CHNL_PRI_ALT_SET_Msk (0x3fffUL)

#define DMA_CHNL_PRIORITY_CLR_CHNL_PRIORITY_CLR_Pos (0UL)
#define DMA_CHNL_PRIORITY_CLR_CHNL_PRIORITY_CLR_Msk (0x3fffUL)

#define DMA_CHNL_PRIORITY_SET_CHNL_PRIORITY_SET_Pos (0UL)
#define DMA_CHNL_PRIORITY_SET_CHNL_PRIORITY_SET_Msk (0x3fffUL)

#define DMA_CHNL_REQ_MASK_CLR_CHNL_REQ_MASK_CLR_Pos (0UL)
#define DMA_CHNL_REQ_MASK_CLR_CHNL_REQ_MASK_CLR_Msk (0x3fffUL)

#define DMA_CHNL_REQ_MASK_SET_CHNL_REQ_MASK_SET_Pos (0UL)
#define DMA_CHNL_REQ_MASK_SET_CHNL_REQ_MASK_SET_Msk (0x3fffUL)

#define DMA_CHNL_SW_REQUEST_CHNL_SW_REQUEST_Pos (0UL)
#define DMA_CHNL_SW_REQUEST_CHNL_SW_REQUEST_Msk (0x3fffUL)

#define DMA_CHNL_USEBURST_CLR_CHNL_USEBURST_CLR_Pos (0UL)
#define DMA_CHNL_USEBURST_CLR_CHNL_USEBURST_CLR_Msk (0x3fffUL)

#define DMA_CHNL_USEBURST_SET_CHNL_USEBURST_SET_Pos (0UL)
#define DMA_CHNL_USEBURST_SET_CHNL_USEBURST_SET_Msk (0x3fffUL)

#define DMA_CTRL_BASE_PTR_CTRL_BASE_PTR_Pos (9UL)
#define DMA_CTRL_BASE_PTR_CTRL_BASE_PTR_Msk (0xfffffe00UL)

#define DMA_ERR_CLR_ERR_CLR_Pos           (0UL)
#define DMA_ERR_CLR_ERR_CLR_Msk           (0x1UL)

#define DMA_STATUS_CHNLS_MINUS1_Pos       (16UL)
#define DMA_STATUS_CHNLS_MINUS1_Msk       (0x1f0000UL)
#define DMA_STATUS_STATE_Pos              (4UL)
#define DMA_STATUS_STATE_Msk              (0xf0UL)
#define DMA_STATUS_MASTER_ENABLE_Pos      (0UL)
#define DMA_STATUS_MASTER_ENABLE_Msk      (0x1UL)

#define DMA_WAITONREQ_STATUS_WAITONREQ_STATUS_Pos (0UL)
#define DMA_WAITONREQ_STATUS_WAITONREQ_STATUS_Msk (0x3fffUL)

#define GPT12E_CAPREL_CAPREL_Pos          (0UL)
#define GPT12E_CAPREL_CAPREL_Msk          (0xffffUL)

#define GPT12E_ID_MOD_REV_Pos             (0UL)
#define GPT12E_ID_MOD_REV_Msk             (0xffUL)
#define GPT12E_ID_MOD_TYPE_Pos            (8UL)
#define GPT12E_ID_MOD_TYPE_Msk            (0xff00UL)

#define GPT12E_PISEL_IST2IN_Pos           (0UL)
#define GPT12E_PISEL_IST2IN_Msk           (0x1UL)
#define GPT12E_PISEL_IST2EUD_Pos          (1UL)
#define GPT12E_PISEL_IST2EUD_Msk          (0x2UL)
#define GPT12E_PISEL_IST3IN_Pos           (2UL)
#define GPT12E_PISEL_IST3IN_Msk           (0xcUL)
#define GPT12E_PISEL_IST3EUD_Pos          (4UL)
#define GPT12E_PISEL_IST3EUD_Msk          (0x30UL)
#define GPT12E_PISEL_IST4IN_Pos           (6UL)
#define GPT12E_PISEL_IST4IN_Msk           (0xc0UL)
#define GPT12E_PISEL_IST4EUD_Pos          (8UL)
#define GPT12E_PISEL_IST4EUD_Msk          (0x300UL)
#define GPT12E_PISEL_IST5IN_Pos           (10UL)
#define GPT12E_PISEL_IST5IN_Msk           (0x400UL)
#define GPT12E_PISEL_IST5EUD_Pos          (11UL)
#define GPT12E_PISEL_IST5EUD_Msk          (0x800UL)
#define GPT12E_PISEL_IST6IN_Pos           (12UL)
#define GPT12E_PISEL_IST6IN_Msk           (0x1000UL)
#define GPT12E_PISEL_IST6EUD_Pos          (13UL)
#define GPT12E_PISEL_IST6EUD_Msk          (0x2000UL)
#define GPT12E_PISEL_ISCAPIN_Pos          (14UL)
#define GPT12E_PISEL_ISCAPIN_Msk          (0xc000UL)

#define GPT12E_T2_T2_Pos                  (0UL)
#define GPT12E_T2_T2_Msk                  (0xffffUL)

#define GPT12E_T2CON_T2I_Pos              (0UL)
#define GPT12E_T2CON_T2I_Msk              (0x7UL)
#define GPT12E_T2CON_T2M_Pos              (3UL)
#define GPT12E_T2CON_T2M_Msk              (0x38UL)
#define GPT12E_T2CON_T2R_Pos              (6UL)
#define GPT12E_T2CON_T2R_Msk              (0x40UL)
#define GPT12E_T2CON_T2UD_Pos             (7UL)
#define GPT12E_T2CON_T2UD_Msk             (0x80UL)
#define GPT12E_T2CON_T2UDE_Pos            (8UL)
#define GPT12E_T2CON_T2UDE_Msk            (0x100UL)
#define GPT12E_T2CON_T2RC_Pos             (9UL)
#define GPT12E_T2CON_T2RC_Msk             (0x200UL)
#define GPT12E_T2CON_T2IRDIS_Pos          (12UL)
#define GPT12E_T2CON_T2IRDIS_Msk          (0x1000UL)
#define GPT12E_T2CON_T2EDGE_Pos           (13UL)
#define GPT12E_T2CON_T2EDGE_Msk           (0x2000UL)
#define GPT12E_T2CON_T2CHDIR_Pos          (14UL)
#define GPT12E_T2CON_T2CHDIR_Msk          (0x4000UL)
#define GPT12E_T2CON_T2RDIR_Pos           (15UL)
#define GPT12E_T2CON_T2RDIR_Msk           (0x8000UL)

#define GPT12E_T3_T3_Pos                  (0UL)
#define GPT12E_T3_T3_Msk                  (0xffffUL)

#define GPT12E_T3CON_T3I_Pos              (0UL)
#define GPT12E_T3CON_T3I_Msk              (0x7UL)
#define GPT12E_T3CON_T3M_Pos              (3UL)
#define GPT12E_T3CON_T3M_Msk              (0x38UL)
#define GPT12E_T3CON_T3R_Pos              (6UL)
#define GPT12E_T3CON_T3R_Msk              (0x40UL)
#define GPT12E_T3CON_T3UD_Pos             (7UL)
#define GPT12E_T3CON_T3UD_Msk             (0x80UL)
#define GPT12E_T3CON_T3UDE_Pos            (8UL)
#define GPT12E_T3CON_T3UDE_Msk            (0x100UL)
#define GPT12E_T3CON_T3OE_Pos             (9UL)
#define GPT12E_T3CON_T3OE_Msk             (0x200UL)
#define GPT12E_T3CON_T3OTL_Pos            (10UL)
#define GPT12E_T3CON_T3OTL_Msk            (0x400UL)
#define GPT12E_T3CON_BPS1_Pos             (11UL)
#define GPT12E_T3CON_BPS1_Msk             (0x1800UL)
#define GPT12E_T3CON_T3EDGE_Pos           (13UL)
#define GPT12E_T3CON_T3EDGE_Msk           (0x2000UL)
#define GPT12E_T3CON_T3CHDIR_Pos          (14UL)
#define GPT12E_T3CON_T3CHDIR_Msk          (0x4000UL)
#define GPT12E_T3CON_T3RDIR_Pos           (15UL)
#define GPT12E_T3CON_T3RDIR_Msk           (0x8000UL)

#define GPT12E_T4_T4_Pos                  (0UL)
#define GPT12E_T4_T4_Msk                  (0xffffUL)

#define GPT12E_T4CON_T4I_Pos              (0UL)
#define GPT12E_T4CON_T4I_Msk              (0x7UL)
#define GPT12E_T4CON_T4M_Pos              (3UL)
#define GPT12E_T4CON_T4M_Msk              (0x38UL)
#define GPT12E_T4CON_T4R_Pos              (6UL)
#define GPT12E_T4CON_T4R_Msk              (0x40UL)
#define GPT12E_T4CON_T4UD_Pos             (7UL)
#define GPT12E_T4CON_T4UD_Msk             (0x80UL)
#define GPT12E_T4CON_T4UDE_Pos            (8UL)
#define GPT12E_T4CON_T4UDE_Msk            (0x100UL)
#define GPT12E_T4CON_T4RC_Pos             (9UL)
#define GPT12E_T4CON_T4RC_Msk             (0x200UL)
#define GPT12E_T4CON_CLRT2EN_Pos          (10UL)
#define GPT12E_T4CON_CLRT2EN_Msk          (0x400UL)
#define GPT12E_T4CON_CLRT3EN_Pos          (11UL)
#define GPT12E_T4CON_CLRT3EN_Msk          (0x800UL)
#define GPT12E_T4CON_T4IRDIS_Pos          (12UL)
#define GPT12E_T4CON_T4IRDIS_Msk          (0x1000UL)
#define GPT12E_T4CON_T4EDGE_Pos           (13UL)
#define GPT12E_T4CON_T4EDGE_Msk           (0x2000UL)
#define GPT12E_T4CON_T4CHDIR_Pos          (14UL)
#define GPT12E_T4CON_T4CHDIR_Msk          (0x4000UL)
#define GPT12E_T4CON_T4RDIR_Pos           (15UL)
#define GPT12E_T4CON_T4RDIR_Msk           (0x8000UL)

#define GPT12E_T5_T5_Pos                  (0UL)
#define GPT12E_T5_T5_Msk                  (0xffffUL)

#define GPT12E_T5CON_T5I_Pos              (0UL)
#define GPT12E_T5CON_T5I_Msk              (0x7UL)
#define GPT12E_T5CON_T5M_Pos              (3UL)
#define GPT12E_T5CON_T5M_Msk              (0x18UL)
#define GPT12E_T5CON_T5R_Pos              (6UL)
#define GPT12E_T5CON_T5R_Msk              (0x40UL)
#define GPT12E_T5CON_T5UD_Pos             (7UL)
#define GPT12E_T5CON_T5UD_Msk             (0x80UL)
#define GPT12E_T5CON_T5UDE_Pos            (8UL)
#define GPT12E_T5CON_T5UDE_Msk            (0x100UL)
#define GPT12E_T5CON_T5RC_Pos             (9UL)
#define GPT12E_T5CON_T5RC_Msk             (0x200UL)
#define GPT12E_T5CON_CT3_Pos              (10UL)
#define GPT12E_T5CON_CT3_Msk              (0x400UL)
#define GPT12E_T5CON_CI_Pos               (12UL)
#define GPT12E_T5CON_CI_Msk               (0x3000UL)
#define GPT12E_T5CON_T5CLR_Pos            (14UL)
#define GPT12E_T5CON_T5CLR_Msk            (0x4000UL)
#define GPT12E_T5CON_T5SC_Pos             (15UL)
#define GPT12E_T5CON_T5SC_Msk             (0x8000UL)

#define GPT12E_T6_T6_Pos                  (0UL)
#define GPT12E_T6_T6_Msk                  (0xffffUL)

#define GPT12E_T6CON_T6I_Pos              (0UL)
#define GPT12E_T6CON_T6I_Msk              (0x7UL)
#define GPT12E_T6CON_T6M_Pos              (3UL)
#define GPT12E_T6CON_T6M_Msk              (0x38UL)
#define GPT12E_T6CON_T6R_Pos              (6UL)
#define GPT12E_T6CON_T6R_Msk              (0x40UL)
#define GPT12E_T6CON_T6UD_Pos             (7UL)
#define GPT12E_T6CON_T6UD_Msk             (0x80UL)
#define GPT12E_T6CON_T6UDE_Pos            (8UL)
#define GPT12E_T6CON_T6UDE_Msk            (0x100UL)
#define GPT12E_T6CON_T6OE_Pos             (9UL)
#define GPT12E_T6CON_T6OE_Msk             (0x200UL)
#define GPT12E_T6CON_T6OTL_Pos            (10UL)
#define GPT12E_T6CON_T6OTL_Msk            (0x400UL)
#define GPT12E_T6CON_BPS2_Pos             (11UL)
#define GPT12E_T6CON_BPS2_Msk             (0x1800UL)
#define GPT12E_T6CON_T6CLR_Pos            (14UL)
#define GPT12E_T6CON_T6CLR_Msk            (0x4000UL)
#define GPT12E_T6CON_T6SR_Pos             (15UL)
#define GPT12E_T6CON_T6SR_Msk             (0x8000UL)

#define LIN_CTRL_STS_M_SM_ERR_CLR_Pos     (24UL)
#define LIN_CTRL_STS_M_SM_ERR_CLR_Msk     (0x1000000UL)
#define LIN_CTRL_STS_HV_MODE_Pos          (21UL)
#define LIN_CTRL_STS_HV_MODE_Msk          (0x200000UL)
#define LIN_CTRL_STS_MODE_FB_Pos          (16UL)
#define LIN_CTRL_STS_MODE_FB_Msk          (0x70000UL)
#define LIN_CTRL_STS_FB_SM3_Pos           (15UL)
#define LIN_CTRL_STS_FB_SM3_Msk           (0x8000UL)
#define LIN_CTRL_STS_FB_SM2_Pos           (14UL)
#define LIN_CTRL_STS_FB_SM2_Msk           (0x4000UL)
#define LIN_CTRL_STS_FB_SM1_Pos           (13UL)
#define LIN_CTRL_STS_FB_SM1_Msk           (0x2000UL)
#define LIN_CTRL_STS_SM_Pos               (11UL)
#define LIN_CTRL_STS_SM_Msk               (0x1800UL)
#define LIN_CTRL_STS_RXD_Pos              (10UL)
#define LIN_CTRL_STS_RXD_Msk              (0x400UL)
#define LIN_CTRL_STS_TXD_Pos              (9UL)
#define LIN_CTRL_STS_TXD_Msk              (0x200UL)
#define LIN_CTRL_STS_TXD_TMOUT_STS_Pos    (6UL)
#define LIN_CTRL_STS_TXD_TMOUT_STS_Msk    (0x40UL)
#define LIN_CTRL_STS_OC_STS_Pos           (5UL)
#define LIN_CTRL_STS_OC_STS_Msk           (0x20UL)
#define LIN_CTRL_STS_OT_STS_Pos           (4UL)
#define LIN_CTRL_STS_OT_STS_Msk           (0x10UL)
#define LIN_CTRL_STS_M_SM_ERR_Pos         (3UL)
#define LIN_CTRL_STS_M_SM_ERR_Msk         (0x8UL)
#define LIN_CTRL_STS_MODE_Pos             (1UL)
#define LIN_CTRL_STS_MODE_Msk             (0x6UL)

#define MF_BEMFC_CTRL_STS_PHW_ZC_STS_Pos   (18UL)
#define MF_BEMFC_CTRL_STS_PHW_ZC_STS_Msk   (0x40000UL)
#define MF_BEMFC_CTRL_STS_PHV_ZC_STS_Pos   (17UL)
#define MF_BEMFC_CTRL_STS_PHV_ZC_STS_Msk   (0x20000UL)
#define MF_BEMFC_CTRL_STS_PHU_ZC_STS_Pos   (16UL)
#define MF_BEMFC_CTRL_STS_PHU_ZC_STS_Msk   (0x10000UL)
#define MF_BEMFC_CTRL_STS_CCPOS_INSEL_Pos  (12UL)
#define MF_BEMFC_CTRL_STS_CCPOS_INSEL_Msk  (0x1000UL)
#define MF_BEMFC_CTRL_STS_PHWCOMP_ON_Pos   (10UL)
#define MF_BEMFC_CTRL_STS_PHWCOMP_ON_Msk   (0x400UL)
#define MF_BEMFC_CTRL_STS_PHVCOMP_ON_Pos   (9UL)
#define MF_BEMFC_CTRL_STS_PHVCOMP_ON_Msk   (0x200UL)
#define MF_BEMFC_CTRL_STS_PHUCOMP_ON_Pos   (8UL)
#define MF_BEMFC_CTRL_STS_PHUCOMP_ON_Msk   (0x100UL)
#define MF_BEMFC_CTRL_STS_GPT12CAPINSW_Pos (5UL)
#define MF_BEMFC_CTRL_STS_GPT12CAPINSW_Msk (0x20UL)
#define MF_BEMFC_CTRL_STS_FILTBYPS_Pos     (4UL)
#define MF_BEMFC_CTRL_STS_FILTBYPS_Msk     (0x10UL)
#define MF_BEMFC_CTRL_STS_DEMGFILTDIS_Pos  (3UL)
#define MF_BEMFC_CTRL_STS_DEMGFILTDIS_Msk  (0x8UL)
#define MF_BEMFC_CTRL_STS_PHWCOMP_EN_Pos   (2UL)
#define MF_BEMFC_CTRL_STS_PHWCOMP_EN_Msk   (0x4UL)
#define MF_BEMFC_CTRL_STS_PHVCOMP_EN_Pos   (1UL)
#define MF_BEMFC_CTRL_STS_PHVCOMP_EN_Msk   (0x2UL)
#define MF_BEMFC_CTRL_STS_PHUCOMP_EN_Pos   (0UL)
#define MF_BEMFC_CTRL_STS_PHUCOMP_EN_Msk   (0x1UL)

#define MF_CSA_CTRL_VZERO_Pos             (8UL)
#define MF_CSA_CTRL_VZERO_Msk             (0x100UL)
#define MF_CSA_CTRL_GAIN_Pos              (1UL)
#define MF_CSA_CTRL_GAIN_Msk              (0x6UL)
#define MF_CSA_CTRL_EN_Pos                (0UL)
#define MF_CSA_CTRL_EN_Msk                (0x1UL)

#define MF_P2_ADCSEL_CTRL_ADC1_CH1_SEL_Pos (10UL)
#define MF_P2_ADCSEL_CTRL_ADC1_CH1_SEL_Msk (0x400UL)
#define MF_P2_ADCSEL_CTRL_ADC3_INN_SEL_Pos (9UL)
#define MF_P2_ADCSEL_CTRL_ADC3_INN_SEL_Msk (0x200UL)
#define MF_P2_ADCSEL_CTRL_ADC3_INP_SEL_Pos (8UL)
#define MF_P2_ADCSEL_CTRL_ADC3_INP_SEL_Msk (0x100UL)
#define MF_P2_ADCSEL_CTRL_P2_0_ADC_SEL_Pos (0UL)
#define MF_P2_ADCSEL_CTRL_P2_0_ADC_SEL_Msk (0x1UL)
#define MF_P2_ADCSEL_CTRL_P2_2_ADC_SEL_Pos (1UL)
#define MF_P2_ADCSEL_CTRL_P2_2_ADC_SEL_Msk (0x2UL)
#define MF_P2_ADCSEL_CTRL_P2_3_ADC_SEL_Pos (2UL)
#define MF_P2_ADCSEL_CTRL_P2_3_ADC_SEL_Msk (0x4UL)
#define MF_P2_ADCSEL_CTRL_P2_4_ADC_SEL_Pos (3UL)
#define MF_P2_ADCSEL_CTRL_P2_4_ADC_SEL_Msk (0x8UL)
#define MF_P2_ADCSEL_CTRL_P2_5_ADC_SEL_Pos (4UL)
#define MF_P2_ADCSEL_CTRL_P2_5_ADC_SEL_Msk (0x10UL)

#define MF_REF1_STS_REFBG_UPTHWARN_STS_Pos (5UL)
#define MF_REF1_STS_REFBG_UPTHWARN_STS_Msk (0x20UL)
#define MF_REF1_STS_REFBG_LOTHWARN_STS_Pos (4UL)
#define MF_REF1_STS_REFBG_LOTHWARN_STS_Msk (0x10UL)

#define MF_REF2_CTRL_VREF5V_OV_STS_Pos    (3UL)
#define MF_REF2_CTRL_VREF5V_OV_STS_Msk    (0x8UL)
#define MF_REF2_CTRL_VREF5V_UV_STS_Pos    (2UL)
#define MF_REF2_CTRL_VREF5V_UV_STS_Msk    (0x4UL)
#define MF_REF2_CTRL_VREF5V_OVL_STS_Pos   (1UL)
#define MF_REF2_CTRL_VREF5V_OVL_STS_Msk   (0x2UL)
#define MF_REF2_CTRL_VREF5V_PD_N_Pos      (0UL)
#define MF_REF2_CTRL_VREF5V_PD_N_Msk      (0x1UL)

#define MF_TEMPSENSE_CTRL_SYS_OT_STS_Pos  (7UL)
#define MF_TEMPSENSE_CTRL_SYS_OT_STS_Msk  (0x80UL)
#define MF_TEMPSENSE_CTRL_SYS_OTWARN_STS_Pos (6UL)
#define MF_TEMPSENSE_CTRL_SYS_OTWARN_STS_Msk (0x40UL)
#define MF_TEMPSENSE_CTRL_PMU_OT_STS_Pos  (5UL)
#define MF_TEMPSENSE_CTRL_PMU_OT_STS_Msk  (0x20UL)
#define MF_TEMPSENSE_CTRL_PMU_OTWARN_STS_Pos (4UL)
#define MF_TEMPSENSE_CTRL_PMU_OTWARN_STS_Msk (0x10UL)

#define MF_TRIM_BEMFx_BEMF_TFILT_SEL_Pos  (8UL)
#define MF_TRIM_BEMFx_BEMF_TFILT_SEL_Msk  (0x300UL)
#define MF_TRIM_BEMFx_BEMF_GPT_CAPIN_SEL_Pos (4UL)
#define MF_TRIM_BEMFx_BEMF_GPT_CAPIN_SEL_Msk (0x30UL)
#define MF_TRIM_BEMFx_BEMF_BT_TFILT_SEL_Pos (0UL)
#define MF_TRIM_BEMFx_BEMF_BT_TFILT_SEL_Msk (0x7UL)

#define MF_VMON_SEN_CTRL_VMON_SEN_SEL_INRANGE_Pos (5UL)
#define MF_VMON_SEN_CTRL_VMON_SEN_SEL_INRANGE_Msk (0x20UL)
#define MF_VMON_SEN_CTRL_VMON_SEN_HRESO_5V_Pos (4UL)
#define MF_VMON_SEN_CTRL_VMON_SEN_HRESO_5V_Msk (0x10UL)
#define MF_VMON_SEN_CTRL_VMON_SEN_PD_N_Pos (0UL)
#define MF_VMON_SEN_CTRL_VMON_SEN_PD_N_Msk (0x1UL)

#define PMU_CNF_CYC_SAMPLE_DEL_M03_Pos    (0UL)
#define PMU_CNF_CYC_SAMPLE_DEL_M03_Msk    (0xfUL)

#define PMU_CNF_CYC_SENSE_OSC_100kHz_EN_Pos (7UL)
#define PMU_CNF_CYC_SENSE_OSC_100kHz_EN_Msk (0x80UL)
#define PMU_CNF_CYC_SENSE_E01_Pos         (4UL)
#define PMU_CNF_CYC_SENSE_E01_Msk         (0x30UL)
#define PMU_CNF_CYC_SENSE_M03_Pos         (0UL)
#define PMU_CNF_CYC_SENSE_M03_Msk         (0xfUL)

#define PMU_CNF_CYC_WAKE_E01_Pos          (4UL)
#define PMU_CNF_CYC_WAKE_E01_Msk          (0x30UL)
#define PMU_CNF_CYC_WAKE_M03_Pos          (0UL)
#define PMU_CNF_CYC_WAKE_M03_Msk          (0xfUL)

#define PMU_CNF_PMU_SETTINGS_EN_VDDEXT_OC_OFF_N_Pos (7UL)
#define PMU_CNF_PMU_SETTINGS_EN_VDDEXT_OC_OFF_N_Msk (0x80UL)
#define PMU_CNF_PMU_SETTINGS_CYC_SENSE_EN_Pos (3UL)
#define PMU_CNF_PMU_SETTINGS_CYC_SENSE_EN_Msk (0x8UL)
#define PMU_CNF_PMU_SETTINGS_CYC_WAKE_EN_Pos (2UL)
#define PMU_CNF_PMU_SETTINGS_CYC_WAKE_EN_Msk (0x4UL)
#define PMU_CNF_PMU_SETTINGS_EN_0V9_N_Pos (1UL)
#define PMU_CNF_PMU_SETTINGS_EN_0V9_N_Msk (0x2UL)
#define PMU_CNF_PMU_SETTINGS_WAKE_W_RST_Pos (0UL)
#define PMU_CNF_PMU_SETTINGS_WAKE_W_RST_Msk (0x1UL)

#define PMU_CNF_RST_TFB_RST_TFB_Pos       (0UL)
#define PMU_CNF_RST_TFB_RST_TFB_Msk       (0x3UL)

#define PMU_CNF_WAKE_FILTER_CNF_GPIO_FT_Pos (2UL)
#define PMU_CNF_WAKE_FILTER_CNF_GPIO_FT_Msk (0xcUL)
#define PMU_CNF_WAKE_FILTER_CNF_MON_FT_Pos (1UL)
#define PMU_CNF_WAKE_FILTER_CNF_MON_FT_Msk (0x2UL)
#define PMU_CNF_WAKE_FILTER_CNF_LIN_FT_Pos (0UL)
#define PMU_CNF_WAKE_FILTER_CNF_LIN_FT_Msk (0x1UL)

#define PMU_GPUDATA00_DATA0_Pos           (0UL)
#define PMU_GPUDATA00_DATA0_Msk           (0xffUL)

#define PMU_GPUDATA01_DATA1_Pos           (0UL)
#define PMU_GPUDATA01_DATA1_Msk           (0xffUL)

#define PMU_GPUDATA02_DATA2_Pos           (0UL)
#define PMU_GPUDATA02_DATA2_Msk           (0xffUL)

#define PMU_GPUDATA03_DATA3_Pos           (0UL)
#define PMU_GPUDATA03_DATA3_Msk           (0xffUL)

#define PMU_GPUDATA04_DATA4_Pos           (0UL)
#define PMU_GPUDATA04_DATA4_Msk           (0xffUL)

#define PMU_GPUDATA05_DATA5_Pos           (0UL)
#define PMU_GPUDATA05_DATA5_Msk           (0xffUL)

#define PMU_LIN_WAKE_EN_LIN_EN_Pos        (7UL)
#define PMU_LIN_WAKE_EN_LIN_EN_Msk        (0x80UL)

#define PMU_MON_CNF_STS_Pos               (7UL)
#define PMU_MON_CNF_STS_Msk               (0x80UL)
#define PMU_MON_CNF_PU_Pos                (5UL)
#define PMU_MON_CNF_PU_Msk                (0x20UL)
#define PMU_MON_CNF_PD_Pos                (4UL)
#define PMU_MON_CNF_PD_Msk                (0x10UL)
#define PMU_MON_CNF_CYC_Pos               (3UL)
#define PMU_MON_CNF_CYC_Msk               (0x8UL)
#define PMU_MON_CNF_RISE_Pos              (2UL)
#define PMU_MON_CNF_RISE_Msk              (0x4UL)
#define PMU_MON_CNF_FALL_Pos              (1UL)
#define PMU_MON_CNF_FALL_Msk              (0x2UL)
#define PMU_MON_CNF_EN_Pos                (0UL)
#define PMU_MON_CNF_EN_Msk                (0x1UL)

#define PMU_PMU_RESET_STS1_PMU_1V5DidPOR_Pos (7UL)
#define PMU_PMU_RESET_STS1_PMU_1V5DidPOR_Msk (0x80UL)
#define PMU_PMU_RESET_STS1_PMU_PIN_Pos    (6UL)
#define PMU_PMU_RESET_STS1_PMU_PIN_Msk    (0x40UL)
#define PMU_PMU_RESET_STS1_PMU_ExtWDT_Pos (5UL)
#define PMU_PMU_RESET_STS1_PMU_ExtWDT_Msk (0x20UL)
#define PMU_PMU_RESET_STS1_PMU_ClkWDT_Pos (4UL)
#define PMU_PMU_RESET_STS1_PMU_ClkWDT_Msk (0x10UL)
#define PMU_PMU_RESET_STS1_PMU_LPR_Pos    (3UL)
#define PMU_PMU_RESET_STS1_PMU_LPR_Msk    (0x8UL)
#define PMU_PMU_RESET_STS1_PMU_SleepEX_Pos (2UL)
#define PMU_PMU_RESET_STS1_PMU_SleepEX_Msk (0x4UL)
#define PMU_PMU_RESET_STS1_PMU_WAKE_Pos   (1UL)
#define PMU_PMU_RESET_STS1_PMU_WAKE_Msk   (0x2UL)
#define PMU_PMU_RESET_STS1_SYS_FAIL_Pos   (0UL)
#define PMU_PMU_RESET_STS1_SYS_FAIL_Msk   (0x1UL)

#define PMU_PMU_RESET_STS2_LOCKUP_Pos     (2UL)
#define PMU_PMU_RESET_STS2_LOCKUP_Msk     (0x4UL)
#define PMU_PMU_RESET_STS2_PMU_SOFT_Pos   (1UL)
#define PMU_PMU_RESET_STS2_PMU_SOFT_Msk   (0x2UL)
#define PMU_PMU_RESET_STS2_PMU_IntWDT_Pos (0UL)
#define PMU_PMU_RESET_STS2_PMU_IntWDT_Msk (0x1UL)

#define PMU_PMU_SUPPLY_STS_PMU_5V_FAIL_EN_Pos (6UL)
#define PMU_PMU_SUPPLY_STS_PMU_5V_FAIL_EN_Msk (0x40UL)
#define PMU_PMU_SUPPLY_STS_PMU_5V_OVERLOAD_Pos (5UL)
#define PMU_PMU_SUPPLY_STS_PMU_5V_OVERLOAD_Msk (0x20UL)
#define PMU_PMU_SUPPLY_STS_PMU_5V_OVERVOLT_Pos (4UL)
#define PMU_PMU_SUPPLY_STS_PMU_5V_OVERVOLT_Msk (0x10UL)
#define PMU_PMU_SUPPLY_STS_PMU_1V5_FAIL_EN_Pos (2UL)
#define PMU_PMU_SUPPLY_STS_PMU_1V5_FAIL_EN_Msk (0x4UL)
#define PMU_PMU_SUPPLY_STS_PMU_1V5_OVERLOAD_Pos (1UL)
#define PMU_PMU_SUPPLY_STS_PMU_1V5_OVERLOAD_Msk (0x2UL)
#define PMU_PMU_SUPPLY_STS_PMU_1V5_OVERVOLT_Pos (0UL)
#define PMU_PMU_SUPPLY_STS_PMU_1V5_OVERVOLT_Msk (0x1UL)

#define PMU_SYS_FAIL_STS_WDT1_SEQ_FAIL_Pos (6UL)
#define PMU_SYS_FAIL_STS_WDT1_SEQ_FAIL_Msk (0x40UL)
#define PMU_SYS_FAIL_STS_SYS_OT_Pos       (5UL)
#define PMU_SYS_FAIL_STS_SYS_OT_Msk       (0x20UL)
#define PMU_SYS_FAIL_STS_PMU_5V_OVL_Pos   (3UL)
#define PMU_SYS_FAIL_STS_PMU_5V_OVL_Msk   (0x8UL)
#define PMU_SYS_FAIL_STS_PMU_1V5_OVL_Pos  (2UL)
#define PMU_SYS_FAIL_STS_PMU_1V5_OVL_Msk  (0x4UL)
#define PMU_SYS_FAIL_STS_SUPP_TMOUT_Pos   (1UL)
#define PMU_SYS_FAIL_STS_SUPP_TMOUT_Msk   (0x2UL)
#define PMU_SYS_FAIL_STS_SUPP_SHORT_Pos   (0UL)
#define PMU_SYS_FAIL_STS_SUPP_SHORT_Msk   (0x1UL)

#define PMU_SystemStartConfig_MBIST_EN_Pos (0UL)
#define PMU_SystemStartConfig_MBIST_EN_Msk (0x1UL)

#define PMU_VDDEXT_CTRL_STABLE_Pos        (7UL)
#define PMU_VDDEXT_CTRL_STABLE_Msk        (0x80UL)
#define PMU_VDDEXT_CTRL_OK_Pos            (6UL)
#define PMU_VDDEXT_CTRL_OK_Msk            (0x40UL)
#define PMU_VDDEXT_CTRL_OVERLOAD_Pos      (5UL)
#define PMU_VDDEXT_CTRL_OVERLOAD_Msk      (0x20UL)
#define PMU_VDDEXT_CTRL_OVERVOLT_Pos      (4UL)
#define PMU_VDDEXT_CTRL_OVERVOLT_Msk      (0x10UL)
#define PMU_VDDEXT_CTRL_SHORT_Pos         (3UL)
#define PMU_VDDEXT_CTRL_SHORT_Msk         (0x8UL)
#define PMU_VDDEXT_CTRL_FAIL_EN_Pos       (2UL)
#define PMU_VDDEXT_CTRL_FAIL_EN_Msk       (0x4UL)
#define PMU_VDDEXT_CTRL_CYC_EN_Pos        (1UL)
#define PMU_VDDEXT_CTRL_CYC_EN_Msk        (0x2UL)
#define PMU_VDDEXT_CTRL_ENABLE_Pos        (0UL)
#define PMU_VDDEXT_CTRL_ENABLE_Msk        (0x1UL)

#define PMU_WAKE_CONF_GPIO0_CYC_GPIO0_CYC_4_Pos (4UL)
#define PMU_WAKE_CONF_GPIO0_CYC_GPIO0_CYC_4_Msk (0x10UL)
#define PMU_WAKE_CONF_GPIO0_CYC_GPIO0_CYC_3_Pos (3UL)
#define PMU_WAKE_CONF_GPIO0_CYC_GPIO0_CYC_3_Msk (0x8UL)
#define PMU_WAKE_CONF_GPIO0_CYC_GPIO0_CYC_2_Pos (2UL)
#define PMU_WAKE_CONF_GPIO0_CYC_GPIO0_CYC_2_Msk (0x4UL)
#define PMU_WAKE_CONF_GPIO0_CYC_GPIO0_CYC_1_Pos (1UL)
#define PMU_WAKE_CONF_GPIO0_CYC_GPIO0_CYC_1_Msk (0x2UL)
#define PMU_WAKE_CONF_GPIO0_CYC_GPIO0_CYC_0_Pos (0UL)
#define PMU_WAKE_CONF_GPIO0_CYC_GPIO0_CYC_0_Msk (0x1UL)

#define PMU_WAKE_CONF_GPIO0_FALL_GPIO0_FA_4_Pos (4UL)
#define PMU_WAKE_CONF_GPIO0_FALL_GPIO0_FA_4_Msk (0x10UL)
#define PMU_WAKE_CONF_GPIO0_FALL_GPIO0_FA_3_Pos (3UL)
#define PMU_WAKE_CONF_GPIO0_FALL_GPIO0_FA_3_Msk (0x8UL)
#define PMU_WAKE_CONF_GPIO0_FALL_GPIO0_FA_2_Pos (2UL)
#define PMU_WAKE_CONF_GPIO0_FALL_GPIO0_FA_2_Msk (0x4UL)
#define PMU_WAKE_CONF_GPIO0_FALL_GPIO0_FA_1_Pos (1UL)
#define PMU_WAKE_CONF_GPIO0_FALL_GPIO0_FA_1_Msk (0x2UL)
#define PMU_WAKE_CONF_GPIO0_FALL_GPIO0_FA_0_Pos (0UL)
#define PMU_WAKE_CONF_GPIO0_FALL_GPIO0_FA_0_Msk (0x1UL)

#define PMU_WAKE_CONF_GPIO0_RISE_GPIO0_RI_4_Pos (4UL)
#define PMU_WAKE_CONF_GPIO0_RISE_GPIO0_RI_4_Msk (0x10UL)
#define PMU_WAKE_CONF_GPIO0_RISE_GPIO0_RI_3_Pos (3UL)
#define PMU_WAKE_CONF_GPIO0_RISE_GPIO0_RI_3_Msk (0x8UL)
#define PMU_WAKE_CONF_GPIO0_RISE_GPIO0_RI_2_Pos (2UL)
#define PMU_WAKE_CONF_GPIO0_RISE_GPIO0_RI_2_Msk (0x4UL)
#define PMU_WAKE_CONF_GPIO0_RISE_GPIO0_RI_1_Pos (1UL)
#define PMU_WAKE_CONF_GPIO0_RISE_GPIO0_RI_1_Msk (0x2UL)
#define PMU_WAKE_CONF_GPIO0_RISE_GPIO0_RI_0_Pos (0UL)
#define PMU_WAKE_CONF_GPIO0_RISE_GPIO0_RI_0_Msk (0x1UL)

#define PMU_WAKE_CONF_GPIO1_CYC_GPIO1_CYC_4_Pos (4UL)
#define PMU_WAKE_CONF_GPIO1_CYC_GPIO1_CYC_4_Msk (0x10UL)
#define PMU_WAKE_CONF_GPIO1_CYC_GPIO1_CYC_3_Pos (3UL)
#define PMU_WAKE_CONF_GPIO1_CYC_GPIO1_CYC_3_Msk (0x8UL)
#define PMU_WAKE_CONF_GPIO1_CYC_GPIO1_CYC_2_Pos (2UL)
#define PMU_WAKE_CONF_GPIO1_CYC_GPIO1_CYC_2_Msk (0x4UL)
#define PMU_WAKE_CONF_GPIO1_CYC_GPIO1_CYC_1_Pos (1UL)
#define PMU_WAKE_CONF_GPIO1_CYC_GPIO1_CYC_1_Msk (0x2UL)
#define PMU_WAKE_CONF_GPIO1_CYC_GPIO1_CYC_0_Pos (0UL)
#define PMU_WAKE_CONF_GPIO1_CYC_GPIO1_CYC_0_Msk (0x1UL)

#define PMU_WAKE_CONF_GPIO1_FALL_GPIO1_FA_4_Pos (4UL)
#define PMU_WAKE_CONF_GPIO1_FALL_GPIO1_FA_4_Msk (0x10UL)
#define PMU_WAKE_CONF_GPIO1_FALL_GPIO1_FA_3_Pos (3UL)
#define PMU_WAKE_CONF_GPIO1_FALL_GPIO1_FA_3_Msk (0x8UL)
#define PMU_WAKE_CONF_GPIO1_FALL_GPIO1_FA_2_Pos (2UL)
#define PMU_WAKE_CONF_GPIO1_FALL_GPIO1_FA_2_Msk (0x4UL)
#define PMU_WAKE_CONF_GPIO1_FALL_GPIO1_FA_1_Pos (1UL)
#define PMU_WAKE_CONF_GPIO1_FALL_GPIO1_FA_1_Msk (0x2UL)
#define PMU_WAKE_CONF_GPIO1_FALL_GPIO1_FA_0_Pos (0UL)
#define PMU_WAKE_CONF_GPIO1_FALL_GPIO1_FA_0_Msk (0x1UL)

#define PMU_WAKE_CONF_GPIO1_RISE_GPIO1_RI_4_Pos (4UL)
#define PMU_WAKE_CONF_GPIO1_RISE_GPIO1_RI_4_Msk (0x10UL)
#define PMU_WAKE_CONF_GPIO1_RISE_GPIO1_RI_3_Pos (3UL)
#define PMU_WAKE_CONF_GPIO1_RISE_GPIO1_RI_3_Msk (0x8UL)
#define PMU_WAKE_CONF_GPIO1_RISE_GPIO1_RI_2_Pos (2UL)
#define PMU_WAKE_CONF_GPIO1_RISE_GPIO1_RI_2_Msk (0x4UL)
#define PMU_WAKE_CONF_GPIO1_RISE_GPIO1_RI_1_Pos (1UL)
#define PMU_WAKE_CONF_GPIO1_RISE_GPIO1_RI_1_Msk (0x2UL)
#define PMU_WAKE_CONF_GPIO1_RISE_GPIO1_RI_0_Pos (0UL)
#define PMU_WAKE_CONF_GPIO1_RISE_GPIO1_RI_0_Msk (0x1UL)

#define PMU_WAKE_STATUS_FAIL_Pos          (5UL)
#define PMU_WAKE_STATUS_FAIL_Msk          (0x20UL)
#define PMU_WAKE_STATUS_CYC_WAKE_Pos      (4UL)
#define PMU_WAKE_STATUS_CYC_WAKE_Msk      (0x10UL)
#define PMU_WAKE_STATUS_GPIO1_Pos         (3UL)
#define PMU_WAKE_STATUS_GPIO1_Msk         (0x8UL)
#define PMU_WAKE_STATUS_GPIO0_Pos         (2UL)
#define PMU_WAKE_STATUS_GPIO0_Msk         (0x4UL)
#define PMU_WAKE_STATUS_MON_WAKE_Pos      (1UL)
#define PMU_WAKE_STATUS_MON_WAKE_Msk      (0x2UL)
#define PMU_WAKE_STATUS_LIN_WAKE_Pos      (0UL)
#define PMU_WAKE_STATUS_LIN_WAKE_Msk      (0x1UL)

#define PMU_WAKE_STS_FAIL_VDDEXTSHORT_Pos (2UL)
#define PMU_WAKE_STS_FAIL_VDDEXTSHORT_Msk (0x4UL)
#define PMU_WAKE_STS_FAIL_SUPPFAIL_Pos    (0UL)
#define PMU_WAKE_STS_FAIL_SUPPFAIL_Msk    (0x1UL)

#define PMU_WAKE_STS_GPIO0_GPIO0_STS_4_Pos (4UL)
#define PMU_WAKE_STS_GPIO0_GPIO0_STS_4_Msk (0x10UL)
#define PMU_WAKE_STS_GPIO0_GPIO0_STS_3_Pos (3UL)
#define PMU_WAKE_STS_GPIO0_GPIO0_STS_3_Msk (0x8UL)
#define PMU_WAKE_STS_GPIO0_GPIO0_STS_2_Pos (2UL)
#define PMU_WAKE_STS_GPIO0_GPIO0_STS_2_Msk (0x4UL)
#define PMU_WAKE_STS_GPIO0_GPIO0_STS_1_Pos (1UL)
#define PMU_WAKE_STS_GPIO0_GPIO0_STS_1_Msk (0x2UL)
#define PMU_WAKE_STS_GPIO0_GPIO0_STS_0_Pos (0UL)
#define PMU_WAKE_STS_GPIO0_GPIO0_STS_0_Msk (0x1UL)

#define PMU_WAKE_STS_GPIO1_GPIO1_STS_4_Pos (4UL)
#define PMU_WAKE_STS_GPIO1_GPIO1_STS_4_Msk (0x10UL)
#define PMU_WAKE_STS_GPIO1_GPIO1_STS_3_Pos (3UL)
#define PMU_WAKE_STS_GPIO1_GPIO1_STS_3_Msk (0x8UL)
#define PMU_WAKE_STS_GPIO1_GPIO1_STS_2_Pos (2UL)
#define PMU_WAKE_STS_GPIO1_GPIO1_STS_2_Msk (0x4UL)
#define PMU_WAKE_STS_GPIO1_GPIO1_STS_1_Pos (1UL)
#define PMU_WAKE_STS_GPIO1_GPIO1_STS_1_Msk (0x2UL)
#define PMU_WAKE_STS_GPIO1_GPIO1_STS_0_Pos (0UL)
#define PMU_WAKE_STS_GPIO1_GPIO1_STS_0_Msk (0x1UL)

#define PMU_WAKE_STS_MON_WAKE_STS_Pos     (0UL)
#define PMU_WAKE_STS_MON_WAKE_STS_Msk     (0x1UL)

#define PORT_P0_ALTSEL0_P0_Pos            (0UL)
#define PORT_P0_ALTSEL0_P0_Msk            (0x1UL)
#define PORT_P0_ALTSEL0_P1_Pos            (1UL)
#define PORT_P0_ALTSEL0_P1_Msk            (0x2UL)
#define PORT_P0_ALTSEL0_P2_Pos            (2UL)
#define PORT_P0_ALTSEL0_P2_Msk            (0x4UL)
#define PORT_P0_ALTSEL0_P3_Pos            (3UL)
#define PORT_P0_ALTSEL0_P3_Msk            (0x8UL)
#define PORT_P0_ALTSEL0_P4_Pos            (4UL)
#define PORT_P0_ALTSEL0_P4_Msk            (0x10UL)

#define PORT_P0_ALTSEL1_P0_Pos            (0UL)
#define PORT_P0_ALTSEL1_P0_Msk            (0x1UL)
#define PORT_P0_ALTSEL1_P1_Pos            (1UL)
#define PORT_P0_ALTSEL1_P1_Msk            (0x2UL)
#define PORT_P0_ALTSEL1_P2_Pos            (2UL)
#define PORT_P0_ALTSEL1_P2_Msk            (0x4UL)
#define PORT_P0_ALTSEL1_P3_Pos            (3UL)
#define PORT_P0_ALTSEL1_P3_Msk            (0x8UL)
#define PORT_P0_ALTSEL1_P4_Pos            (4UL)
#define PORT_P0_ALTSEL1_P4_Msk            (0x10UL)

#define PORT_P0_DATA_P0_Pos               (0UL)
#define PORT_P0_DATA_P0_Msk               (0x1UL)
#define PORT_P0_DATA_P1_Pos               (1UL)
#define PORT_P0_DATA_P1_Msk               (0x2UL)
#define PORT_P0_DATA_P2_Pos               (2UL)
#define PORT_P0_DATA_P2_Msk               (0x4UL)
#define PORT_P0_DATA_P3_Pos               (3UL)
#define PORT_P0_DATA_P3_Msk               (0x8UL)
#define PORT_P0_DATA_P4_Pos               (4UL)
#define PORT_P0_DATA_P4_Msk               (0x10UL)

#define PORT_P0_DIR_P0_Pos                (0UL)
#define PORT_P0_DIR_P0_Msk                (0x1UL)
#define PORT_P0_DIR_P1_Pos                (1UL)
#define PORT_P0_DIR_P1_Msk                (0x2UL)
#define PORT_P0_DIR_P2_Pos                (2UL)
#define PORT_P0_DIR_P2_Msk                (0x4UL)
#define PORT_P0_DIR_P3_Pos                (3UL)
#define PORT_P0_DIR_P3_Msk                (0x8UL)
#define PORT_P0_DIR_P4_Pos                (4UL)
#define PORT_P0_DIR_P4_Msk                (0x10UL)

#define PORT_P0_OD_P0_Pos                 (0UL)
#define PORT_P0_OD_P0_Msk                 (0x1UL)
#define PORT_P0_OD_P1_Pos                 (1UL)
#define PORT_P0_OD_P1_Msk                 (0x2UL)
#define PORT_P0_OD_P2_Pos                 (2UL)
#define PORT_P0_OD_P2_Msk                 (0x4UL)
#define PORT_P0_OD_P3_Pos                 (3UL)
#define PORT_P0_OD_P3_Msk                 (0x8UL)
#define PORT_P0_OD_P4_Pos                 (4UL)
#define PORT_P0_OD_P4_Msk                 (0x10UL)

#define PORT_P0_PUDEN_P0_Pos              (0UL)
#define PORT_P0_PUDEN_P0_Msk              (0x1UL)
#define PORT_P0_PUDEN_P1_Pos              (1UL)
#define PORT_P0_PUDEN_P1_Msk              (0x2UL)
#define PORT_P0_PUDEN_P2_Pos              (2UL)
#define PORT_P0_PUDEN_P2_Msk              (0x4UL)
#define PORT_P0_PUDEN_P3_Pos              (3UL)
#define PORT_P0_PUDEN_P3_Msk              (0x8UL)
#define PORT_P0_PUDEN_P4_Pos              (4UL)
#define PORT_P0_PUDEN_P4_Msk              (0x10UL)

#define PORT_P0_PUDSEL_P0_Pos             (0UL)
#define PORT_P0_PUDSEL_P0_Msk             (0x1UL)
#define PORT_P0_PUDSEL_P1_Pos             (1UL)
#define PORT_P0_PUDSEL_P1_Msk             (0x2UL)
#define PORT_P0_PUDSEL_P2_Pos             (2UL)
#define PORT_P0_PUDSEL_P2_Msk             (0x4UL)
#define PORT_P0_PUDSEL_P3_Pos             (3UL)
#define PORT_P0_PUDSEL_P3_Msk             (0x8UL)
#define PORT_P0_PUDSEL_P4_Pos             (4UL)
#define PORT_P0_PUDSEL_P4_Msk             (0x10UL)

#define PORT_P1_ALTSEL0_P0_Pos            (0UL)
#define PORT_P1_ALTSEL0_P0_Msk            (0x1UL)
#define PORT_P1_ALTSEL0_P1_Pos            (1UL)
#define PORT_P1_ALTSEL0_P1_Msk            (0x2UL)
#define PORT_P1_ALTSEL0_P2_Pos            (2UL)
#define PORT_P1_ALTSEL0_P2_Msk            (0x4UL)
#define PORT_P1_ALTSEL0_P3_Pos            (3UL)
#define PORT_P1_ALTSEL0_P3_Msk            (0x8UL)
#define PORT_P1_ALTSEL0_P4_Pos            (4UL)
#define PORT_P1_ALTSEL0_P4_Msk            (0x10UL)

#define PORT_P1_ALTSEL1_P0_Pos            (0UL)
#define PORT_P1_ALTSEL1_P0_Msk            (0x1UL)
#define PORT_P1_ALTSEL1_P1_Pos            (1UL)
#define PORT_P1_ALTSEL1_P1_Msk            (0x2UL)
#define PORT_P1_ALTSEL1_P2_Pos            (2UL)
#define PORT_P1_ALTSEL1_P2_Msk            (0x4UL)
#define PORT_P1_ALTSEL1_P3_Pos            (3UL)
#define PORT_P1_ALTSEL1_P3_Msk            (0x8UL)
#define PORT_P1_ALTSEL1_P4_Pos            (4UL)
#define PORT_P1_ALTSEL1_P4_Msk            (0x10UL)

#define PORT_P1_DATA_P0_Pos               (0UL)
#define PORT_P1_DATA_P0_Msk               (0x1UL)
#define PORT_P1_DATA_P1_Pos               (1UL)
#define PORT_P1_DATA_P1_Msk               (0x2UL)
#define PORT_P1_DATA_P2_Pos               (2UL)
#define PORT_P1_DATA_P2_Msk               (0x4UL)
#define PORT_P1_DATA_P3_Pos               (3UL)
#define PORT_P1_DATA_P3_Msk               (0x8UL)
#define PORT_P1_DATA_P4_Pos               (4UL)
#define PORT_P1_DATA_P4_Msk               (0x10UL)

#define PORT_P1_DIR_P0_Pos                (0UL)
#define PORT_P1_DIR_P0_Msk                (0x1UL)
#define PORT_P1_DIR_P1_Pos                (1UL)
#define PORT_P1_DIR_P1_Msk                (0x2UL)
#define PORT_P1_DIR_P2_Pos                (2UL)
#define PORT_P1_DIR_P2_Msk                (0x4UL)
#define PORT_P1_DIR_P3_Pos                (3UL)
#define PORT_P1_DIR_P3_Msk                (0x8UL)
#define PORT_P1_DIR_P4_Pos                (4UL)
#define PORT_P1_DIR_P4_Msk                (0x10UL)

#define PORT_P1_OD_P0_Pos                 (1UL)
#define PORT_P1_OD_P0_Msk                 (0x2UL)
#define PORT_P1_OD_P1_Pos                 (2UL)
#define PORT_P1_OD_P1_Msk                 (0x4UL)
#define PORT_P1_OD_P3_P2_Pos              (3UL)
#define PORT_P1_OD_P3_P2_Msk              (0x8UL)
#define PORT_P1_OD_P4_Pos                 (4UL)
#define PORT_P1_OD_P4_Msk                 (0x10UL)

#define PORT_P1_PUDEN_P0_Pos              (0UL)
#define PORT_P1_PUDEN_P0_Msk              (0x1UL)
#define PORT_P1_PUDEN_P1_Pos              (1UL)
#define PORT_P1_PUDEN_P1_Msk              (0x2UL)
#define PORT_P1_PUDEN_P2_Pos              (2UL)
#define PORT_P1_PUDEN_P2_Msk              (0x4UL)
#define PORT_P1_PUDEN_P3_Pos              (3UL)
#define PORT_P1_PUDEN_P3_Msk              (0x8UL)
#define PORT_P1_PUDEN_P4_Pos              (4UL)
#define PORT_P1_PUDEN_P4_Msk              (0x10UL)

#define PORT_P1_PUDSEL_P0_Pos             (0UL)
#define PORT_P1_PUDSEL_P0_Msk             (0x1UL)
#define PORT_P1_PUDSEL_P1_Pos             (1UL)
#define PORT_P1_PUDSEL_P1_Msk             (0x2UL)
#define PORT_P1_PUDSEL_P2_Pos             (2UL)
#define PORT_P1_PUDSEL_P2_Msk             (0x4UL)
#define PORT_P1_PUDSEL_P3_Pos             (3UL)
#define PORT_P1_PUDSEL_P3_Msk             (0x8UL)
#define PORT_P1_PUDSEL_P4_Pos             (4UL)
#define PORT_P1_PUDSEL_P4_Msk             (0x10UL)

#define PORT_P2_DATA_P0_Pos               (0UL)
#define PORT_P2_DATA_P0_Msk               (0x1UL)
#define PORT_P2_DATA_P2_Pos               (2UL)
#define PORT_P2_DATA_P2_Msk               (0x4UL)
#define PORT_P2_DATA_P3_Pos               (3UL)
#define PORT_P2_DATA_P3_Msk               (0x8UL)
#define PORT_P2_DATA_P4_Pos               (4UL)
#define PORT_P2_DATA_P4_Msk               (0x10UL)
#define PORT_P2_DATA_P5_Pos               (5UL)
#define PORT_P2_DATA_P5_Msk               (0x20UL)

#define PORT_P2_DIR_P0_Pos                (0UL)
#define PORT_P2_DIR_P0_Msk                (0x1UL)
#define PORT_P2_DIR_P2_Pos                (2UL)
#define PORT_P2_DIR_P2_Msk                (0x4UL)
#define PORT_P2_DIR_P3_Pos                (3UL)
#define PORT_P2_DIR_P3_Msk                (0x8UL)
#define PORT_P2_DIR_P4_Pos                (4UL)
#define PORT_P2_DIR_P4_Msk                (0x10UL)
#define PORT_P2_DIR_P5_Pos                (5UL)
#define PORT_P2_DIR_P5_Msk                (0x20UL)

#define PORT_P2_PUDEN_P0_Pos              (0UL)
#define PORT_P2_PUDEN_P0_Msk              (0x1UL)
#define PORT_P2_PUDEN_P2_Pos              (2UL)
#define PORT_P2_PUDEN_P2_Msk              (0x4UL)
#define PORT_P2_PUDEN_P3_Pos              (3UL)
#define PORT_P2_PUDEN_P3_Msk              (0x8UL)
#define PORT_P2_PUDEN_P4_Pos              (4UL)
#define PORT_P2_PUDEN_P4_Msk              (0x10UL)
#define PORT_P2_PUDEN_P5_Pos              (5UL)
#define PORT_P2_PUDEN_P5_Msk              (0x20UL)

#define PORT_P2_PUDSEL_P0_Pos             (0UL)
#define PORT_P2_PUDSEL_P0_Msk             (0x1UL)
#define PORT_P2_PUDSEL_P2_Pos             (2UL)
#define PORT_P2_PUDSEL_P2_Msk             (0x4UL)
#define PORT_P2_PUDSEL_P3_Pos             (3UL)
#define PORT_P2_PUDSEL_P3_Msk             (0x8UL)
#define PORT_P2_PUDSEL_P4_Pos             (4UL)
#define PORT_P2_PUDSEL_P4_Msk             (0x10UL)
#define PORT_P2_PUDSEL_P5_Pos             (5UL)
#define PORT_P2_PUDSEL_P5_Msk             (0x20UL)

#define SCU_APCLK1_APCLK3SCLR_Pos         (7UL)
#define SCU_APCLK1_APCLK3SCLR_Msk         (0x80UL)
#define SCU_APCLK1_APCLK3STS_Pos          (6UL)
#define SCU_APCLK1_APCLK3STS_Msk          (0x40UL)
#define SCU_APCLK1_APCLK1STS_Pos          (4UL)
#define SCU_APCLK1_APCLK1STS_Msk          (0x30UL)
#define SCU_APCLK1_APCLK1SCLR_Pos         (2UL)
#define SCU_APCLK1_APCLK1SCLR_Msk         (0x4UL)
#define SCU_APCLK1_APCLK1FAC_Pos          (0UL)
#define SCU_APCLK1_APCLK1FAC_Msk          (0x3UL)

#define SCU_APCLK2_APCLK2SCLR_Pos         (7UL)
#define SCU_APCLK2_APCLK2SCLR_Msk         (0x80UL)
#define SCU_APCLK2_APCLK2STS_Pos          (5UL)
#define SCU_APCLK2_APCLK2STS_Msk          (0x60UL)
#define SCU_APCLK2_APCLK2FAC_Pos          (0UL)
#define SCU_APCLK2_APCLK2FAC_Msk          (0x1fUL)

#define SCU_APCLK_CTRL1_CPCLK_DIV_Pos     (7UL)
#define SCU_APCLK_CTRL1_CPCLK_DIV_Msk     (0x80UL)
#define SCU_APCLK_CTRL1_CPCLK_SEL_Pos     (6UL)
#define SCU_APCLK_CTRL1_CPCLK_SEL_Msk     (0x40UL)
#define SCU_APCLK_CTRL1_BGCLK_DIV_Pos     (5UL)
#define SCU_APCLK_CTRL1_BGCLK_DIV_Msk     (0x20UL)
#define SCU_APCLK_CTRL1_BGCLK_SEL_Pos     (4UL)
#define SCU_APCLK_CTRL1_BGCLK_SEL_Msk     (0x10UL)
#define SCU_APCLK_CTRL1_CLKWDT_IE_Pos     (3UL)
#define SCU_APCLK_CTRL1_CLKWDT_IE_Msk     (0x8UL)
#define SCU_APCLK_CTRL1_T3CLK_SEL_Pos     (2UL)
#define SCU_APCLK_CTRL1_T3CLK_SEL_Msk     (0x4UL)
#define SCU_APCLK_CTRL1_APCLK_SET_Pos     (1UL)
#define SCU_APCLK_CTRL1_APCLK_SET_Msk     (0x2UL)
#define SCU_APCLK_CTRL1_PLL_LOCK_Pos      (0UL)
#define SCU_APCLK_CTRL1_PLL_LOCK_Msk      (0x1UL)

#define SCU_APCLK_CTRL2_T3CLK_DIV_Pos     (2UL)
#define SCU_APCLK_CTRL2_T3CLK_DIV_Msk     (0xcUL)
#define SCU_APCLK_CTRL2_SDADCCLK_DIV_Pos  (0UL)
#define SCU_APCLK_CTRL2_SDADCCLK_DIV_Msk  (0x3UL)

#define SCU_BCON1_R_Pos                   (0UL)
#define SCU_BCON1_R_Msk                   (0x1UL)
#define SCU_BCON1_BRPRE_Pos               (1UL)
#define SCU_BCON1_BRPRE_Msk               (0xeUL)

#define SCU_BCON2_R_Pos                   (0UL)
#define SCU_BCON2_R_Msk                   (0x1UL)
#define SCU_BCON2_BRPRE_Pos               (1UL)
#define SCU_BCON2_BRPRE_Msk               (0xeUL)

#define SCU_BGH1_BR_VALUE_Pos             (0UL)
#define SCU_BGH1_BR_VALUE_Msk             (0xffUL)

#define SCU_BGH2_BR_VALUE_Pos             (0UL)
#define SCU_BGH2_BR_VALUE_Msk             (0xffUL)

#define SCU_BGL1_FD_SEL_Pos               (0UL)
#define SCU_BGL1_FD_SEL_Msk               (0x1fUL)
#define SCU_BGL1_BR_VALUE_Pos             (5UL)
#define SCU_BGL1_BR_VALUE_Msk             (0xe0UL)

#define SCU_BGL2_FD_SEL_Pos               (0UL)
#define SCU_BGL2_FD_SEL_Msk               (0x1fUL)
#define SCU_BGL2_BR_VALUE_Pos             (5UL)
#define SCU_BGL2_BR_VALUE_Msk             (0xe0UL)

#define SCU_CMCON1_VCOSEL_Pos             (7UL)
#define SCU_CMCON1_VCOSEL_Msk             (0x80UL)
#define SCU_CMCON1_K1DIV_Pos              (6UL)
#define SCU_CMCON1_K1DIV_Msk              (0x40UL)
#define SCU_CMCON1_K2DIV_Pos              (4UL)
#define SCU_CMCON1_K2DIV_Msk              (0x30UL)
#define SCU_CMCON1_CLKREL_Pos             (0UL)
#define SCU_CMCON1_CLKREL_Msk             (0xfUL)

#define SCU_CMCON2_PBA0CLKREL_Pos         (0UL)
#define SCU_CMCON2_PBA0CLKREL_Msk         (0x1UL)

#define SCU_COCON_EN_Pos                  (7UL)
#define SCU_COCON_EN_Msk                  (0x80UL)
#define SCU_COCON_COUTS1_Pos              (6UL)
#define SCU_COCON_COUTS1_Msk              (0x40UL)
#define SCU_COCON_TLEN_Pos                (5UL)
#define SCU_COCON_TLEN_Msk                (0x20UL)
#define SCU_COCON_COUTS0_Pos              (4UL)
#define SCU_COCON_COUTS0_Msk              (0x10UL)
#define SCU_COCON_COREL_Pos               (0UL)
#define SCU_COCON_COREL_Msk               (0xfUL)

#define SCU_DMAIEN1_CH8IE_Pos             (7UL)
#define SCU_DMAIEN1_CH8IE_Msk             (0x80UL)
#define SCU_DMAIEN1_CH7IE_Pos             (6UL)
#define SCU_DMAIEN1_CH7IE_Msk             (0x40UL)
#define SCU_DMAIEN1_CH6IE_Pos             (5UL)
#define SCU_DMAIEN1_CH6IE_Msk             (0x20UL)
#define SCU_DMAIEN1_CH5IE_Pos             (4UL)
#define SCU_DMAIEN1_CH5IE_Msk             (0x10UL)
#define SCU_DMAIEN1_CH4IE_Pos             (3UL)
#define SCU_DMAIEN1_CH4IE_Msk             (0x8UL)
#define SCU_DMAIEN1_CH3IE_Pos             (2UL)
#define SCU_DMAIEN1_CH3IE_Msk             (0x4UL)
#define SCU_DMAIEN1_CH2IE_Pos             (1UL)
#define SCU_DMAIEN1_CH2IE_Msk             (0x2UL)
#define SCU_DMAIEN1_CH1IE_Pos             (0UL)
#define SCU_DMAIEN1_CH1IE_Msk             (0x1UL)

#define SCU_DMAIEN2_SDADCIE_Pos           (6UL)
#define SCU_DMAIEN2_SDADCIE_Msk           (0x40UL)
#define SCU_DMAIEN2_GPT12IE_Pos           (5UL)
#define SCU_DMAIEN2_GPT12IE_Msk           (0x20UL)
#define SCU_DMAIEN2_SSCRXIE_Pos           (4UL)
#define SCU_DMAIEN2_SSCRXIE_Msk           (0x10UL)
#define SCU_DMAIEN2_SSCTXIE_Pos           (3UL)
#define SCU_DMAIEN2_SSCTXIE_Msk           (0x8UL)
#define SCU_DMAIEN2_TRSEQ2RDYIE_Pos       (2UL)
#define SCU_DMAIEN2_TRSEQ2RDYIE_Msk       (0x4UL)
#define SCU_DMAIEN2_TRSEQ1RDYIE_Pos       (1UL)
#define SCU_DMAIEN2_TRSEQ1RDYIE_Msk       (0x2UL)
#define SCU_DMAIEN2_TRERRIE_Pos           (0UL)
#define SCU_DMAIEN2_TRERRIE_Msk           (0x1UL)

#define SCU_DMAIRC1_CH8_Pos               (7UL)
#define SCU_DMAIRC1_CH8_Msk               (0x80UL)
#define SCU_DMAIRC1_CH7_Pos               (6UL)
#define SCU_DMAIRC1_CH7_Msk               (0x40UL)
#define SCU_DMAIRC1_CH6_Pos               (5UL)
#define SCU_DMAIRC1_CH6_Msk               (0x20UL)
#define SCU_DMAIRC1_CH5_Pos               (4UL)
#define SCU_DMAIRC1_CH5_Msk               (0x10UL)
#define SCU_DMAIRC1_CH4_Pos               (3UL)
#define SCU_DMAIRC1_CH4_Msk               (0x8UL)
#define SCU_DMAIRC1_CH3_Pos               (2UL)
#define SCU_DMAIRC1_CH3_Msk               (0x4UL)
#define SCU_DMAIRC1_CH2_Pos               (1UL)
#define SCU_DMAIRC1_CH2_Msk               (0x2UL)
#define SCU_DMAIRC1_CH1_Pos               (0UL)
#define SCU_DMAIRC1_CH1_Msk               (0x1UL)

#define SCU_DMAIRC1CLR_CH8C_Pos           (7UL)
#define SCU_DMAIRC1CLR_CH8C_Msk           (0x80UL)
#define SCU_DMAIRC1CLR_CH7C_Pos           (6UL)
#define SCU_DMAIRC1CLR_CH7C_Msk           (0x40UL)
#define SCU_DMAIRC1CLR_CH6C_Pos           (5UL)
#define SCU_DMAIRC1CLR_CH6C_Msk           (0x20UL)
#define SCU_DMAIRC1CLR_CH5C_Pos           (4UL)
#define SCU_DMAIRC1CLR_CH5C_Msk           (0x10UL)
#define SCU_DMAIRC1CLR_CH4C_Pos           (3UL)
#define SCU_DMAIRC1CLR_CH4C_Msk           (0x8UL)
#define SCU_DMAIRC1CLR_CH3C_Pos           (2UL)
#define SCU_DMAIRC1CLR_CH3C_Msk           (0x4UL)
#define SCU_DMAIRC1CLR_CH2C_Pos           (1UL)
#define SCU_DMAIRC1CLR_CH2C_Msk           (0x2UL)
#define SCU_DMAIRC1CLR_CH1C_Pos           (0UL)
#define SCU_DMAIRC1CLR_CH1C_Msk           (0x1UL)

#define SCU_DMAIRC2_SDADC_Pos             (6UL)
#define SCU_DMAIRC2_SDADC_Msk             (0x40UL)
#define SCU_DMAIRC2_GPT12_Pos             (5UL)
#define SCU_DMAIRC2_GPT12_Msk             (0x20UL)
#define SCU_DMAIRC2_SSC2RDY_Pos           (4UL)
#define SCU_DMAIRC2_SSC2RDY_Msk           (0x10UL)
#define SCU_DMAIRC2_SSC1RDY_Pos           (3UL)
#define SCU_DMAIRC2_SSC1RDY_Msk           (0x8UL)
#define SCU_DMAIRC2_TRSEQ2DY_Pos          (2UL)
#define SCU_DMAIRC2_TRSEQ2DY_Msk          (0x4UL)
#define SCU_DMAIRC2_TRSEQ1DY_Pos          (1UL)
#define SCU_DMAIRC2_TRSEQ1DY_Msk          (0x2UL)
#define SCU_DMAIRC2_STRDY_Pos             (0UL)
#define SCU_DMAIRC2_STRDY_Msk             (0x1UL)

#define SCU_DMAIRC2CLR_SDADCC_Pos         (6UL)
#define SCU_DMAIRC2CLR_SDADCC_Msk         (0x40UL)
#define SCU_DMAIRC2CLR_GPT12C_Pos         (5UL)
#define SCU_DMAIRC2CLR_GPT12C_Msk         (0x20UL)
#define SCU_DMAIRC2CLR_SSC2C_Pos          (4UL)
#define SCU_DMAIRC2CLR_SSC2C_Msk          (0x10UL)
#define SCU_DMAIRC2CLR_SSC1C_Pos          (3UL)
#define SCU_DMAIRC2CLR_SSC1C_Msk          (0x8UL)
#define SCU_DMAIRC2CLR_TRSEQ2DYC_Pos      (2UL)
#define SCU_DMAIRC2CLR_TRSEQ2DYC_Msk      (0x4UL)
#define SCU_DMAIRC2CLR_TRSEQ1DYC_Pos      (1UL)
#define SCU_DMAIRC2CLR_TRSEQ1DYC_Msk      (0x2UL)

#define SCU_DMASRCCLR_GPT12_T3C_Pos       (7UL)
#define SCU_DMASRCCLR_GPT12_T3C_Msk       (0x80UL)
#define SCU_DMASRCCLR_SSCRXC_Pos          (6UL)
#define SCU_DMASRCCLR_SSCRXC_Msk          (0x40UL)
#define SCU_DMASRCCLR_SSCTXC_Pos          (5UL)
#define SCU_DMASRCCLR_SSCTXC_Msk          (0x20UL)

#define SCU_DMASRCSEL_GPT12_T3_Pos        (7UL)
#define SCU_DMASRCSEL_GPT12_T3_Msk        (0x80UL)
#define SCU_DMASRCSEL_SSCRX_Pos           (6UL)
#define SCU_DMASRCSEL_SSCRX_Msk           (0x40UL)
#define SCU_DMASRCSEL_SSCTX_Pos           (5UL)
#define SCU_DMASRCSEL_SSCTX_Msk           (0x20UL)
#define SCU_DMASRCSEL_T12PM_DMAEN_Pos     (3UL)
#define SCU_DMASRCSEL_T12PM_DMAEN_Msk     (0x8UL)
#define SCU_DMASRCSEL_T12ZM_DMAEN_Pos     (2UL)
#define SCU_DMASRCSEL_T12ZM_DMAEN_Msk     (0x4UL)
#define SCU_DMASRCSEL_SSCRXSRCSEL_Pos     (1UL)
#define SCU_DMASRCSEL_SSCRXSRCSEL_Msk     (0x2UL)
#define SCU_DMASRCSEL_SSCTXSRCSEL_Pos     (0UL)
#define SCU_DMASRCSEL_SSCTXSRCSEL_Msk     (0x1UL)

#define SCU_DMASRCSEL2_GPT12_DMAEN_Pos    (0UL)
#define SCU_DMASRCSEL2_GPT12_DMAEN_Msk    (0x3UL)

#define SCU_EDCCON_NVMIE_Pos              (2UL)
#define SCU_EDCCON_NVMIE_Msk              (0x4UL)
#define SCU_EDCCON_RIE_Pos                (0UL)
#define SCU_EDCCON_RIE_Msk                (0x1UL)

#define SCU_EDCSCLR_RSBEC_Pos             (4UL)
#define SCU_EDCSCLR_RSBEC_Msk             (0x10UL)
#define SCU_EDCSCLR_NVMDBEC_Pos           (2UL)
#define SCU_EDCSCLR_NVMDBEC_Msk           (0x4UL)
#define SCU_EDCSCLR_RDBEC_Pos             (0UL)
#define SCU_EDCSCLR_RDBEC_Msk             (0x1UL)

#define SCU_EDCSTAT_RSBE_Pos              (4UL)
#define SCU_EDCSTAT_RSBE_Msk              (0x10UL)
#define SCU_EDCSTAT_NVMDBE_Pos            (2UL)
#define SCU_EDCSTAT_NVMDBE_Msk            (0x4UL)
#define SCU_EDCSTAT_RDBE_Pos              (0UL)
#define SCU_EDCSTAT_RDBE_Msk              (0x1UL)

#define SCU_EXICON0_MON_Trig_Sel_Pos      (6UL)
#define SCU_EXICON0_MON_Trig_Sel_Msk      (0xc0UL)
#define SCU_EXICON0_EXINT2_Pos            (4UL)
#define SCU_EXICON0_EXINT2_Msk            (0x30UL)
#define SCU_EXICON0_EXINT1_Pos            (2UL)
#define SCU_EXICON0_EXINT1_Msk            (0xcUL)
#define SCU_EXICON0_EXINT0_Pos            (0UL)
#define SCU_EXICON0_EXINT0_Msk            (0x3UL)

#define SCU_GPT12ICLR_CRC_Pos             (5UL)
#define SCU_GPT12ICLR_CRC_Msk             (0x20UL)
#define SCU_GPT12ICLR_T6C_Pos             (4UL)
#define SCU_GPT12ICLR_T6C_Msk             (0x10UL)
#define SCU_GPT12ICLR_T5C_Pos             (3UL)
#define SCU_GPT12ICLR_T5C_Msk             (0x8UL)
#define SCU_GPT12ICLR_T4C_Pos             (2UL)
#define SCU_GPT12ICLR_T4C_Msk             (0x4UL)
#define SCU_GPT12ICLR_T3C_Pos             (1UL)
#define SCU_GPT12ICLR_T3C_Msk             (0x2UL)
#define SCU_GPT12ICLR_T2C_Pos             (0UL)
#define SCU_GPT12ICLR_T2C_Msk             (0x1UL)

#define SCU_GPT12IEN_CRIE_Pos             (5UL)
#define SCU_GPT12IEN_CRIE_Msk             (0x20UL)
#define SCU_GPT12IEN_T6IE_Pos             (4UL)
#define SCU_GPT12IEN_T6IE_Msk             (0x10UL)
#define SCU_GPT12IEN_T5IE_Pos             (3UL)
#define SCU_GPT12IEN_T5IE_Msk             (0x8UL)
#define SCU_GPT12IEN_T4IE_Pos             (2UL)
#define SCU_GPT12IEN_T4IE_Msk             (0x4UL)
#define SCU_GPT12IEN_T3IE_Pos             (1UL)
#define SCU_GPT12IEN_T3IE_Msk             (0x2UL)
#define SCU_GPT12IEN_T2IE_Pos             (0UL)
#define SCU_GPT12IEN_T2IE_Msk             (0x1UL)

#define SCU_GPT12IRC_CR_Pos               (5UL)
#define SCU_GPT12IRC_CR_Msk               (0x20UL)
#define SCU_GPT12IRC_T6_Pos               (4UL)
#define SCU_GPT12IRC_T6_Msk               (0x10UL)
#define SCU_GPT12IRC_T5_Pos               (3UL)
#define SCU_GPT12IRC_T5_Msk               (0x8UL)
#define SCU_GPT12IRC_T4_Pos               (2UL)
#define SCU_GPT12IRC_T4_Msk               (0x4UL)
#define SCU_GPT12IRC_T3_Pos               (1UL)
#define SCU_GPT12IRC_T3_Msk               (0x2UL)
#define SCU_GPT12IRC_T2_Pos               (0UL)
#define SCU_GPT12IRC_T2_Msk               (0x1UL)

#define SCU_GPT12PISEL_T3_GPT12_SEL_Pos   (5UL)
#define SCU_GPT12PISEL_T3_GPT12_SEL_Msk   (0x20UL)
#define SCU_GPT12PISEL_TRIG_CONF_Pos      (4UL)
#define SCU_GPT12PISEL_TRIG_CONF_Msk      (0x10UL)
#define SCU_GPT12PISEL_GPT12_Pos          (0UL)
#define SCU_GPT12PISEL_GPT12_Msk          (0xfUL)

#define SCU_ID_PRODID_Pos                 (3UL)
#define SCU_ID_PRODID_Msk                 (0xf8UL)
#define SCU_ID_VERID_Pos                  (0UL)
#define SCU_ID_VERID_Msk                  (0x7UL)

#define SCU_IEN0_EA_Pos                   (7UL)
#define SCU_IEN0_EA_Msk                   (0x80UL)

#define SCU_IRCON0_MONF_Pos               (7UL)
#define SCU_IRCON0_MONF_Msk               (0x80UL)
#define SCU_IRCON0_MONR_Pos               (6UL)
#define SCU_IRCON0_MONR_Msk               (0x40UL)
#define SCU_IRCON0_EXINT2F_Pos            (5UL)
#define SCU_IRCON0_EXINT2F_Msk            (0x20UL)
#define SCU_IRCON0_EXINT2R_Pos            (4UL)
#define SCU_IRCON0_EXINT2R_Msk            (0x10UL)
#define SCU_IRCON0_EXINT1F_Pos            (3UL)
#define SCU_IRCON0_EXINT1F_Msk            (0x8UL)
#define SCU_IRCON0_EXINT1R_Pos            (2UL)
#define SCU_IRCON0_EXINT1R_Msk            (0x4UL)
#define SCU_IRCON0_EXINT0F_Pos            (1UL)
#define SCU_IRCON0_EXINT0F_Msk            (0x2UL)
#define SCU_IRCON0_EXINT0R_Pos            (0UL)
#define SCU_IRCON0_EXINT0R_Msk            (0x1UL)

#define SCU_IRCON0CLR_MONFC_Pos           (7UL)
#define SCU_IRCON0CLR_MONFC_Msk           (0x80UL)
#define SCU_IRCON0CLR_MONRC_Pos           (6UL)
#define SCU_IRCON0CLR_MONRC_Msk           (0x40UL)
#define SCU_IRCON0CLR_EXINT2FC_Pos        (5UL)
#define SCU_IRCON0CLR_EXINT2FC_Msk        (0x20UL)
#define SCU_IRCON0CLR_EXINT2RC_Pos        (4UL)
#define SCU_IRCON0CLR_EXINT2RC_Msk        (0x10UL)
#define SCU_IRCON0CLR_EXINT1FC_Pos        (3UL)
#define SCU_IRCON0CLR_EXINT1FC_Msk        (0x8UL)
#define SCU_IRCON0CLR_EXINT1RC_Pos        (2UL)
#define SCU_IRCON0CLR_EXINT1RC_Msk        (0x4UL)
#define SCU_IRCON0CLR_EXINT0FC_Pos        (1UL)
#define SCU_IRCON0CLR_EXINT0FC_Msk        (0x2UL)
#define SCU_IRCON0CLR_EXINT0RC_Pos        (0UL)
#define SCU_IRCON0CLR_EXINT0RC_Msk        (0x1UL)

#define SCU_IRCON1_RIR_Pos                (2UL)
#define SCU_IRCON1_RIR_Msk                (0x4UL)
#define SCU_IRCON1_TIR_Pos                (1UL)
#define SCU_IRCON1_TIR_Msk                (0x2UL)
#define SCU_IRCON1_EIR_Pos                (0UL)
#define SCU_IRCON1_EIR_Msk                (0x1UL)

#define SCU_IRCON1CLR_RIRC_Pos            (2UL)
#define SCU_IRCON1CLR_RIRC_Msk            (0x4UL)
#define SCU_IRCON1CLR_TIRC_Pos            (1UL)
#define SCU_IRCON1CLR_TIRC_Msk            (0x2UL)
#define SCU_IRCON1CLR_EIRC_Pos            (0UL)
#define SCU_IRCON1CLR_EIRC_Msk            (0x1UL)

#define SCU_IRCON2_RIR_Pos                (2UL)
#define SCU_IRCON2_RIR_Msk                (0x4UL)
#define SCU_IRCON2_TIR_Pos                (1UL)
#define SCU_IRCON2_TIR_Msk                (0x2UL)
#define SCU_IRCON2_EIR_Pos                (0UL)
#define SCU_IRCON2_EIR_Msk                (0x1UL)

#define SCU_IRCON2CLR_RIRC_Pos            (2UL)
#define SCU_IRCON2CLR_RIRC_Msk            (0x4UL)
#define SCU_IRCON2CLR_TIRC_Pos            (1UL)
#define SCU_IRCON2CLR_TIRC_Msk            (0x2UL)
#define SCU_IRCON2CLR_EIRC_Pos            (0UL)
#define SCU_IRCON2CLR_EIRC_Msk            (0x1UL)

#define SCU_IRCON3_CCU6SR1_Pos            (4UL)
#define SCU_IRCON3_CCU6SR1_Msk            (0x10UL)
#define SCU_IRCON3_CCU6SR0_Pos            (0UL)
#define SCU_IRCON3_CCU6SR0_Msk            (0x1UL)

#define SCU_IRCON3CLR_CCU6SR1C_Pos        (4UL)
#define SCU_IRCON3CLR_CCU6SR1C_Msk        (0x10UL)
#define SCU_IRCON3CLR_CCU6SR0C_Pos        (0UL)
#define SCU_IRCON3CLR_CCU6SR0C_Msk        (0x1UL)

#define SCU_IRCON4_CCU6SR3_Pos            (4UL)
#define SCU_IRCON4_CCU6SR3_Msk            (0x10UL)
#define SCU_IRCON4_CCU6SR2_Pos            (0UL)
#define SCU_IRCON4_CCU6SR2_Msk            (0x1UL)

#define SCU_IRCON4CLR_CCU6SR3C_Pos        (4UL)
#define SCU_IRCON4CLR_CCU6SR3C_Msk        (0x10UL)
#define SCU_IRCON4CLR_CCU6SR2C_Pos        (0UL)
#define SCU_IRCON4CLR_CCU6SR2C_Msk        (0x1UL)

#define SCU_LINSCLR_BRKC_Pos              (3UL)
#define SCU_LINSCLR_BRKC_Msk              (0x8UL)
#define SCU_LINSCLR_EOFSYNC_Pos           (4UL)
#define SCU_LINSCLR_EOFSYNC_Msk           (0x10UL)
#define SCU_LINSCLR_ERRSYNC_Pos           (5UL)
#define SCU_LINSCLR_ERRSYNC_Msk           (0x20UL)

#define SCU_LINST_BRDIS_Pos               (0UL)
#define SCU_LINST_BRDIS_Msk               (0x1UL)
#define SCU_LINST_BGSEL_Pos               (1UL)
#define SCU_LINST_BGSEL_Msk               (0x6UL)
#define SCU_LINST_BRK_Pos                 (3UL)
#define SCU_LINST_BRK_Msk                 (0x8UL)
#define SCU_LINST_EOFSYN_Pos              (4UL)
#define SCU_LINST_EOFSYN_Msk              (0x10UL)
#define SCU_LINST_ERRSYN_Pos              (5UL)
#define SCU_LINST_ERRSYN_Msk              (0x20UL)
#define SCU_LINST_SYNEN_Pos               (6UL)
#define SCU_LINST_SYNEN_Msk               (0x40UL)

#define SCU_MEM_ACC_STS_RAM_PROT_ERR_Pos  (6UL)
#define SCU_MEM_ACC_STS_RAM_PROT_ERR_Msk  (0x40UL)
#define SCU_MEM_ACC_STS_ROM_ADDR_ERR_Pos  (5UL)
#define SCU_MEM_ACC_STS_ROM_ADDR_ERR_Msk  (0x20UL)
#define SCU_MEM_ACC_STS_ROM_PROT_ERR_Pos  (4UL)
#define SCU_MEM_ACC_STS_ROM_PROT_ERR_Msk  (0x10UL)
#define SCU_MEM_ACC_STS_NVM_SFR_ADDR_ERR_Pos (3UL)
#define SCU_MEM_ACC_STS_NVM_SFR_ADDR_ERR_Msk (0x8UL)
#define SCU_MEM_ACC_STS_NVM_SFR_PROT_ERR_Pos (2UL)
#define SCU_MEM_ACC_STS_NVM_SFR_PROT_ERR_Msk (0x4UL)
#define SCU_MEM_ACC_STS_NVM_ADDR_ERR_Pos  (1UL)
#define SCU_MEM_ACC_STS_NVM_ADDR_ERR_Msk  (0x2UL)
#define SCU_MEM_ACC_STS_NVM_PROT_ERR_Pos  (0UL)
#define SCU_MEM_ACC_STS_NVM_PROT_ERR_Msk  (0x1UL)

#define SCU_MEMSTAT_SASTATUS_Pos          (6UL)
#define SCU_MEMSTAT_SASTATUS_Msk          (0xc0UL)
#define SCU_MEMSTAT_SECTORINFO_Pos        (0UL)
#define SCU_MEMSTAT_SECTORINFO_Msk        (0x3fUL)

#define SCU_MODIEN1_TIEN1_Pos             (7UL)
#define SCU_MODIEN1_TIEN1_Msk             (0x80UL)
#define SCU_MODIEN1_RIEN1_Pos             (6UL)
#define SCU_MODIEN1_RIEN1_Msk             (0x40UL)
#define SCU_MODIEN1_RIREN1_Pos            (2UL)
#define SCU_MODIEN1_RIREN1_Msk            (0x4UL)
#define SCU_MODIEN1_TIREN1_Pos            (1UL)
#define SCU_MODIEN1_TIREN1_Msk            (0x2UL)
#define SCU_MODIEN1_EIREN1_Pos            (0UL)
#define SCU_MODIEN1_EIREN1_Msk            (0x1UL)

#define SCU_MODIEN2_TIEN2_Pos             (7UL)
#define SCU_MODIEN2_TIEN2_Msk             (0x80UL)
#define SCU_MODIEN2_RIEN2_Pos             (6UL)
#define SCU_MODIEN2_RIEN2_Msk             (0x40UL)
#define SCU_MODIEN2_EXINT2_EN_Pos         (5UL)
#define SCU_MODIEN2_EXINT2_EN_Msk         (0x20UL)
#define SCU_MODIEN2_RIREN2_Pos            (2UL)
#define SCU_MODIEN2_RIREN2_Msk            (0x4UL)
#define SCU_MODIEN2_TIREN2_Pos            (1UL)
#define SCU_MODIEN2_TIREN2_Msk            (0x2UL)
#define SCU_MODIEN2_EIREN2_Pos            (0UL)
#define SCU_MODIEN2_EIREN2_Msk            (0x1UL)

#define SCU_MODIEN3_MONSTS_Pos            (5UL)
#define SCU_MODIEN3_MONSTS_Msk            (0x20UL)
#define SCU_MODIEN3_MONIE_Pos             (4UL)
#define SCU_MODIEN3_MONIE_Msk             (0x10UL)
#define SCU_MODIEN3_IE0_Pos               (0UL)
#define SCU_MODIEN3_IE0_Msk               (0x1UL)

#define SCU_MODIEN4_IE1_Pos               (0UL)
#define SCU_MODIEN4_IE1_Msk               (0x1UL)

#define SCU_MODPISEL_U_TX_CONDIS_Pos      (7UL)
#define SCU_MODPISEL_U_TX_CONDIS_Msk      (0x80UL)
#define SCU_MODPISEL_URIOS1_Pos           (6UL)
#define SCU_MODPISEL_URIOS1_Msk           (0x40UL)
#define SCU_MODPISEL_EXINT2IS_Pos         (4UL)
#define SCU_MODPISEL_EXINT2IS_Msk         (0x30UL)
#define SCU_MODPISEL_EXINT1IS_Pos         (2UL)
#define SCU_MODPISEL_EXINT1IS_Msk         (0xcUL)
#define SCU_MODPISEL_EXINT0IS_Pos         (0UL)
#define SCU_MODPISEL_EXINT0IS_Msk         (0x3UL)

#define SCU_MODPISEL1_T21EXCON_Pos        (7UL)
#define SCU_MODPISEL1_T21EXCON_Msk        (0x80UL)
#define SCU_MODPISEL1_T2EXCON_Pos         (6UL)
#define SCU_MODPISEL1_T2EXCON_Msk         (0x40UL)
#define SCU_MODPISEL1_GPT12CAPINB_Pos     (0UL)
#define SCU_MODPISEL1_GPT12CAPINB_Msk     (0x1UL)

#define SCU_MODPISEL2_T21EXIS_Pos         (6UL)
#define SCU_MODPISEL2_T21EXIS_Msk         (0xc0UL)
#define SCU_MODPISEL2_T2EXIS_Pos          (4UL)
#define SCU_MODPISEL2_T2EXIS_Msk          (0x30UL)
#define SCU_MODPISEL2_T21IS_Pos           (2UL)
#define SCU_MODPISEL2_T21IS_Msk           (0xcUL)
#define SCU_MODPISEL2_T2IS_Pos            (0UL)
#define SCU_MODPISEL2_T2IS_Msk            (0x3UL)

#define SCU_MODPISEL3_URIOS2_Pos          (6UL)
#define SCU_MODPISEL3_URIOS2_Msk          (0x40UL)

#define SCU_MODSUSP1_T21_SUSP_Pos         (6UL)
#define SCU_MODSUSP1_T21_SUSP_Msk         (0x40UL)
#define SCU_MODSUSP1_GPT12_SUSP_Pos       (4UL)
#define SCU_MODSUSP1_GPT12_SUSP_Msk       (0x10UL)
#define SCU_MODSUSP1_T2_SUSP_Pos          (3UL)
#define SCU_MODSUSP1_T2_SUSP_Msk          (0x8UL)
#define SCU_MODSUSP1_T13SUSP_Pos          (2UL)
#define SCU_MODSUSP1_T13SUSP_Msk          (0x4UL)
#define SCU_MODSUSP1_T12SUSP_Pos          (1UL)
#define SCU_MODSUSP1_T12SUSP_Msk          (0x2UL)
#define SCU_MODSUSP1_WDTSUSP_Pos          (0UL)
#define SCU_MODSUSP1_WDTSUSP_Msk          (0x1UL)

#define SCU_MODSUSP2_ADC1_SUSP_Pos        (2UL)
#define SCU_MODSUSP2_ADC1_SUSP_Msk        (0x4UL)
#define SCU_MODSUSP2_MU_SUSP_Pos          (1UL)
#define SCU_MODSUSP2_MU_SUSP_Msk          (0x2UL)
#define SCU_MODSUSP2_T3_SUSP_Pos          (0UL)
#define SCU_MODSUSP2_T3_SUSP_Msk          (0x1UL)

#define SCU_NMICLR_NMISUPC_Pos            (7UL)
#define SCU_NMICLR_NMISUPC_Msk            (0x80UL)
#define SCU_NMICLR_NMIECCC_Pos            (6UL)
#define SCU_NMICLR_NMIECCC_Msk            (0x40UL)
#define SCU_NMICLR_NMIMAPC_Pos            (5UL)
#define SCU_NMICLR_NMIMAPC_Msk            (0x20UL)
#define SCU_NMICLR_NMIOWDC_Pos            (4UL)
#define SCU_NMICLR_NMIOWDC_Msk            (0x10UL)
#define SCU_NMICLR_NMIOTC_Pos             (3UL)
#define SCU_NMICLR_NMIOTC_Msk             (0x8UL)
#define SCU_NMICLR_NMINVMC_Pos            (2UL)
#define SCU_NMICLR_NMINVMC_Msk            (0x4UL)
#define SCU_NMICLR_NMIPLLC_Pos            (1UL)
#define SCU_NMICLR_NMIPLLC_Msk            (0x2UL)
#define SCU_NMICLR_NMIWDTC_Pos            (0UL)
#define SCU_NMICLR_NMIWDTC_Msk            (0x1UL)

#define SCU_NMICON_NMISUP_Pos             (7UL)
#define SCU_NMICON_NMISUP_Msk             (0x80UL)
#define SCU_NMICON_NMIECC_Pos             (6UL)
#define SCU_NMICON_NMIECC_Msk             (0x40UL)
#define SCU_NMICON_NMIMAP_Pos             (5UL)
#define SCU_NMICON_NMIMAP_Msk             (0x20UL)
#define SCU_NMICON_NMIOWD_Pos             (4UL)
#define SCU_NMICON_NMIOWD_Msk             (0x10UL)
#define SCU_NMICON_NMIOT_Pos              (3UL)
#define SCU_NMICON_NMIOT_Msk              (0x8UL)
#define SCU_NMICON_NMINVM_Pos             (2UL)
#define SCU_NMICON_NMINVM_Msk             (0x4UL)
#define SCU_NMICON_NMIPLL_Pos             (1UL)
#define SCU_NMICON_NMIPLL_Msk             (0x2UL)
#define SCU_NMICON_NMIWDT_Pos             (0UL)
#define SCU_NMICON_NMIWDT_Msk             (0x1UL)

#define SCU_NMISR_FNMISUP_Pos             (7UL)
#define SCU_NMISR_FNMISUP_Msk             (0x80UL)
#define SCU_NMISR_FNMIECC_Pos             (6UL)
#define SCU_NMISR_FNMIECC_Msk             (0x40UL)
#define SCU_NMISR_FNMIMAP_Pos             (5UL)
#define SCU_NMISR_FNMIMAP_Msk             (0x20UL)
#define SCU_NMISR_FNMIOWD_Pos             (4UL)
#define SCU_NMISR_FNMIOWD_Msk             (0x10UL)
#define SCU_NMISR_FNMIOT_Pos              (3UL)
#define SCU_NMISR_FNMIOT_Msk              (0x8UL)
#define SCU_NMISR_FNMINVM_Pos             (2UL)
#define SCU_NMISR_FNMINVM_Msk             (0x4UL)
#define SCU_NMISR_FNMIPLL_Pos             (1UL)
#define SCU_NMISR_FNMIPLL_Msk             (0x2UL)
#define SCU_NMISR_FNMIWDT_Pos             (0UL)
#define SCU_NMISR_FNMIWDT_Msk             (0x1UL)

#define SCU_NVM_PROT_STS_NVMPROTSTSL_3_Pos (3UL)
#define SCU_NVM_PROT_STS_NVMPROTSTSL_3_Msk (0x8UL)
#define SCU_NVM_PROT_STS_NVMPROTSTSL_2_Pos (2UL)
#define SCU_NVM_PROT_STS_NVMPROTSTSL_2_Msk (0x4UL)
#define SCU_NVM_PROT_STS_NVMPROTSTSL_1_Pos (1UL)
#define SCU_NVM_PROT_STS_NVMPROTSTSL_1_Msk (0x2UL)
#define SCU_NVM_PROT_STS_NVMPROTSTSL_0_Pos (0UL)
#define SCU_NVM_PROT_STS_NVMPROTSTSL_0_Msk (0x1UL)

#define SCU_OSC_CON_OSCTRIM_8_Pos         (7UL)
#define SCU_OSC_CON_OSCTRIM_8_Msk         (0x80UL)
#define SCU_OSC_CON_XPD_Pos               (4UL)
#define SCU_OSC_CON_XPD_Msk               (0x10UL)
#define SCU_OSC_CON_OSC2L_Pos             (3UL)
#define SCU_OSC_CON_OSC2L_Msk             (0x8UL)
#define SCU_OSC_CON_OSCWDTRST_Pos         (2UL)
#define SCU_OSC_CON_OSCWDTRST_Msk         (0x4UL)
#define SCU_OSC_CON_OSCSS_Pos             (0UL)
#define SCU_OSC_CON_OSCSS_Msk             (0x3UL)

#define SCU_P0_POCON0_PDM1_Pos            (4UL)
#define SCU_P0_POCON0_PDM1_Msk            (0x70UL)
#define SCU_P0_POCON0_PDM0_Pos            (0UL)
#define SCU_P0_POCON0_PDM0_Msk            (0x7UL)

#define SCU_P0_POCON1_PDM3_Pos            (4UL)
#define SCU_P0_POCON1_PDM3_Msk            (0x70UL)
#define SCU_P0_POCON1_PDM2_Pos            (0UL)
#define SCU_P0_POCON1_PDM2_Msk            (0x7UL)

#define SCU_P0_POCON2_PDM4_Pos            (0UL)
#define SCU_P0_POCON2_PDM4_Msk            (0x7UL)

#define SCU_P1_POCON0_PDM1_Pos            (4UL)
#define SCU_P1_POCON0_PDM1_Msk            (0x70UL)
#define SCU_P1_POCON0_PDM0_Pos            (0UL)
#define SCU_P1_POCON0_PDM0_Msk            (0x7UL)

#define SCU_P1_POCON1_PDM3_Pos            (4UL)
#define SCU_P1_POCON1_PDM3_Msk            (0x70UL)
#define SCU_P1_POCON1_PDM2_Pos            (0UL)
#define SCU_P1_POCON1_PDM2_Msk            (0x7UL)

#define SCU_P1_POCON2_PDM4_Pos            (0UL)
#define SCU_P1_POCON2_PDM4_Msk            (0x7UL)

#define SCU_PASSWD_PASS_Pos               (3UL)
#define SCU_PASSWD_PASS_Msk               (0xf8UL)
#define SCU_PASSWD_PROTECT_S_Pos          (2UL)
#define SCU_PASSWD_PROTECT_S_Msk          (0x4UL)
#define SCU_PASSWD_MODE_Pos               (0UL)
#define SCU_PASSWD_MODE_Msk               (0x3UL)

#define SCU_PLL_CON_NDIV_Pos              (4UL)
#define SCU_PLL_CON_NDIV_Msk              (0xf0UL)
#define SCU_PLL_CON_VCOBYP_Pos            (3UL)
#define SCU_PLL_CON_VCOBYP_Msk            (0x8UL)
#define SCU_PLL_CON_OSCDISC_Pos           (2UL)
#define SCU_PLL_CON_OSCDISC_Msk           (0x4UL)
#define SCU_PLL_CON_RESLD_Pos             (1UL)
#define SCU_PLL_CON_RESLD_Msk             (0x2UL)
#define SCU_PLL_CON_LOCK_Pos              (0UL)
#define SCU_PLL_CON_LOCK_Msk              (0x1UL)

#define SCU_PMCON0_SD_Pos                 (3UL)
#define SCU_PMCON0_SD_Msk                 (0x8UL)
#define SCU_PMCON0_PD_Pos                 (2UL)
#define SCU_PMCON0_PD_Msk                 (0x4UL)
#define SCU_PMCON0_SL_Pos                 (1UL)
#define SCU_PMCON0_SL_Msk                 (0x2UL)
#define SCU_PMCON0_XTAL_ON_Pos            (0UL)
#define SCU_PMCON0_XTAL_ON_Msk            (0x1UL)

#define SCU_PMCON1_GPT12_DIS_Pos          (4UL)
#define SCU_PMCON1_GPT12_DIS_Msk          (0x10UL)
#define SCU_PMCON1_T2_DIS_Pos             (3UL)
#define SCU_PMCON1_T2_DIS_Msk             (0x8UL)
#define SCU_PMCON1_CCU6_DIS_Pos           (2UL)
#define SCU_PMCON1_CCU6_DIS_Msk           (0x4UL)
#define SCU_PMCON1_SSC1_DIS_Pos           (1UL)
#define SCU_PMCON1_SSC1_DIS_Msk           (0x2UL)
#define SCU_PMCON1_ADC1_DIS_Pos           (0UL)
#define SCU_PMCON1_ADC1_DIS_Msk           (0x1UL)

#define SCU_PMCON2_T3_DIS_Pos             (5UL)
#define SCU_PMCON2_T3_DIS_Msk             (0x20UL)
#define SCU_PMCON2_T21_DIS_Pos            (3UL)
#define SCU_PMCON2_T21_DIS_Msk            (0x8UL)
#define SCU_PMCON2_SSC2_DIS_Pos           (1UL)
#define SCU_PMCON2_SSC2_DIS_Msk           (0x2UL)

#define SCU_RSTCON_LOCKUP_EN_Pos          (7UL)
#define SCU_RSTCON_LOCKUP_EN_Msk          (0x80UL)
#define SCU_RSTCON_LOCKUP_Pos             (0UL)
#define SCU_RSTCON_LOCKUP_Msk             (0x1UL)

#define SCU_SYS_STRTUP_STS_PG100TP_CHKS_ERR_Pos (2UL)
#define SCU_SYS_STRTUP_STS_PG100TP_CHKS_ERR_Msk (0x4UL)
#define SCU_SYS_STRTUP_STS_MRAMINITSTS_Pos (1UL)
#define SCU_SYS_STRTUP_STS_MRAMINITSTS_Msk (0x2UL)
#define SCU_SYS_STRTUP_STS_INIT_FAIL_Pos  (0UL)
#define SCU_SYS_STRTUP_STS_INIT_FAIL_Msk  (0x1UL)

#define SCU_SYSCON0_SYSCLKSEL_Pos         (6UL)
#define SCU_SYSCON0_SYSCLKSEL_Msk         (0xc0UL)
#define SCU_SYSCON0_NVMCLKFAC_Pos         (4UL)
#define SCU_SYSCON0_NVMCLKFAC_Msk         (0x30UL)

#define SCU_TCCR_TCC_Pos                  (0UL)
#define SCU_TCCR_TCC_Msk                  (0x3UL)

#define SCU_WDTCON_WINBEN_Pos             (5UL)
#define SCU_WDTCON_WINBEN_Msk             (0x20UL)
#define SCU_WDTCON_WDTPR_Pos              (4UL)
#define SCU_WDTCON_WDTPR_Msk              (0x10UL)
#define SCU_WDTCON_WDTEN_Pos              (2UL)
#define SCU_WDTCON_WDTEN_Msk              (0x4UL)
#define SCU_WDTCON_WDTRS_Pos              (1UL)
#define SCU_WDTCON_WDTRS_Msk              (0x2UL)
#define SCU_WDTCON_WDTIN_Pos              (0UL)
#define SCU_WDTCON_WDTIN_Msk              (0x1UL)

#define SCU_WDTH_WDT_Pos                  (0UL)
#define SCU_WDTH_WDT_Msk                  (0xffUL)

#define SCU_WDTL_WDT_Pos                  (0UL)
#define SCU_WDTL_WDT_Msk                  (0xffUL)

#define SCU_WDTREL_WDTREL_Pos             (0UL)
#define SCU_WDTREL_WDTREL_Msk             (0xffUL)

#define SCU_WDTWINB_WDTWINB_Pos           (0UL)
#define SCU_WDTWINB_WDTWINB_Msk           (0xffUL)

#define SCUPM_AMCLK_CTRL_CLKWDT_PD_N_Pos  (0UL)
#define SCUPM_AMCLK_CTRL_CLKWDT_PD_N_Msk  (0x1UL)

#define SCUPM_AMCLK_FREQ_STS_AMCLK2_FREQ_Pos (8UL)
#define SCUPM_AMCLK_FREQ_STS_AMCLK2_FREQ_Msk (0x3f00UL)
#define SCUPM_AMCLK_FREQ_STS_AMCLK1_FREQ_Pos (0UL)
#define SCUPM_AMCLK_FREQ_STS_AMCLK1_FREQ_Msk (0x3fUL)

#define SCUPM_AMCLK_TH_HYS_AMCLK2_LOW_HYS_Pos (30UL)
#define SCUPM_AMCLK_TH_HYS_AMCLK2_LOW_HYS_Msk (0xc0000000UL)
#define SCUPM_AMCLK_TH_HYS_AMCLK2_LOW_TH_Pos (24UL)
#define SCUPM_AMCLK_TH_HYS_AMCLK2_LOW_TH_Msk (0x3f000000UL)
#define SCUPM_AMCLK_TH_HYS_AMCLK2_UP_HYS_Pos (22UL)
#define SCUPM_AMCLK_TH_HYS_AMCLK2_UP_HYS_Msk (0xc00000UL)
#define SCUPM_AMCLK_TH_HYS_AMCLK2_UP_TH_Pos (16UL)
#define SCUPM_AMCLK_TH_HYS_AMCLK2_UP_TH_Msk (0x3f0000UL)
#define SCUPM_AMCLK_TH_HYS_AMCLK1_LOW_HYS_Pos (14UL)
#define SCUPM_AMCLK_TH_HYS_AMCLK1_LOW_HYS_Msk (0xc000UL)
#define SCUPM_AMCLK_TH_HYS_AMCLK1_LOW_TH_Pos (8UL)
#define SCUPM_AMCLK_TH_HYS_AMCLK1_LOW_TH_Msk (0x3f00UL)
#define SCUPM_AMCLK_TH_HYS_AMCLK1_UP_HYS_Pos (6UL)
#define SCUPM_AMCLK_TH_HYS_AMCLK1_UP_HYS_Msk (0xc0UL)
#define SCUPM_AMCLK_TH_HYS_AMCLK1_UP_TH_Pos (0UL)
#define SCUPM_AMCLK_TH_HYS_AMCLK1_UP_TH_Msk (0x3fUL)

#define SCUPM_BDRV_IRQ_CTRL_VSD_UPTH_IE_Pos (20UL)
#define SCUPM_BDRV_IRQ_CTRL_VSD_UPTH_IE_Msk (0x100000UL)
#define SCUPM_BDRV_IRQ_CTRL_VSD_LOWTH_IE_Pos (19UL)
#define SCUPM_BDRV_IRQ_CTRL_VSD_LOWTH_IE_Msk (0x80000UL)
#define SCUPM_BDRV_IRQ_CTRL_VCP_UPTH_IE_Pos (18UL)
#define SCUPM_BDRV_IRQ_CTRL_VCP_UPTH_IE_Msk (0x40000UL)
#define SCUPM_BDRV_IRQ_CTRL_VCP_LOWTH1_IE_Pos (17UL)
#define SCUPM_BDRV_IRQ_CTRL_VCP_LOWTH1_IE_Msk (0x20000UL)
#define SCUPM_BDRV_IRQ_CTRL_VCP_LOWTH2_IE_Pos (16UL)
#define SCUPM_BDRV_IRQ_CTRL_VCP_LOWTH2_IE_Msk (0x10000UL)
#define SCUPM_BDRV_IRQ_CTRL_HS3_OC_IE_Pos (15UL)
#define SCUPM_BDRV_IRQ_CTRL_HS3_OC_IE_Msk (0x8000UL)
#define SCUPM_BDRV_IRQ_CTRL_LS3_OC_IE_Pos (14UL)
#define SCUPM_BDRV_IRQ_CTRL_LS3_OC_IE_Msk (0x4000UL)
#define SCUPM_BDRV_IRQ_CTRL_HS2_OC_IE_Pos (13UL)
#define SCUPM_BDRV_IRQ_CTRL_HS2_OC_IE_Msk (0x2000UL)
#define SCUPM_BDRV_IRQ_CTRL_HS1_OC_IE_Pos (12UL)
#define SCUPM_BDRV_IRQ_CTRL_HS1_OC_IE_Msk (0x1000UL)
#define SCUPM_BDRV_IRQ_CTRL_LS2_OC_IE_Pos (11UL)
#define SCUPM_BDRV_IRQ_CTRL_LS2_OC_IE_Msk (0x800UL)
#define SCUPM_BDRV_IRQ_CTRL_LS1_OC_IE_Pos (10UL)
#define SCUPM_BDRV_IRQ_CTRL_LS1_OC_IE_Msk (0x400UL)
#define SCUPM_BDRV_IRQ_CTRL_HS3_DS_IE_Pos (5UL)
#define SCUPM_BDRV_IRQ_CTRL_HS3_DS_IE_Msk (0x20UL)
#define SCUPM_BDRV_IRQ_CTRL_LS3_DS_IE_Pos (4UL)
#define SCUPM_BDRV_IRQ_CTRL_LS3_DS_IE_Msk (0x10UL)
#define SCUPM_BDRV_IRQ_CTRL_HS2_DS_IE_Pos (3UL)
#define SCUPM_BDRV_IRQ_CTRL_HS2_DS_IE_Msk (0x8UL)
#define SCUPM_BDRV_IRQ_CTRL_HS1_DS_IE_Pos (2UL)
#define SCUPM_BDRV_IRQ_CTRL_HS1_DS_IE_Msk (0x4UL)
#define SCUPM_BDRV_IRQ_CTRL_LS2_DS_IE_Pos (1UL)
#define SCUPM_BDRV_IRQ_CTRL_LS2_DS_IE_Msk (0x2UL)
#define SCUPM_BDRV_IRQ_CTRL_LS1_DS_IE_Pos (0UL)
#define SCUPM_BDRV_IRQ_CTRL_LS1_DS_IE_Msk (0x1UL)

#define SCUPM_BDRV_IS_VSD_UPTH_STS_Pos    (28UL)
#define SCUPM_BDRV_IS_VSD_UPTH_STS_Msk    (0x10000000UL)
#define SCUPM_BDRV_IS_VSD_LOWTH_STS_Pos   (27UL)
#define SCUPM_BDRV_IS_VSD_LOWTH_STS_Msk   (0x8000000UL)
#define SCUPM_BDRV_IS_VCP_UPTH_STS_Pos    (26UL)
#define SCUPM_BDRV_IS_VCP_UPTH_STS_Msk    (0x4000000UL)
#define SCUPM_BDRV_IS_VCP_LOWTH1_STS_Pos  (25UL)
#define SCUPM_BDRV_IS_VCP_LOWTH1_STS_Msk  (0x2000000UL)
#define SCUPM_BDRV_IS_VCP_LOWTH2_STS_Pos  (24UL)
#define SCUPM_BDRV_IS_VCP_LOWTH2_STS_Msk  (0x1000000UL)
#define SCUPM_BDRV_IS_VSD_UPTH_IS_Pos     (20UL)
#define SCUPM_BDRV_IS_VSD_UPTH_IS_Msk     (0x100000UL)
#define SCUPM_BDRV_IS_VSD_LOWTH_IS_Pos    (19UL)
#define SCUPM_BDRV_IS_VSD_LOWTH_IS_Msk    (0x80000UL)
#define SCUPM_BDRV_IS_VCP_UPTH_IS_Pos     (18UL)
#define SCUPM_BDRV_IS_VCP_UPTH_IS_Msk     (0x40000UL)
#define SCUPM_BDRV_IS_VCP_LOWTH1_IS_Pos   (17UL)
#define SCUPM_BDRV_IS_VCP_LOWTH1_IS_Msk   (0x20000UL)
#define SCUPM_BDRV_IS_VCP_LOWTH2_IS_Pos   (16UL)
#define SCUPM_BDRV_IS_VCP_LOWTH2_IS_Msk   (0x10000UL)
#define SCUPM_BDRV_IS_HS3_OC_IS_Pos       (15UL)
#define SCUPM_BDRV_IS_HS3_OC_IS_Msk       (0x8000UL)
#define SCUPM_BDRV_IS_LS3_OC_IS_Pos       (14UL)
#define SCUPM_BDRV_IS_LS3_OC_IS_Msk       (0x4000UL)
#define SCUPM_BDRV_IS_HS2_OC_IS_Pos       (13UL)
#define SCUPM_BDRV_IS_HS2_OC_IS_Msk       (0x2000UL)
#define SCUPM_BDRV_IS_HS1_OC_IS_Pos       (12UL)
#define SCUPM_BDRV_IS_HS1_OC_IS_Msk       (0x1000UL)
#define SCUPM_BDRV_IS_LS2_OC_IS_Pos       (11UL)
#define SCUPM_BDRV_IS_LS2_OC_IS_Msk       (0x800UL)
#define SCUPM_BDRV_IS_LS1_OC_IS_Pos       (10UL)
#define SCUPM_BDRV_IS_LS1_OC_IS_Msk       (0x400UL)
#define SCUPM_BDRV_IS_HS3_DS_IS_Pos       (5UL)
#define SCUPM_BDRV_IS_HS3_DS_IS_Msk       (0x20UL)
#define SCUPM_BDRV_IS_LS3_DS_IS_Pos       (4UL)
#define SCUPM_BDRV_IS_LS3_DS_IS_Msk       (0x10UL)
#define SCUPM_BDRV_IS_HS2_DS_IS_Pos       (3UL)
#define SCUPM_BDRV_IS_HS2_DS_IS_Msk       (0x8UL)
#define SCUPM_BDRV_IS_HS1_DS_IS_Pos       (2UL)
#define SCUPM_BDRV_IS_HS1_DS_IS_Msk       (0x4UL)
#define SCUPM_BDRV_IS_LS2_DS_IS_Pos       (1UL)
#define SCUPM_BDRV_IS_LS2_DS_IS_Msk       (0x2UL)
#define SCUPM_BDRV_IS_LS1_DS_IS_Pos       (0UL)
#define SCUPM_BDRV_IS_LS1_DS_IS_Msk       (0x1UL)

#define SCUPM_BDRV_ISCLR_VSD_UPTH_SCLR_Pos (28UL)
#define SCUPM_BDRV_ISCLR_VSD_UPTH_SCLR_Msk (0x10000000UL)
#define SCUPM_BDRV_ISCLR_VSD_LOWTH_SCLR_Pos (27UL)
#define SCUPM_BDRV_ISCLR_VSD_LOWTH_SCLR_Msk (0x8000000UL)
#define SCUPM_BDRV_ISCLR_VCP_UPTH_SCLR_Pos (26UL)
#define SCUPM_BDRV_ISCLR_VCP_UPTH_SCLR_Msk (0x4000000UL)
#define SCUPM_BDRV_ISCLR_VCP_LOWTH1_SCLR_Pos (25UL)
#define SCUPM_BDRV_ISCLR_VCP_LOWTH1_SCLR_Msk (0x2000000UL)
#define SCUPM_BDRV_ISCLR_VCP_LOWTH2_SCLR_Pos (24UL)
#define SCUPM_BDRV_ISCLR_VCP_LOWTH2_SCLR_Msk (0x1000000UL)
#define SCUPM_BDRV_ISCLR_VSD_UPTH_ICLR_Pos (20UL)
#define SCUPM_BDRV_ISCLR_VSD_UPTH_ICLR_Msk (0x100000UL)
#define SCUPM_BDRV_ISCLR_VSD_LOWTH_ICLR_Pos (19UL)
#define SCUPM_BDRV_ISCLR_VSD_LOWTH_ICLR_Msk (0x80000UL)
#define SCUPM_BDRV_ISCLR_VCP_UPTH_ICLR_Pos (18UL)
#define SCUPM_BDRV_ISCLR_VCP_UPTH_ICLR_Msk (0x40000UL)
#define SCUPM_BDRV_ISCLR_VCP_LOWTH1_ICLR_Pos (17UL)
#define SCUPM_BDRV_ISCLR_VCP_LOWTH1_ICLR_Msk (0x20000UL)
#define SCUPM_BDRV_ISCLR_VCP_LOWTH2_ICLR_Pos (16UL)
#define SCUPM_BDRV_ISCLR_VCP_LOWTH2_ICLR_Msk (0x10000UL)
#define SCUPM_BDRV_ISCLR_HS3_OC_ICLR_Pos  (15UL)
#define SCUPM_BDRV_ISCLR_HS3_OC_ICLR_Msk  (0x8000UL)
#define SCUPM_BDRV_ISCLR_LS3_OC_ICLR_Pos  (14UL)
#define SCUPM_BDRV_ISCLR_LS3_OC_ICLR_Msk  (0x4000UL)
#define SCUPM_BDRV_ISCLR_HS2_OC_ICLR_Pos  (13UL)
#define SCUPM_BDRV_ISCLR_HS2_OC_ICLR_Msk  (0x2000UL)
#define SCUPM_BDRV_ISCLR_HS1_OC_ICLR_Pos  (12UL)
#define SCUPM_BDRV_ISCLR_HS1_OC_ICLR_Msk  (0x1000UL)
#define SCUPM_BDRV_ISCLR_LS2_OC_ICLR_Pos  (11UL)
#define SCUPM_BDRV_ISCLR_LS2_OC_ICLR_Msk  (0x800UL)
#define SCUPM_BDRV_ISCLR_LS1_OC_ICLR_Pos  (10UL)
#define SCUPM_BDRV_ISCLR_LS1_OC_ICLR_Msk  (0x400UL)
#define SCUPM_BDRV_ISCLR_HS3_DS_ICLR_Pos  (5UL)
#define SCUPM_BDRV_ISCLR_HS3_DS_ICLR_Msk  (0x20UL)
#define SCUPM_BDRV_ISCLR_LS3_DS_ICLR_Pos  (4UL)
#define SCUPM_BDRV_ISCLR_LS3_DS_ICLR_Msk  (0x10UL)
#define SCUPM_BDRV_ISCLR_HS2_DS_ICLR_Pos  (3UL)
#define SCUPM_BDRV_ISCLR_HS2_DS_ICLR_Msk  (0x8UL)
#define SCUPM_BDRV_ISCLR_HS1_DS_ICLR_Pos  (2UL)
#define SCUPM_BDRV_ISCLR_HS1_DS_ICLR_Msk  (0x4UL)
#define SCUPM_BDRV_ISCLR_LS2_DS_ICLR_Pos  (1UL)
#define SCUPM_BDRV_ISCLR_LS2_DS_ICLR_Msk  (0x2UL)
#define SCUPM_BDRV_ISCLR_LS1_DS_ICLR_Pos  (0UL)
#define SCUPM_BDRV_ISCLR_LS1_DS_ICLR_Msk  (0x1UL)

#define SCUPM_BFSTS_SBFSTS_Pos            (1UL)
#define SCUPM_BFSTS_SBFSTS_Msk            (0x2UL)
#define SCUPM_BFSTS_DBFSTS_Pos            (0UL)
#define SCUPM_BFSTS_DBFSTS_Msk            (0x1UL)

#define SCUPM_BFSTS_CLR_SBFSTSCLR_Pos     (1UL)
#define SCUPM_BFSTS_CLR_SBFSTSCLR_Msk     (0x2UL)
#define SCUPM_BFSTS_CLR_DBFSTSCLR_Pos     (0UL)
#define SCUPM_BFSTS_CLR_DBFSTSCLR_Msk     (0x1UL)

#define SCUPM_DBFA_DBFA_Pos               (0UL)
#define SCUPM_DBFA_DBFA_Msk               (0xffffffffUL)

#define SCUPM_PCU_CTRL_STS_CLKWDT_RES_SD_DIS_Pos (26UL)
#define SCUPM_PCU_CTRL_STS_CLKWDT_RES_SD_DIS_Msk (0x4000000UL)
#define SCUPM_PCU_CTRL_STS_CLKLOSS_SD_DIS_Pos (25UL)
#define SCUPM_PCU_CTRL_STS_CLKLOSS_SD_DIS_Msk (0x2000000UL)
#define SCUPM_PCU_CTRL_STS_SYS_OT_PS_DIS_Pos (24UL)
#define SCUPM_PCU_CTRL_STS_SYS_OT_PS_DIS_Msk (0x1000000UL)
#define SCUPM_PCU_CTRL_STS_SYS_VSD_OV_SLM_DIS_Pos (14UL)
#define SCUPM_PCU_CTRL_STS_SYS_VSD_OV_SLM_DIS_Msk (0x4000UL)
#define SCUPM_PCU_CTRL_STS_LIN_VS_UV_SD_DIS_Pos (8UL)
#define SCUPM_PCU_CTRL_STS_LIN_VS_UV_SD_DIS_Msk (0x100UL)
#define SCUPM_PCU_CTRL_STS_FAIL_PS_DIS_Pos (7UL)
#define SCUPM_PCU_CTRL_STS_FAIL_PS_DIS_Msk (0x80UL)
#define SCUPM_PCU_CTRL_STS_CLKWDT_SD_DIS_Pos (1UL)
#define SCUPM_PCU_CTRL_STS_CLKWDT_SD_DIS_Msk (0x2UL)

#define SCUPM_SBFA_SBFA_Pos               (0UL)
#define SCUPM_SBFA_SBFA_Msk               (0xffffffffUL)

#define SCUPM_STCALIB_STCALIB_Pos         (0UL)
#define SCUPM_STCALIB_STCALIB_Msk         (0x3ffffffUL)

#define SCUPM_SYS_IRQ_CTRL_ADC4_EOC_IE_Pos (23UL)
#define SCUPM_SYS_IRQ_CTRL_ADC4_EOC_IE_Msk (0x800000UL)
#define SCUPM_SYS_IRQ_CTRL_ADC3_EOC_IE_Pos (22UL)
#define SCUPM_SYS_IRQ_CTRL_ADC3_EOC_IE_Msk (0x400000UL)
#define SCUPM_SYS_IRQ_CTRL_PHW_ZCHI_IE_Pos (21UL)
#define SCUPM_SYS_IRQ_CTRL_PHW_ZCHI_IE_Msk (0x200000UL)
#define SCUPM_SYS_IRQ_CTRL_PHW_ZCLOW_IE_Pos (20UL)
#define SCUPM_SYS_IRQ_CTRL_PHW_ZCLOW_IE_Msk (0x100000UL)
#define SCUPM_SYS_IRQ_CTRL_PHV_ZCHI_IE_Pos (19UL)
#define SCUPM_SYS_IRQ_CTRL_PHV_ZCHI_IE_Msk (0x80000UL)
#define SCUPM_SYS_IRQ_CTRL_PHV_ZCLOW_IE_Pos (18UL)
#define SCUPM_SYS_IRQ_CTRL_PHV_ZCLOW_IE_Msk (0x40000UL)
#define SCUPM_SYS_IRQ_CTRL_PHU_ZCHI_IE_Pos (17UL)
#define SCUPM_SYS_IRQ_CTRL_PHU_ZCHI_IE_Msk (0x20000UL)
#define SCUPM_SYS_IRQ_CTRL_PHU_ZCLOW_IE_Pos (16UL)
#define SCUPM_SYS_IRQ_CTRL_PHU_ZCLOW_IE_Msk (0x10000UL)
#define SCUPM_SYS_IRQ_CTRL_ADC2_ESM_IE_Pos (15UL)
#define SCUPM_SYS_IRQ_CTRL_ADC2_ESM_IE_Msk (0x8000UL)
#define SCUPM_SYS_IRQ_CTRL_VREF5V_OVL_IE_Pos (14UL)
#define SCUPM_SYS_IRQ_CTRL_VREF5V_OVL_IE_Msk (0x4000UL)
#define SCUPM_SYS_IRQ_CTRL_VREF5V_UPTH_IE_Pos (13UL)
#define SCUPM_SYS_IRQ_CTRL_VREF5V_UPTH_IE_Msk (0x2000UL)
#define SCUPM_SYS_IRQ_CTRL_VREF5V_LOWTH_IE_Pos (12UL)
#define SCUPM_SYS_IRQ_CTRL_VREF5V_LOWTH_IE_Msk (0x1000UL)
#define SCUPM_SYS_IRQ_CTRL_REFBG_UPTHWARN_IE_Pos (11UL)
#define SCUPM_SYS_IRQ_CTRL_REFBG_UPTHWARN_IE_Msk (0x800UL)
#define SCUPM_SYS_IRQ_CTRL_REFBG_LOTHWARN_IE_Pos (10UL)
#define SCUPM_SYS_IRQ_CTRL_REFBG_LOTHWARN_IE_Msk (0x400UL)
#define SCUPM_SYS_IRQ_CTRL_SYS_OT_IE_Pos  (9UL)
#define SCUPM_SYS_IRQ_CTRL_SYS_OT_IE_Msk  (0x200UL)
#define SCUPM_SYS_IRQ_CTRL_SYS_OTWARN_IE_Pos (8UL)
#define SCUPM_SYS_IRQ_CTRL_SYS_OTWARN_IE_Msk (0x100UL)
#define SCUPM_SYS_IRQ_CTRL_PMU_OT_IE_Pos  (7UL)
#define SCUPM_SYS_IRQ_CTRL_PMU_OT_IE_Msk  (0x80UL)
#define SCUPM_SYS_IRQ_CTRL_PMU_OTWARN_IE_Pos (6UL)
#define SCUPM_SYS_IRQ_CTRL_PMU_OTWARN_IE_Msk (0x40UL)
#define SCUPM_SYS_IRQ_CTRL_LIN_TMOUT_IE_Pos (2UL)
#define SCUPM_SYS_IRQ_CTRL_LIN_TMOUT_IE_Msk (0x4UL)
#define SCUPM_SYS_IRQ_CTRL_LIN_OT_IE_Pos  (1UL)
#define SCUPM_SYS_IRQ_CTRL_LIN_OT_IE_Msk  (0x2UL)
#define SCUPM_SYS_IRQ_CTRL_LIN_OC_IE_Pos  (0UL)
#define SCUPM_SYS_IRQ_CTRL_LIN_OC_IE_Msk  (0x1UL)

#define SCUPM_SYS_IS_PHW_ZCHI_STS_Pos     (29UL)
#define SCUPM_SYS_IS_PHW_ZCHI_STS_Msk     (0x20000000UL)
#define SCUPM_SYS_IS_PHW_ZCLOW_STS_Pos    (28UL)
#define SCUPM_SYS_IS_PHW_ZCLOW_STS_Msk    (0x10000000UL)
#define SCUPM_SYS_IS_PHV_ZCHI_STS_Pos     (27UL)
#define SCUPM_SYS_IS_PHV_ZCHI_STS_Msk     (0x8000000UL)
#define SCUPM_SYS_IS_PHV_ZCLOW_STS_Pos    (26UL)
#define SCUPM_SYS_IS_PHV_ZCLOW_STS_Msk    (0x4000000UL)
#define SCUPM_SYS_IS_PHU_ZCHI_STS_Pos     (25UL)
#define SCUPM_SYS_IS_PHU_ZCHI_STS_Msk     (0x2000000UL)
#define SCUPM_SYS_IS_PHU_ZCLOW_STS_Pos    (24UL)
#define SCUPM_SYS_IS_PHU_ZCLOW_STS_Msk    (0x1000000UL)
#define SCUPM_SYS_IS_ADC4_EOC_IS_Pos      (23UL)
#define SCUPM_SYS_IS_ADC4_EOC_IS_Msk      (0x800000UL)
#define SCUPM_SYS_IS_ADC3_EOC_IS_Pos      (22UL)
#define SCUPM_SYS_IS_ADC3_EOC_IS_Msk      (0x400000UL)
#define SCUPM_SYS_IS_PHW_ZCHI_IS_Pos      (21UL)
#define SCUPM_SYS_IS_PHW_ZCHI_IS_Msk      (0x200000UL)
#define SCUPM_SYS_IS_PHW_ZCLOW_IS_Pos     (20UL)
#define SCUPM_SYS_IS_PHW_ZCLOW_IS_Msk     (0x100000UL)
#define SCUPM_SYS_IS_PHV_ZCHI_IS_Pos      (19UL)
#define SCUPM_SYS_IS_PHV_ZCHI_IS_Msk      (0x80000UL)
#define SCUPM_SYS_IS_PHV_ZCLOW_IS_Pos     (18UL)
#define SCUPM_SYS_IS_PHV_ZCLOW_IS_Msk     (0x40000UL)
#define SCUPM_SYS_IS_PHU_ZCHI_IS_Pos      (17UL)
#define SCUPM_SYS_IS_PHU_ZCHI_IS_Msk      (0x20000UL)
#define SCUPM_SYS_IS_PHU_ZCLOW_IS_Pos     (16UL)
#define SCUPM_SYS_IS_PHU_ZCLOW_IS_Msk     (0x10000UL)
#define SCUPM_SYS_IS_ADC2_ESM_IS_Pos      (15UL)
#define SCUPM_SYS_IS_ADC2_ESM_IS_Msk      (0x8000UL)
#define SCUPM_SYS_IS_VREF5V_OVL_IS_Pos    (14UL)
#define SCUPM_SYS_IS_VREF5V_OVL_IS_Msk    (0x4000UL)
#define SCUPM_SYS_IS_VREF5V_UPTH_IS_Pos   (13UL)
#define SCUPM_SYS_IS_VREF5V_UPTH_IS_Msk   (0x2000UL)
#define SCUPM_SYS_IS_VREF5V_LOWTH_IS_Pos  (12UL)
#define SCUPM_SYS_IS_VREF5V_LOWTH_IS_Msk  (0x1000UL)
#define SCUPM_SYS_IS_REFBG_UPTHWARN_IS_Pos (11UL)
#define SCUPM_SYS_IS_REFBG_UPTHWARN_IS_Msk (0x800UL)
#define SCUPM_SYS_IS_REFBG_LOTHWARN_IS_Pos (10UL)
#define SCUPM_SYS_IS_REFBG_LOTHWARN_IS_Msk (0x400UL)
#define SCUPM_SYS_IS_SYS_OT_IS_Pos        (9UL)
#define SCUPM_SYS_IS_SYS_OT_IS_Msk        (0x200UL)
#define SCUPM_SYS_IS_SYS_OTWARN_IS_Pos    (8UL)
#define SCUPM_SYS_IS_SYS_OTWARN_IS_Msk    (0x100UL)
#define SCUPM_SYS_IS_PMU_OT_IS_Pos        (7UL)
#define SCUPM_SYS_IS_PMU_OT_IS_Msk        (0x80UL)
#define SCUPM_SYS_IS_PMU_OTWARN_IS_Pos    (6UL)
#define SCUPM_SYS_IS_PMU_OTWARN_IS_Msk    (0x40UL)
#define SCUPM_SYS_IS_LIN_TMOUT_IS_Pos     (2UL)
#define SCUPM_SYS_IS_LIN_TMOUT_IS_Msk     (0x4UL)
#define SCUPM_SYS_IS_LIN_OT_IS_Pos        (1UL)
#define SCUPM_SYS_IS_LIN_OT_IS_Msk        (0x2UL)
#define SCUPM_SYS_IS_LIN_OC_IS_Pos        (0UL)
#define SCUPM_SYS_IS_LIN_OC_IS_Msk        (0x1UL)

#define SCUPM_SYS_ISCLR_PHW_ZCHI_SCLR_Pos (29UL)
#define SCUPM_SYS_ISCLR_PHW_ZCHI_SCLR_Msk (0x20000000UL)
#define SCUPM_SYS_ISCLR_PHW_ZCLOW_SCLR_Pos (28UL)
#define SCUPM_SYS_ISCLR_PHW_ZCLOW_SCLR_Msk (0x10000000UL)
#define SCUPM_SYS_ISCLR_PHV_ZCHI_SCLR_Pos (27UL)
#define SCUPM_SYS_ISCLR_PHV_ZCHI_SCLR_Msk (0x8000000UL)
#define SCUPM_SYS_ISCLR_PHV_ZCLOW_SCLR_Pos (26UL)
#define SCUPM_SYS_ISCLR_PHV_ZCLOW_SCLR_Msk (0x4000000UL)
#define SCUPM_SYS_ISCLR_PHU_ZCHI_SCLR_Pos (25UL)
#define SCUPM_SYS_ISCLR_PHU_ZCHI_SCLR_Msk (0x2000000UL)
#define SCUPM_SYS_ISCLR_PHU_ZCLOW_SCLR_Pos (24UL)
#define SCUPM_SYS_ISCLR_PHU_ZCLOW_SCLR_Msk (0x1000000UL)
#define SCUPM_SYS_ISCLR_ADC4_EOC_ICLR_Pos (23UL)
#define SCUPM_SYS_ISCLR_ADC4_EOC_ICLR_Msk (0x800000UL)
#define SCUPM_SYS_ISCLR_ADC3_EOC_ICLR_Pos (22UL)
#define SCUPM_SYS_ISCLR_ADC3_EOC_ICLR_Msk (0x400000UL)
#define SCUPM_SYS_ISCLR_PHW_ZCHI_ICLR_Pos (21UL)
#define SCUPM_SYS_ISCLR_PHW_ZCHI_ICLR_Msk (0x200000UL)
#define SCUPM_SYS_ISCLR_PHW_ZCLOW_ICLR_Pos (20UL)
#define SCUPM_SYS_ISCLR_PHW_ZCLOW_ICLR_Msk (0x100000UL)
#define SCUPM_SYS_ISCLR_PHV_ZCHI_ICLR_Pos (19UL)
#define SCUPM_SYS_ISCLR_PHV_ZCHI_ICLR_Msk (0x80000UL)
#define SCUPM_SYS_ISCLR_PHV_ZCLOW_ICLR_Pos (18UL)
#define SCUPM_SYS_ISCLR_PHV_ZCLOW_ICLR_Msk (0x40000UL)
#define SCUPM_SYS_ISCLR_PHU_ZCHI_ICLR_Pos (17UL)
#define SCUPM_SYS_ISCLR_PHU_ZCHI_ICLR_Msk (0x20000UL)
#define SCUPM_SYS_ISCLR_PHU_ZCLOW_ICLR_Pos (16UL)
#define SCUPM_SYS_ISCLR_PHU_ZCLOW_ICLR_Msk (0x10000UL)
#define SCUPM_SYS_ISCLR_ADC2_ESM_ICLR_Pos (15UL)
#define SCUPM_SYS_ISCLR_ADC2_ESM_ICLR_Msk (0x8000UL)
#define SCUPM_SYS_ISCLR_VREF5V_OVL_ICLR_Pos (14UL)
#define SCUPM_SYS_ISCLR_VREF5V_OVL_ICLR_Msk (0x4000UL)
#define SCUPM_SYS_ISCLR_VREF5V_UPTH_ICLR_Pos (13UL)
#define SCUPM_SYS_ISCLR_VREF5V_UPTH_ICLR_Msk (0x2000UL)
#define SCUPM_SYS_ISCLR_VREF5V_LOWTH_ICLR_Pos (12UL)
#define SCUPM_SYS_ISCLR_VREF5V_LOWTH_ICLR_Msk (0x1000UL)
#define SCUPM_SYS_ISCLR_REFBG_UPTHWARN_ICLR_Pos (11UL)
#define SCUPM_SYS_ISCLR_REFBG_UPTHWARN_ICLR_Msk (0x800UL)
#define SCUPM_SYS_ISCLR_REFBG_LOTHWARN_ICLR_Pos (10UL)
#define SCUPM_SYS_ISCLR_REFBG_LOTHWARN_ICLR_Msk (0x400UL)
#define SCUPM_SYS_ISCLR_SYS_OT_ICLR_Pos   (9UL)
#define SCUPM_SYS_ISCLR_SYS_OT_ICLR_Msk   (0x200UL)
#define SCUPM_SYS_ISCLR_SYS_OTWARN_ICLR_Pos (8UL)
#define SCUPM_SYS_ISCLR_SYS_OTWARN_ICLR_Msk (0x100UL)
#define SCUPM_SYS_ISCLR_PMU_OT_ICLR_Pos   (7UL)
#define SCUPM_SYS_ISCLR_PMU_OT_ICLR_Msk   (0x80UL)
#define SCUPM_SYS_ISCLR_PMU_OTWARN_ICLR_Pos (6UL)
#define SCUPM_SYS_ISCLR_PMU_OTWARN_ICLR_Msk (0x40UL)
#define SCUPM_SYS_ISCLR_LIN_TMOUT_ICLR_Pos (2UL)
#define SCUPM_SYS_ISCLR_LIN_TMOUT_ICLR_Msk (0x4UL)
#define SCUPM_SYS_ISCLR_LIN_OT_ICLR_Pos   (1UL)
#define SCUPM_SYS_ISCLR_LIN_OT_ICLR_Msk   (0x2UL)
#define SCUPM_SYS_ISCLR_LIN_OC_ICLR_Pos   (0UL)
#define SCUPM_SYS_ISCLR_LIN_OC_ICLR_Msk   (0x1UL)

#define SCUPM_SYS_SUPPLY_IRQ_CLR_VDD1V5_OV_SCLR_Pos (23UL)
#define SCUPM_SYS_SUPPLY_IRQ_CLR_VDD1V5_OV_SCLR_Msk (0x800000UL)
#define SCUPM_SYS_SUPPLY_IRQ_CLR_VDD5V_OV_SCLR_Pos (22UL)
#define SCUPM_SYS_SUPPLY_IRQ_CLR_VDD5V_OV_SCLR_Msk (0x400000UL)
#define SCUPM_SYS_SUPPLY_IRQ_CLR_VS_OV_SCLR_Pos (21UL)
#define SCUPM_SYS_SUPPLY_IRQ_CLR_VS_OV_SCLR_Msk (0x200000UL)
#define SCUPM_SYS_SUPPLY_IRQ_CLR_MON_OV_SCLR_Pos (20UL)
#define SCUPM_SYS_SUPPLY_IRQ_CLR_MON_OV_SCLR_Msk (0x100000UL)
#define SCUPM_SYS_SUPPLY_IRQ_CLR_VDD1V5_UV_SCLR_Pos (19UL)
#define SCUPM_SYS_SUPPLY_IRQ_CLR_VDD1V5_UV_SCLR_Msk (0x80000UL)
#define SCUPM_SYS_SUPPLY_IRQ_CLR_VDD5V_UV_SCLR_Pos (18UL)
#define SCUPM_SYS_SUPPLY_IRQ_CLR_VDD5V_UV_SCLR_Msk (0x40000UL)
#define SCUPM_SYS_SUPPLY_IRQ_CLR_VS_UV_SCLR_Pos (17UL)
#define SCUPM_SYS_SUPPLY_IRQ_CLR_VS_UV_SCLR_Msk (0x20000UL)
#define SCUPM_SYS_SUPPLY_IRQ_CLR_MON_UV_SCLR_Pos (16UL)
#define SCUPM_SYS_SUPPLY_IRQ_CLR_MON_UV_SCLR_Msk (0x10000UL)
#define SCUPM_SYS_SUPPLY_IRQ_CLR_VDD1V5_OV_ICLR_Pos (7UL)
#define SCUPM_SYS_SUPPLY_IRQ_CLR_VDD1V5_OV_ICLR_Msk (0x80UL)
#define SCUPM_SYS_SUPPLY_IRQ_CLR_VDD5V_OV_ICLR_Pos (6UL)
#define SCUPM_SYS_SUPPLY_IRQ_CLR_VDD5V_OV_ICLR_Msk (0x40UL)
#define SCUPM_SYS_SUPPLY_IRQ_CLR_VS_OV_ICLR_Pos (5UL)
#define SCUPM_SYS_SUPPLY_IRQ_CLR_VS_OV_ICLR_Msk (0x20UL)
#define SCUPM_SYS_SUPPLY_IRQ_CLR_MON_OV_ICLR_Pos (4UL)
#define SCUPM_SYS_SUPPLY_IRQ_CLR_MON_OV_ICLR_Msk (0x10UL)
#define SCUPM_SYS_SUPPLY_IRQ_CLR_VDD1V5_UV_ICLR_Pos (3UL)
#define SCUPM_SYS_SUPPLY_IRQ_CLR_VDD1V5_UV_ICLR_Msk (0x8UL)
#define SCUPM_SYS_SUPPLY_IRQ_CLR_VDD5V_UV_ICLR_Pos (2UL)
#define SCUPM_SYS_SUPPLY_IRQ_CLR_VDD5V_UV_ICLR_Msk (0x4UL)
#define SCUPM_SYS_SUPPLY_IRQ_CLR_VS_UV_ICLR_Pos (1UL)
#define SCUPM_SYS_SUPPLY_IRQ_CLR_VS_UV_ICLR_Msk (0x2UL)
#define SCUPM_SYS_SUPPLY_IRQ_CLR_MON_UV_ICLR_Pos (0UL)
#define SCUPM_SYS_SUPPLY_IRQ_CLR_MON_UV_ICLR_Msk (0x1UL)

#define SCUPM_SYS_SUPPLY_IRQ_CTRL_VDD1V5_OV_IE_Pos (7UL)
#define SCUPM_SYS_SUPPLY_IRQ_CTRL_VDD1V5_OV_IE_Msk (0x80UL)
#define SCUPM_SYS_SUPPLY_IRQ_CTRL_VDD5V_OV_IE_Pos (6UL)
#define SCUPM_SYS_SUPPLY_IRQ_CTRL_VDD5V_OV_IE_Msk (0x40UL)
#define SCUPM_SYS_SUPPLY_IRQ_CTRL_VS_OV_IE_Pos (5UL)
#define SCUPM_SYS_SUPPLY_IRQ_CTRL_VS_OV_IE_Msk (0x20UL)
#define SCUPM_SYS_SUPPLY_IRQ_CTRL_MON_OV_IE_Pos (4UL)
#define SCUPM_SYS_SUPPLY_IRQ_CTRL_MON_OV_IE_Msk (0x10UL)
#define SCUPM_SYS_SUPPLY_IRQ_CTRL_VDD1V5_UV_IE_Pos (3UL)
#define SCUPM_SYS_SUPPLY_IRQ_CTRL_VDD1V5_UV_IE_Msk (0x8UL)
#define SCUPM_SYS_SUPPLY_IRQ_CTRL_VDD5V_UV_IE_Pos (2UL)
#define SCUPM_SYS_SUPPLY_IRQ_CTRL_VDD5V_UV_IE_Msk (0x4UL)
#define SCUPM_SYS_SUPPLY_IRQ_CTRL_VS_UV_IE_Pos (1UL)
#define SCUPM_SYS_SUPPLY_IRQ_CTRL_VS_UV_IE_Msk (0x2UL)
#define SCUPM_SYS_SUPPLY_IRQ_CTRL_MON_UV_IE_Pos (0UL)
#define SCUPM_SYS_SUPPLY_IRQ_CTRL_MON_UV_IE_Msk (0x1UL)

#define SCUPM_SYS_SUPPLY_IRQ_STS_VDD1V5_OV_STS_Pos (23UL)
#define SCUPM_SYS_SUPPLY_IRQ_STS_VDD1V5_OV_STS_Msk (0x800000UL)
#define SCUPM_SYS_SUPPLY_IRQ_STS_VDD5V_OV_STS_Pos (22UL)
#define SCUPM_SYS_SUPPLY_IRQ_STS_VDD5V_OV_STS_Msk (0x400000UL)
#define SCUPM_SYS_SUPPLY_IRQ_STS_VS_OV_STS_Pos (21UL)
#define SCUPM_SYS_SUPPLY_IRQ_STS_VS_OV_STS_Msk (0x200000UL)
#define SCUPM_SYS_SUPPLY_IRQ_STS_MON_OV_STS_Pos (20UL)
#define SCUPM_SYS_SUPPLY_IRQ_STS_MON_OV_STS_Msk (0x100000UL)
#define SCUPM_SYS_SUPPLY_IRQ_STS_VDD1V5_UV_STS_Pos (19UL)
#define SCUPM_SYS_SUPPLY_IRQ_STS_VDD1V5_UV_STS_Msk (0x80000UL)
#define SCUPM_SYS_SUPPLY_IRQ_STS_VDD5V_UV_STS_Pos (18UL)
#define SCUPM_SYS_SUPPLY_IRQ_STS_VDD5V_UV_STS_Msk (0x40000UL)
#define SCUPM_SYS_SUPPLY_IRQ_STS_VS_UV_STS_Pos (17UL)
#define SCUPM_SYS_SUPPLY_IRQ_STS_VS_UV_STS_Msk (0x20000UL)
#define SCUPM_SYS_SUPPLY_IRQ_STS_MON_UV_STS_Pos (16UL)
#define SCUPM_SYS_SUPPLY_IRQ_STS_MON_UV_STS_Msk (0x10000UL)
#define SCUPM_SYS_SUPPLY_IRQ_STS_VDD1V5_OV_IS_Pos (7UL)
#define SCUPM_SYS_SUPPLY_IRQ_STS_VDD1V5_OV_IS_Msk (0x80UL)
#define SCUPM_SYS_SUPPLY_IRQ_STS_VDD5V_OV_IS_Pos (6UL)
#define SCUPM_SYS_SUPPLY_IRQ_STS_VDD5V_OV_IS_Msk (0x40UL)
#define SCUPM_SYS_SUPPLY_IRQ_STS_VS_OV_IS_Pos (5UL)
#define SCUPM_SYS_SUPPLY_IRQ_STS_VS_OV_IS_Msk (0x20UL)
#define SCUPM_SYS_SUPPLY_IRQ_STS_MON_OV_IS_Pos (4UL)
#define SCUPM_SYS_SUPPLY_IRQ_STS_MON_OV_IS_Msk (0x10UL)
#define SCUPM_SYS_SUPPLY_IRQ_STS_VDD1V5_UV_IS_Pos (3UL)
#define SCUPM_SYS_SUPPLY_IRQ_STS_VDD1V5_UV_IS_Msk (0x8UL)
#define SCUPM_SYS_SUPPLY_IRQ_STS_VDD5V_UV_IS_Pos (2UL)
#define SCUPM_SYS_SUPPLY_IRQ_STS_VDD5V_UV_IS_Msk (0x4UL)
#define SCUPM_SYS_SUPPLY_IRQ_STS_VS_UV_IS_Pos (1UL)
#define SCUPM_SYS_SUPPLY_IRQ_STS_VS_UV_IS_Msk (0x2UL)
#define SCUPM_SYS_SUPPLY_IRQ_STS_MON_UV_IS_Pos (0UL)
#define SCUPM_SYS_SUPPLY_IRQ_STS_MON_UV_IS_Msk (0x1UL)

#define SCUPM_WDT1_TRIG_SOWCONF_Pos       (6UL)
#define SCUPM_WDT1_TRIG_SOWCONF_Msk       (0xc0UL)
#define SCUPM_WDT1_TRIG_WDP_SEL_Pos       (0UL)
#define SCUPM_WDT1_TRIG_WDP_SEL_Msk       (0x3fUL)

#define SSC1_BR_BR_VALUE_Pos              (0UL)
#define SSC1_BR_BR_VALUE_Msk              (0xffffUL)

#define SSC1_CON_BC_Pos                   (0UL)
#define SSC1_CON_BC_Msk                   (0xfUL)
#define SSC1_CON_TE_Pos                   (8UL)
#define SSC1_CON_TE_Msk                   (0x100UL)
#define SSC1_CON_RE_Pos                   (9UL)
#define SSC1_CON_RE_Msk                   (0x200UL)
#define SSC1_CON_PE_Pos                   (10UL)
#define SSC1_CON_PE_Msk                   (0x400UL)
#define SSC1_CON_BE_Pos                   (11UL)
#define SSC1_CON_BE_Msk                   (0x800UL)
#define SSC1_CON_BSY_Pos                  (12UL)
#define SSC1_CON_BSY_Msk                  (0x1000UL)
#define SSC1_CON_MS_Pos                   (14UL)
#define SSC1_CON_MS_Msk                   (0x4000UL)
#define SSC1_CON_EN_Pos                   (15UL)
#define SSC1_CON_EN_Msk                   (0x8000UL)

#define SSC1_ISRCLR_TECLR_Pos             (8UL)
#define SSC1_ISRCLR_TECLR_Msk             (0x100UL)
#define SSC1_ISRCLR_RECLR_Pos             (9UL)
#define SSC1_ISRCLR_RECLR_Msk             (0x200UL)
#define SSC1_ISRCLR_PECLR_Pos             (10UL)
#define SSC1_ISRCLR_PECLR_Msk             (0x400UL)
#define SSC1_ISRCLR_BECLR_Pos             (11UL)
#define SSC1_ISRCLR_BECLR_Msk             (0x800UL)

#define SSC1_PISEL_MIS_0_Pos              (0UL)
#define SSC1_PISEL_MIS_0_Msk              (0x1UL)
#define SSC1_PISEL_SIS_Pos                (1UL)
#define SSC1_PISEL_SIS_Msk                (0x2UL)
#define SSC1_PISEL_CIS_Pos                (2UL)
#define SSC1_PISEL_CIS_Msk                (0x4UL)
#define SSC1_PISEL_MIS_1_Pos              (3UL)
#define SSC1_PISEL_MIS_1_Msk              (0x8UL)

#define SSC1_RB_RB_VALUE_Pos              (0UL)
#define SSC1_RB_RB_VALUE_Msk              (0xffffUL)

#define SSC1_TB_TB_VALUE_Pos              (0UL)
#define SSC1_TB_TB_VALUE_Msk              (0xffffUL)

#define SSC2_BR_BR_VALUE_Pos              (0UL)
#define SSC2_BR_BR_VALUE_Msk              (0xffffUL)

#define SSC2_CON_BC_Pos                   (0UL)
#define SSC2_CON_BC_Msk                   (0xfUL)
#define SSC2_CON_TE_Pos                   (8UL)
#define SSC2_CON_TE_Msk                   (0x100UL)
#define SSC2_CON_RE_Pos                   (9UL)
#define SSC2_CON_RE_Msk                   (0x200UL)
#define SSC2_CON_PE_Pos                   (10UL)
#define SSC2_CON_PE_Msk                   (0x400UL)
#define SSC2_CON_BE_Pos                   (11UL)
#define SSC2_CON_BE_Msk                   (0x800UL)
#define SSC2_CON_BSY_Pos                  (12UL)
#define SSC2_CON_BSY_Msk                  (0x1000UL)
#define SSC2_CON_MS_Pos                   (14UL)
#define SSC2_CON_MS_Msk                   (0x4000UL)
#define SSC2_CON_EN_Pos                   (15UL)
#define SSC2_CON_EN_Msk                   (0x8000UL)

#define SSC2_ISRCLR_TECLR_Pos             (8UL)
#define SSC2_ISRCLR_TECLR_Msk             (0x100UL)
#define SSC2_ISRCLR_RECLR_Pos             (9UL)
#define SSC2_ISRCLR_RECLR_Msk             (0x200UL)
#define SSC2_ISRCLR_PECLR_Pos             (10UL)
#define SSC2_ISRCLR_PECLR_Msk             (0x400UL)
#define SSC2_ISRCLR_BECLR_Pos             (11UL)
#define SSC2_ISRCLR_BECLR_Msk             (0x800UL)

#define SSC2_PISEL_MIS_0_Pos              (0UL)
#define SSC2_PISEL_MIS_0_Msk              (0x1UL)
#define SSC2_PISEL_SIS_Pos                (1UL)
#define SSC2_PISEL_SIS_Msk                (0x2UL)
#define SSC2_PISEL_CIS_Pos                (2UL)
#define SSC2_PISEL_CIS_Msk                (0x4UL)
#define SSC2_PISEL_MIS_1_Pos              (3UL)
#define SSC2_PISEL_MIS_1_Msk              (0x8UL)

#define SSC2_RB_RB_VALUE_Pos              (0UL)
#define SSC2_RB_RB_VALUE_Msk              (0xffffUL)

#define SSC2_TB_TB_VALUE_Pos              (0UL)
#define SSC2_TB_TB_VALUE_Msk              (0xffffUL)

#define TIMER2_RC2H_RC2_Pos               (0UL)
#define TIMER2_RC2H_RC2_Msk               (0xffUL)

#define TIMER2_RC2L_RC2_Pos               (0UL)
#define TIMER2_RC2L_RC2_Msk               (0xffUL)

#define TIMER2_T2CON_CP_RL2_Pos           (0UL)
#define TIMER2_T2CON_CP_RL2_Msk           (0x1UL)
#define TIMER2_T2CON_C_T2_Pos             (1UL)
#define TIMER2_T2CON_C_T2_Msk             (0x2UL)
#define TIMER2_T2CON_TR2_Pos              (2UL)
#define TIMER2_T2CON_TR2_Msk              (0x4UL)
#define TIMER2_T2CON_EXEN2_Pos            (3UL)
#define TIMER2_T2CON_EXEN2_Msk            (0x8UL)
#define TIMER2_T2CON_EXF2_Pos             (6UL)
#define TIMER2_T2CON_EXF2_Msk             (0x40UL)
#define TIMER2_T2CON_TF2_Pos              (7UL)
#define TIMER2_T2CON_TF2_Msk              (0x80UL)

#define TIMER2_T2CON1_EXF2EN_Pos          (0UL)
#define TIMER2_T2CON1_EXF2EN_Msk          (0x1UL)
#define TIMER2_T2CON1_TF2EN_Pos           (1UL)
#define TIMER2_T2CON1_TF2EN_Msk           (0x2UL)

#define TIMER2_T2H_T2H_Pos                (0UL)
#define TIMER2_T2H_T2H_Msk                (0xffUL)

#define TIMER2_T2ICLR_EXF2CLR_Pos         (6UL)
#define TIMER2_T2ICLR_EXF2CLR_Msk         (0x40UL)
#define TIMER2_T2ICLR_TF2CLR_Pos          (7UL)
#define TIMER2_T2ICLR_TF2CLR_Msk          (0x80UL)

#define TIMER2_T2L_T2L_Pos                (0UL)
#define TIMER2_T2L_T2L_Msk                (0xffUL)

#define TIMER2_T2MOD_DCEN_Pos             (0UL)
#define TIMER2_T2MOD_DCEN_Msk             (0x1UL)
#define TIMER2_T2MOD_T2PRE_Pos            (1UL)
#define TIMER2_T2MOD_T2PRE_Msk            (0xeUL)
#define TIMER2_T2MOD_PREN_Pos             (4UL)
#define TIMER2_T2MOD_PREN_Msk             (0x10UL)
#define TIMER2_T2MOD_EDGESEL_Pos          (5UL)
#define TIMER2_T2MOD_EDGESEL_Msk          (0x20UL)
#define TIMER2_T2MOD_T2RHEN_Pos           (6UL)
#define TIMER2_T2MOD_T2RHEN_Msk           (0x40UL)
#define TIMER2_T2MOD_T2REGS_Pos           (7UL)
#define TIMER2_T2MOD_T2REGS_Msk           (0x80UL)

#define TIMER21_RC2H_RC2_Pos              (0UL)
#define TIMER21_RC2H_RC2_Msk              (0xffUL)

#define TIMER21_RC2L_RC2_Pos              (0UL)
#define TIMER21_RC2L_RC2_Msk              (0xffUL)

#define TIMER21_T2CON_CP_RL2_Pos          (0UL)
#define TIMER21_T2CON_CP_RL2_Msk          (0x1UL)
#define TIMER21_T2CON_C_T2_Pos            (1UL)
#define TIMER21_T2CON_C_T2_Msk            (0x2UL)
#define TIMER21_T2CON_TR2_Pos             (2UL)
#define TIMER21_T2CON_TR2_Msk             (0x4UL)
#define TIMER21_T2CON_EXEN2_Pos           (3UL)
#define TIMER21_T2CON_EXEN2_Msk           (0x8UL)
#define TIMER21_T2CON_EXF2_Pos            (6UL)
#define TIMER21_T2CON_EXF2_Msk            (0x40UL)
#define TIMER21_T2CON_TF2_Pos             (7UL)
#define TIMER21_T2CON_TF2_Msk             (0x80UL)

#define TIMER21_T2CON1_EXF2EN_Pos         (0UL)
#define TIMER21_T2CON1_EXF2EN_Msk         (0x1UL)
#define TIMER21_T2CON1_TF2EN_Pos          (1UL)
#define TIMER21_T2CON1_TF2EN_Msk          (0x2UL)

#define TIMER21_T2H_T2H_Pos               (0UL)
#define TIMER21_T2H_T2H_Msk               (0xffUL)

#define TIMER21_T2ICLR_EXF2CLR_Pos        (6UL)
#define TIMER21_T2ICLR_EXF2CLR_Msk        (0x40UL)
#define TIMER21_T2ICLR_TF2CLR_Pos         (7UL)
#define TIMER21_T2ICLR_TF2CLR_Msk         (0x80UL)

#define TIMER21_T2L_T2L_Pos               (0UL)
#define TIMER21_T2L_T2L_Msk               (0xffUL)

#define TIMER21_T2MOD_DCEN_Pos            (0UL)
#define TIMER21_T2MOD_DCEN_Msk            (0x1UL)
#define TIMER21_T2MOD_T2PRE_Pos           (1UL)
#define TIMER21_T2MOD_T2PRE_Msk           (0xeUL)
#define TIMER21_T2MOD_PREN_Pos            (4UL)
#define TIMER21_T2MOD_PREN_Msk            (0x10UL)
#define TIMER21_T2MOD_EDGESEL_Pos         (5UL)
#define TIMER21_T2MOD_EDGESEL_Msk         (0x20UL)
#define TIMER21_T2MOD_T2RHEN_Pos          (6UL)
#define TIMER21_T2MOD_T2RHEN_Msk          (0x40UL)
#define TIMER21_T2MOD_T2REGS_Pos          (7UL)
#define TIMER21_T2MOD_T2REGS_Msk          (0x80UL)

#define TIMER3_CMP_HI_Pos                 (8UL)
#define TIMER3_CMP_HI_Msk                 (0xff00UL)
#define TIMER3_CMP_LO_Pos                 (0UL)
#define TIMER3_CMP_LO_Msk                 (0xffUL)

#define TIMER3_CNT_HI_Pos                 (8UL)
#define TIMER3_CNT_HI_Msk                 (0xff00UL)
#define TIMER3_CNT_LO_Pos                 (0UL)
#define TIMER3_CNT_LO_Msk                 (0xffUL)

#define TIMER3_CTRL_T3H_OVF_IE_Pos        (9UL)
#define TIMER3_CTRL_T3H_OVF_IE_Msk        (0x200UL)
#define TIMER3_CTRL_T3L_OVF_IE_Pos        (8UL)
#define TIMER3_CTRL_T3L_OVF_IE_Msk        (0x100UL)
#define TIMER3_CTRL_T3L_OVF_STS_Pos       (7UL)
#define TIMER3_CTRL_T3L_OVF_STS_Msk       (0x80UL)
#define TIMER3_CTRL_TR3L_Pos              (6UL)
#define TIMER3_CTRL_TR3L_Msk              (0x40UL)
#define TIMER3_CTRL_T3H_OVF_STS_Pos       (5UL)
#define TIMER3_CTRL_T3H_OVF_STS_Msk       (0x20UL)
#define TIMER3_CTRL_TR3H_Pos              (4UL)
#define TIMER3_CTRL_TR3H_Msk              (0x10UL)
#define TIMER3_CTRL_CNT_RDY_Pos           (3UL)
#define TIMER3_CTRL_CNT_RDY_Msk           (0x8UL)
#define TIMER3_CTRL_T3_RD_REQ_CONF_Pos    (2UL)
#define TIMER3_CTRL_T3_RD_REQ_CONF_Msk    (0x4UL)
#define TIMER3_CTRL_T3_RD_REQ_Pos         (1UL)
#define TIMER3_CTRL_T3_RD_REQ_Msk         (0x2UL)
#define TIMER3_CTRL_T3_PD_N_Pos           (0UL)
#define TIMER3_CTRL_T3_PD_N_Msk           (0x1UL)

#define TIMER3_ISRCLR_T3L_OVF_ICLR_Pos    (7UL)
#define TIMER3_ISRCLR_T3L_OVF_ICLR_Msk    (0x80UL)
#define TIMER3_ISRCLR_T3H_OVF_ICLR_Pos    (5UL)
#define TIMER3_ISRCLR_T3H_OVF_ICLR_Msk    (0x20UL)

#define TIMER3_MODE_CONF_T3_SUBM_Pos      (6UL)
#define TIMER3_MODE_CONF_T3_SUBM_Msk      (0xc0UL)
#define TIMER3_MODE_CONF_T3M_Pos          (0UL)
#define TIMER3_MODE_CONF_T3M_Msk          (0x3UL)

#define TIMER3_T3_TRIGG_CTRL_RETRIG_Pos   (6UL)
#define TIMER3_T3_TRIGG_CTRL_RETRIG_Msk   (0x40UL)
#define TIMER3_T3_TRIGG_CTRL_T3_RES_CONF_Pos (4UL)
#define TIMER3_T3_TRIGG_CTRL_T3_RES_CONF_Msk (0x30UL)
#define TIMER3_T3_TRIGG_CTRL_T3_TRIGG_INP_SEL_Pos (0UL)
#define TIMER3_T3_TRIGG_CTRL_T3_TRIGG_INP_SEL_Msk (0x7UL)

#define UART1_SBUF_VAL_Pos                (0UL)
#define UART1_SBUF_VAL_Msk                (0xffUL)

#define UART1_SCON_RI_Pos                 (0UL)
#define UART1_SCON_RI_Msk                 (0x1UL)
#define UART1_SCON_TI_Pos                 (1UL)
#define UART1_SCON_TI_Msk                 (0x2UL)
#define UART1_SCON_RB8_Pos                (2UL)
#define UART1_SCON_RB8_Msk                (0x4UL)
#define UART1_SCON_TB8_Pos                (3UL)
#define UART1_SCON_TB8_Msk                (0x8UL)
#define UART1_SCON_REN_Pos                (4UL)
#define UART1_SCON_REN_Msk                (0x10UL)
#define UART1_SCON_SM2_Pos                (5UL)
#define UART1_SCON_SM2_Msk                (0x20UL)
#define UART1_SCON_SM1_Pos                (6UL)
#define UART1_SCON_SM1_Msk                (0x40UL)
#define UART1_SCON_SM0_Pos                (7UL)
#define UART1_SCON_SM0_Msk                (0x80UL)

#define UART1_SCONCLR_RICLR_Pos           (0UL)
#define UART1_SCONCLR_RICLR_Msk           (0x1UL)
#define UART1_SCONCLR_TICLR_Pos           (1UL)
#define UART1_SCONCLR_TICLR_Msk           (0x2UL)

#define UART2_SBUF_VAL_Pos                (0UL)
#define UART2_SBUF_VAL_Msk                (0xffUL)

#define UART2_SCON_RI_Pos                 (0UL)
#define UART2_SCON_RI_Msk                 (0x1UL)
#define UART2_SCON_TI_Pos                 (1UL)
#define UART2_SCON_TI_Msk                 (0x2UL)
#define UART2_SCON_RB8_Pos                (2UL)
#define UART2_SCON_RB8_Msk                (0x4UL)
#define UART2_SCON_TB8_Pos                (3UL)
#define UART2_SCON_TB8_Msk                (0x8UL)
#define UART2_SCON_REN_Pos                (4UL)
#define UART2_SCON_REN_Msk                (0x10UL)
#define UART2_SCON_SM2_Pos                (5UL)
#define UART2_SCON_SM2_Msk                (0x20UL)
#define UART2_SCON_SM1_Pos                (6UL)
#define UART2_SCON_SM1_Msk                (0x40UL)
#define UART2_SCON_SM0_Pos                (7UL)
#define UART2_SCON_SM0_Msk                (0x80UL)

#define UART2_SCONCLR_RICLR_Pos           (0UL)
#define UART2_SCONCLR_RICLR_Msk           (0x1UL)
#define UART2_SCONCLR_TICLR_Pos           (1UL)
#define UART2_SCONCLR_TICLR_Msk           (0x2UL)

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

