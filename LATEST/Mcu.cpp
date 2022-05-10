/******************************************************************************/
/* File   : Mcu.cpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "CfgMcu.hpp"
#include "Mcu_core.hpp"
#include "infMcu.hpp"

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
class module_Mcu:
      public abstract_module
   ,  public infMcu_EcuM
   ,  public class_Mcu_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
            Std_TypeReturn          IsInitDone{E_NOT_OK};
      const CfgModule_TypeAbstract* lptrCfg{(CfgModule_TypeAbstract*)NULL_PTR};

   public:
      module_Mcu(Std_TypeVersionInfo lVersionInfo) : abstract_module(lVersionInfo){
      }
      FUNC(void, MCU_CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, MCU_CONFIG_DATA, MCU_APPL_CONST) lptrCfgModule
      );
      FUNC(void, MCU_CODE) DeInitFunction (void);
      FUNC(void, MCU_CODE) MainFunction   (void);
      MCU_CORE_FUNCTIONALITIES
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
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(NULL_PTR != lptrCfgModule){
         if(STD_HIGH){
            lptrCfg = lptrCfgModule;
         }
         else{
            lptrCfg = &PBcfgMcu;
         }
      }
      else{
#if(STD_ON == Mcu_DevErrorDetect)
         Det_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == Mcu_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == Mcu_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  MCU_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, MCU_CODE) module_Mcu::DeInitFunction(void){
#if(STD_ON == Mcu_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == Mcu_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == Mcu_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  MCU_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, MCU_CODE) module_Mcu::MainFunction(void){
#if(STD_ON == Mcu_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == Mcu_InitCheck)
   }
   else{
#if(STD_ON == Mcu_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  MCU_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, MCU_CODE) module_Mcu::GetResetReason(void){
}

FUNC(void, MCU_CODE) module_Mcu::InitRamSection(void){
}

FUNC(void, MCU_CODE) module_Mcu::InitClock(void){
}

FUNC(void, MCU_CODE) module_Mcu::DistributePllClock(void){
}

FUNC(void, MCU_CODE) module_Mcu::GetPllStatus(void){
}

FUNC(void, MCU_CODE) module_Mcu::GetResetRawValue(void){
}

FUNC(void, MCU_CODE) module_Mcu::PerformReset(void){
}

FUNC(void, MCU_CODE) module_Mcu::SetMode(void){
}

FUNC(void, MCU_CODE) module_Mcu::GetRamState(void){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

