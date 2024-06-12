#pragma once
/******************************************************************************/
/* File   : sfr_access.hpp                                                    */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/

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

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
extern void    Field_Wrt8all  (uint8 *reg, uint8 val);
extern void    Field_Wrt8     (uint8 *reg, uint8 pos, uint8 msk, uint8 val);
extern void    Field_Wrt16    (uint16 *reg, uint16 pos, uint16 msk, uint16 val);
extern void    Field_Wrt32    (uint32 *reg, uint32 pos, uint32 msk, uint32 val);
extern void    Field_Mod8     (uint8 *reg, uint8 pos, uint8 msk, uint8 val);
extern void    Field_Mod16    (uint16 *reg, uint16 pos, uint16 msk, uint16 val);
extern void    Field_Mod32    (uint32 *reg, uint32 pos, uint32 msk, uint32 val);
extern void    Field_Inv8     (uint8 *reg, uint8 msk);
extern void    Field_Inv16    (uint16 *reg, uint16 msk);
extern void    Field_Inv32    (uint32 *reg, uint32 msk);
extern void    Field_Clr8     (uint8 *reg, uint8 msk);
extern void    Field_Clr16    (uint16 *reg, uint16 msk);
extern void    Field_Clr32    (uint32 *reg, uint32 msk);
extern uint8   u1_Field_Rd8   (const uint8 *reg, uint8 pos, uint8 msk);
extern uint8   u1_Field_Rd16  (const uint16 *reg, uint16 pos, uint16 msk);
extern uint8   u1_Field_Rd32  (const uint32 *reg, uint32 pos, uint32 msk);
extern uint8   u8_Field_Rd8   (const uint8 *reg, uint8 pos, uint8 msk);
extern uint8   u8_Field_Rd16  (const uint16 *reg, uint16 pos, uint16 msk);
extern uint8   u8_Field_Rd32  (const uint32 *reg, uint32 pos, uint32 msk);
extern uint16  u16_Field_Rd16 (const uint16 *reg, uint16 pos, uint16 msk);
extern uint16  u16_Field_Rd32 (const uint32 *reg, uint32 pos, uint32 msk);
extern uint32  u32_Field_Rd32 (const uint32 *reg, uint32 pos, uint32 msk);

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

