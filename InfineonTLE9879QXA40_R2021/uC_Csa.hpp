#pragma once

typedef struct{
  __I  uint32_t  RESERVED0[3];

  union{
    __IO uint32_t  reg;

    struct{
      __IO uint32_t  EN         :  1;
      __IO uint32_t  GAIN       :  2;
      uint32_t             :  5;
      __IO uint32_t  VZERO      :  1;
    }bit;
  }CTRL;
}CSA_Type;

extern CSA_Type     CSA;
