#pragma once

#include "Std_Types.h"
#include "Compiler_Cfg_Mcu.h"

class class_Mcu{
   public:
      FUNC(void, MCU_CODE) InitFunction       (void);
      FUNC(void, MCU_CODE) InitRamSection     (void);
      FUNC(void, MCU_CODE) InitClock          (void);
      FUNC(void, MCU_CODE) DistributePllClock (void);
      FUNC(void, MCU_CODE) GetPllStatus       (void);
      FUNC(void, MCU_CODE) GetResetReason     (void);
      FUNC(void, MCU_CODE) GetResetRawValue   (void);
      FUNC(void, MCU_CODE) PerformReset       (void);
      FUNC(void, MCU_CODE) SetMode            (void);
      FUNC(void, MCU_CODE) GetVersionInfo     (void);
      FUNC(void, MCU_CODE) GetRamState        (void);
};

extern class_Mcu Mcu;

