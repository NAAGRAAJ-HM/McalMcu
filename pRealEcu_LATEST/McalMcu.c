/******************************************************************************/
/* File   : McalMcu.c                                                         */
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
#include "Std_Types.hpp"

#include "infMcalMcuSwcApplEcuM.hpp"
#include "infSwcApplEcuMMcalMcu.hpp"

#include "CfgMcalMcu.hpp"
#include "uC_Mcu.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

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
Type_McalMcu_eResetReason  McalMcu_eResetReason  = McalMcu_eResetReason_OnPower;
Type_McalMcu_eResetRequest McalMcu_eResetRequest = McalMcu_eResetRequest_General;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
extern void ApplMcu_vReleaseIoBuffers      (void);
extern void DCMMGR_TriggerPositiveResponse (void);

FUNC(Type_McalMcu_eResetReason,  MCALMCU_CODE) McalMcu_eGetResetReason    (void)                                     {return McalMcu_eResetReason;}
FUNC(Type_McalMcu_eResetRequest, MCALMCU_CODE) McalMcu_eGetResetRequest   (void)                                     {return McalMcu_eResetRequest;}
FUNC(void,                       MCALMCU_CODE) McalMcu_vPlaceResetRequest (Type_McalMcu_eResetRequest leResetRequest){       McalMcu_eResetRequest = leResetRequest;}

Type_McalMcu_eResetReason McalMcu_PerformReasonReset(void){
   Type_McalMcu_eResetReason leResetReason = McalMcu_eResetReason_Undefined;
   if(
         0
      != (
               WUF0
            &  (
                     CFGMCALMCU_WUP_FACTOR_TAUJ00
                  |  CFGMCALMCU_WUP_FACTOR_TAUJ01
                  |  CFGMCALMCU_WUP_FACTOR_TAUJ02
                  |  CFGMCALMCU_WUP_FACTOR_TAUJ03
               )
         )
   ){
      leResetReason = McalMcu_eResetReason_WakeupTimer;
      infSwcApplEcuMMcalMcu_vSetModeEcu(SwcServiceEcuM_eModeEcu_Wake);
   }
   else if(
          CFGMCALMCU_WUP_FACTOR_TJA_ERR
      == (CFGMCALMCU_WUP_FACTOR_TJA_ERR & WUF0)
   ){
      leResetReason = McalMcu_eResetReason_WakeupCan;
      infSwcApplEcuMMcalMcu_vSetModeEcu(SwcServiceEcuM_eModeEcu_Quiet);
   }
   else if(
          0x0001
      == (0x0001 & RESF)
   ){
      leResetReason = McalMcu_eResetReason_Sw;
#ifndef IGNORE_POS_RESP_ON_STARTUP
      DCMMGR_TriggerPositiveResponse();
#endif
      infSwcApplEcuMMcalMcu_vSetModeEcu(SwcServiceEcuM_eModeEcu_Quiet);
   }
   else if(
         0
      != (0x0006 & RESF)
   ){
      leResetReason = McalMcu_eResetReason_Wdg;
      infSwcApplEcuMMcalMcu_vSetModeEcu(SwcServiceEcuM_eModeEcu_Quiet);
   }
   else if(
          CFGMCALMCU_RESF_POWER_ON_RESET
      == (CFGMCALMCU_RESF_POWER_ON_RESET & RESFR)
   ){
      leResetReason = McalMcu_eResetReason_OnPower;
      infSwcApplEcuMMcalMcu_vSetModeEcu(SwcServiceEcuM_eModeEcu_Quiet);
   }
   else{
   }
   RESFC  = 0x000007ffu;
   RESFCR = 0x000007ffu;
   McalMcu_eResetReason = leResetReason;
   return leResetReason;
}

FUNC(void, MCALMCU_CODE) infMcalMcuSwcApplEcuM_InitFunction(void){
   (void)McalMcu_PerformReasonReset();
   ApplMcu_vReleaseIoBuffers();
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
