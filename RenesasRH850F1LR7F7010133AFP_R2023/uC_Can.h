#ifndef _UC_CAN_H
#define _UC_CAN_H
/******************************************************************************/
/* File   : uC_Adc.h                                                          */
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
#include "uC.h"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define RSCAN0GSTS                                        RSCAN0.GSTS.UINT32
#define RSCAN0GCTR                                        RSCAN0.GCTR.UINT32
#define RSCAN0C0CTR                                       RSCAN0.C0CTR.UINT32
#define RSCAN0GCFG                                        RSCAN0.GCFG.UINT32
#define RSCAN0C0CFG                                       RSCAN0.C0CFG.UINT32
#define RSCAN0RMNB                                        RSCAN0.RMNB.UINT32
#define RSCAN0RFCC0                                       RSCAN0.RFCC0.UINT32
#define RSCAN0TMIEC0                                      RSCAN0.TMIEC0.UINT32
#define RSCAN0C0STS                                       RSCAN0.C0STS.UINT32
#define RSCAN0GAFLCFG0                                    RSCAN0.GAFLCFG0.UINT32
#define RSCAN0GAFLID0                                     RSCAN0.GAFLID0.UINT32
#define RSCAN0GAFLECTR                                    RSCAN0.GAFLECTR.UINT32
#define RSCAN0RFSTS0                                      RSCAN0.RFSTS0.UINT32
#define RSCAN0TMSTS0                                      RSCAN0.TMSTS0
#define RSCAN0RFID0                                       RSCAN0.RFID0.UINT32
#define RSCAN0RFPTR0                                      RSCAN0.RFPTR0.UINT32
#define RSCAN0RFDF10                                      RSCAN0.RFDF10.UINT32
#define RSCAN0RFDF00                                      RSCAN0.RFDF00.UINT32
#define RSCAN0RFPCTR0                                     RSCAN0.RFPCTR0.UINT32
#define RSCAN0TMC0                                        RSCAN0.TMC0
#define RSCAN0TMID0                                       RSCAN0.TMID0.UINT32

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
typedef struct{
    __type9 C0CFG;                                         /* C0CFG            */
    __type9 C0CTR;                                         /* C0CTR            */
    const __type9 C0STS;                                   /* C0STS            */
    __type9 C0ERFL;                                        /* C0ERFL           */
    __type9 C1CFG;                                         /* C1CFG            */
    __type9 C1CTR;                                         /* C1CTR            */
    const __type9 C1STS;                                   /* C1STS            */
    __type9 C1ERFL;                                        /* C1ERFL           */
    __type9 C2CFG;                                         /* C2CFG            */
    __type9 C2CTR;                                         /* C2CTR            */
    const __type9 C2STS;                                   /* C2STS            */
    __type9 C2ERFL;                                        /* C2ERFL           */
    uint8  dummy34[84];                                    /* Reserved         */
    __type9 GCFG;                                          /* GCFG             */
    __type9 GCTR;                                          /* GCTR             */
    const __type9 GSTS;                                    /* GSTS             */
    __type9 GERFL;                                         /* GERFL            */
    const __type16 GTSC;                                   /* GTSC             */
    __type9 GAFLECTR;                                      /* GAFLECTR         */
    __type9 GAFLCFG0;                                      /* GAFLCFG0         */
    uint8  dummy35[4];                                     /* Reserved         */
    __type9 RMNB;                                          /* RMNB             */
    __type9 RMND0;                                         /* RMND0            */
    __type9 RMND1;                                         /* RMND1            */
    uint8  dummy36[8];                                     /* Reserved         */
    __type9 RFCC0;                                         /* RFCC0            */
    __type9 RFCC1;                                         /* RFCC1            */
    __type9 RFCC2;                                         /* RFCC2            */
    __type9 RFCC3;                                         /* RFCC3            */
    __type9 RFCC4;                                         /* RFCC4            */
    __type9 RFCC5;                                         /* RFCC5            */
    __type9 RFCC6;                                         /* RFCC6            */
    __type9 RFCC7;                                         /* RFCC7            */
    __type9 RFSTS0;                                        /* RFSTS0           */
    __type9 RFSTS1;                                        /* RFSTS1           */
    __type9 RFSTS2;                                        /* RFSTS2           */
    __type9 RFSTS3;                                        /* RFSTS3           */
    __type9 RFSTS4;                                        /* RFSTS4           */
    __type9 RFSTS5;                                        /* RFSTS5           */
    __type9 RFSTS6;                                        /* RFSTS6           */
    __type9 RFSTS7;                                        /* RFSTS7           */
    __type9 RFPCTR0;                                       /* RFPCTR0          */
    __type9 RFPCTR1;                                       /* RFPCTR1          */
    __type9 RFPCTR2;                                       /* RFPCTR2          */
    __type9 RFPCTR3;                                       /* RFPCTR3          */
    __type9 RFPCTR4;                                       /* RFPCTR4          */
    __type9 RFPCTR5;                                       /* RFPCTR5          */
    __type9 RFPCTR6;                                       /* RFPCTR6          */
    __type9 RFPCTR7;                                       /* RFPCTR7          */
    __type9 CFCC0;                                         /* CFCC0            */
    __type9 CFCC1;                                         /* CFCC1            */
    __type9 CFCC2;                                         /* CFCC2            */
    __type9 CFCC3;                                         /* CFCC3            */
    __type9 CFCC4;                                         /* CFCC4            */
    __type9 CFCC5;                                         /* CFCC5            */
    __type9 CFCC6;                                         /* CFCC6            */
    __type9 CFCC7;                                         /* CFCC7            */
    __type9 CFCC8;                                         /* CFCC8            */
    uint8  dummy37[60];                                    /* Reserved         */
    __type9 CFSTS0;                                        /* CFSTS0           */
    __type9 CFSTS1;                                        /* CFSTS1           */
    __type9 CFSTS2;                                        /* CFSTS2           */
    __type9 CFSTS3;                                        /* CFSTS3           */
    __type9 CFSTS4;                                        /* CFSTS4           */
    __type9 CFSTS5;                                        /* CFSTS5           */
    __type9 CFSTS6;                                        /* CFSTS6           */
    __type9 CFSTS7;                                        /* CFSTS7           */
    __type9 CFSTS8;                                        /* CFSTS8           */
    uint8  dummy38[60];                                    /* Reserved         */
    __type9 CFPCTR0;                                       /* CFPCTR0          */
    __type9 CFPCTR1;                                       /* CFPCTR1          */
    __type9 CFPCTR2;                                       /* CFPCTR2          */
    __type9 CFPCTR3;                                       /* CFPCTR3          */
    __type9 CFPCTR4;                                       /* CFPCTR4          */
    __type9 CFPCTR5;                                       /* CFPCTR5          */
    __type9 CFPCTR6;                                       /* CFPCTR6          */
    __type9 CFPCTR7;                                       /* CFPCTR7          */
    __type9 CFPCTR8;                                       /* CFPCTR8          */
    uint8  dummy39[60];                                    /* Reserved         */
    const __type9 FESTS;                                   /* FESTS            */
    const __type9 FFSTS;                                   /* FFSTS            */
    const __type9 FMSTS;                                   /* FMSTS            */
    const __type9 RFISTS;                                  /* RFISTS           */
    const __type9 CFRISTS;                                 /* CFRISTS          */
    const __type9 CFTISTS;                                 /* CFTISTS          */
    uint8  TMC0;                                           /* TMC0             */
    uint8  TMC1;                                           /* TMC1             */
    uint8  TMC2;                                           /* TMC2             */
    uint8  TMC3;                                           /* TMC3             */
    uint8  TMC4;                                           /* TMC4             */
    uint8  TMC5;                                           /* TMC5             */
    uint8  TMC6;                                           /* TMC6             */
    uint8  TMC7;                                           /* TMC7             */
    uint8  TMC8;                                           /* TMC8             */
    uint8  TMC9;                                           /* TMC9             */
    uint8  TMC10;                                          /* TMC10            */
    uint8  TMC11;                                          /* TMC11            */
    uint8  TMC12;                                          /* TMC12            */
    uint8  TMC13;                                          /* TMC13            */
    uint8  TMC14;                                          /* TMC14            */
    uint8  TMC15;                                          /* TMC15            */
    uint8  TMC16;                                          /* TMC16            */
    uint8  TMC17;                                          /* TMC17            */
    uint8  TMC18;                                          /* TMC18            */
    uint8  TMC19;                                          /* TMC19            */
    uint8  TMC20;                                          /* TMC20            */
    uint8  TMC21;                                          /* TMC21            */
    uint8  TMC22;                                          /* TMC22            */
    uint8  TMC23;                                          /* TMC23            */
    uint8  TMC24;                                          /* TMC24            */
    uint8  TMC25;                                          /* TMC25            */
    uint8  TMC26;                                          /* TMC26            */
    uint8  TMC27;                                          /* TMC27            */
    uint8  TMC28;                                          /* TMC28            */
    uint8  TMC29;                                          /* TMC29            */
    uint8  TMC30;                                          /* TMC30            */
    uint8  TMC31;                                          /* TMC31            */
    uint8  TMC32;                                          /* TMC32            */
    uint8  TMC33;                                          /* TMC33            */
    uint8  TMC34;                                          /* TMC34            */
    uint8  TMC35;                                          /* TMC35            */
    uint8  TMC36;                                          /* TMC36            */
    uint8  TMC37;                                          /* TMC37            */
    uint8  TMC38;                                          /* TMC38            */
    uint8  TMC39;                                          /* TMC39            */
    uint8  TMC40;                                          /* TMC40            */
    uint8  TMC41;                                          /* TMC41            */
    uint8  TMC42;                                          /* TMC42            */
    uint8  TMC43;                                          /* TMC43            */
    uint8  TMC44;                                          /* TMC44            */
    uint8  TMC45;                                          /* TMC45            */
    uint8  TMC46;                                          /* TMC46            */
    uint8  TMC47;                                          /* TMC47            */
    uint8  dummy40[80];                                    /* Reserved         */
    uint8  TMSTS0;                                         /* TMSTS0           */
    uint8  TMSTS1;                                         /* TMSTS1           */
    uint8  TMSTS2;                                         /* TMSTS2           */
    uint8  TMSTS3;                                         /* TMSTS3           */
    uint8  TMSTS4;                                         /* TMSTS4           */
    uint8  TMSTS5;                                         /* TMSTS5           */
    uint8  TMSTS6;                                         /* TMSTS6           */
    uint8  TMSTS7;                                         /* TMSTS7           */
    uint8  TMSTS8;                                         /* TMSTS8           */
    uint8  TMSTS9;                                         /* TMSTS9           */
    uint8  TMSTS10;                                        /* TMSTS10          */
    uint8  TMSTS11;                                        /* TMSTS11          */
    uint8  TMSTS12;                                        /* TMSTS12          */
    uint8  TMSTS13;                                        /* TMSTS13          */
    uint8  TMSTS14;                                        /* TMSTS14          */
    uint8  TMSTS15;                                        /* TMSTS15          */
    uint8  TMSTS16;                                        /* TMSTS16          */
    uint8  TMSTS17;                                        /* TMSTS17          */
    uint8  TMSTS18;                                        /* TMSTS18          */
    uint8  TMSTS19;                                        /* TMSTS19          */
    uint8  TMSTS20;                                        /* TMSTS20          */
    uint8  TMSTS21;                                        /* TMSTS21          */
    uint8  TMSTS22;                                        /* TMSTS22          */
    uint8  TMSTS23;                                        /* TMSTS23          */
    uint8  TMSTS24;                                        /* TMSTS24          */
    uint8  TMSTS25;                                        /* TMSTS25          */
    uint8  TMSTS26;                                        /* TMSTS26          */
    uint8  TMSTS27;                                        /* TMSTS27          */
    uint8  TMSTS28;                                        /* TMSTS28          */
    uint8  TMSTS29;                                        /* TMSTS29          */
    uint8  TMSTS30;                                        /* TMSTS30          */
    uint8  TMSTS31;                                        /* TMSTS31          */
    uint8  TMSTS32;                                        /* TMSTS32          */
    uint8  TMSTS33;                                        /* TMSTS33          */
    uint8  TMSTS34;                                        /* TMSTS34          */
    uint8  TMSTS35;                                        /* TMSTS35          */
    uint8  TMSTS36;                                        /* TMSTS36          */
    uint8  TMSTS37;                                        /* TMSTS37          */
    uint8  TMSTS38;                                        /* TMSTS38          */
    uint8  TMSTS39;                                        /* TMSTS39          */
    uint8  TMSTS40;                                        /* TMSTS40          */
    uint8  TMSTS41;                                        /* TMSTS41          */
    uint8  TMSTS42;                                        /* TMSTS42          */
    uint8  TMSTS43;                                        /* TMSTS43          */
    uint8  TMSTS44;                                        /* TMSTS44          */
    uint8  TMSTS45;                                        /* TMSTS45          */
    uint8  TMSTS46;                                        /* TMSTS46          */
    uint8  TMSTS47;                                        /* TMSTS47          */
    uint8  dummy41[80];                                    /* Reserved         */
    const __type9 TMTRSTS0;                                /* TMTRSTS0         */
    const __type9 TMTRSTS1;                                /* TMTRSTS1         */
    uint8  dummy42[8];                                     /* Reserved         */
    const __type9 TMTARSTS0;                               /* TMTARSTS0        */
    const __type9 TMTARSTS1;                               /* TMTARSTS1        */
    uint8  dummy43[8];                                     /* Reserved         */
    const __type9 TMTCSTS0;                                /* TMTCSTS0         */
    const __type9 TMTCSTS1;                                /* TMTCSTS1         */
    uint8  dummy44[8];                                     /* Reserved         */
    const __type9 TMTASTS0;                                /* TMTASTS0         */
    const __type9 TMTASTS1;                                /* TMTASTS1         */
    uint8  dummy45[8];                                     /* Reserved         */
    __type9 TMIEC0;                                        /* TMIEC0           */
    __type9 TMIEC1;                                        /* TMIEC1           */
    uint8  dummy46[8];                                     /* Reserved         */
    __type9 TXQCC0;                                        /* TXQCC0           */
    __type9 TXQCC1;                                        /* TXQCC1           */
    __type9 TXQCC2;                                        /* TXQCC2           */
    uint8  dummy47[20];                                    /* Reserved         */
    __type9 TXQSTS0;                                       /* TXQSTS0          */
    __type9 TXQSTS1;                                       /* TXQSTS1          */
    __type9 TXQSTS2;                                       /* TXQSTS2          */
    uint8  dummy48[20];                                    /* Reserved         */
    __type9 TXQPCTR0;                                      /* TXQPCTR0         */
    __type9 TXQPCTR1;                                      /* TXQPCTR1         */
    __type9 TXQPCTR2;                                      /* TXQPCTR2         */
    uint8  dummy49[20];                                    /* Reserved         */
    __type9 THLCC0;                                        /* THLCC0           */
    __type9 THLCC1;                                        /* THLCC1           */
    __type9 THLCC2;                                        /* THLCC2           */
    uint8  dummy50[20];                                    /* Reserved         */
    __type9 THLSTS0;                                       /* THLSTS0          */
    __type9 THLSTS1;                                       /* THLSTS1          */
    __type9 THLSTS2;                                       /* THLSTS2          */
    uint8  dummy51[20];                                    /* Reserved         */
    __type9 THLPCTR0;                                      /* THLPCTR0         */
    __type9 THLPCTR1;                                      /* THLPCTR1         */
    __type9 THLPCTR2;                                      /* THLPCTR2         */
    uint8  dummy52[20];                                    /* Reserved         */
    const __type9 GTINTSTS0;                               /* GTINTSTS0        */
    uint8  dummy53[4];                                     /* Reserved         */
    __type9 GTSTCFG;                                       /* GTSTCFG          */
    __type9 GTSTCTR;                                       /* GTSTCTR          */
    uint8  dummy54[12];                                    /* Reserved         */
    __type16 GLOCKK;                                       /* GLOCKK           */
    uint8  dummy55[128];                                   /* Reserved         */
    __type9 GAFLID0;                                       /* GAFLID0          */
    __type9 GAFLM0;                                        /* GAFLM0           */
    __type9 GAFLP00;                                       /* GAFLP00          */
    __type9 GAFLP10;                                       /* GAFLP10          */
    __type9 GAFLID1;                                       /* GAFLID1          */
    __type9 GAFLM1;                                        /* GAFLM1           */
    __type9 GAFLP01;                                       /* GAFLP01          */
    __type9 GAFLP11;                                       /* GAFLP11          */
    __type9 GAFLID2;                                       /* GAFLID2          */
    __type9 GAFLM2;                                        /* GAFLM2           */
    __type9 GAFLP02;                                       /* GAFLP02          */
    __type9 GAFLP12;                                       /* GAFLP12          */
    __type9 GAFLID3;                                       /* GAFLID3          */
    __type9 GAFLM3;                                        /* GAFLM3           */
    __type9 GAFLP03;                                       /* GAFLP03          */
    __type9 GAFLP13;                                       /* GAFLP13          */
    __type9 GAFLID4;                                       /* GAFLID4          */
    __type9 GAFLM4;                                        /* GAFLM4           */
    __type9 GAFLP04;                                       /* GAFLP04          */
    __type9 GAFLP14;                                       /* GAFLP14          */
    __type9 GAFLID5;                                       /* GAFLID5          */
    __type9 GAFLM5;                                        /* GAFLM5           */
    __type9 GAFLP05;                                       /* GAFLP05          */
    __type9 GAFLP15;                                       /* GAFLP15          */
    __type9 GAFLID6;                                       /* GAFLID6          */
    __type9 GAFLM6;                                        /* GAFLM6           */
    __type9 GAFLP06;                                       /* GAFLP06          */
    __type9 GAFLP16;                                       /* GAFLP16          */
    __type9 GAFLID7;                                       /* GAFLID7          */
    __type9 GAFLM7;                                        /* GAFLM7           */
    __type9 GAFLP07;                                       /* GAFLP07          */
    __type9 GAFLP17;                                       /* GAFLP17          */
    __type9 GAFLID8;                                       /* GAFLID8          */
    __type9 GAFLM8;                                        /* GAFLM8           */
    __type9 GAFLP08;                                       /* GAFLP08          */
    __type9 GAFLP18;                                       /* GAFLP18          */
    __type9 GAFLID9;                                       /* GAFLID9          */
    __type9 GAFLM9;                                        /* GAFLM9           */
    __type9 GAFLP09;                                       /* GAFLP09          */
    __type9 GAFLP19;                                       /* GAFLP19          */
    __type9 GAFLID10;                                      /* GAFLID10         */
    __type9 GAFLM10;                                       /* GAFLM10          */
    __type9 GAFLP010;                                      /* GAFLP010         */
    __type9 GAFLP110;                                      /* GAFLP110         */
    __type9 GAFLID11;                                      /* GAFLID11         */
    __type9 GAFLM11;                                       /* GAFLM11          */
    __type9 GAFLP011;                                      /* GAFLP011         */
    __type9 GAFLP111;                                      /* GAFLP111         */
    __type9 GAFLID12;                                      /* GAFLID12         */
    __type9 GAFLM12;                                       /* GAFLM12          */
    __type9 GAFLP012;                                      /* GAFLP012         */
    __type9 GAFLP112;                                      /* GAFLP112         */
    __type9 GAFLID13;                                      /* GAFLID13         */
    __type9 GAFLM13;                                       /* GAFLM13          */
    __type9 GAFLP013;                                      /* GAFLP013         */
    __type9 GAFLP113;                                      /* GAFLP113         */
    __type9 GAFLID14;                                      /* GAFLID14         */
    __type9 GAFLM14;                                       /* GAFLM14          */
    __type9 GAFLP014;                                      /* GAFLP014         */
    __type9 GAFLP114;                                      /* GAFLP114         */
    __type9 GAFLID15;                                      /* GAFLID15         */
    __type9 GAFLM15;                                       /* GAFLM15          */
    __type9 GAFLP015;                                      /* GAFLP015         */
    __type9 GAFLP115;                                      /* GAFLP115         */
    const __type9 RMID0;                                   /* RMID0            */
    const __type9 RMPTR0;                                  /* RMPTR0           */
    const __type9 RMDF00;                                  /* RMDF00           */
    const __type9 RMDF10;                                  /* RMDF10           */
    const __type9 RMID1;                                   /* RMID1            */
    const __type9 RMPTR1;                                  /* RMPTR1           */
    const __type9 RMDF01;                                  /* RMDF01           */
    const __type9 RMDF11;                                  /* RMDF11           */
    const __type9 RMID2;                                   /* RMID2            */
    const __type9 RMPTR2;                                  /* RMPTR2           */
    const __type9 RMDF02;                                  /* RMDF02           */
    const __type9 RMDF12;                                  /* RMDF12           */
    const __type9 RMID3;                                   /* RMID3            */
    const __type9 RMPTR3;                                  /* RMPTR3           */
    const __type9 RMDF03;                                  /* RMDF03           */
    const __type9 RMDF13;                                  /* RMDF13           */
    const __type9 RMID4;                                   /* RMID4            */
    const __type9 RMPTR4;                                  /* RMPTR4           */
    const __type9 RMDF04;                                  /* RMDF04           */
    const __type9 RMDF14;                                  /* RMDF14           */
    const __type9 RMID5;                                   /* RMID5            */
    const __type9 RMPTR5;                                  /* RMPTR5           */
    const __type9 RMDF05;                                  /* RMDF05           */
    const __type9 RMDF15;                                  /* RMDF15           */
    const __type9 RMID6;                                   /* RMID6            */
    const __type9 RMPTR6;                                  /* RMPTR6           */
    const __type9 RMDF06;                                  /* RMDF06           */
    const __type9 RMDF16;                                  /* RMDF16           */
    const __type9 RMID7;                                   /* RMID7            */
    const __type9 RMPTR7;                                  /* RMPTR7           */
    const __type9 RMDF07;                                  /* RMDF07           */
    const __type9 RMDF17;                                  /* RMDF17           */
    const __type9 RMID8;                                   /* RMID8            */
    const __type9 RMPTR8;                                  /* RMPTR8           */
    const __type9 RMDF08;                                  /* RMDF08           */
    const __type9 RMDF18;                                  /* RMDF18           */
    const __type9 RMID9;                                   /* RMID9            */
    const __type9 RMPTR9;                                  /* RMPTR9           */
    const __type9 RMDF09;                                  /* RMDF09           */
    const __type9 RMDF19;                                  /* RMDF19           */
    const __type9 RMID10;                                  /* RMID10           */
    const __type9 RMPTR10;                                 /* RMPTR10          */
    const __type9 RMDF010;                                 /* RMDF010          */
    const __type9 RMDF110;                                 /* RMDF110          */
    const __type9 RMID11;                                  /* RMID11           */
    const __type9 RMPTR11;                                 /* RMPTR11          */
    const __type9 RMDF011;                                 /* RMDF011          */
    const __type9 RMDF111;                                 /* RMDF111          */
    const __type9 RMID12;                                  /* RMID12           */
    const __type9 RMPTR12;                                 /* RMPTR12          */
    const __type9 RMDF012;                                 /* RMDF012          */
    const __type9 RMDF112;                                 /* RMDF112          */
    const __type9 RMID13;                                  /* RMID13           */
    const __type9 RMPTR13;                                 /* RMPTR13          */
    const __type9 RMDF013;                                 /* RMDF013          */
    const __type9 RMDF113;                                 /* RMDF113          */
    const __type9 RMID14;                                  /* RMID14           */
    const __type9 RMPTR14;                                 /* RMPTR14          */
    const __type9 RMDF014;                                 /* RMDF014          */
    const __type9 RMDF114;                                 /* RMDF114          */
    const __type9 RMID15;                                  /* RMID15           */
    const __type9 RMPTR15;                                 /* RMPTR15          */
    const __type9 RMDF015;                                 /* RMDF015          */
    const __type9 RMDF115;                                 /* RMDF115          */
    const __type9 RMID16;                                  /* RMID16           */
    const __type9 RMPTR16;                                 /* RMPTR16          */
    const __type9 RMDF016;                                 /* RMDF016          */
    const __type9 RMDF116;                                 /* RMDF116          */
    const __type9 RMID17;                                  /* RMID17           */
    const __type9 RMPTR17;                                 /* RMPTR17          */
    const __type9 RMDF017;                                 /* RMDF017          */
    const __type9 RMDF117;                                 /* RMDF117          */
    const __type9 RMID18;                                  /* RMID18           */
    const __type9 RMPTR18;                                 /* RMPTR18          */
    const __type9 RMDF018;                                 /* RMDF018          */
    const __type9 RMDF118;                                 /* RMDF118          */
    const __type9 RMID19;                                  /* RMID19           */
    const __type9 RMPTR19;                                 /* RMPTR19          */
    const __type9 RMDF019;                                 /* RMDF019          */
    const __type9 RMDF119;                                 /* RMDF119          */
    const __type9 RMID20;                                  /* RMID20           */
    const __type9 RMPTR20;                                 /* RMPTR20          */
    const __type9 RMDF020;                                 /* RMDF020          */
    const __type9 RMDF120;                                 /* RMDF120          */
    const __type9 RMID21;                                  /* RMID21           */
    const __type9 RMPTR21;                                 /* RMPTR21          */
    const __type9 RMDF021;                                 /* RMDF021          */
    const __type9 RMDF121;                                 /* RMDF121          */
    const __type9 RMID22;                                  /* RMID22           */
    const __type9 RMPTR22;                                 /* RMPTR22          */
    const __type9 RMDF022;                                 /* RMDF022          */
    const __type9 RMDF122;                                 /* RMDF122          */
    const __type9 RMID23;                                  /* RMID23           */
    const __type9 RMPTR23;                                 /* RMPTR23          */
    const __type9 RMDF023;                                 /* RMDF023          */
    const __type9 RMDF123;                                 /* RMDF123          */
    const __type9 RMID24;                                  /* RMID24           */
    const __type9 RMPTR24;                                 /* RMPTR24          */
    const __type9 RMDF024;                                 /* RMDF024          */
    const __type9 RMDF124;                                 /* RMDF124          */
    const __type9 RMID25;                                  /* RMID25           */
    const __type9 RMPTR25;                                 /* RMPTR25          */
    const __type9 RMDF025;                                 /* RMDF025          */
    const __type9 RMDF125;                                 /* RMDF125          */
    const __type9 RMID26;                                  /* RMID26           */
    const __type9 RMPTR26;                                 /* RMPTR26          */
    const __type9 RMDF026;                                 /* RMDF026          */
    const __type9 RMDF126;                                 /* RMDF126          */
    const __type9 RMID27;                                  /* RMID27           */
    const __type9 RMPTR27;                                 /* RMPTR27          */
    const __type9 RMDF027;                                 /* RMDF027          */
    const __type9 RMDF127;                                 /* RMDF127          */
    const __type9 RMID28;                                  /* RMID28           */
    const __type9 RMPTR28;                                 /* RMPTR28          */
    const __type9 RMDF028;                                 /* RMDF028          */
    const __type9 RMDF128;                                 /* RMDF128          */
    const __type9 RMID29;                                  /* RMID29           */
    const __type9 RMPTR29;                                 /* RMPTR29          */
    const __type9 RMDF029;                                 /* RMDF029          */
    const __type9 RMDF129;                                 /* RMDF129          */
    const __type9 RMID30;                                  /* RMID30           */
    const __type9 RMPTR30;                                 /* RMPTR30          */
    const __type9 RMDF030;                                 /* RMDF030          */
    const __type9 RMDF130;                                 /* RMDF130          */
    const __type9 RMID31;                                  /* RMID31           */
    const __type9 RMPTR31;                                 /* RMPTR31          */
    const __type9 RMDF031;                                 /* RMDF031          */
    const __type9 RMDF131;                                 /* RMDF131          */
    const __type9 RMID32;                                  /* RMID32           */
    const __type9 RMPTR32;                                 /* RMPTR32          */
    const __type9 RMDF032;                                 /* RMDF032          */
    const __type9 RMDF132;                                 /* RMDF132          */
    const __type9 RMID33;                                  /* RMID33           */
    const __type9 RMPTR33;                                 /* RMPTR33          */
    const __type9 RMDF033;                                 /* RMDF033          */
    const __type9 RMDF133;                                 /* RMDF133          */
    const __type9 RMID34;                                  /* RMID34           */
    const __type9 RMPTR34;                                 /* RMPTR34          */
    const __type9 RMDF034;                                 /* RMDF034          */
    const __type9 RMDF134;                                 /* RMDF134          */
    const __type9 RMID35;                                  /* RMID35           */
    const __type9 RMPTR35;                                 /* RMPTR35          */
    const __type9 RMDF035;                                 /* RMDF035          */
    const __type9 RMDF135;                                 /* RMDF135          */
    const __type9 RMID36;                                  /* RMID36           */
    const __type9 RMPTR36;                                 /* RMPTR36          */
    const __type9 RMDF036;                                 /* RMDF036          */
    const __type9 RMDF136;                                 /* RMDF136          */
    const __type9 RMID37;                                  /* RMID37           */
    const __type9 RMPTR37;                                 /* RMPTR37          */
    const __type9 RMDF037;                                 /* RMDF037          */
    const __type9 RMDF137;                                 /* RMDF137          */
    const __type9 RMID38;                                  /* RMID38           */
    const __type9 RMPTR38;                                 /* RMPTR38          */
    const __type9 RMDF038;                                 /* RMDF038          */
    const __type9 RMDF138;                                 /* RMDF138          */
    const __type9 RMID39;                                  /* RMID39           */
    const __type9 RMPTR39;                                 /* RMPTR39          */
    const __type9 RMDF039;                                 /* RMDF039          */
    const __type9 RMDF139;                                 /* RMDF139          */
    const __type9 RMID40;                                  /* RMID40           */
    const __type9 RMPTR40;                                 /* RMPTR40          */
    const __type9 RMDF040;                                 /* RMDF040          */
    const __type9 RMDF140;                                 /* RMDF140          */
    const __type9 RMID41;                                  /* RMID41           */
    const __type9 RMPTR41;                                 /* RMPTR41          */
    const __type9 RMDF041;                                 /* RMDF041          */
    const __type9 RMDF141;                                 /* RMDF141          */
    const __type9 RMID42;                                  /* RMID42           */
    const __type9 RMPTR42;                                 /* RMPTR42          */
    const __type9 RMDF042;                                 /* RMDF042          */
    const __type9 RMDF142;                                 /* RMDF142          */
    const __type9 RMID43;                                  /* RMID43           */
    const __type9 RMPTR43;                                 /* RMPTR43          */
    const __type9 RMDF043;                                 /* RMDF043          */
    const __type9 RMDF143;                                 /* RMDF143          */
    const __type9 RMID44;                                  /* RMID44           */
    const __type9 RMPTR44;                                 /* RMPTR44          */
    const __type9 RMDF044;                                 /* RMDF044          */
    const __type9 RMDF144;                                 /* RMDF144          */
    const __type9 RMID45;                                  /* RMID45           */
    const __type9 RMPTR45;                                 /* RMPTR45          */
    const __type9 RMDF045;                                 /* RMDF045          */
    const __type9 RMDF145;                                 /* RMDF145          */
    const __type9 RMID46;                                  /* RMID46           */
    const __type9 RMPTR46;                                 /* RMPTR46          */
    const __type9 RMDF046;                                 /* RMDF046          */
    const __type9 RMDF146;                                 /* RMDF146          */
    const __type9 RMID47;                                  /* RMID47           */
    const __type9 RMPTR47;                                 /* RMPTR47          */
    const __type9 RMDF047;                                 /* RMDF047          */
    const __type9 RMDF147;                                 /* RMDF147          */
    uint8  dummy56[1280];                                  /* Reserved         */
    const __type9 RFID0;                                   /* RFID0            */
    const __type9 RFPTR0;                                  /* RFPTR0           */
    const __type9 RFDF00;                                  /* RFDF00           */
    const __type9 RFDF10;                                  /* RFDF10           */
    const __type9 RFID1;                                   /* RFID1            */
    const __type9 RFPTR1;                                  /* RFPTR1           */
    const __type9 RFDF01;                                  /* RFDF01           */
    const __type9 RFDF11;                                  /* RFDF11           */
    const __type9 RFID2;                                   /* RFID2            */
    const __type9 RFPTR2;                                  /* RFPTR2           */
    const __type9 RFDF02;                                  /* RFDF02           */
    const __type9 RFDF12;                                  /* RFDF12           */
    const __type9 RFID3;                                   /* RFID3            */
    const __type9 RFPTR3;                                  /* RFPTR3           */
    const __type9 RFDF03;                                  /* RFDF03           */
    const __type9 RFDF13;                                  /* RFDF13           */
    const __type9 RFID4;                                   /* RFID4            */
    const __type9 RFPTR4;                                  /* RFPTR4           */
    const __type9 RFDF04;                                  /* RFDF04           */
    const __type9 RFDF14;                                  /* RFDF14           */
    const __type9 RFID5;                                   /* RFID5            */
    const __type9 RFPTR5;                                  /* RFPTR5           */
    const __type9 RFDF05;                                  /* RFDF05           */
    const __type9 RFDF15;                                  /* RFDF15           */
    const __type9 RFID6;                                   /* RFID6            */
    const __type9 RFPTR6;                                  /* RFPTR6           */
    const __type9 RFDF06;                                  /* RFDF06           */
    const __type9 RFDF16;                                  /* RFDF16           */
    const __type9 RFID7;                                   /* RFID7            */
    const __type9 RFPTR7;                                  /* RFPTR7           */
    const __type9 RFDF07;                                  /* RFDF07           */
    const __type9 RFDF17;                                  /* RFDF17           */
    __type9 CFID0;                                         /* CFID0            */
    __type9 CFPTR0;                                        /* CFPTR0           */
    __type9 CFDF00;                                        /* CFDF00           */
    __type9 CFDF10;                                        /* CFDF10           */
    __type9 CFID1;                                         /* CFID1            */
    __type9 CFPTR1;                                        /* CFPTR1           */
    __type9 CFDF01;                                        /* CFDF01           */
    __type9 CFDF11;                                        /* CFDF11           */
    __type9 CFID2;                                         /* CFID2            */
    __type9 CFPTR2;                                        /* CFPTR2           */
    __type9 CFDF02;                                        /* CFDF02           */
    __type9 CFDF12;                                        /* CFDF12           */
    __type9 CFID3;                                         /* CFID3            */
    __type9 CFPTR3;                                        /* CFPTR3           */
    __type9 CFDF03;                                        /* CFDF03           */
    __type9 CFDF13;                                        /* CFDF13           */
    __type9 CFID4;                                         /* CFID4            */
    __type9 CFPTR4;                                        /* CFPTR4           */
    __type9 CFDF04;                                        /* CFDF04           */
    __type9 CFDF14;                                        /* CFDF14           */
    __type9 CFID5;                                         /* CFID5            */
    __type9 CFPTR5;                                        /* CFPTR5           */
    __type9 CFDF05;                                        /* CFDF05           */
    __type9 CFDF15;                                        /* CFDF15           */
    __type9 CFID6;                                         /* CFID6            */
    __type9 CFPTR6;                                        /* CFPTR6           */
    __type9 CFDF06;                                        /* CFDF06           */
    __type9 CFDF16;                                        /* CFDF16           */
    __type9 CFID7;                                         /* CFID7            */
    __type9 CFPTR7;                                        /* CFPTR7           */
    __type9 CFDF07;                                        /* CFDF07           */
    __type9 CFDF17;                                        /* CFDF17           */
    __type9 CFID8;                                         /* CFID8            */
    __type9 CFPTR8;                                        /* CFPTR8           */
    __type9 CFDF08;                                        /* CFDF08           */
    __type9 CFDF18;                                        /* CFDF18           */
    uint8  dummy57[240];                                   /* Reserved         */
    __type9 TMID0;                                         /* TMID0            */
    __type9 TMPTR0;                                        /* TMPTR0           */
    __type9 TMDF00;                                        /* TMDF00           */
    __type9 TMDF10;                                        /* TMDF10           */
    __type9 TMID1;                                         /* TMID1            */
    __type9 TMPTR1;                                        /* TMPTR1           */
    __type9 TMDF01;                                        /* TMDF01           */
    __type9 TMDF11;                                        /* TMDF11           */
    __type9 TMID2;                                         /* TMID2            */
    __type9 TMPTR2;                                        /* TMPTR2           */
    __type9 TMDF02;                                        /* TMDF02           */
    __type9 TMDF12;                                        /* TMDF12           */
    __type9 TMID3;                                         /* TMID3            */
    __type9 TMPTR3;                                        /* TMPTR3           */
    __type9 TMDF03;                                        /* TMDF03           */
    __type9 TMDF13;                                        /* TMDF13           */
    __type9 TMID4;                                         /* TMID4            */
    __type9 TMPTR4;                                        /* TMPTR4           */
    __type9 TMDF04;                                        /* TMDF04           */
    __type9 TMDF14;                                        /* TMDF14           */
    __type9 TMID5;                                         /* TMID5            */
    __type9 TMPTR5;                                        /* TMPTR5           */
    __type9 TMDF05;                                        /* TMDF05           */
    __type9 TMDF15;                                        /* TMDF15           */
    __type9 TMID6;                                         /* TMID6            */
    __type9 TMPTR6;                                        /* TMPTR6           */
    __type9 TMDF06;                                        /* TMDF06           */
    __type9 TMDF16;                                        /* TMDF16           */
    __type9 TMID7;                                         /* TMID7            */
    __type9 TMPTR7;                                        /* TMPTR7           */
    __type9 TMDF07;                                        /* TMDF07           */
    __type9 TMDF17;                                        /* TMDF17           */
    __type9 TMID8;                                         /* TMID8            */
    __type9 TMPTR8;                                        /* TMPTR8           */
    __type9 TMDF08;                                        /* TMDF08           */
    __type9 TMDF18;                                        /* TMDF18           */
    __type9 TMID9;                                         /* TMID9            */
    __type9 TMPTR9;                                        /* TMPTR9           */
    __type9 TMDF09;                                        /* TMDF09           */
    __type9 TMDF19;                                        /* TMDF19           */
    __type9 TMID10;                                        /* TMID10           */
    __type9 TMPTR10;                                       /* TMPTR10          */
    __type9 TMDF010;                                       /* TMDF010          */
    __type9 TMDF110;                                       /* TMDF110          */
    __type9 TMID11;                                        /* TMID11           */
    __type9 TMPTR11;                                       /* TMPTR11          */
    __type9 TMDF011;                                       /* TMDF011          */
    __type9 TMDF111;                                       /* TMDF111          */
    __type9 TMID12;                                        /* TMID12           */
    __type9 TMPTR12;                                       /* TMPTR12          */
    __type9 TMDF012;                                       /* TMDF012          */
    __type9 TMDF112;                                       /* TMDF112          */
    __type9 TMID13;                                        /* TMID13           */
    __type9 TMPTR13;                                       /* TMPTR13          */
    __type9 TMDF013;                                       /* TMDF013          */
    __type9 TMDF113;                                       /* TMDF113          */
    __type9 TMID14;                                        /* TMID14           */
    __type9 TMPTR14;                                       /* TMPTR14          */
    __type9 TMDF014;                                       /* TMDF014          */
    __type9 TMDF114;                                       /* TMDF114          */
    __type9 TMID15;                                        /* TMID15           */
    __type9 TMPTR15;                                       /* TMPTR15          */
    __type9 TMDF015;                                       /* TMDF015          */
    __type9 TMDF115;                                       /* TMDF115          */
    __type9 TMID16;                                        /* TMID16           */
    __type9 TMPTR16;                                       /* TMPTR16          */
    __type9 TMDF016;                                       /* TMDF016          */
    __type9 TMDF116;                                       /* TMDF116          */
    __type9 TMID17;                                        /* TMID17           */
    __type9 TMPTR17;                                       /* TMPTR17          */
    __type9 TMDF017;                                       /* TMDF017          */
    __type9 TMDF117;                                       /* TMDF117          */
    __type9 TMID18;                                        /* TMID18           */
    __type9 TMPTR18;                                       /* TMPTR18          */
    __type9 TMDF018;                                       /* TMDF018          */
    __type9 TMDF118;                                       /* TMDF118          */
    __type9 TMID19;                                        /* TMID19           */
    __type9 TMPTR19;                                       /* TMPTR19          */
    __type9 TMDF019;                                       /* TMDF019          */
    __type9 TMDF119;                                       /* TMDF119          */
    __type9 TMID20;                                        /* TMID20           */
    __type9 TMPTR20;                                       /* TMPTR20          */
    __type9 TMDF020;                                       /* TMDF020          */
    __type9 TMDF120;                                       /* TMDF120          */
    __type9 TMID21;                                        /* TMID21           */
    __type9 TMPTR21;                                       /* TMPTR21          */
    __type9 TMDF021;                                       /* TMDF021          */
    __type9 TMDF121;                                       /* TMDF121          */
    __type9 TMID22;                                        /* TMID22           */
    __type9 TMPTR22;                                       /* TMPTR22          */
    __type9 TMDF022;                                       /* TMDF022          */
    __type9 TMDF122;                                       /* TMDF122          */
    __type9 TMID23;                                        /* TMID23           */
    __type9 TMPTR23;                                       /* TMPTR23          */
    __type9 TMDF023;                                       /* TMDF023          */
    __type9 TMDF123;                                       /* TMDF123          */
    __type9 TMID24;                                        /* TMID24           */
    __type9 TMPTR24;                                       /* TMPTR24          */
    __type9 TMDF024;                                       /* TMDF024          */
    __type9 TMDF124;                                       /* TMDF124          */
    __type9 TMID25;                                        /* TMID25           */
    __type9 TMPTR25;                                       /* TMPTR25          */
    __type9 TMDF025;                                       /* TMDF025          */
    __type9 TMDF125;                                       /* TMDF125          */
    __type9 TMID26;                                        /* TMID26           */
    __type9 TMPTR26;                                       /* TMPTR26          */
    __type9 TMDF026;                                       /* TMDF026          */
    __type9 TMDF126;                                       /* TMDF126          */
    __type9 TMID27;                                        /* TMID27           */
    __type9 TMPTR27;                                       /* TMPTR27          */
    __type9 TMDF027;                                       /* TMDF027          */
    __type9 TMDF127;                                       /* TMDF127          */
    __type9 TMID28;                                        /* TMID28           */
    __type9 TMPTR28;                                       /* TMPTR28          */
    __type9 TMDF028;                                       /* TMDF028          */
    __type9 TMDF128;                                       /* TMDF128          */
    __type9 TMID29;                                        /* TMID29           */
    __type9 TMPTR29;                                       /* TMPTR29          */
    __type9 TMDF029;                                       /* TMDF029          */
    __type9 TMDF129;                                       /* TMDF129          */
    __type9 TMID30;                                        /* TMID30           */
    __type9 TMPTR30;                                       /* TMPTR30          */
    __type9 TMDF030;                                       /* TMDF030          */
    __type9 TMDF130;                                       /* TMDF130          */
    __type9 TMID31;                                        /* TMID31           */
    __type9 TMPTR31;                                       /* TMPTR31          */
    __type9 TMDF031;                                       /* TMDF031          */
    __type9 TMDF131;                                       /* TMDF131          */
    __type9 TMID32;                                        /* TMID32           */
    __type9 TMPTR32;                                       /* TMPTR32          */
    __type9 TMDF032;                                       /* TMDF032          */
    __type9 TMDF132;                                       /* TMDF132          */
    __type9 TMID33;                                        /* TMID33           */
    __type9 TMPTR33;                                       /* TMPTR33          */
    __type9 TMDF033;                                       /* TMDF033          */
    __type9 TMDF133;                                       /* TMDF133          */
    __type9 TMID34;                                        /* TMID34           */
    __type9 TMPTR34;                                       /* TMPTR34          */
    __type9 TMDF034;                                       /* TMDF034          */
    __type9 TMDF134;                                       /* TMDF134          */
    __type9 TMID35;                                        /* TMID35           */
    __type9 TMPTR35;                                       /* TMPTR35          */
    __type9 TMDF035;                                       /* TMDF035          */
    __type9 TMDF135;                                       /* TMDF135          */
    __type9 TMID36;                                        /* TMID36           */
    __type9 TMPTR36;                                       /* TMPTR36          */
    __type9 TMDF036;                                       /* TMDF036          */
    __type9 TMDF136;                                       /* TMDF136          */
    __type9 TMID37;                                        /* TMID37           */
    __type9 TMPTR37;                                       /* TMPTR37          */
    __type9 TMDF037;                                       /* TMDF037          */
    __type9 TMDF137;                                       /* TMDF137          */
    __type9 TMID38;                                        /* TMID38           */
    __type9 TMPTR38;                                       /* TMPTR38          */
    __type9 TMDF038;                                       /* TMDF038          */
    __type9 TMDF138;                                       /* TMDF138          */
    __type9 TMID39;                                        /* TMID39           */
    __type9 TMPTR39;                                       /* TMPTR39          */
    __type9 TMDF039;                                       /* TMDF039          */
    __type9 TMDF139;                                       /* TMDF139          */
    __type9 TMID40;                                        /* TMID40           */
    __type9 TMPTR40;                                       /* TMPTR40          */
    __type9 TMDF040;                                       /* TMDF040          */
    __type9 TMDF140;                                       /* TMDF140          */
    __type9 TMID41;                                        /* TMID41           */
    __type9 TMPTR41;                                       /* TMPTR41          */
    __type9 TMDF041;                                       /* TMDF041          */
    __type9 TMDF141;                                       /* TMDF141          */
    __type9 TMID42;                                        /* TMID42           */
    __type9 TMPTR42;                                       /* TMPTR42          */
    __type9 TMDF042;                                       /* TMDF042          */
    __type9 TMDF142;                                       /* TMDF142          */
    __type9 TMID43;                                        /* TMID43           */
    __type9 TMPTR43;                                       /* TMPTR43          */
    __type9 TMDF043;                                       /* TMDF043          */
    __type9 TMDF143;                                       /* TMDF143          */
    __type9 TMID44;                                        /* TMID44           */
    __type9 TMPTR44;                                       /* TMPTR44          */
    __type9 TMDF044;                                       /* TMDF044          */
    __type9 TMDF144;                                       /* TMDF144          */
    __type9 TMID45;                                        /* TMID45           */
    __type9 TMPTR45;                                       /* TMPTR45          */
    __type9 TMDF045;                                       /* TMDF045          */
    __type9 TMDF145;                                       /* TMDF145          */
    __type9 TMID46;                                        /* TMID46           */
    __type9 TMPTR46;                                       /* TMPTR46          */
    __type9 TMDF046;                                       /* TMDF046          */
    __type9 TMDF146;                                       /* TMDF146          */
    __type9 TMID47;                                        /* TMID47           */
    __type9 TMPTR47;                                       /* TMPTR47          */
    __type9 TMDF047;                                       /* TMDF047          */
    __type9 TMDF147;                                       /* TMDF147          */
    uint8  dummy58[1280];                                  /* Reserved         */
    const __type9 THLACC0;                                 /* THLACC0          */
    const __type9 THLACC1;                                 /* THLACC1          */
    const __type9 THLACC2;                                 /* THLACC2          */
    uint8  dummy59[244];                                   /* Reserved         */
    __type9 RPGACC0;                                       /* RPGACC0          */
    __type9 RPGACC1;                                       /* RPGACC1          */
    __type9 RPGACC2;                                       /* RPGACC2          */
    __type9 RPGACC3;                                       /* RPGACC3          */
    __type9 RPGACC4;                                       /* RPGACC4          */
    __type9 RPGACC5;                                       /* RPGACC5          */
    __type9 RPGACC6;                                       /* RPGACC6          */
    __type9 RPGACC7;                                       /* RPGACC7          */
    __type9 RPGACC8;                                       /* RPGACC8          */
    __type9 RPGACC9;                                       /* RPGACC9          */
    __type9 RPGACC10;                                      /* RPGACC10         */
    __type9 RPGACC11;                                      /* RPGACC11         */
    __type9 RPGACC12;                                      /* RPGACC12         */
    __type9 RPGACC13;                                      /* RPGACC13         */
    __type9 RPGACC14;                                      /* RPGACC14         */
    __type9 RPGACC15;                                      /* RPGACC15         */
    __type9 RPGACC16;                                      /* RPGACC16         */
    __type9 RPGACC17;                                      /* RPGACC17         */
    __type9 RPGACC18;                                      /* RPGACC18         */
    __type9 RPGACC19;                                      /* RPGACC19         */
    __type9 RPGACC20;                                      /* RPGACC20         */
    __type9 RPGACC21;                                      /* RPGACC21         */
    __type9 RPGACC22;                                      /* RPGACC22         */
    __type9 RPGACC23;                                      /* RPGACC23         */
    __type9 RPGACC24;                                      /* RPGACC24         */
    __type9 RPGACC25;                                      /* RPGACC25         */
    __type9 RPGACC26;                                      /* RPGACC26         */
    __type9 RPGACC27;                                      /* RPGACC27         */
    __type9 RPGACC28;                                      /* RPGACC28         */
    __type9 RPGACC29;                                      /* RPGACC29         */
    __type9 RPGACC30;                                      /* RPGACC30         */
    __type9 RPGACC31;                                      /* RPGACC31         */
    __type9 RPGACC32;                                      /* RPGACC32         */
    __type9 RPGACC33;                                      /* RPGACC33         */
    __type9 RPGACC34;                                      /* RPGACC34         */
    __type9 RPGACC35;                                      /* RPGACC35         */
    __type9 RPGACC36;                                      /* RPGACC36         */
    __type9 RPGACC37;                                      /* RPGACC37         */
    __type9 RPGACC38;                                      /* RPGACC38         */
    __type9 RPGACC39;                                      /* RPGACC39         */
    __type9 RPGACC40;                                      /* RPGACC40         */
    __type9 RPGACC41;                                      /* RPGACC41         */
    __type9 RPGACC42;                                      /* RPGACC42         */
    __type9 RPGACC43;                                      /* RPGACC43         */
    __type9 RPGACC44;                                      /* RPGACC44         */
    __type9 RPGACC45;                                      /* RPGACC45         */
    __type9 RPGACC46;                                      /* RPGACC46         */
    __type9 RPGACC47;                                      /* RPGACC47         */
    __type9 RPGACC48;                                      /* RPGACC48         */
    __type9 RPGACC49;                                      /* RPGACC49         */
    __type9 RPGACC50;                                      /* RPGACC50         */
    __type9 RPGACC51;                                      /* RPGACC51         */
    __type9 RPGACC52;                                      /* RPGACC52         */
    __type9 RPGACC53;                                      /* RPGACC53         */
    __type9 RPGACC54;                                      /* RPGACC54         */
    __type9 RPGACC55;                                      /* RPGACC55         */
    __type9 RPGACC56;                                      /* RPGACC56         */
    __type9 RPGACC57;                                      /* RPGACC57         */
    __type9 RPGACC58;                                      /* RPGACC58         */
    __type9 RPGACC59;                                      /* RPGACC59         */
    __type9 RPGACC60;                                      /* RPGACC60         */
    __type9 RPGACC61;                                      /* RPGACC61         */
    __type9 RPGACC62;                                      /* RPGACC62         */
    __type9 RPGACC63;                                      /* RPGACC63         */
}__type32;

#ifndef ReSim
__IOREG(PROTCMD1,          0xFFF88000, __READ_WRITE, uint32);
__IOREG(PROTS1,            0xFFF88004, __READ,       uint32);
__IOREG(CKSC_ICANS_CTL,    0xFFF8A900, __READ_WRITE, uint32);
__IOREG(CKSC_ICANS_ACT,    0xFFF8A908, __READ,       uint32);
__IOREG(CKSC_ICANOSCD_CTL, 0xFFF8AA00, __READ_WRITE, uint32);
__IOREG(CKSC_ICANOSCD_ACT, 0xFFF8AA08, __READ,       uint32);
__IOREG(RSCAN0,            0xFFD00000, __READ_WRITE, __type32);
#else
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
#endif
