#pragma once
/******************************************************************************/
/* File   : Mcu_core.hpp                                                      */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CompilerCfg_Mcu.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define MCU_COREFUNCTIONALITIES                                                \
              FUNC(void, MCU_CODE) InitRamSection     (void);                  \
              FUNC(void, MCU_CODE) InitClock          (void);                  \
              FUNC(void, MCU_CODE) DistributePllClock (void);                  \
              FUNC(void, MCU_CODE) GetPllStatus       (void);                  \
              FUNC(void, MCU_CODE) GetResetReason     (void);                  \
              FUNC(void, MCU_CODE) GetResetRawValue   (void);                  \
              FUNC(void, MCU_CODE) PerformReset       (void);                  \
              FUNC(void, MCU_CODE) SetMode            (void);                  \
              FUNC(void, MCU_CODE) GetRamState        (void);                  \

#define MCU_COREFUNCTIONALITIES_VIRTUAL                                        \
      virtual FUNC(void, MCU_CODE) InitRamSection     (void) = 0;              \
      virtual FUNC(void, MCU_CODE) InitClock          (void) = 0;              \
      virtual FUNC(void, MCU_CODE) DistributePllClock (void) = 0;              \
      virtual FUNC(void, MCU_CODE) GetPllStatus       (void) = 0;              \
      virtual FUNC(void, MCU_CODE) GetResetReason     (void) = 0;              \
      virtual FUNC(void, MCU_CODE) GetResetRawValue   (void) = 0;              \
      virtual FUNC(void, MCU_CODE) PerformReset       (void) = 0;              \
      virtual FUNC(void, MCU_CODE) SetMode            (void) = 0;              \
      virtual FUNC(void, MCU_CODE) GetRamState        (void) = 0;              \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_Mcu_Functionality{
   public:
      MCU_COREFUNCTIONALITIES_VIRTUAL
};

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

