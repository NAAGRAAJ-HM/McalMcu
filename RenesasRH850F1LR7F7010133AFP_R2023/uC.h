#ifndef _UC_H
#define _UC_H
/******************************************************************************/
/* File   : uC.h                                                              */
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

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
//#undef ReSim
#define ReSim                                                                  1

#ifndef ReSim
#ifndef _GHS_PRAGMA_IO_TYPEDEF_
#define _GHS_PRAGMA_IO_TYPEDEF_
#define PRAGMA(x) _Pragma(#x)
#define __READ volatile const
#define __WRITE volatile
#define __READ_WRITE volatile

#define __IOREG(reg, addr, attrib, type) PRAGMA(ghs io reg addr) \
extern attrib type reg;

#define __IOREGARRAY(reg, array, addr, attrib, type) PRAGMA(ghs io reg addr) \
extern attrib type reg[array];
#endif
#endif

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
typedef struct{
   uint8 bit00:1;
   uint8 bit01:1;
   uint8 bit02:1;
   uint8 bit03:1;
   uint8 bit04:1;
   uint8 bit05:1;
   uint8 bit06:1;
   uint8 bit07:1;
}__bitf_T;

typedef union{                                             /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
}__type9;

typedef union{                                             /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
}__type16;


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
#endif
