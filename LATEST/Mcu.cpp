/******************************************************************************/
/* File   : Mcu.cpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "module.hpp"
#include "infMcu_EcuM.hpp"
#include "infMcu_Dcm.hpp"
#include "infMcu_SchM.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define MCU_AR_RELEASE_MAJOR_VERSION                                           4
#define MCU_AR_RELEASE_MINOR_VERSION                                           3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(MCU_AR_RELEASE_MAJOR_VERSION != STD_AR_RELEASE_MAJOR_VERSION)
   #error "Incompatible MCU_AR_RELEASE_MAJOR_VERSION!"
#endif

#if(MCU_AR_RELEASE_MINOR_VERSION != STD_AR_RELEASE_MINOR_VERSION)
   #error "Incompatible MCU_AR_RELEASE_MINOR_VERSION!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_Mcu:
      public abstract_module
   ,  public infMcu_EcuM
{
   public:
      module_Mcu(Std_TypeVersionInfo lVersionInfo) : abstract_module(lVersionInfo){
      }
      FUNC(void, MCU_CODE) InitFunction   (void);
      FUNC(void, MCU_CODE) DeInitFunction (void);
      FUNC(void, MCU_CODE) MainFunction   (void);

      FUNC(void, MCU_CODE) GetResetReason (void);
};

extern VAR(module_Mcu, MCU_VAR) Mcu;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
CONSTP2VAR(infEcuMClient, MCU_VAR, MCU_CONST) gptrinfEcuMClient_Mcu = &Mcu;
CONSTP2VAR(infDcmClient,  MCU_VAR, MCU_CONST) gptrinfDcmClient_Mcu  = &Mcu;
CONSTP2VAR(infSchMClient, MCU_VAR, MCU_CONST) gptrinfSchMClient_Mcu = &Mcu;
CONSTP2VAR(infMcu_EcuM,   MCU_VAR, MCU_CONST) gptrinfMcu_EcuM       = &Mcu;

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/
#include "CfgMcu.hpp"

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_Mcu, MCU_VAR) Mcu(
   {
         0x0000
      ,  0xFFFF
      ,  0x01
      ,  '0'
      ,  '1'
      ,  '0'
   }
);

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, MCU_CODE) module_Mcu::InitFunction(void){
   Mcu.IsInitDone = E_OK;
}

FUNC(void, MCU_CODE) module_Mcu::DeInitFunction(void){
   Mcu.IsInitDone = E_NOT_OK;
}

FUNC(void, MCU_CODE) module_Mcu::MainFunction(void){
}

FUNC(void, MCU_CODE) module_Mcu::GetResetReason(void){
}

class class_Mcu_Unused{
   public:
      FUNC(void, MCU_CODE) InitRamSection     (void);
      FUNC(void, MCU_CODE) InitClock          (void);
      FUNC(void, MCU_CODE) DistributePllClock (void);
      FUNC(void, MCU_CODE) GetPllStatus       (void);
      FUNC(void, MCU_CODE) GetResetReason     (void);
      FUNC(void, MCU_CODE) GetResetRawValue   (void);
      FUNC(void, MCU_CODE) PerformReset       (void);
      FUNC(void, MCU_CODE) SetMode            (void);
      FUNC(void, MCU_CODE) GetRamState        (void);
};

FUNC(void, MCU_CODE) class_Mcu_Unused::InitRamSection(void){
}

FUNC(void, MCU_CODE) class_Mcu_Unused::InitClock(void){
}

FUNC(void, MCU_CODE) class_Mcu_Unused::DistributePllClock(void){
}

FUNC(void, MCU_CODE) class_Mcu_Unused::GetPllStatus(void){
}

FUNC(void, MCU_CODE) class_Mcu_Unused::GetResetRawValue(void){
}

FUNC(void, MCU_CODE) class_Mcu_Unused::PerformReset(void){
}

FUNC(void, MCU_CODE) class_Mcu_Unused::SetMode(void){
}

FUNC(void, MCU_CODE) class_Mcu_Unused::GetRamState(void){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

