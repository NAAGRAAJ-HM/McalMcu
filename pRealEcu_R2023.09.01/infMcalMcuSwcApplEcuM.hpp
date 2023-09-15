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
      McalMcu_eReasonReset_OnPower
   ,  McalMcu_eReasonReset_Wdg
   ,  McalMcu_eReasonReset_Sw
   ,  McalMcu_eReasonReset_AddressIllegal
   ,  McalMcu_eReasonReset_LowVoltage
   ,  McalMcu_eReasonReset_Ext
   ,  McalMcu_eReasonReset_MonitorClock
   ,  McalMcu_eReasonReset_Undefined
   ,  McalMcu_eReasonReset_WakeupCan
   ,  McalMcu_eReasonReset_WakeupTimer
}Type_McalMcu_eReasonReset; //TBD: move to Types_McalMcu.hpp

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern Type_McalMcu_eReasonReset McalMcu_eReasonReset; //TBD: Make static after integration

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
extern FUNC(void,                      MCALMCU_CODE) infMcalMcuSwcApplEcuM_InitFunction (void);
extern FUNC(Type_McalMcu_eReasonReset, MCALMCU_CODE) McalMcu_eGetReasonReset            (void);

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
