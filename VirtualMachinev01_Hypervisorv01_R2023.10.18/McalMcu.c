/******************************************************************************/
/* File   : McalMcu.c                                                         */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Std_Types.hpp"

#include "infMcalMcuSwcApplEcuM.hpp"

#include "CfgMcalMcu.hpp"
#include "uC_Mcu.hpp"
#include "SysManagerX.hpp"

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
/* static */ Type_McalMcu_eReasonReset McalMcu_eReasonReset = McalMcu_eReasonReset_OnPower; //TBD: Make static after integration

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
extern void ApplMcu_vReleaseIoBuffers      (void);
extern void SYSMGR_SetEcuMode              (eEcuModesType ucMode);
extern void DCMMGR_TriggerPositiveResponse (void);

FUNC(Type_McalMcu_eReasonReset, MCALMCU_CODE) McalMcu_eGetReasonReset(void){
   return McalMcu_eReasonReset;
}

Type_McalMcu_eReasonReset McalMcu_PerformReasonReset(void){
   Type_McalMcu_eReasonReset ucRetVal = McalMcu_eReasonReset_Undefined;
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
      ucRetVal = McalMcu_eReasonReset_WakeupTimer;
      SYSMGR_SetEcuMode(cECUMODE_WAKE);
   }
   else if(
          CFGMCALMCU_WUP_FACTOR_TJA_ERR
      == (CFGMCALMCU_WUP_FACTOR_TJA_ERR & WUF0)
   ){
      ucRetVal = McalMcu_eReasonReset_WakeupCan;
      SYSMGR_SetEcuMode(cECUMODE_QUIET);
   }
   else if(
          0x0001
      == (0x0001 & RESF)
   ){
      ucRetVal = McalMcu_eReasonReset_Sw;
#ifndef IGNORE_POS_RESP_ON_STARTUP
      DCMMGR_TriggerPositiveResponse();
#endif
      SYSMGR_SetEcuMode(cECUMODE_QUIET);
   }
   else if(
         0
      != (0x0006 & RESF)
   ){
      ucRetVal = McalMcu_eReasonReset_Wdg;
      SYSMGR_SetEcuMode(cECUMODE_QUIET);
   }
   else if(
          CFGMCALMCU_RESF_POWER_ON_RESET
      == (CFGMCALMCU_RESF_POWER_ON_RESET & RESFR)
   ){
      ucRetVal = McalMcu_eReasonReset_OnPower;
      SYSMGR_SetEcuMode(cECUMODE_QUIET);
   }
   else{
   }
   RESFC  = 0x000007ffu;
   RESFCR = 0x000007ffu;
   McalMcu_eReasonReset = ucRetVal;
   return ucRetVal;
}

FUNC(void, MCALMCU_CODE) infMcalMcuSwcApplEcuM_InitFunction(void){
   (void)McalMcu_PerformReasonReset();
   ApplMcu_vReleaseIoBuffers();
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
