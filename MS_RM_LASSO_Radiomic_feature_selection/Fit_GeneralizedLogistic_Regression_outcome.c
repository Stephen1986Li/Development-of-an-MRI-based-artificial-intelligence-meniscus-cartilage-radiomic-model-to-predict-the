#include "jmp_score.h"
#include "jmp_lib.h"


/* ==================================================================
 Copyright(C) 2018 SAS Institute Inc.All rights reserved.
 
 Notice:
 The following permissions are granted provided that the
 above copyright and this notice appear in the score code and
 any related documentation. Permission to copy, modify
 and distribute the score code generated using
 JMP(R) software is limited to customers of SAS Institute Inc. ("SAS")
 and successive third parties, all without any warranty, express or
 implied, or any other obligation by SAS. SAS and all other SAS
 Institute Inc. product and service names are registered
 trademarks or trademarks of SAS Institute Inc. in the USA
 and other countries. Except as contained in this notice,
 the name of the SAS Institute Inc. and JMP shall not be used in
 the advertising or promotion of products or services without
 prior written authorization from SAS Institute Inc.
 ================================================================== */

/* C code generated by JMP v16.2.0 */

JMP_SCORE_API void fillMetadataCounts(COUNTS *mc) {
	mc->creatorLen       = 16;
	mc->modelNameLen     = 20;
	mc->predictedLen     = 7;
	mc->tableNameLen     = 17;
	mc->versionLen       = 7;
	mc->timestampLen     = 21;
	mc->maxInputNameLen  = 36;
	mc->maxOutputNameLen = 61;
	mc->numInputs        = 54;
	mc->numOutputs       = 3;
}

JMP_SCORE_API void fillModelMetadata(MODELMD *mm) {
	strcpy_safe(mm->creator,   "Fit Generalized"); 
	strcpy_safe(mm->modelName, "Logistic Regression"); 
	strcpy_safe(mm->predicted, "itype1"); 
	strcpy_safe(mm->tableName, "final-2022-11-18"); 
	strcpy_safe(mm->version,   "16.2.0");
    strcpy_safe(mm->timestamp, "2023-02-13T04:25:22Z");
}

JMP_SCORE_API void fillInputMetadata(FIELDMD *fd) {
    strcpy_safe(fd[0].name, "original_firstorder_minimum_fc");
    fd[0].type = fnum_type;
    fd[0].datalen = 0;        

    strcpy_safe(fd[1].name, "original_glszm_smallareaemphasis_fc");
    fd[1].type = fnum_type;
    fd[1].datalen = 0;        

    strcpy_safe(fd[2].name, "original_shape_elongation_lm");
    fd[2].type = fnum_type;
    fd[2].datalen = 0;        

    strcpy_safe(fd[3].name, "original_shape_sphericity_mm");
    fd[3].type = fnum_type;
    fd[3].datalen = 0;        

    strcpy_safe(fd[4].name, "v455_fc");
    fd[4].type = fnum_type;
    fd[4].datalen = 0;        

    strcpy_safe(fd[5].name, "v620_fc");
    fd[5].type = fnum_type;
    fd[5].datalen = 0;        

    strcpy_safe(fd[6].name, "v810_mm");
    fd[6].type = fnum_type;
    fd[6].datalen = 0;        

    strcpy_safe(fd[7].name, "wavelethhh_firstorder_minimum_fc");
    fd[7].type = fnum_type;
    fd[7].datalen = 0;        

    strcpy_safe(fd[8].name, "wavelethhh_glcm_clustershade_mm");
    fd[8].type = fnum_type;
    fd[8].datalen = 0;        

    strcpy_safe(fd[9].name, "wavelethhh_glcm_imc1_lm");
    fd[9].type = fnum_type;
    fd[9].datalen = 0;        

    strcpy_safe(fd[10].name, "wavelethhh_glrlm_runvariance_mm");
    fd[10].type = fnum_type;
    fd[10].datalen = 0;        

    strcpy_safe(fd[11].name, "wavelethhh_glszm_largeareahighgr_fc");
    fd[11].type = fnum_type;
    fd[11].datalen = 0;        

    strcpy_safe(fd[12].name, "wavelethhl_firstorder_mean_mm");
    fd[12].type = fnum_type;
    fd[12].datalen = 0;        

    strcpy_safe(fd[13].name, "wavelethhl_glcm_clusterprominenc_fc");
    fd[13].type = fnum_type;
    fd[13].datalen = 0;        

    strcpy_safe(fd[14].name, "wavelethhl_glcm_correlation_mm");
    fd[14].type = fnum_type;
    fd[14].datalen = 0;        

    strcpy_safe(fd[15].name, "wavelethhl_glcm_imc1_mm");
    fd[15].type = fnum_type;
    fd[15].datalen = 0;        

    strcpy_safe(fd[16].name, "wavelethhl_glcm_imc1_tc");
    fd[16].type = fnum_type;
    fd[16].datalen = 0;        

    strcpy_safe(fd[17].name, "wavelethhl_gldm_smalldependencel_fc");
    fd[17].type = fnum_type;
    fd[17].datalen = 0;        

    strcpy_safe(fd[18].name, "wavelethhl_gldm_smalldependencel_mm");
    fd[18].type = fnum_type;
    fd[18].datalen = 0;        

    strcpy_safe(fd[19].name, "wavelethhl_glrlm_longrunhighgray_mm");
    fd[19].type = fnum_type;
    fd[19].datalen = 0;        

    strcpy_safe(fd[20].name, "wavelethhl_glszm_graylevelvarian_mm");
    fd[20].type = fnum_type;
    fd[20].datalen = 0;        

    strcpy_safe(fd[21].name, "wavelethhl_glszm_largearealowgra_fc");
    fd[21].type = fnum_type;
    fd[21].datalen = 0;        

    strcpy_safe(fd[22].name, "wavelethhl_glszm_smallareaemphas_fc");
    fd[22].type = fnum_type;
    fd[22].datalen = 0;        

    strcpy_safe(fd[23].name, "wavelethlh_firstorder_median_lm");
    fd[23].type = fnum_type;
    fd[23].datalen = 0;        

    strcpy_safe(fd[24].name, "wavelethlh_glszm_largeareahighgr_tc");
    fd[24].type = fnum_type;
    fd[24].datalen = 0;        

    strcpy_safe(fd[25].name, "wavelethlh_glszm_zoneentropy_tc");
    fd[25].type = fnum_type;
    fd[25].datalen = 0;        

    strcpy_safe(fd[26].name, "wavelethll_firstorder_kurtosis_mm");
    fd[26].type = fnum_type;
    fd[26].datalen = 0;        

    strcpy_safe(fd[27].name, "wavelethll_firstorder_skewness_lm");
    fd[27].type = fnum_type;
    fd[27].datalen = 0;        

    strcpy_safe(fd[28].name, "wavelethll_glszm_graylevelnonuni_fc");
    fd[28].type = fnum_type;
    fd[28].datalen = 0;        

    strcpy_safe(fd[29].name, "wavelethll_glszm_largearealowgra_lm");
    fd[29].type = fnum_type;
    fd[29].datalen = 0;        

    strcpy_safe(fd[30].name, "wavelethll_glszm_smallareaemphas_fc");
    fd[30].type = fnum_type;
    fd[30].datalen = 0;        

    strcpy_safe(fd[31].name, "wavelethll_ngtdm_busyness_mm");
    fd[31].type = fnum_type;
    fd[31].datalen = 0;        

    strcpy_safe(fd[32].name, "waveletlhh_firstorder_maximum_mm");
    fd[32].type = fnum_type;
    fd[32].datalen = 0;        

    strcpy_safe(fd[33].name, "waveletlhh_firstorder_median_lm");
    fd[33].type = fnum_type;
    fd[33].datalen = 0;        

    strcpy_safe(fd[34].name, "waveletlhh_glszm_smallareaemphas_mm");
    fd[34].type = fnum_type;
    fd[34].datalen = 0;        

    strcpy_safe(fd[35].name, "waveletlhl_firstorder_minimum_tc");
    fd[35].type = fnum_type;
    fd[35].datalen = 0;        

    strcpy_safe(fd[36].name, "waveletlhl_firstorder_skewness_fc");
    fd[36].type = fnum_type;
    fd[36].datalen = 0;        

    strcpy_safe(fd[37].name, "waveletlhl_firstorder_skewness_tc");
    fd[37].type = fnum_type;
    fd[37].datalen = 0;        

    strcpy_safe(fd[38].name, "waveletlhl_glcm_clustershade_fc");
    fd[38].type = fnum_type;
    fd[38].datalen = 0;        

    strcpy_safe(fd[39].name, "waveletlhl_glszm_zoneentropy_lm");
    fd[39].type = fnum_type;
    fd[39].datalen = 0;        

    strcpy_safe(fd[40].name, "waveletlhl_glszm_zoneentropy_mm");
    fd[40].type = fnum_type;
    fd[40].datalen = 0;        

    strcpy_safe(fd[41].name, "waveletllh_firstorder_minimum_fc");
    fd[41].type = fnum_type;
    fd[41].datalen = 0;        

    strcpy_safe(fd[42].name, "waveletllh_glcm_correlation_mm");
    fd[42].type = fnum_type;
    fd[42].datalen = 0;        

    strcpy_safe(fd[43].name, "waveletllh_glcm_imc1_mm");
    fd[43].type = fnum_type;
    fd[43].datalen = 0;        

    strcpy_safe(fd[44].name, "waveletllh_gldm_smalldependencel_mm");
    fd[44].type = fnum_type;
    fd[44].datalen = 0;        

    strcpy_safe(fd[45].name, "waveletllh_glszm_zoneentropy_fc");
    fd[45].type = fnum_type;
    fd[45].datalen = 0;        

    strcpy_safe(fd[46].name, "waveletlll_glcm_clustershade_lm");
    fd[46].type = fnum_type;
    fd[46].datalen = 0;        

    strcpy_safe(fd[47].name, "waveletlll_glcm_idn_fc");
    fd[47].type = fnum_type;
    fd[47].datalen = 0;        

    strcpy_safe(fd[48].name, "waveletlll_gldm_largedependenceh_lm");
    fd[48].type = fnum_type;
    fd[48].datalen = 0;        

    strcpy_safe(fd[49].name, "waveletlll_glszm_graylevelnonuni_fc");
    fd[49].type = fnum_type;
    fd[49].datalen = 0;        

    strcpy_safe(fd[50].name, "waveletlll_glszm_graylevelvarian_mm");
    fd[50].type = fnum_type;
    fd[50].datalen = 0;        

    strcpy_safe(fd[51].name, "waveletlll_ngtdm_busyness_tc");
    fd[51].type = fnum_type;
    fd[51].datalen = 0;        

    strcpy_safe(fd[52].name, "Probability( itype1=Case )");
    fd[52].type = fnum_type;
    fd[52].datalen = 0;        

    strcpy_safe(fd[53].name, "Probability( itype1=Control )");
    fd[53].type = fnum_type;
    fd[53].datalen = 0;        
}

JMP_SCORE_API void fillOutputMetadata(FIELDMD *fd) {
    strcpy_safe(fd[0].name, "Probability( itype1=Case ),!Probability( itype1=Case )");
    fd[0].type = fnum_type;
    fd[0].datalen = 0;        

    strcpy_safe(fd[1].name, "Probability( itype1=Control ),!Probability( itype1=Control )");
    fd[1].type = fnum_type;
    fd[1].datalen = 0;        

    strcpy_safe(fd[2].name, "Most Likely itype1,!Most Likely itype1");
    fd[2].type = char_type;
    fd[2].datalen = 8;        
}

// Original name was: 'original_firstorder_minimum_fc'
#define ORIGINAL_FIRSTORDER_MINIMUM_FC      indata[0].data.fnum
// Original name was: 'original_glszm_smallareaemphasis_fc'
#define ORIGINAL_GLSZM_SMALLAREAEMPHASIS_FC indata[1].data.fnum
// Original name was: 'original_shape_elongation_lm'
#define ORIGINAL_SHAPE_ELONGATION_LM        indata[2].data.fnum
// Original name was: 'original_shape_sphericity_mm'
#define ORIGINAL_SHAPE_SPHERICITY_MM        indata[3].data.fnum
// Original name was: 'v455_fc'
#define V455_FC                             indata[4].data.fnum
// Original name was: 'v620_fc'
#define V620_FC                             indata[5].data.fnum
// Original name was: 'v810_mm'
#define V810_MM                             indata[6].data.fnum
// Original name was: 'wavelethhh_firstorder_minimum_fc'
#define WAVELETHHH_FIRSTORDER_MINIMUM_FC    indata[7].data.fnum
// Original name was: 'wavelethhh_glcm_clustershade_mm'
#define WAVELETHHH_GLCM_CLUSTERSHADE_MM     indata[8].data.fnum
// Original name was: 'wavelethhh_glcm_imc1_lm'
#define WAVELETHHH_GLCM_IMC1_LM             indata[9].data.fnum
// Original name was: 'wavelethhh_glrlm_runvariance_mm'
#define WAVELETHHH_GLRLM_RUNVARIANCE_MM     indata[10].data.fnum
// Original name was: 'wavelethhh_glszm_largeareahighgr_fc'
#define WAVELETHHH_GLSZM_LARGEAREAHIGHGR_FC indata[11].data.fnum
// Original name was: 'wavelethhl_firstorder_mean_mm'
#define WAVELETHHL_FIRSTORDER_MEAN_MM       indata[12].data.fnum
// Original name was: 'wavelethhl_glcm_clusterprominenc_fc'
#define WAVELETHHL_GLCM_CLUSTERPROMINENC_FC indata[13].data.fnum
// Original name was: 'wavelethhl_glcm_correlation_mm'
#define WAVELETHHL_GLCM_CORRELATION_MM      indata[14].data.fnum
// Original name was: 'wavelethhl_glcm_imc1_mm'
#define WAVELETHHL_GLCM_IMC1_MM             indata[15].data.fnum
// Original name was: 'wavelethhl_glcm_imc1_tc'
#define WAVELETHHL_GLCM_IMC1_TC             indata[16].data.fnum
// Original name was: 'wavelethhl_gldm_smalldependencel_fc'
#define WAVELETHHL_GLDM_SMALLDEPENDENCEL_FC indata[17].data.fnum
// Original name was: 'wavelethhl_gldm_smalldependencel_mm'
#define WAVELETHHL_GLDM_SMALLDEPENDENCEL_MM indata[18].data.fnum
// Original name was: 'wavelethhl_glrlm_longrunhighgray_mm'
#define WAVELETHHL_GLRLM_LONGRUNHIGHGRAY_MM indata[19].data.fnum
// Original name was: 'wavelethhl_glszm_graylevelvarian_mm'
#define WAVELETHHL_GLSZM_GRAYLEVELVARIAN_MM indata[20].data.fnum
// Original name was: 'wavelethhl_glszm_largearealowgra_fc'
#define WAVELETHHL_GLSZM_LARGEAREALOWGRA_FC indata[21].data.fnum
// Original name was: 'wavelethhl_glszm_smallareaemphas_fc'
#define WAVELETHHL_GLSZM_SMALLAREAEMPHAS_FC indata[22].data.fnum
// Original name was: 'wavelethlh_firstorder_median_lm'
#define WAVELETHLH_FIRSTORDER_MEDIAN_LM     indata[23].data.fnum
// Original name was: 'wavelethlh_glszm_largeareahighgr_tc'
#define WAVELETHLH_GLSZM_LARGEAREAHIGHGR_TC indata[24].data.fnum
// Original name was: 'wavelethlh_glszm_zoneentropy_tc'
#define WAVELETHLH_GLSZM_ZONEENTROPY_TC     indata[25].data.fnum
// Original name was: 'wavelethll_firstorder_kurtosis_mm'
#define WAVELETHLL_FIRSTORDER_KURTOSIS_MM   indata[26].data.fnum
// Original name was: 'wavelethll_firstorder_skewness_lm'
#define WAVELETHLL_FIRSTORDER_SKEWNESS_LM   indata[27].data.fnum
// Original name was: 'wavelethll_glszm_graylevelnonuni_fc'
#define WAVELETHLL_GLSZM_GRAYLEVELNONUNI_FC indata[28].data.fnum
// Original name was: 'wavelethll_glszm_largearealowgra_lm'
#define WAVELETHLL_GLSZM_LARGEAREALOWGRA_LM indata[29].data.fnum
// Original name was: 'wavelethll_glszm_smallareaemphas_fc'
#define WAVELETHLL_GLSZM_SMALLAREAEMPHAS_FC indata[30].data.fnum
// Original name was: 'wavelethll_ngtdm_busyness_mm'
#define WAVELETHLL_NGTDM_BUSYNESS_MM        indata[31].data.fnum
// Original name was: 'waveletlhh_firstorder_maximum_mm'
#define WAVELETLHH_FIRSTORDER_MAXIMUM_MM    indata[32].data.fnum
// Original name was: 'waveletlhh_firstorder_median_lm'
#define WAVELETLHH_FIRSTORDER_MEDIAN_LM     indata[33].data.fnum
// Original name was: 'waveletlhh_glszm_smallareaemphas_mm'
#define WAVELETLHH_GLSZM_SMALLAREAEMPHAS_MM indata[34].data.fnum
// Original name was: 'waveletlhl_firstorder_minimum_tc'
#define WAVELETLHL_FIRSTORDER_MINIMUM_TC    indata[35].data.fnum
// Original name was: 'waveletlhl_firstorder_skewness_fc'
#define WAVELETLHL_FIRSTORDER_SKEWNESS_FC   indata[36].data.fnum
// Original name was: 'waveletlhl_firstorder_skewness_tc'
#define WAVELETLHL_FIRSTORDER_SKEWNESS_TC   indata[37].data.fnum
// Original name was: 'waveletlhl_glcm_clustershade_fc'
#define WAVELETLHL_GLCM_CLUSTERSHADE_FC     indata[38].data.fnum
// Original name was: 'waveletlhl_glszm_zoneentropy_lm'
#define WAVELETLHL_GLSZM_ZONEENTROPY_LM     indata[39].data.fnum
// Original name was: 'waveletlhl_glszm_zoneentropy_mm'
#define WAVELETLHL_GLSZM_ZONEENTROPY_MM     indata[40].data.fnum
// Original name was: 'waveletllh_firstorder_minimum_fc'
#define WAVELETLLH_FIRSTORDER_MINIMUM_FC    indata[41].data.fnum
// Original name was: 'waveletllh_glcm_correlation_mm'
#define WAVELETLLH_GLCM_CORRELATION_MM      indata[42].data.fnum
// Original name was: 'waveletllh_glcm_imc1_mm'
#define WAVELETLLH_GLCM_IMC1_MM             indata[43].data.fnum
// Original name was: 'waveletllh_gldm_smalldependencel_mm'
#define WAVELETLLH_GLDM_SMALLDEPENDENCEL_MM indata[44].data.fnum
// Original name was: 'waveletllh_glszm_zoneentropy_fc'
#define WAVELETLLH_GLSZM_ZONEENTROPY_FC     indata[45].data.fnum
// Original name was: 'waveletlll_glcm_clustershade_lm'
#define WAVELETLLL_GLCM_CLUSTERSHADE_LM     indata[46].data.fnum
// Original name was: 'waveletlll_glcm_idn_fc'
#define WAVELETLLL_GLCM_IDN_FC              indata[47].data.fnum
// Original name was: 'waveletlll_gldm_largedependenceh_lm'
#define WAVELETLLL_GLDM_LARGEDEPENDENCEH_LM indata[48].data.fnum
// Original name was: 'waveletlll_glszm_graylevelnonuni_fc'
#define WAVELETLLL_GLSZM_GRAYLEVELNONUNI_FC indata[49].data.fnum
// Original name was: 'waveletlll_glszm_graylevelvarian_mm'
#define WAVELETLLL_GLSZM_GRAYLEVELVARIAN_MM indata[50].data.fnum
// Original name was: 'waveletlll_ngtdm_busyness_tc'
#define WAVELETLLL_NGTDM_BUSYNESS_TC        indata[51].data.fnum
// Original name was: 'Probability( itype1=Case )'
#define PROBABILITY_ITYPE1_CASE_            indata[52].data.fnum
// Original name was: 'Probability( itype1=Control )'
#define PROBABILITY_ITYPE1_CONTROL_         indata[53].data.fnum

// Original name was: 'Probability( itype1=Case ),!Probability( itype1=Case )'
#define PROBABILITY_ITYPE1_CASE_PROBABILITY_ITYPE1_CASE_             outdata[0].data.fnum
// Original name was: 'Probability( itype1=Control ),!Probability( itype1=Control )'
#define PROBABILITY_ITYPE1_CONTROL_PROBABILITY_ITYPE1_CONTROL_       outdata[1].data.fnum
// Original name was: 'Most Likely itype1,!Most Likely itype1'
#define MOST_LIKELY_ITYPE1_MOST_LIKELY_ITYPE1                        outdata[2].data.str  // max string length: 7

JMP_SCORE_API void score(PARM *indata, PARM *outdata) {
    int _temp_0;
    double _temp_1[2];
    char * _temp_2 = "";

    PROBABILITY_ITYPE1_CASE_PROBABILITY_ITYPE1_CASE_ = jmp_squish((-172.775141372896 + 0.0700013881448006 * ORIGINAL_FIRSTORDER_MINIMUM_FC + -34.6341381687953 * ORIGINAL_GLSZM_SMALLAREAEMPHASIS_FC + 7.54578689212087 * ORIGINAL_SHAPE_ELONGATION_LM + 24.9071630447123 * ORIGINAL_SHAPE_SPHERICITY_MM + 218.137837762385 * V455_FC + 39.0624589184386 * V620_FC + -14.8937736069372 * V810_MM + 0.0604526564360081 * WAVELETHHH_FIRSTORDER_MINIMUM_FC + 89.5301013123465 * WAVELETHHH_GLCM_CLUSTERSHADE_MM + 214.358761675947 * WAVELETHHH_GLCM_IMC1_LM + -17.6764276816312 * WAVELETHHH_GLRLM_RUNVARIANCE_MM + 0.0000000080922643666 * WAVELETHHH_GLSZM_LARGEAREAHIGHGR_FC + -8.40701742507882 * WAVELETHHL_FIRSTORDER_MEAN_MM + 3.24586941507034 * WAVELETHHL_GLCM_CLUSTERPROMINENC_FC + 82.0036396632976 * WAVELETHHL_GLCM_CORRELATION_MM + -167.929146981831 * WAVELETHHL_GLCM_IMC1_MM + -81.2591606535897 * WAVELETHHL_GLCM_IMC1_TC + 623.8196279605 * WAVELETHHL_GLDM_SMALLDEPENDENCEL_FC + 633.853678229485 * WAVELETHHL_GLDM_SMALLDEPENDENCEL_MM + 0.0712579203802247 * WAVELETHHL_GLRLM_LONGRUNHIGHGRAY_MM + -8.37242054133618 * WAVELETHHL_GLSZM_GRAYLEVELVARIAN_MM + -0.0000040672567565978 * WAVELETHHL_GLSZM_LARGEAREALOWGRA_FC + 27.028294011724 * WAVELETHHL_GLSZM_SMALLAREAEMPHAS_FC + 2.68091328754982 * WAVELETHLH_FIRSTORDER_MEDIAN_LM + -0.0000000601367110805 * WAVELETHLH_GLSZM_LARGEAREAHIGHGR_TC + 1.87372477941517 * WAVELETHLH_GLSZM_ZONEENTROPY_TC + 0.430843975535361 * WAVELETHLL_FIRSTORDER_KURTOSIS_MM + -3.33711473495706 * WAVELETHLL_FIRSTORDER_SKEWNESS_LM + 0.00320998251121829 * WAVELETHLL_GLSZM_GRAYLEVELNONUNI_FC + 0.0000096730777206538 * WAVELETHLL_GLSZM_LARGEAREALOWGRA_LM + 36.6019335270319 * WAVELETHLL_GLSZM_SMALLAREAEMPHAS_FC + 0.0114474155576093 * WAVELETHLL_NGTDM_BUSYNESS_MM + -0.0142720476386511 * WAVELETLHH_FIRSTORDER_MAXIMUM_MM + 1.8562871937663 * WAVELETLHH_FIRSTORDER_MEDIAN_LM + 5.62642810418155 * WAVELETLHH_GLSZM_SMALLAREAEMPHAS_MM + 0.00855828593287416 * WAVELETLHL_FIRSTORDER_MINIMUM_TC + -4.62528411700657 * WAVELETLHL_FIRSTORDER_SKEWNESS_FC + 2.78111477571768 * WAVELETLHL_FIRSTORDER_SKEWNESS_TC + 0.436133710049468 * WAVELETLHL_GLCM_CLUSTERSHADE_FC + 2.38003617427814 * WAVELETLHL_GLSZM_ZONEENTROPY_LM + 2.19765939161489 * WAVELETLHL_GLSZM_ZONEENTROPY_MM + 0.00548500502818228 * WAVELETLLH_FIRSTORDER_MINIMUM_FC + 23.7225356876432 * WAVELETLLH_GLCM_CORRELATION_MM + 60.070472306518 * WAVELETLLH_GLCM_IMC1_MM + -677.424891403618 * WAVELETLLH_GLDM_SMALLDEPENDENCEL_MM + 5.00353308692232 * WAVELETLLH_GLSZM_ZONEENTROPY_FC + -0.0029503317107897 * WAVELETLLL_GLCM_CLUSTERSHADE_LM + 91.8404517476474 * WAVELETLLL_GLCM_IDN_FC + -0.0000930711561240935 * WAVELETLLL_GLDM_LARGEDEPENDENCEH_LM + -0.00251842296463469 * WAVELETLLL_GLSZM_GRAYLEVELNONUNI_FC + -0.127514568580581 * WAVELETLLL_GLSZM_GRAYLEVELVARIAN_MM + 0.242909639123736 * WAVELETLLL_NGTDM_BUSYNESS_TC));

    PROBABILITY_ITYPE1_CONTROL_PROBABILITY_ITYPE1_CONTROL_ = 1 + -1 * jmp_squish((-172.775141372896 + 0.0700013881448006 * ORIGINAL_FIRSTORDER_MINIMUM_FC + -34.6341381687953 * ORIGINAL_GLSZM_SMALLAREAEMPHASIS_FC + 7.54578689212087 * ORIGINAL_SHAPE_ELONGATION_LM + 24.9071630447123 * ORIGINAL_SHAPE_SPHERICITY_MM + 218.137837762385 * V455_FC + 39.0624589184386 * V620_FC + -14.8937736069372 * V810_MM + 0.0604526564360081 * WAVELETHHH_FIRSTORDER_MINIMUM_FC + 89.5301013123465 * WAVELETHHH_GLCM_CLUSTERSHADE_MM + 214.358761675947 * WAVELETHHH_GLCM_IMC1_LM + -17.6764276816312 * WAVELETHHH_GLRLM_RUNVARIANCE_MM + 0.0000000080922643666 * WAVELETHHH_GLSZM_LARGEAREAHIGHGR_FC + -8.40701742507882 * WAVELETHHL_FIRSTORDER_MEAN_MM + 3.24586941507034 * WAVELETHHL_GLCM_CLUSTERPROMINENC_FC + 82.0036396632976 * WAVELETHHL_GLCM_CORRELATION_MM + -167.929146981831 * WAVELETHHL_GLCM_IMC1_MM + -81.2591606535897 * WAVELETHHL_GLCM_IMC1_TC + 623.8196279605 * WAVELETHHL_GLDM_SMALLDEPENDENCEL_FC + 633.853678229485 * WAVELETHHL_GLDM_SMALLDEPENDENCEL_MM + 0.0712579203802247 * WAVELETHHL_GLRLM_LONGRUNHIGHGRAY_MM + -8.37242054133618 * WAVELETHHL_GLSZM_GRAYLEVELVARIAN_MM + -0.0000040672567565978 * WAVELETHHL_GLSZM_LARGEAREALOWGRA_FC + 27.028294011724 * WAVELETHHL_GLSZM_SMALLAREAEMPHAS_FC + 2.68091328754982 * WAVELETHLH_FIRSTORDER_MEDIAN_LM + -0.0000000601367110805 * WAVELETHLH_GLSZM_LARGEAREAHIGHGR_TC + 1.87372477941517 * WAVELETHLH_GLSZM_ZONEENTROPY_TC + 0.430843975535361 * WAVELETHLL_FIRSTORDER_KURTOSIS_MM + -3.33711473495706 * WAVELETHLL_FIRSTORDER_SKEWNESS_LM + 0.00320998251121829 * WAVELETHLL_GLSZM_GRAYLEVELNONUNI_FC + 0.0000096730777206538 * WAVELETHLL_GLSZM_LARGEAREALOWGRA_LM + 36.6019335270319 * WAVELETHLL_GLSZM_SMALLAREAEMPHAS_FC + 0.0114474155576093 * WAVELETHLL_NGTDM_BUSYNESS_MM + -0.0142720476386511 * WAVELETLHH_FIRSTORDER_MAXIMUM_MM + 1.8562871937663 * WAVELETLHH_FIRSTORDER_MEDIAN_LM + 5.62642810418155 * WAVELETLHH_GLSZM_SMALLAREAEMPHAS_MM + 0.00855828593287416 * WAVELETLHL_FIRSTORDER_MINIMUM_TC + -4.62528411700657 * WAVELETLHL_FIRSTORDER_SKEWNESS_FC + 2.78111477571768 * WAVELETLHL_FIRSTORDER_SKEWNESS_TC + 0.436133710049468 * WAVELETLHL_GLCM_CLUSTERSHADE_FC + 2.38003617427814 * WAVELETLHL_GLSZM_ZONEENTROPY_LM + 2.19765939161489 * WAVELETLHL_GLSZM_ZONEENTROPY_MM + 0.00548500502818228 * WAVELETLLH_FIRSTORDER_MINIMUM_FC + 23.7225356876432 * WAVELETLLH_GLCM_CORRELATION_MM + 60.070472306518 * WAVELETLLH_GLCM_IMC1_MM + -677.424891403618 * WAVELETLLH_GLDM_SMALLDEPENDENCEL_MM + 5.00353308692232 * WAVELETLLH_GLSZM_ZONEENTROPY_FC + -0.0029503317107897 * WAVELETLLL_GLCM_CLUSTERSHADE_LM + 91.8404517476474 * WAVELETLLL_GLCM_IDN_FC + -0.0000930711561240935 * WAVELETLLL_GLDM_LARGEDEPENDENCEH_LM + -0.00251842296463469 * WAVELETLLL_GLSZM_GRAYLEVELNONUNI_FC + -0.127514568580581 * WAVELETLLL_GLSZM_GRAYLEVELVARIAN_MM + 0.242909639123736 * WAVELETLLL_NGTDM_BUSYNESS_TC));

    _temp_1[0] = PROBABILITY_ITYPE1_CASE_;
    _temp_1[1] = PROBABILITY_ITYPE1_CONTROL_;
    _temp_0 = jmp_max_array(2, _temp_1);
    switch (_temp_0) {
        case 0: {
            _temp_2 = "Case";
        }
        break;
        case 1: {
            _temp_2 = "Control";
        }
        break;
        default: {
            _temp_2 = "";
        }
    }
    strcpy_safe(MOST_LIKELY_ITYPE1_MOST_LIKELY_ITYPE1, _temp_2);

}


