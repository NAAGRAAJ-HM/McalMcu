#ifndef _UC_ADC_H
#define _UC_ADC_H
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
#define ADCA0VCR02                                          ADCA0.VCR02.UINT32
#define ADCA0ADCR                                           ADCA0.ADCR.UINT32
#define ADCA0SMPCR                                          ADCA0.SMPCR.UINT32
#define ADCA0SFTCR                                          ADCA0.SFTCR.UINT32
#define ADCA0SGCR1                                          ADCA0.SGCR1.UINT32
#define ADCA0SGVCSP1                                        ADCA0.SGVCSP1.UINT32
#define ADCA0SGVCEP1                                        ADCA0.SGVCEP1.UINT32
#define ADCA0SGSTCR1                                        ADCA0.SGSTCR1.UINT32
#define ADCA0DIR02                                          ADCA0.DIR02

#define TBADCA0I0                     (((volatile __bitf_T *)0xFFFF9014)->bit06)
#define MKADCA0I0                     (((volatile __bitf_T *)0xFFFF9014)->bit07)
#define RFADCA0I0                     (((volatile __bitf_T *)0xFFFF9015)->bit04)

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
#ifndef ReSim
typedef struct{                                            /* Module           */
    __type9 VCR00;                                         /* VCR00            */
    __type9 VCR01;                                         /* VCR01            */
    __type9 VCR02;                                         /* VCR02            */
    __type9 VCR03;                                         /* VCR03            */
    __type9 VCR04;                                         /* VCR04            */
    __type9 VCR05;                                         /* VCR05            */
    __type9 VCR06;                                         /* VCR06            */
    __type9 VCR07;                                         /* VCR07            */
    __type9 VCR08;                                         /* VCR08            */
    __type9 VCR09;                                         /* VCR09            */
    __type9 VCR10;                                         /* VCR10            */
    __type9 VCR11;                                         /* VCR11            */
    __type9 VCR12;                                         /* VCR12            */
    __type9 VCR13;                                         /* VCR13            */
    __type9 VCR14;                                         /* VCR14            */
    __type9 VCR15;                                         /* VCR15            */
    __type9 VCR16;                                         /* VCR16            */
    __type9 VCR17;                                         /* VCR17            */
    __type9 VCR18;                                         /* VCR18            */
    __type9 VCR19;                                         /* VCR19            */
    __type9 VCR20;                                         /* VCR20            */
    __type9 VCR21;                                         /* VCR21            */
    __type9 VCR22;                                         /* VCR22            */
    __type9 VCR23;                                         /* VCR23            */
    __type9 VCR24;                                         /* VCR24            */
    __type9 VCR25;                                         /* VCR25            */
    __type9 VCR26;                                         /* VCR26            */
    __type9 VCR27;                                         /* VCR27            */
    __type9 VCR28;                                         /* VCR28            */
    uint8  dummy293[128];                                  /* Reserved         */
    const __type9 PWDVCR;                                  /* PWDVCR           */
    uint8  dummy294[8];                                    /* Reserved         */
    const __type16 DR00;                                   /* DR00             */
    const __type16 DR02;                                   /* DR02             */
    const __type16 DR04;                                   /* DR04             */
    const __type16 DR06;                                   /* DR06             */
    const __type16 DR08;                                   /* DR08             */
    const __type16 DR10;                                   /* DR10             */
    const __type16 DR12;                                   /* DR12             */
    const __type16 DR14;                                   /* DR14             */
    const __type16 DR16;                                   /* DR16             */
    const __type16 DR18;                                   /* DR18             */
    const __type16 DR20;                                   /* DR20             */
    const __type16 DR22;                                   /* DR22             */
    const __type16 DR24;                                   /* DR24             */
    const __type16 DR26;                                   /* DR26             */
    const __type16 DR28;                                   /* DR28             */
    uint8  dummy295[60];                                   /* Reserved         */
    const __type16 PWDTSNDR;                               /* PWDTSNDR         */
    uint8  dummy296[132];                                  /* Reserved         */
    const uint32 DIR00;                                    /* DIR00            */
    const uint32 DIR01;                                    /* DIR01            */
    const uint32 DIR02;                                    /* DIR02            */
    const uint32 DIR03;                                    /* DIR03            */
    const uint32 DIR04;                                    /* DIR04            */
    const uint32 DIR05;                                    /* DIR05            */
    const uint32 DIR06;                                    /* DIR06            */
    const uint32 DIR07;                                    /* DIR07            */
    const uint32 DIR08;                                    /* DIR08            */
    const uint32 DIR09;                                    /* DIR09            */
    const uint32 DIR10;                                    /* DIR10            */
    const uint32 DIR11;                                    /* DIR11            */
    const uint32 DIR12;                                    /* DIR12            */
    const uint32 DIR13;                                    /* DIR13            */
    const uint32 DIR14;                                    /* DIR14            */
    const uint32 DIR15;                                    /* DIR15            */
    const uint32 DIR16;                                    /* DIR16            */
    const uint32 DIR17;                                    /* DIR17            */
    const uint32 DIR18;                                    /* DIR18            */
    const uint32 DIR19;                                    /* DIR19            */
    const uint32 DIR20;                                    /* DIR20            */
    const uint32 DIR21;                                    /* DIR21            */
    const uint32 DIR22;                                    /* DIR22            */
    const uint32 DIR23;                                    /* DIR23            */
    const uint32 DIR24;                                    /* DIR24            */
    const uint32 DIR25;                                    /* DIR25            */
    const uint32 DIR26;                                    /* DIR26            */
    const uint32 DIR27;                                    /* DIR27            */
    const uint32 DIR28;                                    /* DIR28            */
    uint8  dummy297[128];                                  /* Reserved         */
    const uint32 PWDDIR;                                   /* PWDDIR           */
    uint8  dummy298[8];                                    /* Reserved         */
    __type9 ADHALTR;                                       /* ADHALTR          */
    __type9 ADCR;                                          /* ADCR             */
    const __type16 SGSTR;                                  /* SGSTR            */
    const __type9 MPXCURR;                                 /* MPXCURR          */
    uint8  dummy299[4];                                    /* Reserved         */
    __type9 THSMPSTCR;                                     /* THSMPSTCR        */
    __type9 THCR;                                          /* THCR             */
    __type9 THAHLDSTCR;                                    /* THAHLDSTCR       */
    __type9 THBHLDSTCR;                                    /* THBHLDSTCR       */
    __type9 THACR;                                         /* THACR            */
    __type9 THBCR;                                         /* THBCR            */
    __type9 THER;                                          /* THER             */
    __type9 THGSR;                                         /* THGSR            */
    __type9 SFTCR;                                         /* SFTCR            */
    __type16 ULLMTBR0;                                     /* ULLMTBR0         */
    __type16 ULLMTBR1;                                     /* ULLMTBR1         */
    __type16 ULLMTBR2;                                     /* ULLMTBR2         */
    __type9 ECR;                                           /* ECR              */
    const __type9 ULER;                                    /* ULER             */
    const __type9 OWER;                                    /* OWER             */
    __type9 DGCTL0;                                        /* DGCTL0           */
    __type16 DGCTL1;                                       /* DGCTL1           */
    __type16 PDCTL1;                                       /* PDCTL1           */
    __type9 PDCTL2;                                        /* PDCTL2           */
    uint8  dummy300[32];                                   /* Reserved         */
    __type9 SMPCR;                                         /* SMPCR            */
    uint8  dummy301[4];                                    /* Reserved         */
    uint8  EMU;                                            /* EMU              */
    uint8  dummy302[183];                                  /* Reserved         */
    __type9 SGSTCR1;                                       /* SGSTCR1          */
    uint8  dummy303[4];                                    /* Reserved         */
    __type9 SGCR1;                                         /* SGCR1            */
    __type9 SGVCSP1;                                       /* SGVCSP1          */
    __type9 SGVCEP1;                                       /* SGVCEP1          */
    __type9 SGMCYCR1;                                      /* SGMCYCR1         */
    __type9 SGSEFCR1;                                      /* SGSEFCR1         */
    __type16 SGTSEL1;                                      /* SGTSEL1          */
    uint8  dummy304[32];                                   /* Reserved         */
    __type9 SGSTCR2;                                       /* SGSTCR2          */
    uint8  dummy305[4];                                    /* Reserved         */
    __type9 SGCR2;                                         /* SGCR2            */
    __type9 SGVCSP2;                                       /* SGVCSP2          */
    __type9 SGVCEP2;                                       /* SGVCEP2          */
    __type9 SGMCYCR2;                                      /* SGMCYCR2         */
    __type9 SGSEFCR2;                                      /* SGSEFCR2         */
    __type16 SGTSEL2;                                      /* SGTSEL2          */
    uint8  dummy306[32];                                   /* Reserved         */
    __type9 SGSTCR3;                                       /* SGSTCR3          */
    uint8  dummy307[4];                                    /* Reserved         */
    __type9 SGCR3;                                         /* SGCR3            */
    __type9 SGVCSP3;                                       /* SGVCSP3          */
    __type9 SGVCEP3;                                       /* SGVCEP3          */
    __type9 SGMCYCR3;                                      /* SGMCYCR3         */
    __type9 SGSEFCR3;                                      /* SGSEFCR3         */
    __type16 SGTSEL3;                                      /* SGTSEL3          */
    uint8  dummy308[40];                                   /* Reserved         */
    __type9 PWDSGCR;                                       /* PWDSGCR          */
    uint8  dummy309[12];                                   /* Reserved         */
    __type9 PWDSGSEFCR;                                    /* PWDSGSEFCR       */
} __type45;

__IOREG(APM0,  0xFFC103C8, __READ_WRITE, uint16);
__IOREG(ADCA0, 0xFFF20000, __READ_WRITE, __type45);
#else
typedef struct{
   uint32 UINT32;
}typeVCR02;

typedef struct{
   uint32 UINT32;
}typeADCR;

typedef struct{
   uint32 UINT32;
}typeSMPCR;

typedef struct{
   uint32 UINT32;
}typeSFTCR;

typedef struct{
   uint32 UINT32;
}typeSGCR1;

typedef struct{
   uint32 UINT32;
}typeSGVCSP1;

typedef struct{
   uint32 UINT32;
}typeSGVCEP1;

typedef struct{
   uint32 UINT32;
}typeSGSTCR1;

typedef struct{
   typeVCR02 VCR02;
   typeADCR  ADCR;
   typeSMPCR SMPCR;
   typeSFTCR SFTCR;
   typeSGCR1 SGCR1;
   typeSGVCSP1 SGVCSP1;
   typeSGVCEP1 SGVCEP1;
   typeSGSTCR1 SGSTCR1;
   uint32      DIR02; // TBD: ???
}typeADCA0;

volatile uint16    APM0;
volatile typeADCA0 ADCA0;
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
