/*****************************************************/
/* File   : Mcu.cpp                                  */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "module.h"
#include "Mcu_EcuM.h"
#include "Mcu_SchM.h"
#include "Mcu_Unused.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/
class module_Mcu:
      public abstract_module
   ,  public infMcu_EcuM
{
   public:
      FUNC(void, MCU_CODE) InitFunction   (void);
      FUNC(void, MCU_CODE) DeInitFunction (void);
      FUNC(void, MCU_CODE) MainFunction   (void);
      FUNC(void, MCU_CODE) GetResetReason (void);
};

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
module_Mcu     Mcu;
infEcuMClient* gptrinfEcuMClient_Mcu = &Mcu;
infSchMClient* gptrinfSchMClient_Mcu = &Mcu;
infMcu_EcuM*   gptrinfMcu_EcuM       = &Mcu;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, MCU_CODE) module_Mcu::InitFunction(void){
}

FUNC(void, MCU_CODE) module_Mcu::DeInitFunction(void){
}

FUNC(void, MCU_CODE) module_Mcu::MainFunction(void){
}

FUNC(void, MCU_CODE) module_Mcu::GetResetReason(void){
}

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

FUNC(void, MCU_CODE) class_Mcu_Unused::GetVersionInfo(void){
}

FUNC(void, MCU_CODE) class_Mcu_Unused::GetRamState(void){
}

/*****************************************************/
/* EOF                                               */
/*****************************************************/

