/******************************************************************************/
/* File   : Mcu.cpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "Mcu.hpp"
#include "infMcu_Imp.hpp"

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

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_Mcu, MCU_VAR) Mcu;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, MCU_CODE) module_Mcu::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, MCU_CONST,       MCU_APPL_CONST) lptrConstModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   MCU_CONFIG_DATA, MCU_APPL_CONST) lptrCfgModule
){
#if(STD_ON == Mcu_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrConstModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrConst = lptrConstModule;
         lptrCfg   = lptrCfgModule;
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

FUNC(void, MCU_CODE) module_Mcu::DeInitFunction(
   void
){
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

FUNC(void, MCU_CODE) module_Mcu::MainFunction(
   void
){
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

FUNC(void, MCU_CODE) module_Mcu::GetResetReason(
   void
){
}

FUNC(void, MCU_CODE) module_Mcu::InitRamSection(
   void
){
}

FUNC(void, MCU_CODE) module_Mcu::InitClock(
   void
){
}

FUNC(void, MCU_CODE) module_Mcu::DistributePllClock(
   void
){
}

FUNC(void, MCU_CODE) module_Mcu::GetPllStatus(
   void
){
}

FUNC(void, MCU_CODE) module_Mcu::GetResetRawValue(
   void
){
}

FUNC(void, MCU_CODE) module_Mcu::PerformReset(
   void
){
}

FUNC(void, MCU_CODE) module_Mcu::SetMode(
   void
){
}

FUNC(void, MCU_CODE) module_Mcu::GetRamState(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

