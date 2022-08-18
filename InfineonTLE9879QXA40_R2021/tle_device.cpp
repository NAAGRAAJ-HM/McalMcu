/******************************************************************************/
/* File   : Template.hpp                                                      */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "types.hpp"

#include "tle_device.hpp"

#include "RTE_Components.hpp"

#ifdef RTE_DEVICE_SDK_BROM
  #include "bootrom.hpp"
#endif
#ifdef RTE_DEVICE_SDK_WDT1
  #include "wdt1.hpp"
#endif
#ifdef RTE_DEVICE_SDK_SCU
  #include "scu.hpp"
#endif
#ifdef RTE_DEVICE_SDK_PMU
  #include "pmu.hpp"
#endif
#ifdef RTE_DEVICE_SDK_ADC1
  #include "adc1.hpp"
#endif
#ifdef RTE_DEVICE_SDK_ADC2
  #include "adc2.hpp"
#endif
#ifdef RTE_DEVICE_SDK_ADC34
  #include "sdadc.hpp"
#endif
#ifdef RTE_DEVICE_SDK_BDRV
  #include "bdrv.hpp"
#endif
#ifdef RTE_DEVICE_SDK_CCU6
  #include "ccu6.hpp"
#endif
#ifdef RTE_DEVICE_SDK_CSA
  #include "csa.hpp"
#endif
#ifdef RTE_DEVICE_SDK_GPT12E
  #include "gpt12e.hpp"
#endif
#ifdef RTE_DEVICE_SDK_INT
  #include "int.hpp"
#endif
#ifdef RTE_DEVICE_SDK_ISR
  #include "isr.hpp"
#endif
#ifdef RTE_DEVICE_SDK_LIN
  #include "lin.hpp"
#endif
#ifdef RTE_DEVICE_SDK_MON
  #include "mon.hpp"
#endif
#ifdef RTE_DEVICE_SDK_PORT
  #include "port.hpp"
#endif
#ifdef RTE_DEVICE_SDK_SSC
  #include "ssc.hpp"
#endif
#ifdef RTE_DEVICE_SDK_TIMER2X
  #include "timer2x.hpp"
#endif
#ifdef RTE_DEVICE_SDK_TIMER3
  #include "timer3.hpp"
#endif
#ifdef RTE_DEVICE_SDK_UART
  #include "uart.hpp"
#endif
#ifdef RTE_DEVICE_SDK_DMA
  #include "dma.hpp"
#endif

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/

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
void TLE_Init(void){
#ifdef RTE_DEVICE_SDK_SCU
   SCU_Init();
#endif
#ifdef RTE_DEVICE_SDK_PMU
   PMU_Init();
#endif
#ifdef RTE_DEVICE_SDK_ADC1
   ADC1_Init();
#endif
#ifdef RTE_DEVICE_SDK_ADC2
   ADC2_Init();
#endif
#ifdef RTE_DEVICE_SDK_ADC34
   SDADC_Init();
#endif
#ifdef RTE_DEVICE_SDK_BDRV
   BDRV_Init();
#endif
#ifdef RTE_DEVICE_SDK_CCU6
   CCU6_Init();
#endif
#ifdef RTE_DEVICE_SDK_CSA
   CSA_Init();
#endif
#ifdef RTE_DEVICE_SDK_GPT12E
   GPT12E_Init();
#endif
#ifdef RTE_DEVICE_SDK_LIN
   LIN_Init();
#endif
#ifdef RTE_DEVICE_SDK_MON
   MON_Init();
#endif
#ifdef RTE_DEVICE_SDK_PORT
   PORT_Init();
#endif
#ifdef RTE_DEVICE_SDK_SSC
   SSC1_Init();
   SSC2_Init();
#endif
#ifdef RTE_DEVICE_SDK_TIMER2X
   TIMER2_Init();
   TIMER21_Init();
#endif
#ifdef RTE_DEVICE_SDK_TIMER3
   TIMER3_Init();
#endif
#ifdef RTE_DEVICE_SDK_UART
   UART1_Init();
   UART2_Init();
#endif
#ifdef RTE_DEVICE_SDK_DMA
   DMA_Init();
#endif
#ifdef RTE_DEVICE_SDK_INT
   INT_Init();
#endif
}

/*
void __NVIC_SetPriorityGrouping(uint32_t PriorityGroup){
  uint32_t reg_value;
  uint32_t PriorityGroupTmp = (PriorityGroup & (uint32_t)0x07UL);
  reg_value  =  SCB->AIRCR;
  reg_value &= ~((uint32_t)(SCB_AIRCR_VECTKEY_Msk | SCB_AIRCR_PRIGROUP_Msk));
  reg_value  =  (reg_value                                   |
                ((uint32_t)0x5FAUL << SCB_AIRCR_VECTKEY_Pos) |
                (PriorityGroupTmp << SCB_AIRCR_PRIGROUP_Pos)  );
  SCB->AIRCR =  reg_value;
}

uint32_t __NVIC_GetPriorityGrouping(void){
  return ((uint32_t)((SCB->AIRCR & SCB_AIRCR_PRIGROUP_Msk) >> SCB_AIRCR_PRIGROUP_Pos));
}

void __NVIC_EnableIRQ(IRQn_Type IRQn){
  if ((int32_t)(IRQn) >= 0){
    __COMPILER_BARRIER();
    NVIC->ISER[(((uint32_t)IRQn) >> 5UL)] = (uint32_t)(1UL << (((uint32_t)IRQn) & 0x1FUL));
    __COMPILER_BARRIER();
  }
}

uint32_t __NVIC_GetEnableIRQ(IRQn_Type IRQn){
  if ((int32_t)(IRQn) >= 0){
    return((uint32_t)(((NVIC->ISER[(((uint32_t)IRQn) >> 5UL)] & (1UL << (((uint32_t)IRQn) & 0x1FUL))) != 0UL) ? 1UL : 0UL));
  }
  else
  {
    return(0U);
  }
}

void __NVIC_DisableIRQ(IRQn_Type IRQn){
  if ((int32_t)(IRQn) >= 0){
    NVIC->ICER[(((uint32_t)IRQn) >> 5UL)] = (uint32_t)(1UL << (((uint32_t)IRQn) & 0x1FUL));
    __DSB();
    __ISB();
  }
}

uint32_t __NVIC_GetPendingIRQ(IRQn_Type IRQn){
  if ((int32_t)(IRQn) >= 0){
    return((uint32_t)(((NVIC->ISPR[(((uint32_t)IRQn) >> 5UL)] & (1UL << (((uint32_t)IRQn) & 0x1FUL))) != 0UL) ? 1UL : 0UL));
  }
  else
  {
    return(0U);
  }
}

void __NVIC_SetPendingIRQ(IRQn_Type IRQn){
  if ((int32_t)(IRQn) >= 0){
    NVIC->ISPR[(((uint32_t)IRQn) >> 5UL)] = (uint32_t)(1UL << (((uint32_t)IRQn) & 0x1FUL));
  }
}

void __NVIC_ClearPendingIRQ(IRQn_Type IRQn){
  if ((int32_t)(IRQn) >= 0){
    NVIC->ICPR[(((uint32_t)IRQn) >> 5UL)] = (uint32_t)(1UL << (((uint32_t)IRQn) & 0x1FUL));
  }
}

uint32_t __NVIC_GetActive(IRQn_Type IRQn){
  if ((int32_t)(IRQn) >= 0){
    return((uint32_t)(((NVIC->IABR[(((uint32_t)IRQn) >> 5UL)] & (1UL << (((uint32_t)IRQn) & 0x1FUL))) != 0UL) ? 1UL : 0UL));
  }
  else
  {
    return(0U);
  }
}

void __NVIC_SetPriority(IRQn_Type IRQn, uint32_t priority){
  if ((int32_t)(IRQn) >= 0){
    NVIC->IP[((uint32_t)IRQn)]               = (uint8_t)((priority << (8U - __NVIC_PRIO_BITS)) & (uint32_t)0xFFUL);
  }
  else
  {
    SCB->SHP[(((uint32_t)IRQn) & 0xFUL)-4UL] = (uint8_t)((priority << (8U - __NVIC_PRIO_BITS)) & (uint32_t)0xFFUL);
  }
}

uint32_t __NVIC_GetPriority(IRQn_Type IRQn){
  if ((int32_t)(IRQn) >= 0){
    return(((uint32_t)NVIC->IP[((uint32_t)IRQn)]               >> (8U - __NVIC_PRIO_BITS)));
  }
  else
  {
    return(((uint32_t)SCB->SHP[(((uint32_t)IRQn) & 0xFUL)-4UL] >> (8U - __NVIC_PRIO_BITS)));
  }
}

uint32_t NVIC_EncodePriority (uint32_t PriorityGroup, uint32_t PreemptPriority, uint32_t SubPriority){
  uint32_t PriorityGroupTmp = (PriorityGroup & (uint32_t)0x07UL);
  uint32_t PreemptPriorityBits;
  uint32_t SubPriorityBits;

  PreemptPriorityBits = ((7UL - PriorityGroupTmp) > (uint32_t)(__NVIC_PRIO_BITS)) ? (uint32_t)(__NVIC_PRIO_BITS) : (uint32_t)(7UL - PriorityGroupTmp);
  SubPriorityBits     = ((PriorityGroupTmp + (uint32_t)(__NVIC_PRIO_BITS)) < (uint32_t)7UL) ? (uint32_t)0UL : (uint32_t)((PriorityGroupTmp - 7UL) + (uint32_t)(__NVIC_PRIO_BITS));

  return (
           ((PreemptPriority & (uint32_t)((1UL << (PreemptPriorityBits)) - 1UL)) << SubPriorityBits) |
           ((SubPriority     & (uint32_t)((1UL << (SubPriorityBits    )) - 1UL)))
         );
}

void NVIC_DecodePriority (uint32_t Priority, uint32_t PriorityGroup, uint32_t* const pPreemptPriority, uint32_t* const pSubPriority){
  uint32_t PriorityGroupTmp = (PriorityGroup & (uint32_t)0x07UL);
  uint32_t PreemptPriorityBits;
  uint32_t SubPriorityBits;

  PreemptPriorityBits = ((7UL - PriorityGroupTmp) > (uint32_t)(__NVIC_PRIO_BITS)) ? (uint32_t)(__NVIC_PRIO_BITS) : (uint32_t)(7UL - PriorityGroupTmp);
  SubPriorityBits     = ((PriorityGroupTmp + (uint32_t)(__NVIC_PRIO_BITS)) < (uint32_t)7UL) ? (uint32_t)0UL : (uint32_t)((PriorityGroupTmp - 7UL) + (uint32_t)(__NVIC_PRIO_BITS));

  *pPreemptPriority = (Priority >> SubPriorityBits) & (uint32_t)((1UL << (PreemptPriorityBits)) - 1UL);
  *pSubPriority     = (Priority                   ) & (uint32_t)((1UL << (SubPriorityBits    )) - 1UL);
}

void __NVIC_SetVector(IRQn_Type IRQn, uint32_t vector){
  uint32_t* vectors = (uint32_t*) (SCB->VTOR);
  vectors[(int32_t)IRQn + NVIC_USER_IRQ_OFFSET] = vector;
}

uint32_t __NVIC_GetVector(IRQn_Type IRQn){
  uint32_t* vectors = (uint32_t*) (SCB->VTOR);
  return vectors[(int32_t)IRQn + NVIC_USER_IRQ_OFFSET];
}

void __NVIC_SystemReset(void){
  __DSB();
  SCB->AIRCR  = (uint32_t)((0x5FAUL << SCB_AIRCR_VECTKEY_Pos)    |
                           (SCB->AIRCR & SCB_AIRCR_PRIGROUP_Msk) |
                            SCB_AIRCR_SYSRESETREQ_Msk    );
  __DSB();
  while(1){
    __NOP();
  }
}

uint32_t SCB_GetFPUType(void){return 0U;}

uint32_t SysTick_Config(uint32_t ticks){
  if ((ticks - 1UL) > SysTick_LOAD_RELOAD_Msk){
    return (1UL);
  }

  SysTick->LOAD  = (uint32_t)(ticks - 1UL);
  NVIC_SetPriority (SysTick_IRQn, (1UL << __NVIC_PRIO_BITS) - 1UL);
  SysTick->VAL   = 0UL;
  SysTick->CTRL  = SysTick_CTRL_CLKSOURCE_Msk |
                   SysTick_CTRL_TICKINT_Msk   |
                   SysTick_CTRL_ENABLE_Msk;
  return (0UL);
}

extern int32_t ITM_RxBuffer;
#define                 ITM_RXBUFFER_EMPTY  ((int32_t)0x5AA55AA5U)

uint32_t ITM_SendChar (uint32_t ch){
  if (((ITM->TCR & ITM_TCR_ITMENA_Msk) != 0UL) &&
      ((ITM->TER & 1UL               ) != 0UL)   )
  {
    while (ITM->PORT[0U].u32 == 0UL){
      __NOP();
    }
    ITM->PORT[0U].u8 = (uint8_t)ch;
  }
  return (ch);
}

int32_t ITM_ReceiveChar (void){
  int32_t ch = -1;

  if (ITM_RxBuffer != ITM_RXBUFFER_EMPTY){
    ch = ITM_RxBuffer;
    ITM_RxBuffer = ITM_RXBUFFER_EMPTY;
  }

  return (ch);
}

int32_t ITM_CheckChar (void){

  if (ITM_RxBuffer == ITM_RXBUFFER_EMPTY){
    return (0);
  }
  else
  {
    return (1);
  }
}
*/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

