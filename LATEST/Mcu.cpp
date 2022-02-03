/*****************************************************/
/* File   : Mcu.cpp                                  */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "Mcu.h"

#include "Mcu_EcuM.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
class_Mcu_EcuM Mcu_EcuM;
class_EcuM_Client *EcuM_Client_ptr_Mcu = &Mcu_EcuM;
class_Mcu Mcu;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, MCU_CODE) class_Mcu_EcuM::InitFunction(void){
}

FUNC(void, MCU_CODE) class_Mcu::InitRamSection(void){
}

FUNC(void, MCU_CODE) class_Mcu::InitClock(void){
}

FUNC(void, MCU_CODE) class_Mcu::DistributePllClock(void){
}

FUNC(void, MCU_CODE) class_Mcu::GetPllStatus(void){
}

FUNC(void, MCU_CODE) class_Mcu::GetResetReason(void){
}

FUNC(void, MCU_CODE) class_Mcu::GetResetRawValue(void){
}

FUNC(void, MCU_CODE) class_Mcu::PerformReset(void){
}

FUNC(void, MCU_CODE) class_Mcu::SetMode(void){
}

FUNC(void, MCU_CODE) class_Mcu::GetVersionInfo(void){
}

FUNC(void, MCU_CODE) class_Mcu::GetRamState(void){
}

/*****************************************************/
/* EOF                                               */
/*****************************************************/

