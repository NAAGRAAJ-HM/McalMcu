#pragma once

class class_Mcu{
   public:
      void InitFunction(void);
      void InitRamSection(void);
      void InitClock(void);
      void DistributePllClock(void);
      void GetPllStatus(void);
      void GetResetReason(void);
      void GetResetRawValue(void);
      void PerformReset(void);
      void SetMode(void);
      void GetVersionInfo(void);
      void GetRamState(void);
};

extern class_Mcu Mcu;

