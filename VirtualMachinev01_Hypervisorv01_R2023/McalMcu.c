/******************************************************************************/
/* File   : McalMcu.c                                                         */
/*                                                                            */
/* Author : Nagaraja HULIYAPURADA MATA                                        */
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
/* All rights reserved. Copyright © 1982 Nagaraja HULIYAPURADA MATA           */
/*                                                                            */
/* Always refer latest software version from:                                 */
/* https://github.com/RaajnaagHuliyapuradaMata?tab=repositories               */
/*                                                                            */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Std_Types.h"

#include "infMcalMcuSwcApplStartUp.h"
#include "uC_Mcu.h"

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
/* OBJECTS                                                                    */
/******************************************************************************/
static volatile VAR(uint32, MCALMCU_VAR_FAST) lvu32RegisterWakeupFactor;
static volatile VAR(uint32, MCALMCU_VAR_FAST) lvu32RegisterWakeupFactorControl;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(uint32, MCALMCU_CODE) infMcalMcuSwcApplStartUp_u32GetWakeupFactor(void){
   return lvu32RegisterWakeupFactor;
}

FUNC(void, MCALMCU_CODE) infMcalMcuSwcApplStartUp_vSetWakeupFactor(void){
   lvu32RegisterWakeupFactor        = WUF0;
   lvu32RegisterWakeupFactorControl = !lvu32RegisterWakeupFactor;
}

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

