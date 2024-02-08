#pragma once
/******************************************************************************/
/* File   : infMcalMcuSwcApplEcuM.hpp                                         */
/*                                                                            */
/* Author : Raajnaag HULIYAPURADA MATA                                        */
/*                                                                            */
/* License / Warranty / Terms and Conditions                                  */
/*                                                                            */
/* Everyone is permitted to copy and distribute verbatim copies of this lice- */
/* nse document, but changing it is not allowed. This is a free, copyright l- */
/* icense for software and other kinds of works. By contrast, this license is */
/* intended to guarantee your freedom to share and change all versions of a   */
/* program, to make sure it remains free software for all its users. You have */
/* certain responsibilities, if you distribute copies of the software, or if  */
/* you modify it: responsibilities to respect the freedom of others.          */
/*                                                                            */
/* All rights reserved. Copyright © 1982 Raajnaag HULIYAPURADA MATA           */
/*                                                                            */
/* Always refer latest software version from:                                 */
/* https://github.com/RaajnaagHuliyapuradaMata?tab=repositories               */
/*                                                                            */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CompilerCfg_McalMcu.hpp"

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
      McalMcu_eResetReason_OnPower
   ,  McalMcu_eResetReason_Wdg
   ,  McalMcu_eResetReason_Sw
   ,  McalMcu_eResetReason_AddressIllegal
   ,  McalMcu_eResetReason_LowVoltage
   ,  McalMcu_eResetReason_Ext
   ,  McalMcu_eResetReason_MonitorClock
   ,  McalMcu_eResetReason_Undefined
   ,  McalMcu_eResetReason_WakeupCan
   ,  McalMcu_eResetReason_WakeupTimer
}Type_McalMcu_eResetReason;

typedef enum{
      McalMcu_eResetRequest_General
   ,  McalMcu_eResetRequest_Bootloader
   ,  McalMcu_eResetRequest_SmartTester
}Type_McalMcu_eResetRequest;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern Type_McalMcu_eResetReason McalMcu_eResetReason;
extern Type_McalMcu_eResetRequest  McalMcu_eResetRequest;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
extern FUNC(void,                       MCALMCU_CODE) infMcalMcuSwcApplEcuM_InitFunction (void);
extern FUNC(Type_McalMcu_eResetReason,  MCALMCU_CODE) McalMcu_eGetResetReason            (void);
extern FUNC(Type_McalMcu_eResetRequest, MCALMCU_CODE) McalMcu_eGetResetRequest           (void);
extern FUNC(void,                       MCALMCU_CODE) McalMcu_vPlaceResetRequest         (Type_McalMcu_eResetRequest leResetRequest);

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
