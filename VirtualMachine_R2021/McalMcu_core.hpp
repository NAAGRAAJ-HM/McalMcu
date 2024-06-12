#pragma once
/******************************************************************************/
/* File   : McalMcu_core.hpp                                                      */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CompilerCfg_McalMcu.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define MCU_CORE_FUNCTIONALITIES                                               \
              FUNC(void, MCU_CODE) InitRamSection     (void);                  \
              FUNC(void, MCU_CODE) InitClock          (void);                  \
              FUNC(void, MCU_CODE) DistributePllClock (void);                  \
              FUNC(void, MCU_CODE) GetPllStatus       (void);                  \
              FUNC(void, MCU_CODE) GetResetReason     (void);                  \
              FUNC(void, MCU_CODE) GetResetRawValue   (void);                  \
              FUNC(void, MCU_CODE) PerformReset       (void);                  \
              FUNC(void, MCU_CODE) SetMode            (void);                  \
              FUNC(void, MCU_CODE) GetRamState        (void);                  \

#define MCU_CORE_FUNCTIONALITIES_VIRTUAL                                       \
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
class class_McalMcu_Functionality{
   public:
      MCU_CORE_FUNCTIONALITIES_VIRTUAL
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

