#ifndef __DDP_COLOR_H__
#define __DDP_COLOR_H__

#include "ddp_drv.h"

enum
{
    ENUM_Y_SLOPE = 0 * 28,

    ENUM_S_GAIN1 = 1 * 28,
    ENUM_S_GAIN2 = 2 * 28,
    ENUM_S_GAIN3 = 3 * 28,
    ENUM_S_P1 = 4 * 28,
    ENUM_S_P2 = 5 * 28,

    ENUM_H_FTN = 6 * 28,

};


#define CFG_MAIN          (DISPSYS_COLOR_BASE+0x400)
#define G_PIC_ADJ_MAIN_2  (DISPSYS_COLOR_BASE+0x438)
#define DISP_COLOR_CK_ON  (DISPSYS_COLOR_BASE+0xF28)

#define Y_SLOPE_1_0_MAIN (DISPSYS_COLOR_BASE+0x4A0)
#define LOCAL_SAT_1 (DISPSYS_COLOR_BASE+0x4C0)
#define LOCAL_SAT_2 (DISPSYS_COLOR_BASE+0x4C4)
#define LOCAL_SAT_3 (DISPSYS_COLOR_BASE+0x4C8)
#define LOCAL_SAT_4 (DISPSYS_COLOR_BASE+0x4CC)
#define LOCAL_HUE_CD_0 (DISPSYS_COLOR_BASE+0x620)




//---------------------------------------------------------------------------
#define GAMMA_SIZE 1024
#define NR_SIZE 50
#define MAX_SCE_TABLE_SIZE (7*28)
#define SCE_PHASE 28
#define SCE_SIZE SCE_PHASE*7

#define PURP_TONE    0
#define SKIN_TONE    1
#define GRASS_TONE   2
#define SKY_TONE     3

#define PURP_TONE_START    0 
#define PURP_TONE_END      2
#define SKIN_TONE_START    3
#define SKIN_TONE_END     16
#define GRASS_TONE_START  17
#define GRASS_TONE_END    24
#define SKY_TONE_START    25
#define SKY_TONE_END      27

/*

static unsigned int ColorParam[MAX_SCE_TABLE_SIZE] = {

0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, //Y
0x8e, 0x8d, 0x8e, 0x8e, 0x8e, 0x8e, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x8d, 0x9a, 0x9c, 0x9c, 0x8e, 0x9c, 0xa6, 0xab, 0xab, 0x9c, 0x9c, 0xa6, 0xa6, //SG1
0xa5, 0x90, 0x92, 0x94, 0x9b, 0x95, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x93, 0xa4, 0xa8, 0xc0, 0xc7, 0xc0, 0xb3, 0xc4, 0xac, 0xa5, 0xc5, 0xba, 0xb8, //SG2
0x6f, 0x5c, 0x5d, 0x5e, 0x5e, 0x6f, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x76, 0x76, 0x74, 0x5b, 0x54, 0x59, 0x69, 0x4d, 0x57, 0x68, 0x57, 0x73, 0x73, //SG3
0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, //SP1
0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x33, 0x32, 0x32, 0x32, 0x32, //SP2
0x88, 0x8e, 0x8b, 0x89, 0x85, 0x83, 0x81, 0x7f, 0x7d, 0x7b, 0x79, 0x77, 0x75, 0x73, 0x71, 0x6f, 0x70, 0x74, 0x7b, 0x85, 0x8d, 0x92, 0x90, 0x8c, 0x87, 0x85, 0x83, 0x84, //H

};

*/


#define SG1 0
#define SG2 1
#define SG3 2
#define SP1 3
#define SP2 4



//---------------------------------------------------------------------------
void DpEngine_COLORonConfig(unsigned int srcWidth,unsigned int srcHeight);
void DpEngine_COLORonInit(void);


//IOCTL , for AAL service to wait vsync and get latest histogram
void disp_set_hist_readlock(unsigned long bLock);
DISP_AAL_STATISTICS * disp_get_hist_ptr(void);


int disp_get_hist(unsigned int * pHist);

//Called by interrupt to refresh histogram
void disp_update_hist(void);

DISP_PQ_PARAM * get_Color_config(void);
DISPLAY_PQ_T * get_Color_index(void);

//Called by tasklet to config registers
void disp_onConfig_luma(unsigned long *luma);

#endif

