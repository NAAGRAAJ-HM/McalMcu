#pragma once
/******************************************************************************/
/* File   : uC_Dio.h                                                          */
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
#include "uC.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define TBP11                         (((volatile __bitf_T *)0xFFFFA04C)->bit06)
#define RFP11                         (((volatile __bitf_T *)0xFFFFA04D)->bit04)
#define MKP11                         (((volatile __bitf_T *)0xFFFFA04C)->bit07)

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
#ifndef ReSim
__IOREG(P0,     0xFFC10000, __READ_WRITE, uint16);
__IOREG(P8,     0xFFC10020, __READ_WRITE, uint16);
__IOREG(P9,     0xFFC10024, __READ_WRITE, uint16);
__IOREG(P10,     0xFFC10028, __READ_WRITE, uint16);
__IOREG(PPR0,     0xFFC10200, __READ,     uint16);
__IOREG(PPR8,     0xFFC10220, __READ,     uint16);
__IOREG(PPR9,     0xFFC10224, __READ,     uint16);
__IOREG(PPR10,     0xFFC10228, __READ,     uint16);
__IOREG(PM0,     0xFFC10300, __READ_WRITE, uint16);
__IOREG(PM8,     0xFFC10320, __READ_WRITE, uint16);
__IOREG(PM9,     0xFFC10324, __READ_WRITE, uint16);
__IOREG(PM10,     0xFFC10328, __READ_WRITE, uint16);
__IOREG(PMC0,     0xFFC10400, __READ_WRITE, uint16);
__IOREG(PMC8,     0xFFC10420, __READ_WRITE, uint16);
__IOREG(PMC9,     0xFFC10424, __READ_WRITE, uint16);
__IOREG(PMC10,     0xFFC10428, __READ_WRITE, uint16);
__IOREG(PFC10,     0xFFC10528, __READ_WRITE, uint16);
__IOREG(PFCE10,     0xFFC10628, __READ_WRITE, uint16);
__IOREG(PFCAE10,     0xFFC10A28, __READ_WRITE, uint16);
__IOREG(PIBC0,     0xFFC14000, __READ_WRITE, uint16);
__IOREG(PIBC8,     0xFFC14020, __READ_WRITE, uint16);
__IOREG(PIBC9,     0xFFC14024, __READ_WRITE, uint16);
__IOREG(PIBC10,     0xFFC14028, __READ_WRITE, uint16);
__IOREG(PIPC10,     0xFFC14228, __READ_WRITE, uint16);
__IOREG(PU0,     0xFFC14300, __READ_WRITE, uint16);
__IOREG(PU10,     0xFFC14328, __READ_WRITE, uint16);
__IOREG(FCLA0CTL3_INTPH, 0xFFC3404C, __READ_WRITE, uint8);
#else
extern volatile       uint16 P0;
extern volatile       uint16 P8;
extern volatile       uint16 P9;
extern volatile       uint16 P10;
extern volatile const uint16 PPR0;
extern volatile const uint16 PPR8;
extern volatile const uint16 PPR9;
extern volatile const uint16 PPR10;
extern volatile       uint16 PM0;
extern volatile       uint16 PM8;
extern volatile       uint16 PM9;
extern volatile       uint16 PM10;
extern volatile       uint16 PMC0;
extern volatile       uint16 PMC8;
extern volatile       uint16 PMC9;
extern volatile       uint16 PMC10;
extern volatile       uint16 PFC10;
extern volatile       uint16 PFCE10;
extern volatile       uint16 PFCAE10;
extern volatile       uint16 PIBC0;
extern volatile       uint16 PIBC8;
extern volatile       uint16 PIBC9;
extern volatile       uint16 PIBC10;
extern volatile       uint16 PIPC10;
extern volatile       uint16 PU0;
extern volatile       uint16 PU10;
extern volatile       uint8  FCLA0CTL3_INTPH;
#endif

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
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

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
