
/*
 * Copyright (c) 2024, Qualcomm Innovation Center, Inc. All rights reserved.
 * SPDX-License-Identifier: ISC
 */

 

 
 
 
 
 
 
 
 


#ifndef _MLO_STA_ID_DETAILS_H_
#define _MLO_STA_ID_DETAILS_H_
#if !defined(__ASSEMBLER__)
#endif

#define NUM_OF_WORDS_MLO_STA_ID_DETAILS 1


struct mlo_sta_id_details {
#ifndef WIFI_BIT_ORDER_BIG_ENDIAN
             uint16_t nstr_mlo_sta_id                                         : 10,  
                      block_self_ml_sync                                      :  1,  
                      block_partner_ml_sync                                   :  1,  
                      nstr_mlo_sta_id_valid                                   :  1,  
                      reserved_0a                                             :  3;  
#else
             uint16_t reserved_0a                                             :  3,  
                      nstr_mlo_sta_id_valid                                   :  1,  
                      block_partner_ml_sync                                   :  1,  
                      block_self_ml_sync                                      :  1,  
                      nstr_mlo_sta_id                                         : 10;  
#endif
};


 

#define MLO_STA_ID_DETAILS_NSTR_MLO_STA_ID_OFFSET                                   0x00000000
#define MLO_STA_ID_DETAILS_NSTR_MLO_STA_ID_LSB                                      0
#define MLO_STA_ID_DETAILS_NSTR_MLO_STA_ID_MSB                                      9
#define MLO_STA_ID_DETAILS_NSTR_MLO_STA_ID_MASK                                     0x000003ff


 

#define MLO_STA_ID_DETAILS_BLOCK_SELF_ML_SYNC_OFFSET                                0x00000000
#define MLO_STA_ID_DETAILS_BLOCK_SELF_ML_SYNC_LSB                                   10
#define MLO_STA_ID_DETAILS_BLOCK_SELF_ML_SYNC_MSB                                   10
#define MLO_STA_ID_DETAILS_BLOCK_SELF_ML_SYNC_MASK                                  0x00000400


 

#define MLO_STA_ID_DETAILS_BLOCK_PARTNER_ML_SYNC_OFFSET                             0x00000000
#define MLO_STA_ID_DETAILS_BLOCK_PARTNER_ML_SYNC_LSB                                11
#define MLO_STA_ID_DETAILS_BLOCK_PARTNER_ML_SYNC_MSB                                11
#define MLO_STA_ID_DETAILS_BLOCK_PARTNER_ML_SYNC_MASK                               0x00000800


 

#define MLO_STA_ID_DETAILS_NSTR_MLO_STA_ID_VALID_OFFSET                             0x00000000
#define MLO_STA_ID_DETAILS_NSTR_MLO_STA_ID_VALID_LSB                                12
#define MLO_STA_ID_DETAILS_NSTR_MLO_STA_ID_VALID_MSB                                12
#define MLO_STA_ID_DETAILS_NSTR_MLO_STA_ID_VALID_MASK                               0x00001000


 

#define MLO_STA_ID_DETAILS_RESERVED_0A_OFFSET                                       0x00000000
#define MLO_STA_ID_DETAILS_RESERVED_0A_LSB                                          13
#define MLO_STA_ID_DETAILS_RESERVED_0A_MSB                                          15
#define MLO_STA_ID_DETAILS_RESERVED_0A_MASK                                         0x0000e000



#endif    
