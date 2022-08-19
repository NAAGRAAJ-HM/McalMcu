#pragma once

typedef struct{
  __I  uint32_t  RESERVED0[13];

  union{
    __IO uint8_t   reg;

    struct{
      __IO uint8_t   EN         :  1;
      __IO uint8_t   FALL       :  1;
      __IO uint8_t   RISE       :  1;
      __IO uint8_t   CYC        :  1;
      __IO uint8_t   PD         :  1;
      __IO uint8_t   PU         :  1;
      uint8_t              :  1;
      __I  uint8_t   STS        :  1;
    }bit;
  }CNF;
}MON_Type;

extern MON_Type     MON;
