#ifndef __DDP_TDSHP_H__
#define __DDP_TDSHP_H__


#define TDS_HSYNC_WIDTH 							0xf24
#define TDS_ACTIVE_WIDTH_IN_VBLANK 	0xf3C
#define DTDS_IN_MTX_C00 							0xf50
#define DTDS_IN_MTX_C01 							0xf54
#define DTDS_IN_MTX_C02 							0xf58
#define DTDS_IN_MTX_C10 							0xf5C
#define DTDS_IN_MTX_C11 							0xf60
#define DTDS_IN_MTX_C12 							0xf64
#define DTDS_IN_MTX_C20 							0xf68
#define DTDS_IN_MTX_C21 							0xf6C
#define DTDS_IN_MTX_C22 							0xf70
#define DTDS_IN_MTX_IN_OFFSET0 				0xf74
#define DTDS_IN_MTX_IN_OFFSET1 				0xf78
#define DTDS_IN_MTX_IN_OFFSET2 				0xf7C
#define DTDS_IN_MTX_OUT_OFFSET0 			0xf80
#define DTDS_IN_MTX_OUT_OFFSET1 			0xf84
#define DTDS_IN_MTX_OUT_OFFSET2 			0xf88
#define DTDS_OUT_MTX_C00 						0xf90
#define DTDS_OUT_MTX_C01 						0xf94
#define DTDS_OUT_MTX_C02 						0xf98
#define DTDS_OUT_MTX_C10 						0xf9C
#define DTDS_OUT_MTX_C11 						0xfA0
#define DTDS_OUT_MTX_C12 						0xfA4
#define DTDS_OUT_MTX_C20 						0xfA8
#define DTDS_OUT_MTX_C21 						0xfAC
#define DTDS_OUT_MTX_C22 						0xfB0
#define DTDS_OUT_MTX_IN_OFFSET0 			0xfB4
#define DTDS_OUT_MTX_IN_OFFSET1 			0xfB8
#define DTDS_OUT_MTX_IN_OFFSET2 			0xfBC
#define DTDS_OUT_MTX_OUT_OFFSET0 		0xfC0
#define DTDS_OUT_MTX_OUT_OFFSET1 		0xfC4
#define DTDS_OUT_MTX_OUT_OFFSET2 		0xfC8
#define DTDS_CONFIG 									0xf10




#define SHARP_TUNING_INDEX 1
#define THSHP_PARAM_MAX 174

static unsigned int  TDSHP_Param[SHARP_TUNING_INDEX][THSHP_PARAM_MAX] = 
{

//THSHP Param: Strong
{
    0x0000, //1500B000[30:30] TDS_BYPASS_MID
    0x0000, //1500B000[29:29] TDS_BYPASS_HIGH
    0x0000, //1500B000[21:21] TDS_BYPASS_LTI_H
    0x0000, //1500B000[20:20] TDS_BYPASS_LTI_V
    0x0001, //1500B000[31:31] TDS_EN
    0x0001, //1500B000[03:03] TDS_FLT_LTI_H
    0x0001, //1500B000[01:01] TDS_FLT_LTI_V
    0x0000, //1500B000[08:08] TDS_INK_ALL
    0x0000, //1500B000[07:07] TDS_INK_EQUAL_GAIN
    0x0000, //1500B000[19:19] TDS_INK_MID
    0x0000, //1500B000[18:18] TDS_INK_HIGH
    0x0000, //1500B000[11:11] TDS_INK_LTI_H
    0x0000, //1500B000[09:09] TDS_INK_LTI_V
    0x0000, //1500B000[06:04] TDS_INK_SEL
    0x0001, //1500B014[31:31] TDS_NEG_EN_H
    0x00FF, //1500B014[23:16] TDS_NEG_LIMIT_H
    0x0008, //1500B014[30:26] TDS_NEG_RATIO_H
    0x0001, //1500B020[31:24] TDS_COR_ZERO_MID
    0x0001, //1500B020[23:16] TDS_COR_ZERO_HIGH
    0x0004, //1500B02C[31:28] TDS_COR_RATIO_MID
    0x0004, //1500B02C[27:24] TDS_COR_RATIO_HIGH
    0x0004, //1500B034[31:24] TDS_COR_THR_MID
    0x0004, //1500B034[23:16] TDS_COR_THR_HIGH
    0x000C, //1500B040[31:24] TDS_GAIN_MID
    0x0026, //1500B040[23:16] TDS_GAIN_HIGH
    0x001A, //1500B04C[31:24] TDS_LIMIT_POS_MID
    0x001C, //1500B04C[23:16] TDS_LIMIT_POS_HIGH
    0x001A, //1500B058[31:24] TDS_LIMIT_NEG_MID
    0x001C, //1500B058[23:16] TDS_LIMIT_NEG_HIGH
    0x0004, //1500B064[31:28] TDS_LIMIT_RATIO_MID
    0x0004, //1500B064[27:24] TDS_LIMIT_RATIO_HIGH
    0x0000, //1500B068[10:10] TDS_COR_RATIO_MID_P16
    0x0000, //1500B068[09:09] TDS_COR_RATIO_HIGH_P16
    0x0024, //1500B06C[31:24] TDS_BOUND_POS_MID
    0x0024, //1500B06C[23:16] TDS_BOUND_POS_HIGH
    0x0024, //1500B078[31:24] TDS_BOUND_NEG_MID
    0x0024, //1500B078[23:16] TDS_BOUND_NEG_HIGH
    0x0001, //1500B028[23:16] TDS_COR_ZERO_LTI_H
    0x0001, //1500B028[15:08] TDS_COR_ZERO_LTI_V
    0x0004, //1500B030[27:24] TDS_COR_RATIO_LTI_H
    0x0004, //1500B030[23:20] TDS_COR_RATIO_LTI_V
    0x0004, //1500B03C[23:16] TDS_COR_THR_LTI_H
    0x0004, //1500B03C[15:08] TDS_COR_THR_LTI_V
    0x0010, //1500B048[23:16] TDS_GAIN_LTI_H
    0x001C, //1500B048[15:08] TDS_GAIN_LTI_V
    0x001C, //1500B054[23:16] TDS_LIMIT_POS_LTI_H
    0x001C, //1500B054[15:08] TDS_LIMIT_POS_LTI_V
    0x001C, //1500B060[23:16] TDS_LIMIT_NEG_LTI_H
    0x001C, //1500B060[15:08] TDS_LIMIT_NEG_LTI_V
    0x0000, //1500B068[01:01] TDS_COR_RATIO_LTI_H_P1
    0x0004, //1500B068[27:24] TDS_LIMIT_RATIO_LTI_H
    0x0000, //1500B068[00:00] TDS_COR_RATIO_LTI_V_P1
    0x0004, //1500B068[23:20] TDS_LIMIT_RATIO_LTI_V
    0x0024, //1500B074[23:16] TDS_BOUND_POS_LTI_H
    0x0024, //1500B074[15:08] TDS_BOUND_POS_LTI_V
    0x0024, //1500B080[23:16] TDS_BOUND_NEG_LTI_H
    0x0024, //1500B080[15:08] TDS_BOUND_NEG_LTI_V
    0x0001, //1500B084[31:31] TDS_CLIP_EN_MID
    0x0002, //1500B084[15:08] TDS_CLIP_NEG_MID
    0x0002, //1500B084[23:16] TDS_CLIP_POS_MID
    0x0009, //1500B084[28:24] TDS_CLIP_RATIO_MID
    0x0001, //1500B084[30:30] TDS_CLIP_TAP_MID
    0x0001, //1500B088[31:31] TDS_CLIP_EN_HIGH
    0x0002, //1500B088[15:08] TDS_CLIP_NEG_HIGH
    0x0002, //1500B088[23:16] TDS_CLIP_POS_HIGH
    0x0008, //1500B088[28:24] TDS_CLIP_RATIO_HIGH
    0x0001, //1500B088[30:30] TDS_CLIP_TAP_HIGH
    0x0001, //1500B094[31:31] TDS_CLIP_EN_LTI_H
    0x0004, //1500B094[15:08] TDS_CLIP_NEG_LTI_H
    0x0004, //1500B094[23:16] TDS_CLIP_POS_LTI_H
    0x0010, //1500B094[28:24] TDS_CLIP_RATIO_LTI_H
    0x0000, //1500B094[30:30] TDS_CLIP_TAP_LTI_H
    0x0001, //1500B098[31:31] TDS_CLIP_EN_LTI_V
    0x0004, //1500B098[15:08] TDS_CLIP_NEG_LTI_V
    0x0004, //1500B098[23:16] TDS_CLIP_POS_LTI_V
    0x0010, //1500B098[28:24] TDS_CLIP_RATIO_LTI_V
    0x0000, //1500B098[30:30] TDS_CLIP_TAP_LTI_V
    0x0000, //1500B09C[31:24] TDS_COR_THR
    0x0000, //1500B09C[23:16] TDS_COR_ZERO
    0x0020, //1500B09C[11:04] TDS_GAIN
    0x0000, //1500B09C[15:12] TDS_COR_RATIO
    0x0008, //1500B09C[03:00] TDS_LIMIT_RATIO
    0x0040, //1500B0A0[07:00] TDS_BOUND_NEG
    0x0020, //1500B0A0[23:16] TDS_LIMIT_NEG
    0x0040, //1500B0A0[15:08] TDS_BOUND_POS
    0x0020, //1500B0A0[31:24] TDS_LIMIT_POS
    0x0001, //1500B0A4[31:31] TDS_CLIP_EN
    0x0032, //1500B0A4[15:08] TDS_CLIP_NEG
    0x0028, //1500B0A4[23:16] TDS_CLIP_POS
    0x0004, //1500B0A4[28:24] TDS_CLIP_RATIO
    0x0000, //1500B0A4[30:30] TDS_CLIP_TAP
    0x0002, //1500B0A4[03:00] TDS_AC_LPF_COE
    0x000A, //1500B01C[05:00] TDS_SAT_PROC
    0x0000, //1500B0A8[31:24] TDS_YLEV_P000
    0x0030, //1500B0A8[15:08] TDS_YLEV_P128
    0x0048, //1500B0A8[07:00] TDS_YLEV_P192
    0x0058, //1500B0A8[23:16] TDS_YLEV_P064
    0x0060, //1500B0AC[31:24] TDS_YLEV_P256
    0x0068, //1500B0AC[23:16] TDS_YLEV_P320
    0x0070, //1500B0AC[15:08] TDS_YLEV_P384
    0x0078, //1500B0AC[07:00] TDS_YLEV_P448
    0x0080, //1500B0B0[31:24] TDS_YLEV_P512
    0x007B, //1500B0B0[23:16] TDS_YLEV_P576
    0x0076, //1500B0B0[15:08] TDS_YLEV_P640
    0x0070, //1500B0B0[07:00] TDS_YLEV_P704
    0x006B, //1500B0B4[31:24] TDS_YLEV_P768
    0x0066, //1500B0B4[23:16] TDS_YLEV_P832
    0x0060, //1500B0B4[15:08] TDS_YLEV_P896
    0x005B, //1500B0B4[07:00] TDS_YLEV_P960
    0x000F, //1500B0B8[21:16] TDS_YLEV_ALPHA
    0x0001, //1500B0B8[14:14] TDS_YLEV_EN
    0x0056, //1500B0B8[31:24] TDS_YLEV_P1024
    0x0000, //1500B0B8[15:15] TDS_YLEV_SEL
    0x0000, //1500B278[03:03] PBC_LPF_SEL
    0x0001, //1500B200[31:31] PBC1_EN
    0x0001, //1500B228[31:31] PBC2_EN
    0x0001, //1500B250[31:31] PBC3_EN
    0x0000, //1500B208[19:19] PBC1_EDGE_EN
    0x0020, //1500B208[05:00] PBC1_EDGE_SLOPE
    0x0032, //1500B208[15:08] PBC1_EDGE_THR
    0x0001, //1500B20C[31:24] PBC1_CONF_GAIN
    0x0000, //1500B20C[15:15] PBC1_LPF_EN
    0x0080, //1500B20C[23:16] PBC1_LPF_LEVEL
    0x0055, //1500B200[27:16] PBC1_RSLOPE_1
    0x0030, //1500B200[07:00] PBC1_RADIUS_R
    0x0030, //1500B200[15:08] PBC1_THETA_R
    0x0055, //1500B204[11:00] PBC1_TSLOPE
    0x0068, //1500B204[21:12] PBC1_RADIUS_C
    0x01FC, //1500B204[31:22] PBC1_THETA_C
    0x0055, //1500B208[31:20] PBC1_RSLOPE
    0x007B, //1500B218[31:24] PBC1_CORING_MID
    0x007B, //1500B218[23:16] PBC1_CORING_HIGH
    0x00A0, //1500B210[31:24] PBC1_GAIN_MID
    0x00C0, //1500B210[23:16] PBC1_GAIN_HIGH
    0x0090, //1500B220[31:24] PBC1_LIMIT_MID
    0x0090, //1500B220[23:16] PBC1_LIMIT_HIGH
    0x0001, //1500B230[19:19] PBC2_EDGE_EN
    0x000C, //1500B230[05:00] PBC2_EDGE_SLOPE
    0x0020, //1500B230[15:08] PBC2_EDGE_THR
    0x0005, //1500B234[31:24] PBC2_CONF_GAIN
    0x0000, //1500B234[15:15] PBC2_LPF_EN
    0x0080, //1500B234[23:16] PBC2_LPF_LEVEL
    0x002A, //1500B228[27:16] PBC2_RSLOPE_1
    0x0060, //1500B228[07:00] PBC2_RADIUS_R
    0x0060, //1500B228[15:08] PBC2_THETA_R
    0x002A, //1500B22C[11:00] PBC2_TSLOPE
    0x0080, //1500B22C[21:12] PBC2_RADIUS_C
    0x0180, //1500B22C[31:22] PBC2_THETA_C
    0x002A, //1500B230[31:20] PBC2_RSLOPE
    0x0080, //1500B240[31:24] PBC2_CORING_MID
    0x0080, //1500B240[23:16] PBC2_CORING_HIGH
    0x0080, //1500B238[31:24] PBC2_GAIN_MID
    0x0080, //1500B238[23:16] PBC2_GAIN_HIGH
    0x0080, //1500B248[31:24] PBC2_LIMIT_MID
    0x0080, //1500B248[23:16] PBC2_LIMIT_HIGH
    0x0000, //1500B258[19:19] PBC3_EDGE_EN
    0x0010, //1500B258[05:00] PBC3_EDGE_SLOPE
    0x0020, //1500B258[15:08] PBC3_EDGE_THR
    0x0001, //1500B25C[31:24] PBC3_CONF_GAIN
    0x0000, //1500B25C[15:15] PBC3_LPF_EN
    0x0080, //1500B25C[23:16] PBC3_LPF_LEVEL
    0x0020, //1500B250[27:16] PBC3_RSLOPE_1
    0x0080, //1500B250[07:00] PBC3_RADIUS_R
    0x0040, //1500B250[15:08] PBC3_THETA_R
    0x0040, //1500B254[11:00] PBC3_TSLOPE
    0x00F0, //1500B254[21:12] PBC3_RADIUS_C
    0x0380, //1500B254[31:22] PBC3_THETA_C
    0x0020, //1500B258[31:20] PBC3_RSLOPE
    0x0085, //1500B268[31:24] PBC3_CORING_MID
    0x0085, //1500B268[23:16] PBC3_CORING_HIGH
    0x0040, //1500B260[31:24] PBC3_GAIN_MID
    0x0040, //1500B260[23:16] PBC3_GAIN_HIGH
    0x0070, //1500B270[31:24] PBC3_LIMIT_MID
    0x0070  //1500B270[23:16] PBC3_LIMIT_HIGH

}

};
//TDSHP Param: (order: THSHP+PBC-REMOVED from DTV's XML)
void DpEngine_SHARPonInit(void);
void DpEngine_SHARPonConfig(unsigned int srcWidth,unsigned int srcHeight);



//--------------------------------------------------------


#endif

