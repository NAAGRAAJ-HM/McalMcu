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
#include "Std_Types.h"

#include "infMcalMcuSwcApplStartUp.h"

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
static volatile VAR(uint32, MCALMCU_VAR_FAST) lvu32RegisterWakeupFactorControl;
static volatile VAR(uint32, MCALMCU_VAR_FAST) lvu32RegisterWakeupFactor;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(uint32, MCALMCU_CODE) infMcalMcuSwcApplStartUp_u32GetWakeupFactor(void){
   return lvu32RegisterWakeupFactor;
}

FUNC(void, MCALMCU_CODE) infMcalMcuSwcApplStartUp_vSetWakeupFactor(
   uint32 lu32Wuf
){
   lvu32RegisterWakeupFactor        = lu32Wuf;
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

