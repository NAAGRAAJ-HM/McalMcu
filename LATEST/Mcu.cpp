/******************************************************************************/
/* File   : Mcu.cpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "infMcu_EcuM.hpp"
#include "infMcu_Dcm.hpp"
#include "infMcu_SchM.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define MCU_AR_RELEASE_VERSION_MAJOR                                           4
#define MCU_AR_RELEASE_VERSION_MINOR                                           3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(MCU_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible MCU_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(MCU_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible MCU_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_Mcu_Functionality{
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

class module_Mcu:
      public abstract_module
   ,  public infMcu_EcuM
   ,  public class_Mcu_Functionality
{
   public:
      module_Mcu(Std_TypeVersionInfo lVersionInfo) : abstract_module(lVersionInfo){
      }
      FUNC(void, MCU_CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, MCU_CONFIG_DATA, MCU_APPL_CONST) lptrCfgModule
      );
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
         MCU_AR_RELEASE_VERSION_MAJOR
      ,  MCU_AR_RELEASE_VERSION_MINOR
      ,  0x00
      ,  0xFF
      ,  0x01
      ,  '0'
      ,  '1'
      ,  '0'
   }
);

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, MCU_CODE) module_Mcu::InitFunction(
   CONSTP2CONST(CfgModule_TypeAbstract, MCU_CONFIG_DATA, MCU_APPL_CONST) lptrCfgModule
){
#if(STD_ON == Mcu_InitCheck)
   if(E_OK == IsInitDone){
#if(STD_ON == Mcu_DevErrorDetect)
      Det_ReportError(
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
      );
#endif
   }
   else{
#endif
      if(NULL_PTR == lptrCfgModule){
#if(STD_ON == Mcu_DevErrorDetect)
         Det_ReportError(
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
         );
#endif
      }
      else{
         if(STD_LOW){
// check lptrCfgModule for memory faults
            lptrCfg = lptrCfgModule;
         }
         else{
// use PBcfgCanIf as back-up configuration
            lptrCfg = &PBcfgMcu;
         }
      }
      IsInitDone = E_OK;
#if(STD_ON == Mcu_InitCheck)
   }
#endif
}

FUNC(void, MCU_CODE) module_Mcu::DeInitFunction(void){
#if(STD_ON == Mcu_InitCheck)
   if(E_OK != IsInitDone){
#if(STD_ON == Mcu_DevErrorDetect)
      Det_ReportError(
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
      );
#endif
   }
   else{
#endif
      IsInitDone = E_NOT_OK;
#if(STD_ON == Mcu_InitCheck)
   }
#endif
}

FUNC(void, MCU_CODE) module_Mcu::MainFunction(void){
#if(STD_ON == Mcu_InitCheck)
   if(E_OK != IsInitDone){
#if(STD_ON == Mcu_DevErrorDetect)
      Det_ReportError(
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
      );
#endif
   }
   else{
#endif
#if(STD_ON == Mcu_InitCheck)
   }
#endif
}

FUNC(void, MCU_CODE) module_Mcu::GetResetReason(void){
}

FUNC(void, MCU_CODE) class_Mcu_Functionality::InitRamSection(void){
}

FUNC(void, MCU_CODE) class_Mcu_Functionality::InitClock(void){
}

FUNC(void, MCU_CODE) class_Mcu_Functionality::DistributePllClock(void){
}

FUNC(void, MCU_CODE) class_Mcu_Functionality::GetPllStatus(void){
}

FUNC(void, MCU_CODE) class_Mcu_Functionality::GetResetRawValue(void){
}

FUNC(void, MCU_CODE) class_Mcu_Functionality::PerformReset(void){
}

FUNC(void, MCU_CODE) class_Mcu_Functionality::SetMode(void){
}

FUNC(void, MCU_CODE) class_Mcu_Functionality::GetRamState(void){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

