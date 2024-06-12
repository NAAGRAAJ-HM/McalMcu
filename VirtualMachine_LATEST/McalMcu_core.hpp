#pragma once
/******************************************************************************/
/* File   : McalMcu_core.hpp                                                      */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CompilerCfg_McalMcu.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define MCALMCU_CORE_FUNCTIONALITIES                                               \
              FUNC(void, MCALMCU_CODE) InitRamSection     (void);                  \
              FUNC(void, MCALMCU_CODE) InitClock          (void);                  \
              FUNC(void, MCALMCU_CODE) DistributePllClock (void);                  \
              FUNC(void, MCALMCU_CODE) GetPllStatus       (void);                  \
              FUNC(void, MCALMCU_CODE) GetResetReason     (void);                  \
              FUNC(void, MCALMCU_CODE) GetResetRawValue   (void);                  \
              FUNC(void, MCALMCU_CODE) PerformReset       (void);                  \
              FUNC(void, MCALMCU_CODE) SetMode            (void);                  \
              FUNC(void, MCALMCU_CODE) GetRamState        (void);                  \

#define MCALMCU_CORE_FUNCTIONALITIES_VIRTUAL                                       \
      virtual FUNC(void, MCALMCU_CODE) InitRamSection     (void) = 0;              \
      virtual FUNC(void, MCALMCU_CODE) InitClock          (void) = 0;              \
      virtual FUNC(void, MCALMCU_CODE) DistributePllClock (void) = 0;              \
      virtual FUNC(void, MCALMCU_CODE) GetPllStatus       (void) = 0;              \
      virtual FUNC(void, MCALMCU_CODE) GetResetReason     (void) = 0;              \
      virtual FUNC(void, MCALMCU_CODE) GetResetRawValue   (void) = 0;              \
      virtual FUNC(void, MCALMCU_CODE) PerformReset       (void) = 0;              \
      virtual FUNC(void, MCALMCU_CODE) SetMode            (void) = 0;              \
      virtual FUNC(void, MCALMCU_CODE) GetRamState        (void) = 0;              \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_McalMcu_Functionality{
   public:
      MCALMCU_CORE_FUNCTIONALITIES_VIRTUAL
};

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

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

