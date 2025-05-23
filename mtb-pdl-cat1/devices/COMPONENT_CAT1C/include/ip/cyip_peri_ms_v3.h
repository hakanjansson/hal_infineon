/***************************************************************************//**
* \file cyip_peri_ms_v3.h
*
* \brief
* PERI_MS IP definitions
*
********************************************************************************
* \copyright
* (c) (2016-2024), Cypress Semiconductor Corporation (an Infineon company) or
* an affiliate of Cypress Semiconductor Corporation.
*
* SPDX-License-Identifier: Apache-2.0
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*******************************************************************************/

#ifndef _CYIP_PERI_MS_V3_H_
#define _CYIP_PERI_MS_V3_H_

#include "cyip_headers.h"

/*******************************************************************************
*                                   PERI_MS
*******************************************************************************/

#define PERI_MS_PPU_PR_SECTION_SIZE             0x00000040UL
#define PERI_MS_PPU_FX_SECTION_SIZE             0x00000040UL
#define PERI_MS_SECTION_SIZE                    0x00020000UL

/**
  * \brief Programmable protection structure pair (PERI_MS_PPU_PR)
  */
typedef struct {
  __IOM uint32_t SL_ADDR;                       /*!< 0x00000000 Slave region, base address */
  __IOM uint32_t SL_SIZE;                       /*!< 0x00000004 Slave region, size */
   __IM uint32_t RESERVED[2];
  __IOM uint32_t SL_ATT0;                       /*!< 0x00000010 Slave attributes 0 */
  __IOM uint32_t SL_ATT1;                       /*!< 0x00000014 Slave attributes 1 */
  __IOM uint32_t SL_ATT2;                       /*!< 0x00000018 Slave attributes 2 */
  __IOM uint32_t SL_ATT3;                       /*!< 0x0000001C Slave attributes 3 */
   __IM uint32_t MS_ADDR;                       /*!< 0x00000020 Master region, base address */
   __IM uint32_t MS_SIZE;                       /*!< 0x00000024 Master region, size */
   __IM uint32_t RESERVED1[2];
  __IOM uint32_t MS_ATT0;                       /*!< 0x00000030 Master attributes 0 */
  __IOM uint32_t MS_ATT1;                       /*!< 0x00000034 Master attributes 1 */
  __IOM uint32_t MS_ATT2;                       /*!< 0x00000038 Master attributes 2 */
  __IOM uint32_t MS_ATT3;                       /*!< 0x0000003C Master attributes 3 */
} PERI_MS_PPU_PR_Type;                          /*!< Size = 64 (0x40) */

/**
  * \brief Fixed protection structure pair (PERI_MS_PPU_FX)
  */
typedef struct {
   __IM uint32_t SL_ADDR;                       /*!< 0x00000000 Slave region, base address */
   __IM uint32_t SL_SIZE;                       /*!< 0x00000004 Slave region, size */
   __IM uint32_t RESERVED[2];
  __IOM uint32_t SL_ATT0;                       /*!< 0x00000010 Slave attributes 0 */
  __IOM uint32_t SL_ATT1;                       /*!< 0x00000014 Slave attributes 1 */
  __IOM uint32_t SL_ATT2;                       /*!< 0x00000018 Slave attributes 2 */
  __IOM uint32_t SL_ATT3;                       /*!< 0x0000001C Slave attributes 3 */
   __IM uint32_t MS_ADDR;                       /*!< 0x00000020 Master region, base address */
   __IM uint32_t MS_SIZE;                       /*!< 0x00000024 Master region, size */
   __IM uint32_t RESERVED1[2];
  __IOM uint32_t MS_ATT0;                       /*!< 0x00000030 Master attributes 0 */
  __IOM uint32_t MS_ATT1;                       /*!< 0x00000034 Master attributes 1 */
  __IOM uint32_t MS_ATT2;                       /*!< 0x00000038 Master attributes 2 */
  __IOM uint32_t MS_ATT3;                       /*!< 0x0000003C Master attributes 3 */
} PERI_MS_PPU_FX_Type;                          /*!< Size = 64 (0x40) */

/**
  * \brief Peripheral interconnect, master interface (PERI_MS)
  */
typedef struct {
        PERI_MS_PPU_PR_Type PPU_PR[32];         /*!< 0x00000000 Programmable protection structure pair */
        PERI_MS_PPU_FX_Type PPU_FX[992];        /*!< 0x00000800 Fixed protection structure pair */
} PERI_MS_Type;                                 /*!< Size = 65536 (0x10000) */


/* PERI_MS_PPU_PR.SL_ADDR */
#define PERI_MS_PPU_PR_SL_ADDR_ADDR30_Pos       2UL
#define PERI_MS_PPU_PR_SL_ADDR_ADDR30_Msk       0xFFFFFFFCUL
/* PERI_MS_PPU_PR.SL_SIZE */
#define PERI_MS_PPU_PR_SL_SIZE_REGION_SIZE_Pos  24UL
#define PERI_MS_PPU_PR_SL_SIZE_REGION_SIZE_Msk  0x1F000000UL
#define PERI_MS_PPU_PR_SL_SIZE_VALID_Pos        31UL
#define PERI_MS_PPU_PR_SL_SIZE_VALID_Msk        0x80000000UL
/* PERI_MS_PPU_PR.SL_ATT0 */
#define PERI_MS_PPU_PR_SL_ATT0_PC0_UR_Pos       0UL
#define PERI_MS_PPU_PR_SL_ATT0_PC0_UR_Msk       0x1UL
#define PERI_MS_PPU_PR_SL_ATT0_PC0_UW_Pos       1UL
#define PERI_MS_PPU_PR_SL_ATT0_PC0_UW_Msk       0x2UL
#define PERI_MS_PPU_PR_SL_ATT0_PC0_PR_Pos       2UL
#define PERI_MS_PPU_PR_SL_ATT0_PC0_PR_Msk       0x4UL
#define PERI_MS_PPU_PR_SL_ATT0_PC0_PW_Pos       3UL
#define PERI_MS_PPU_PR_SL_ATT0_PC0_PW_Msk       0x8UL
#define PERI_MS_PPU_PR_SL_ATT0_PC0_NS_Pos       4UL
#define PERI_MS_PPU_PR_SL_ATT0_PC0_NS_Msk       0x10UL
#define PERI_MS_PPU_PR_SL_ATT0_PC1_UR_Pos       8UL
#define PERI_MS_PPU_PR_SL_ATT0_PC1_UR_Msk       0x100UL
#define PERI_MS_PPU_PR_SL_ATT0_PC1_UW_Pos       9UL
#define PERI_MS_PPU_PR_SL_ATT0_PC1_UW_Msk       0x200UL
#define PERI_MS_PPU_PR_SL_ATT0_PC1_PR_Pos       10UL
#define PERI_MS_PPU_PR_SL_ATT0_PC1_PR_Msk       0x400UL
#define PERI_MS_PPU_PR_SL_ATT0_PC1_PW_Pos       11UL
#define PERI_MS_PPU_PR_SL_ATT0_PC1_PW_Msk       0x800UL
#define PERI_MS_PPU_PR_SL_ATT0_PC1_NS_Pos       12UL
#define PERI_MS_PPU_PR_SL_ATT0_PC1_NS_Msk       0x1000UL
#define PERI_MS_PPU_PR_SL_ATT0_PC2_UR_Pos       16UL
#define PERI_MS_PPU_PR_SL_ATT0_PC2_UR_Msk       0x10000UL
#define PERI_MS_PPU_PR_SL_ATT0_PC2_UW_Pos       17UL
#define PERI_MS_PPU_PR_SL_ATT0_PC2_UW_Msk       0x20000UL
#define PERI_MS_PPU_PR_SL_ATT0_PC2_PR_Pos       18UL
#define PERI_MS_PPU_PR_SL_ATT0_PC2_PR_Msk       0x40000UL
#define PERI_MS_PPU_PR_SL_ATT0_PC2_PW_Pos       19UL
#define PERI_MS_PPU_PR_SL_ATT0_PC2_PW_Msk       0x80000UL
#define PERI_MS_PPU_PR_SL_ATT0_PC2_NS_Pos       20UL
#define PERI_MS_PPU_PR_SL_ATT0_PC2_NS_Msk       0x100000UL
#define PERI_MS_PPU_PR_SL_ATT0_PC3_UR_Pos       24UL
#define PERI_MS_PPU_PR_SL_ATT0_PC3_UR_Msk       0x1000000UL
#define PERI_MS_PPU_PR_SL_ATT0_PC3_UW_Pos       25UL
#define PERI_MS_PPU_PR_SL_ATT0_PC3_UW_Msk       0x2000000UL
#define PERI_MS_PPU_PR_SL_ATT0_PC3_PR_Pos       26UL
#define PERI_MS_PPU_PR_SL_ATT0_PC3_PR_Msk       0x4000000UL
#define PERI_MS_PPU_PR_SL_ATT0_PC3_PW_Pos       27UL
#define PERI_MS_PPU_PR_SL_ATT0_PC3_PW_Msk       0x8000000UL
#define PERI_MS_PPU_PR_SL_ATT0_PC3_NS_Pos       28UL
#define PERI_MS_PPU_PR_SL_ATT0_PC3_NS_Msk       0x10000000UL
/* PERI_MS_PPU_PR.SL_ATT1 */
#define PERI_MS_PPU_PR_SL_ATT1_PC4_UR_Pos       0UL
#define PERI_MS_PPU_PR_SL_ATT1_PC4_UR_Msk       0x1UL
#define PERI_MS_PPU_PR_SL_ATT1_PC4_UW_Pos       1UL
#define PERI_MS_PPU_PR_SL_ATT1_PC4_UW_Msk       0x2UL
#define PERI_MS_PPU_PR_SL_ATT1_PC4_PR_Pos       2UL
#define PERI_MS_PPU_PR_SL_ATT1_PC4_PR_Msk       0x4UL
#define PERI_MS_PPU_PR_SL_ATT1_PC4_PW_Pos       3UL
#define PERI_MS_PPU_PR_SL_ATT1_PC4_PW_Msk       0x8UL
#define PERI_MS_PPU_PR_SL_ATT1_PC4_NS_Pos       4UL
#define PERI_MS_PPU_PR_SL_ATT1_PC4_NS_Msk       0x10UL
#define PERI_MS_PPU_PR_SL_ATT1_PC5_UR_Pos       8UL
#define PERI_MS_PPU_PR_SL_ATT1_PC5_UR_Msk       0x100UL
#define PERI_MS_PPU_PR_SL_ATT1_PC5_UW_Pos       9UL
#define PERI_MS_PPU_PR_SL_ATT1_PC5_UW_Msk       0x200UL
#define PERI_MS_PPU_PR_SL_ATT1_PC5_PR_Pos       10UL
#define PERI_MS_PPU_PR_SL_ATT1_PC5_PR_Msk       0x400UL
#define PERI_MS_PPU_PR_SL_ATT1_PC5_PW_Pos       11UL
#define PERI_MS_PPU_PR_SL_ATT1_PC5_PW_Msk       0x800UL
#define PERI_MS_PPU_PR_SL_ATT1_PC5_NS_Pos       12UL
#define PERI_MS_PPU_PR_SL_ATT1_PC5_NS_Msk       0x1000UL
#define PERI_MS_PPU_PR_SL_ATT1_PC6_UR_Pos       16UL
#define PERI_MS_PPU_PR_SL_ATT1_PC6_UR_Msk       0x10000UL
#define PERI_MS_PPU_PR_SL_ATT1_PC6_UW_Pos       17UL
#define PERI_MS_PPU_PR_SL_ATT1_PC6_UW_Msk       0x20000UL
#define PERI_MS_PPU_PR_SL_ATT1_PC6_PR_Pos       18UL
#define PERI_MS_PPU_PR_SL_ATT1_PC6_PR_Msk       0x40000UL
#define PERI_MS_PPU_PR_SL_ATT1_PC6_PW_Pos       19UL
#define PERI_MS_PPU_PR_SL_ATT1_PC6_PW_Msk       0x80000UL
#define PERI_MS_PPU_PR_SL_ATT1_PC6_NS_Pos       20UL
#define PERI_MS_PPU_PR_SL_ATT1_PC6_NS_Msk       0x100000UL
#define PERI_MS_PPU_PR_SL_ATT1_PC7_UR_Pos       24UL
#define PERI_MS_PPU_PR_SL_ATT1_PC7_UR_Msk       0x1000000UL
#define PERI_MS_PPU_PR_SL_ATT1_PC7_UW_Pos       25UL
#define PERI_MS_PPU_PR_SL_ATT1_PC7_UW_Msk       0x2000000UL
#define PERI_MS_PPU_PR_SL_ATT1_PC7_PR_Pos       26UL
#define PERI_MS_PPU_PR_SL_ATT1_PC7_PR_Msk       0x4000000UL
#define PERI_MS_PPU_PR_SL_ATT1_PC7_PW_Pos       27UL
#define PERI_MS_PPU_PR_SL_ATT1_PC7_PW_Msk       0x8000000UL
#define PERI_MS_PPU_PR_SL_ATT1_PC7_NS_Pos       28UL
#define PERI_MS_PPU_PR_SL_ATT1_PC7_NS_Msk       0x10000000UL
/* PERI_MS_PPU_PR.SL_ATT2 */
#define PERI_MS_PPU_PR_SL_ATT2_PC8_UR_Pos       0UL
#define PERI_MS_PPU_PR_SL_ATT2_PC8_UR_Msk       0x1UL
#define PERI_MS_PPU_PR_SL_ATT2_PC8_UW_Pos       1UL
#define PERI_MS_PPU_PR_SL_ATT2_PC8_UW_Msk       0x2UL
#define PERI_MS_PPU_PR_SL_ATT2_PC8_PR_Pos       2UL
#define PERI_MS_PPU_PR_SL_ATT2_PC8_PR_Msk       0x4UL
#define PERI_MS_PPU_PR_SL_ATT2_PC8_PW_Pos       3UL
#define PERI_MS_PPU_PR_SL_ATT2_PC8_PW_Msk       0x8UL
#define PERI_MS_PPU_PR_SL_ATT2_PC8_NS_Pos       4UL
#define PERI_MS_PPU_PR_SL_ATT2_PC8_NS_Msk       0x10UL
#define PERI_MS_PPU_PR_SL_ATT2_PC9_UR_Pos       8UL
#define PERI_MS_PPU_PR_SL_ATT2_PC9_UR_Msk       0x100UL
#define PERI_MS_PPU_PR_SL_ATT2_PC9_UW_Pos       9UL
#define PERI_MS_PPU_PR_SL_ATT2_PC9_UW_Msk       0x200UL
#define PERI_MS_PPU_PR_SL_ATT2_PC9_PR_Pos       10UL
#define PERI_MS_PPU_PR_SL_ATT2_PC9_PR_Msk       0x400UL
#define PERI_MS_PPU_PR_SL_ATT2_PC9_PW_Pos       11UL
#define PERI_MS_PPU_PR_SL_ATT2_PC9_PW_Msk       0x800UL
#define PERI_MS_PPU_PR_SL_ATT2_PC9_NS_Pos       12UL
#define PERI_MS_PPU_PR_SL_ATT2_PC9_NS_Msk       0x1000UL
#define PERI_MS_PPU_PR_SL_ATT2_PC10_UR_Pos      16UL
#define PERI_MS_PPU_PR_SL_ATT2_PC10_UR_Msk      0x10000UL
#define PERI_MS_PPU_PR_SL_ATT2_PC10_UW_Pos      17UL
#define PERI_MS_PPU_PR_SL_ATT2_PC10_UW_Msk      0x20000UL
#define PERI_MS_PPU_PR_SL_ATT2_PC10_PR_Pos      18UL
#define PERI_MS_PPU_PR_SL_ATT2_PC10_PR_Msk      0x40000UL
#define PERI_MS_PPU_PR_SL_ATT2_PC10_PW_Pos      19UL
#define PERI_MS_PPU_PR_SL_ATT2_PC10_PW_Msk      0x80000UL
#define PERI_MS_PPU_PR_SL_ATT2_PC10_NS_Pos      20UL
#define PERI_MS_PPU_PR_SL_ATT2_PC10_NS_Msk      0x100000UL
#define PERI_MS_PPU_PR_SL_ATT2_PC11_UR_Pos      24UL
#define PERI_MS_PPU_PR_SL_ATT2_PC11_UR_Msk      0x1000000UL
#define PERI_MS_PPU_PR_SL_ATT2_PC11_UW_Pos      25UL
#define PERI_MS_PPU_PR_SL_ATT2_PC11_UW_Msk      0x2000000UL
#define PERI_MS_PPU_PR_SL_ATT2_PC11_PR_Pos      26UL
#define PERI_MS_PPU_PR_SL_ATT2_PC11_PR_Msk      0x4000000UL
#define PERI_MS_PPU_PR_SL_ATT2_PC11_PW_Pos      27UL
#define PERI_MS_PPU_PR_SL_ATT2_PC11_PW_Msk      0x8000000UL
#define PERI_MS_PPU_PR_SL_ATT2_PC11_NS_Pos      28UL
#define PERI_MS_PPU_PR_SL_ATT2_PC11_NS_Msk      0x10000000UL
/* PERI_MS_PPU_PR.SL_ATT3 */
#define PERI_MS_PPU_PR_SL_ATT3_PC12_UR_Pos      0UL
#define PERI_MS_PPU_PR_SL_ATT3_PC12_UR_Msk      0x1UL
#define PERI_MS_PPU_PR_SL_ATT3_PC12_UW_Pos      1UL
#define PERI_MS_PPU_PR_SL_ATT3_PC12_UW_Msk      0x2UL
#define PERI_MS_PPU_PR_SL_ATT3_PC12_PR_Pos      2UL
#define PERI_MS_PPU_PR_SL_ATT3_PC12_PR_Msk      0x4UL
#define PERI_MS_PPU_PR_SL_ATT3_PC12_PW_Pos      3UL
#define PERI_MS_PPU_PR_SL_ATT3_PC12_PW_Msk      0x8UL
#define PERI_MS_PPU_PR_SL_ATT3_PC12_NS_Pos      4UL
#define PERI_MS_PPU_PR_SL_ATT3_PC12_NS_Msk      0x10UL
#define PERI_MS_PPU_PR_SL_ATT3_PC13_UR_Pos      8UL
#define PERI_MS_PPU_PR_SL_ATT3_PC13_UR_Msk      0x100UL
#define PERI_MS_PPU_PR_SL_ATT3_PC13_UW_Pos      9UL
#define PERI_MS_PPU_PR_SL_ATT3_PC13_UW_Msk      0x200UL
#define PERI_MS_PPU_PR_SL_ATT3_PC13_PR_Pos      10UL
#define PERI_MS_PPU_PR_SL_ATT3_PC13_PR_Msk      0x400UL
#define PERI_MS_PPU_PR_SL_ATT3_PC13_PW_Pos      11UL
#define PERI_MS_PPU_PR_SL_ATT3_PC13_PW_Msk      0x800UL
#define PERI_MS_PPU_PR_SL_ATT3_PC13_NS_Pos      12UL
#define PERI_MS_PPU_PR_SL_ATT3_PC13_NS_Msk      0x1000UL
#define PERI_MS_PPU_PR_SL_ATT3_PC14_UR_Pos      16UL
#define PERI_MS_PPU_PR_SL_ATT3_PC14_UR_Msk      0x10000UL
#define PERI_MS_PPU_PR_SL_ATT3_PC14_UW_Pos      17UL
#define PERI_MS_PPU_PR_SL_ATT3_PC14_UW_Msk      0x20000UL
#define PERI_MS_PPU_PR_SL_ATT3_PC14_PR_Pos      18UL
#define PERI_MS_PPU_PR_SL_ATT3_PC14_PR_Msk      0x40000UL
#define PERI_MS_PPU_PR_SL_ATT3_PC14_PW_Pos      19UL
#define PERI_MS_PPU_PR_SL_ATT3_PC14_PW_Msk      0x80000UL
#define PERI_MS_PPU_PR_SL_ATT3_PC14_NS_Pos      20UL
#define PERI_MS_PPU_PR_SL_ATT3_PC14_NS_Msk      0x100000UL
#define PERI_MS_PPU_PR_SL_ATT3_PC15_UR_Pos      24UL
#define PERI_MS_PPU_PR_SL_ATT3_PC15_UR_Msk      0x1000000UL
#define PERI_MS_PPU_PR_SL_ATT3_PC15_UW_Pos      25UL
#define PERI_MS_PPU_PR_SL_ATT3_PC15_UW_Msk      0x2000000UL
#define PERI_MS_PPU_PR_SL_ATT3_PC15_PR_Pos      26UL
#define PERI_MS_PPU_PR_SL_ATT3_PC15_PR_Msk      0x4000000UL
#define PERI_MS_PPU_PR_SL_ATT3_PC15_PW_Pos      27UL
#define PERI_MS_PPU_PR_SL_ATT3_PC15_PW_Msk      0x8000000UL
#define PERI_MS_PPU_PR_SL_ATT3_PC15_NS_Pos      28UL
#define PERI_MS_PPU_PR_SL_ATT3_PC15_NS_Msk      0x10000000UL
/* PERI_MS_PPU_PR.MS_ADDR */
#define PERI_MS_PPU_PR_MS_ADDR_ADDR26_Pos       6UL
#define PERI_MS_PPU_PR_MS_ADDR_ADDR26_Msk       0xFFFFFFC0UL
/* PERI_MS_PPU_PR.MS_SIZE */
#define PERI_MS_PPU_PR_MS_SIZE_REGION_SIZE_Pos  24UL
#define PERI_MS_PPU_PR_MS_SIZE_REGION_SIZE_Msk  0x1F000000UL
#define PERI_MS_PPU_PR_MS_SIZE_VALID_Pos        31UL
#define PERI_MS_PPU_PR_MS_SIZE_VALID_Msk        0x80000000UL
/* PERI_MS_PPU_PR.MS_ATT0 */
#define PERI_MS_PPU_PR_MS_ATT0_PC0_UR_Pos       0UL
#define PERI_MS_PPU_PR_MS_ATT0_PC0_UR_Msk       0x1UL
#define PERI_MS_PPU_PR_MS_ATT0_PC0_UW_Pos       1UL
#define PERI_MS_PPU_PR_MS_ATT0_PC0_UW_Msk       0x2UL
#define PERI_MS_PPU_PR_MS_ATT0_PC0_PR_Pos       2UL
#define PERI_MS_PPU_PR_MS_ATT0_PC0_PR_Msk       0x4UL
#define PERI_MS_PPU_PR_MS_ATT0_PC0_PW_Pos       3UL
#define PERI_MS_PPU_PR_MS_ATT0_PC0_PW_Msk       0x8UL
#define PERI_MS_PPU_PR_MS_ATT0_PC0_NS_Pos       4UL
#define PERI_MS_PPU_PR_MS_ATT0_PC0_NS_Msk       0x10UL
#define PERI_MS_PPU_PR_MS_ATT0_PC1_UR_Pos       8UL
#define PERI_MS_PPU_PR_MS_ATT0_PC1_UR_Msk       0x100UL
#define PERI_MS_PPU_PR_MS_ATT0_PC1_UW_Pos       9UL
#define PERI_MS_PPU_PR_MS_ATT0_PC1_UW_Msk       0x200UL
#define PERI_MS_PPU_PR_MS_ATT0_PC1_PR_Pos       10UL
#define PERI_MS_PPU_PR_MS_ATT0_PC1_PR_Msk       0x400UL
#define PERI_MS_PPU_PR_MS_ATT0_PC1_PW_Pos       11UL
#define PERI_MS_PPU_PR_MS_ATT0_PC1_PW_Msk       0x800UL
#define PERI_MS_PPU_PR_MS_ATT0_PC1_NS_Pos       12UL
#define PERI_MS_PPU_PR_MS_ATT0_PC1_NS_Msk       0x1000UL
#define PERI_MS_PPU_PR_MS_ATT0_PC2_UR_Pos       16UL
#define PERI_MS_PPU_PR_MS_ATT0_PC2_UR_Msk       0x10000UL
#define PERI_MS_PPU_PR_MS_ATT0_PC2_UW_Pos       17UL
#define PERI_MS_PPU_PR_MS_ATT0_PC2_UW_Msk       0x20000UL
#define PERI_MS_PPU_PR_MS_ATT0_PC2_PR_Pos       18UL
#define PERI_MS_PPU_PR_MS_ATT0_PC2_PR_Msk       0x40000UL
#define PERI_MS_PPU_PR_MS_ATT0_PC2_PW_Pos       19UL
#define PERI_MS_PPU_PR_MS_ATT0_PC2_PW_Msk       0x80000UL
#define PERI_MS_PPU_PR_MS_ATT0_PC2_NS_Pos       20UL
#define PERI_MS_PPU_PR_MS_ATT0_PC2_NS_Msk       0x100000UL
#define PERI_MS_PPU_PR_MS_ATT0_PC3_UR_Pos       24UL
#define PERI_MS_PPU_PR_MS_ATT0_PC3_UR_Msk       0x1000000UL
#define PERI_MS_PPU_PR_MS_ATT0_PC3_UW_Pos       25UL
#define PERI_MS_PPU_PR_MS_ATT0_PC3_UW_Msk       0x2000000UL
#define PERI_MS_PPU_PR_MS_ATT0_PC3_PR_Pos       26UL
#define PERI_MS_PPU_PR_MS_ATT0_PC3_PR_Msk       0x4000000UL
#define PERI_MS_PPU_PR_MS_ATT0_PC3_PW_Pos       27UL
#define PERI_MS_PPU_PR_MS_ATT0_PC3_PW_Msk       0x8000000UL
#define PERI_MS_PPU_PR_MS_ATT0_PC3_NS_Pos       28UL
#define PERI_MS_PPU_PR_MS_ATT0_PC3_NS_Msk       0x10000000UL
/* PERI_MS_PPU_PR.MS_ATT1 */
#define PERI_MS_PPU_PR_MS_ATT1_PC4_UR_Pos       0UL
#define PERI_MS_PPU_PR_MS_ATT1_PC4_UR_Msk       0x1UL
#define PERI_MS_PPU_PR_MS_ATT1_PC4_UW_Pos       1UL
#define PERI_MS_PPU_PR_MS_ATT1_PC4_UW_Msk       0x2UL
#define PERI_MS_PPU_PR_MS_ATT1_PC4_PR_Pos       2UL
#define PERI_MS_PPU_PR_MS_ATT1_PC4_PR_Msk       0x4UL
#define PERI_MS_PPU_PR_MS_ATT1_PC4_PW_Pos       3UL
#define PERI_MS_PPU_PR_MS_ATT1_PC4_PW_Msk       0x8UL
#define PERI_MS_PPU_PR_MS_ATT1_PC4_NS_Pos       4UL
#define PERI_MS_PPU_PR_MS_ATT1_PC4_NS_Msk       0x10UL
#define PERI_MS_PPU_PR_MS_ATT1_PC5_UR_Pos       8UL
#define PERI_MS_PPU_PR_MS_ATT1_PC5_UR_Msk       0x100UL
#define PERI_MS_PPU_PR_MS_ATT1_PC5_UW_Pos       9UL
#define PERI_MS_PPU_PR_MS_ATT1_PC5_UW_Msk       0x200UL
#define PERI_MS_PPU_PR_MS_ATT1_PC5_PR_Pos       10UL
#define PERI_MS_PPU_PR_MS_ATT1_PC5_PR_Msk       0x400UL
#define PERI_MS_PPU_PR_MS_ATT1_PC5_PW_Pos       11UL
#define PERI_MS_PPU_PR_MS_ATT1_PC5_PW_Msk       0x800UL
#define PERI_MS_PPU_PR_MS_ATT1_PC5_NS_Pos       12UL
#define PERI_MS_PPU_PR_MS_ATT1_PC5_NS_Msk       0x1000UL
#define PERI_MS_PPU_PR_MS_ATT1_PC6_UR_Pos       16UL
#define PERI_MS_PPU_PR_MS_ATT1_PC6_UR_Msk       0x10000UL
#define PERI_MS_PPU_PR_MS_ATT1_PC6_UW_Pos       17UL
#define PERI_MS_PPU_PR_MS_ATT1_PC6_UW_Msk       0x20000UL
#define PERI_MS_PPU_PR_MS_ATT1_PC6_PR_Pos       18UL
#define PERI_MS_PPU_PR_MS_ATT1_PC6_PR_Msk       0x40000UL
#define PERI_MS_PPU_PR_MS_ATT1_PC6_PW_Pos       19UL
#define PERI_MS_PPU_PR_MS_ATT1_PC6_PW_Msk       0x80000UL
#define PERI_MS_PPU_PR_MS_ATT1_PC6_NS_Pos       20UL
#define PERI_MS_PPU_PR_MS_ATT1_PC6_NS_Msk       0x100000UL
#define PERI_MS_PPU_PR_MS_ATT1_PC7_UR_Pos       24UL
#define PERI_MS_PPU_PR_MS_ATT1_PC7_UR_Msk       0x1000000UL
#define PERI_MS_PPU_PR_MS_ATT1_PC7_UW_Pos       25UL
#define PERI_MS_PPU_PR_MS_ATT1_PC7_UW_Msk       0x2000000UL
#define PERI_MS_PPU_PR_MS_ATT1_PC7_PR_Pos       26UL
#define PERI_MS_PPU_PR_MS_ATT1_PC7_PR_Msk       0x4000000UL
#define PERI_MS_PPU_PR_MS_ATT1_PC7_PW_Pos       27UL
#define PERI_MS_PPU_PR_MS_ATT1_PC7_PW_Msk       0x8000000UL
#define PERI_MS_PPU_PR_MS_ATT1_PC7_NS_Pos       28UL
#define PERI_MS_PPU_PR_MS_ATT1_PC7_NS_Msk       0x10000000UL
/* PERI_MS_PPU_PR.MS_ATT2 */
#define PERI_MS_PPU_PR_MS_ATT2_PC8_UR_Pos       0UL
#define PERI_MS_PPU_PR_MS_ATT2_PC8_UR_Msk       0x1UL
#define PERI_MS_PPU_PR_MS_ATT2_PC8_UW_Pos       1UL
#define PERI_MS_PPU_PR_MS_ATT2_PC8_UW_Msk       0x2UL
#define PERI_MS_PPU_PR_MS_ATT2_PC8_PR_Pos       2UL
#define PERI_MS_PPU_PR_MS_ATT2_PC8_PR_Msk       0x4UL
#define PERI_MS_PPU_PR_MS_ATT2_PC8_PW_Pos       3UL
#define PERI_MS_PPU_PR_MS_ATT2_PC8_PW_Msk       0x8UL
#define PERI_MS_PPU_PR_MS_ATT2_PC8_NS_Pos       4UL
#define PERI_MS_PPU_PR_MS_ATT2_PC8_NS_Msk       0x10UL
#define PERI_MS_PPU_PR_MS_ATT2_PC9_UR_Pos       8UL
#define PERI_MS_PPU_PR_MS_ATT2_PC9_UR_Msk       0x100UL
#define PERI_MS_PPU_PR_MS_ATT2_PC9_UW_Pos       9UL
#define PERI_MS_PPU_PR_MS_ATT2_PC9_UW_Msk       0x200UL
#define PERI_MS_PPU_PR_MS_ATT2_PC9_PR_Pos       10UL
#define PERI_MS_PPU_PR_MS_ATT2_PC9_PR_Msk       0x400UL
#define PERI_MS_PPU_PR_MS_ATT2_PC9_PW_Pos       11UL
#define PERI_MS_PPU_PR_MS_ATT2_PC9_PW_Msk       0x800UL
#define PERI_MS_PPU_PR_MS_ATT2_PC9_NS_Pos       12UL
#define PERI_MS_PPU_PR_MS_ATT2_PC9_NS_Msk       0x1000UL
#define PERI_MS_PPU_PR_MS_ATT2_PC10_UR_Pos      16UL
#define PERI_MS_PPU_PR_MS_ATT2_PC10_UR_Msk      0x10000UL
#define PERI_MS_PPU_PR_MS_ATT2_PC10_UW_Pos      17UL
#define PERI_MS_PPU_PR_MS_ATT2_PC10_UW_Msk      0x20000UL
#define PERI_MS_PPU_PR_MS_ATT2_PC10_PR_Pos      18UL
#define PERI_MS_PPU_PR_MS_ATT2_PC10_PR_Msk      0x40000UL
#define PERI_MS_PPU_PR_MS_ATT2_PC10_PW_Pos      19UL
#define PERI_MS_PPU_PR_MS_ATT2_PC10_PW_Msk      0x80000UL
#define PERI_MS_PPU_PR_MS_ATT2_PC10_NS_Pos      20UL
#define PERI_MS_PPU_PR_MS_ATT2_PC10_NS_Msk      0x100000UL
#define PERI_MS_PPU_PR_MS_ATT2_PC11_UR_Pos      24UL
#define PERI_MS_PPU_PR_MS_ATT2_PC11_UR_Msk      0x1000000UL
#define PERI_MS_PPU_PR_MS_ATT2_PC11_UW_Pos      25UL
#define PERI_MS_PPU_PR_MS_ATT2_PC11_UW_Msk      0x2000000UL
#define PERI_MS_PPU_PR_MS_ATT2_PC11_PR_Pos      26UL
#define PERI_MS_PPU_PR_MS_ATT2_PC11_PR_Msk      0x4000000UL
#define PERI_MS_PPU_PR_MS_ATT2_PC11_PW_Pos      27UL
#define PERI_MS_PPU_PR_MS_ATT2_PC11_PW_Msk      0x8000000UL
#define PERI_MS_PPU_PR_MS_ATT2_PC11_NS_Pos      28UL
#define PERI_MS_PPU_PR_MS_ATT2_PC11_NS_Msk      0x10000000UL
/* PERI_MS_PPU_PR.MS_ATT3 */
#define PERI_MS_PPU_PR_MS_ATT3_PC12_UR_Pos      0UL
#define PERI_MS_PPU_PR_MS_ATT3_PC12_UR_Msk      0x1UL
#define PERI_MS_PPU_PR_MS_ATT3_PC12_UW_Pos      1UL
#define PERI_MS_PPU_PR_MS_ATT3_PC12_UW_Msk      0x2UL
#define PERI_MS_PPU_PR_MS_ATT3_PC12_PR_Pos      2UL
#define PERI_MS_PPU_PR_MS_ATT3_PC12_PR_Msk      0x4UL
#define PERI_MS_PPU_PR_MS_ATT3_PC12_PW_Pos      3UL
#define PERI_MS_PPU_PR_MS_ATT3_PC12_PW_Msk      0x8UL
#define PERI_MS_PPU_PR_MS_ATT3_PC12_NS_Pos      4UL
#define PERI_MS_PPU_PR_MS_ATT3_PC12_NS_Msk      0x10UL
#define PERI_MS_PPU_PR_MS_ATT3_PC13_UR_Pos      8UL
#define PERI_MS_PPU_PR_MS_ATT3_PC13_UR_Msk      0x100UL
#define PERI_MS_PPU_PR_MS_ATT3_PC13_UW_Pos      9UL
#define PERI_MS_PPU_PR_MS_ATT3_PC13_UW_Msk      0x200UL
#define PERI_MS_PPU_PR_MS_ATT3_PC13_PR_Pos      10UL
#define PERI_MS_PPU_PR_MS_ATT3_PC13_PR_Msk      0x400UL
#define PERI_MS_PPU_PR_MS_ATT3_PC13_PW_Pos      11UL
#define PERI_MS_PPU_PR_MS_ATT3_PC13_PW_Msk      0x800UL
#define PERI_MS_PPU_PR_MS_ATT3_PC13_NS_Pos      12UL
#define PERI_MS_PPU_PR_MS_ATT3_PC13_NS_Msk      0x1000UL
#define PERI_MS_PPU_PR_MS_ATT3_PC14_UR_Pos      16UL
#define PERI_MS_PPU_PR_MS_ATT3_PC14_UR_Msk      0x10000UL
#define PERI_MS_PPU_PR_MS_ATT3_PC14_UW_Pos      17UL
#define PERI_MS_PPU_PR_MS_ATT3_PC14_UW_Msk      0x20000UL
#define PERI_MS_PPU_PR_MS_ATT3_PC14_PR_Pos      18UL
#define PERI_MS_PPU_PR_MS_ATT3_PC14_PR_Msk      0x40000UL
#define PERI_MS_PPU_PR_MS_ATT3_PC14_PW_Pos      19UL
#define PERI_MS_PPU_PR_MS_ATT3_PC14_PW_Msk      0x80000UL
#define PERI_MS_PPU_PR_MS_ATT3_PC14_NS_Pos      20UL
#define PERI_MS_PPU_PR_MS_ATT3_PC14_NS_Msk      0x100000UL
#define PERI_MS_PPU_PR_MS_ATT3_PC15_UR_Pos      24UL
#define PERI_MS_PPU_PR_MS_ATT3_PC15_UR_Msk      0x1000000UL
#define PERI_MS_PPU_PR_MS_ATT3_PC15_UW_Pos      25UL
#define PERI_MS_PPU_PR_MS_ATT3_PC15_UW_Msk      0x2000000UL
#define PERI_MS_PPU_PR_MS_ATT3_PC15_PR_Pos      26UL
#define PERI_MS_PPU_PR_MS_ATT3_PC15_PR_Msk      0x4000000UL
#define PERI_MS_PPU_PR_MS_ATT3_PC15_PW_Pos      27UL
#define PERI_MS_PPU_PR_MS_ATT3_PC15_PW_Msk      0x8000000UL
#define PERI_MS_PPU_PR_MS_ATT3_PC15_NS_Pos      28UL
#define PERI_MS_PPU_PR_MS_ATT3_PC15_NS_Msk      0x10000000UL


/* PERI_MS_PPU_FX.SL_ADDR */
#define PERI_MS_PPU_FX_SL_ADDR_ADDR30_Pos       2UL
#define PERI_MS_PPU_FX_SL_ADDR_ADDR30_Msk       0xFFFFFFFCUL
/* PERI_MS_PPU_FX.SL_SIZE */
#define PERI_MS_PPU_FX_SL_SIZE_REGION_SIZE_Pos  24UL
#define PERI_MS_PPU_FX_SL_SIZE_REGION_SIZE_Msk  0x1F000000UL
#define PERI_MS_PPU_FX_SL_SIZE_VALID_Pos        31UL
#define PERI_MS_PPU_FX_SL_SIZE_VALID_Msk        0x80000000UL
/* PERI_MS_PPU_FX.SL_ATT0 */
#define PERI_MS_PPU_FX_SL_ATT0_PC0_UR_Pos       0UL
#define PERI_MS_PPU_FX_SL_ATT0_PC0_UR_Msk       0x1UL
#define PERI_MS_PPU_FX_SL_ATT0_PC0_UW_Pos       1UL
#define PERI_MS_PPU_FX_SL_ATT0_PC0_UW_Msk       0x2UL
#define PERI_MS_PPU_FX_SL_ATT0_PC0_PR_Pos       2UL
#define PERI_MS_PPU_FX_SL_ATT0_PC0_PR_Msk       0x4UL
#define PERI_MS_PPU_FX_SL_ATT0_PC0_PW_Pos       3UL
#define PERI_MS_PPU_FX_SL_ATT0_PC0_PW_Msk       0x8UL
#define PERI_MS_PPU_FX_SL_ATT0_PC0_NS_Pos       4UL
#define PERI_MS_PPU_FX_SL_ATT0_PC0_NS_Msk       0x10UL
#define PERI_MS_PPU_FX_SL_ATT0_PC1_UR_Pos       8UL
#define PERI_MS_PPU_FX_SL_ATT0_PC1_UR_Msk       0x100UL
#define PERI_MS_PPU_FX_SL_ATT0_PC1_UW_Pos       9UL
#define PERI_MS_PPU_FX_SL_ATT0_PC1_UW_Msk       0x200UL
#define PERI_MS_PPU_FX_SL_ATT0_PC1_PR_Pos       10UL
#define PERI_MS_PPU_FX_SL_ATT0_PC1_PR_Msk       0x400UL
#define PERI_MS_PPU_FX_SL_ATT0_PC1_PW_Pos       11UL
#define PERI_MS_PPU_FX_SL_ATT0_PC1_PW_Msk       0x800UL
#define PERI_MS_PPU_FX_SL_ATT0_PC1_NS_Pos       12UL
#define PERI_MS_PPU_FX_SL_ATT0_PC1_NS_Msk       0x1000UL
#define PERI_MS_PPU_FX_SL_ATT0_PC2_UR_Pos       16UL
#define PERI_MS_PPU_FX_SL_ATT0_PC2_UR_Msk       0x10000UL
#define PERI_MS_PPU_FX_SL_ATT0_PC2_UW_Pos       17UL
#define PERI_MS_PPU_FX_SL_ATT0_PC2_UW_Msk       0x20000UL
#define PERI_MS_PPU_FX_SL_ATT0_PC2_PR_Pos       18UL
#define PERI_MS_PPU_FX_SL_ATT0_PC2_PR_Msk       0x40000UL
#define PERI_MS_PPU_FX_SL_ATT0_PC2_PW_Pos       19UL
#define PERI_MS_PPU_FX_SL_ATT0_PC2_PW_Msk       0x80000UL
#define PERI_MS_PPU_FX_SL_ATT0_PC2_NS_Pos       20UL
#define PERI_MS_PPU_FX_SL_ATT0_PC2_NS_Msk       0x100000UL
#define PERI_MS_PPU_FX_SL_ATT0_PC3_UR_Pos       24UL
#define PERI_MS_PPU_FX_SL_ATT0_PC3_UR_Msk       0x1000000UL
#define PERI_MS_PPU_FX_SL_ATT0_PC3_UW_Pos       25UL
#define PERI_MS_PPU_FX_SL_ATT0_PC3_UW_Msk       0x2000000UL
#define PERI_MS_PPU_FX_SL_ATT0_PC3_PR_Pos       26UL
#define PERI_MS_PPU_FX_SL_ATT0_PC3_PR_Msk       0x4000000UL
#define PERI_MS_PPU_FX_SL_ATT0_PC3_PW_Pos       27UL
#define PERI_MS_PPU_FX_SL_ATT0_PC3_PW_Msk       0x8000000UL
#define PERI_MS_PPU_FX_SL_ATT0_PC3_NS_Pos       28UL
#define PERI_MS_PPU_FX_SL_ATT0_PC3_NS_Msk       0x10000000UL
/* PERI_MS_PPU_FX.SL_ATT1 */
#define PERI_MS_PPU_FX_SL_ATT1_PC4_UR_Pos       0UL
#define PERI_MS_PPU_FX_SL_ATT1_PC4_UR_Msk       0x1UL
#define PERI_MS_PPU_FX_SL_ATT1_PC4_UW_Pos       1UL
#define PERI_MS_PPU_FX_SL_ATT1_PC4_UW_Msk       0x2UL
#define PERI_MS_PPU_FX_SL_ATT1_PC4_PR_Pos       2UL
#define PERI_MS_PPU_FX_SL_ATT1_PC4_PR_Msk       0x4UL
#define PERI_MS_PPU_FX_SL_ATT1_PC4_PW_Pos       3UL
#define PERI_MS_PPU_FX_SL_ATT1_PC4_PW_Msk       0x8UL
#define PERI_MS_PPU_FX_SL_ATT1_PC4_NS_Pos       4UL
#define PERI_MS_PPU_FX_SL_ATT1_PC4_NS_Msk       0x10UL
#define PERI_MS_PPU_FX_SL_ATT1_PC5_UR_Pos       8UL
#define PERI_MS_PPU_FX_SL_ATT1_PC5_UR_Msk       0x100UL
#define PERI_MS_PPU_FX_SL_ATT1_PC5_UW_Pos       9UL
#define PERI_MS_PPU_FX_SL_ATT1_PC5_UW_Msk       0x200UL
#define PERI_MS_PPU_FX_SL_ATT1_PC5_PR_Pos       10UL
#define PERI_MS_PPU_FX_SL_ATT1_PC5_PR_Msk       0x400UL
#define PERI_MS_PPU_FX_SL_ATT1_PC5_PW_Pos       11UL
#define PERI_MS_PPU_FX_SL_ATT1_PC5_PW_Msk       0x800UL
#define PERI_MS_PPU_FX_SL_ATT1_PC5_NS_Pos       12UL
#define PERI_MS_PPU_FX_SL_ATT1_PC5_NS_Msk       0x1000UL
#define PERI_MS_PPU_FX_SL_ATT1_PC6_UR_Pos       16UL
#define PERI_MS_PPU_FX_SL_ATT1_PC6_UR_Msk       0x10000UL
#define PERI_MS_PPU_FX_SL_ATT1_PC6_UW_Pos       17UL
#define PERI_MS_PPU_FX_SL_ATT1_PC6_UW_Msk       0x20000UL
#define PERI_MS_PPU_FX_SL_ATT1_PC6_PR_Pos       18UL
#define PERI_MS_PPU_FX_SL_ATT1_PC6_PR_Msk       0x40000UL
#define PERI_MS_PPU_FX_SL_ATT1_PC6_PW_Pos       19UL
#define PERI_MS_PPU_FX_SL_ATT1_PC6_PW_Msk       0x80000UL
#define PERI_MS_PPU_FX_SL_ATT1_PC6_NS_Pos       20UL
#define PERI_MS_PPU_FX_SL_ATT1_PC6_NS_Msk       0x100000UL
#define PERI_MS_PPU_FX_SL_ATT1_PC7_UR_Pos       24UL
#define PERI_MS_PPU_FX_SL_ATT1_PC7_UR_Msk       0x1000000UL
#define PERI_MS_PPU_FX_SL_ATT1_PC7_UW_Pos       25UL
#define PERI_MS_PPU_FX_SL_ATT1_PC7_UW_Msk       0x2000000UL
#define PERI_MS_PPU_FX_SL_ATT1_PC7_PR_Pos       26UL
#define PERI_MS_PPU_FX_SL_ATT1_PC7_PR_Msk       0x4000000UL
#define PERI_MS_PPU_FX_SL_ATT1_PC7_PW_Pos       27UL
#define PERI_MS_PPU_FX_SL_ATT1_PC7_PW_Msk       0x8000000UL
#define PERI_MS_PPU_FX_SL_ATT1_PC7_NS_Pos       28UL
#define PERI_MS_PPU_FX_SL_ATT1_PC7_NS_Msk       0x10000000UL
/* PERI_MS_PPU_FX.SL_ATT2 */
#define PERI_MS_PPU_FX_SL_ATT2_PC8_UR_Pos       0UL
#define PERI_MS_PPU_FX_SL_ATT2_PC8_UR_Msk       0x1UL
#define PERI_MS_PPU_FX_SL_ATT2_PC8_UW_Pos       1UL
#define PERI_MS_PPU_FX_SL_ATT2_PC8_UW_Msk       0x2UL
#define PERI_MS_PPU_FX_SL_ATT2_PC8_PR_Pos       2UL
#define PERI_MS_PPU_FX_SL_ATT2_PC8_PR_Msk       0x4UL
#define PERI_MS_PPU_FX_SL_ATT2_PC8_PW_Pos       3UL
#define PERI_MS_PPU_FX_SL_ATT2_PC8_PW_Msk       0x8UL
#define PERI_MS_PPU_FX_SL_ATT2_PC8_NS_Pos       4UL
#define PERI_MS_PPU_FX_SL_ATT2_PC8_NS_Msk       0x10UL
#define PERI_MS_PPU_FX_SL_ATT2_PC9_UR_Pos       8UL
#define PERI_MS_PPU_FX_SL_ATT2_PC9_UR_Msk       0x100UL
#define PERI_MS_PPU_FX_SL_ATT2_PC9_UW_Pos       9UL
#define PERI_MS_PPU_FX_SL_ATT2_PC9_UW_Msk       0x200UL
#define PERI_MS_PPU_FX_SL_ATT2_PC9_PR_Pos       10UL
#define PERI_MS_PPU_FX_SL_ATT2_PC9_PR_Msk       0x400UL
#define PERI_MS_PPU_FX_SL_ATT2_PC9_PW_Pos       11UL
#define PERI_MS_PPU_FX_SL_ATT2_PC9_PW_Msk       0x800UL
#define PERI_MS_PPU_FX_SL_ATT2_PC9_NS_Pos       12UL
#define PERI_MS_PPU_FX_SL_ATT2_PC9_NS_Msk       0x1000UL
#define PERI_MS_PPU_FX_SL_ATT2_PC10_UR_Pos      16UL
#define PERI_MS_PPU_FX_SL_ATT2_PC10_UR_Msk      0x10000UL
#define PERI_MS_PPU_FX_SL_ATT2_PC10_UW_Pos      17UL
#define PERI_MS_PPU_FX_SL_ATT2_PC10_UW_Msk      0x20000UL
#define PERI_MS_PPU_FX_SL_ATT2_PC10_PR_Pos      18UL
#define PERI_MS_PPU_FX_SL_ATT2_PC10_PR_Msk      0x40000UL
#define PERI_MS_PPU_FX_SL_ATT2_PC10_PW_Pos      19UL
#define PERI_MS_PPU_FX_SL_ATT2_PC10_PW_Msk      0x80000UL
#define PERI_MS_PPU_FX_SL_ATT2_PC10_NS_Pos      20UL
#define PERI_MS_PPU_FX_SL_ATT2_PC10_NS_Msk      0x100000UL
#define PERI_MS_PPU_FX_SL_ATT2_PC11_UR_Pos      24UL
#define PERI_MS_PPU_FX_SL_ATT2_PC11_UR_Msk      0x1000000UL
#define PERI_MS_PPU_FX_SL_ATT2_PC11_UW_Pos      25UL
#define PERI_MS_PPU_FX_SL_ATT2_PC11_UW_Msk      0x2000000UL
#define PERI_MS_PPU_FX_SL_ATT2_PC11_PR_Pos      26UL
#define PERI_MS_PPU_FX_SL_ATT2_PC11_PR_Msk      0x4000000UL
#define PERI_MS_PPU_FX_SL_ATT2_PC11_PW_Pos      27UL
#define PERI_MS_PPU_FX_SL_ATT2_PC11_PW_Msk      0x8000000UL
#define PERI_MS_PPU_FX_SL_ATT2_PC11_NS_Pos      28UL
#define PERI_MS_PPU_FX_SL_ATT2_PC11_NS_Msk      0x10000000UL
/* PERI_MS_PPU_FX.SL_ATT3 */
#define PERI_MS_PPU_FX_SL_ATT3_PC12_UR_Pos      0UL
#define PERI_MS_PPU_FX_SL_ATT3_PC12_UR_Msk      0x1UL
#define PERI_MS_PPU_FX_SL_ATT3_PC12_UW_Pos      1UL
#define PERI_MS_PPU_FX_SL_ATT3_PC12_UW_Msk      0x2UL
#define PERI_MS_PPU_FX_SL_ATT3_PC12_PR_Pos      2UL
#define PERI_MS_PPU_FX_SL_ATT3_PC12_PR_Msk      0x4UL
#define PERI_MS_PPU_FX_SL_ATT3_PC12_PW_Pos      3UL
#define PERI_MS_PPU_FX_SL_ATT3_PC12_PW_Msk      0x8UL
#define PERI_MS_PPU_FX_SL_ATT3_PC12_NS_Pos      4UL
#define PERI_MS_PPU_FX_SL_ATT3_PC12_NS_Msk      0x10UL
#define PERI_MS_PPU_FX_SL_ATT3_PC13_UR_Pos      8UL
#define PERI_MS_PPU_FX_SL_ATT3_PC13_UR_Msk      0x100UL
#define PERI_MS_PPU_FX_SL_ATT3_PC13_UW_Pos      9UL
#define PERI_MS_PPU_FX_SL_ATT3_PC13_UW_Msk      0x200UL
#define PERI_MS_PPU_FX_SL_ATT3_PC13_PR_Pos      10UL
#define PERI_MS_PPU_FX_SL_ATT3_PC13_PR_Msk      0x400UL
#define PERI_MS_PPU_FX_SL_ATT3_PC13_PW_Pos      11UL
#define PERI_MS_PPU_FX_SL_ATT3_PC13_PW_Msk      0x800UL
#define PERI_MS_PPU_FX_SL_ATT3_PC13_NS_Pos      12UL
#define PERI_MS_PPU_FX_SL_ATT3_PC13_NS_Msk      0x1000UL
#define PERI_MS_PPU_FX_SL_ATT3_PC14_UR_Pos      16UL
#define PERI_MS_PPU_FX_SL_ATT3_PC14_UR_Msk      0x10000UL
#define PERI_MS_PPU_FX_SL_ATT3_PC14_UW_Pos      17UL
#define PERI_MS_PPU_FX_SL_ATT3_PC14_UW_Msk      0x20000UL
#define PERI_MS_PPU_FX_SL_ATT3_PC14_PR_Pos      18UL
#define PERI_MS_PPU_FX_SL_ATT3_PC14_PR_Msk      0x40000UL
#define PERI_MS_PPU_FX_SL_ATT3_PC14_PW_Pos      19UL
#define PERI_MS_PPU_FX_SL_ATT3_PC14_PW_Msk      0x80000UL
#define PERI_MS_PPU_FX_SL_ATT3_PC14_NS_Pos      20UL
#define PERI_MS_PPU_FX_SL_ATT3_PC14_NS_Msk      0x100000UL
#define PERI_MS_PPU_FX_SL_ATT3_PC15_UR_Pos      24UL
#define PERI_MS_PPU_FX_SL_ATT3_PC15_UR_Msk      0x1000000UL
#define PERI_MS_PPU_FX_SL_ATT3_PC15_UW_Pos      25UL
#define PERI_MS_PPU_FX_SL_ATT3_PC15_UW_Msk      0x2000000UL
#define PERI_MS_PPU_FX_SL_ATT3_PC15_PR_Pos      26UL
#define PERI_MS_PPU_FX_SL_ATT3_PC15_PR_Msk      0x4000000UL
#define PERI_MS_PPU_FX_SL_ATT3_PC15_PW_Pos      27UL
#define PERI_MS_PPU_FX_SL_ATT3_PC15_PW_Msk      0x8000000UL
#define PERI_MS_PPU_FX_SL_ATT3_PC15_NS_Pos      28UL
#define PERI_MS_PPU_FX_SL_ATT3_PC15_NS_Msk      0x10000000UL
/* PERI_MS_PPU_FX.MS_ADDR */
#define PERI_MS_PPU_FX_MS_ADDR_ADDR26_Pos       6UL
#define PERI_MS_PPU_FX_MS_ADDR_ADDR26_Msk       0xFFFFFFC0UL
/* PERI_MS_PPU_FX.MS_SIZE */
#define PERI_MS_PPU_FX_MS_SIZE_REGION_SIZE_Pos  24UL
#define PERI_MS_PPU_FX_MS_SIZE_REGION_SIZE_Msk  0x1F000000UL
#define PERI_MS_PPU_FX_MS_SIZE_VALID_Pos        31UL
#define PERI_MS_PPU_FX_MS_SIZE_VALID_Msk        0x80000000UL
/* PERI_MS_PPU_FX.MS_ATT0 */
#define PERI_MS_PPU_FX_MS_ATT0_PC0_UR_Pos       0UL
#define PERI_MS_PPU_FX_MS_ATT0_PC0_UR_Msk       0x1UL
#define PERI_MS_PPU_FX_MS_ATT0_PC0_UW_Pos       1UL
#define PERI_MS_PPU_FX_MS_ATT0_PC0_UW_Msk       0x2UL
#define PERI_MS_PPU_FX_MS_ATT0_PC0_PR_Pos       2UL
#define PERI_MS_PPU_FX_MS_ATT0_PC0_PR_Msk       0x4UL
#define PERI_MS_PPU_FX_MS_ATT0_PC0_PW_Pos       3UL
#define PERI_MS_PPU_FX_MS_ATT0_PC0_PW_Msk       0x8UL
#define PERI_MS_PPU_FX_MS_ATT0_PC0_NS_Pos       4UL
#define PERI_MS_PPU_FX_MS_ATT0_PC0_NS_Msk       0x10UL
#define PERI_MS_PPU_FX_MS_ATT0_PC1_UR_Pos       8UL
#define PERI_MS_PPU_FX_MS_ATT0_PC1_UR_Msk       0x100UL
#define PERI_MS_PPU_FX_MS_ATT0_PC1_UW_Pos       9UL
#define PERI_MS_PPU_FX_MS_ATT0_PC1_UW_Msk       0x200UL
#define PERI_MS_PPU_FX_MS_ATT0_PC1_PR_Pos       10UL
#define PERI_MS_PPU_FX_MS_ATT0_PC1_PR_Msk       0x400UL
#define PERI_MS_PPU_FX_MS_ATT0_PC1_PW_Pos       11UL
#define PERI_MS_PPU_FX_MS_ATT0_PC1_PW_Msk       0x800UL
#define PERI_MS_PPU_FX_MS_ATT0_PC1_NS_Pos       12UL
#define PERI_MS_PPU_FX_MS_ATT0_PC1_NS_Msk       0x1000UL
#define PERI_MS_PPU_FX_MS_ATT0_PC2_UR_Pos       16UL
#define PERI_MS_PPU_FX_MS_ATT0_PC2_UR_Msk       0x10000UL
#define PERI_MS_PPU_FX_MS_ATT0_PC2_UW_Pos       17UL
#define PERI_MS_PPU_FX_MS_ATT0_PC2_UW_Msk       0x20000UL
#define PERI_MS_PPU_FX_MS_ATT0_PC2_PR_Pos       18UL
#define PERI_MS_PPU_FX_MS_ATT0_PC2_PR_Msk       0x40000UL
#define PERI_MS_PPU_FX_MS_ATT0_PC2_PW_Pos       19UL
#define PERI_MS_PPU_FX_MS_ATT0_PC2_PW_Msk       0x80000UL
#define PERI_MS_PPU_FX_MS_ATT0_PC2_NS_Pos       20UL
#define PERI_MS_PPU_FX_MS_ATT0_PC2_NS_Msk       0x100000UL
#define PERI_MS_PPU_FX_MS_ATT0_PC3_UR_Pos       24UL
#define PERI_MS_PPU_FX_MS_ATT0_PC3_UR_Msk       0x1000000UL
#define PERI_MS_PPU_FX_MS_ATT0_PC3_UW_Pos       25UL
#define PERI_MS_PPU_FX_MS_ATT0_PC3_UW_Msk       0x2000000UL
#define PERI_MS_PPU_FX_MS_ATT0_PC3_PR_Pos       26UL
#define PERI_MS_PPU_FX_MS_ATT0_PC3_PR_Msk       0x4000000UL
#define PERI_MS_PPU_FX_MS_ATT0_PC3_PW_Pos       27UL
#define PERI_MS_PPU_FX_MS_ATT0_PC3_PW_Msk       0x8000000UL
#define PERI_MS_PPU_FX_MS_ATT0_PC3_NS_Pos       28UL
#define PERI_MS_PPU_FX_MS_ATT0_PC3_NS_Msk       0x10000000UL
/* PERI_MS_PPU_FX.MS_ATT1 */
#define PERI_MS_PPU_FX_MS_ATT1_PC4_UR_Pos       0UL
#define PERI_MS_PPU_FX_MS_ATT1_PC4_UR_Msk       0x1UL
#define PERI_MS_PPU_FX_MS_ATT1_PC4_UW_Pos       1UL
#define PERI_MS_PPU_FX_MS_ATT1_PC4_UW_Msk       0x2UL
#define PERI_MS_PPU_FX_MS_ATT1_PC4_PR_Pos       2UL
#define PERI_MS_PPU_FX_MS_ATT1_PC4_PR_Msk       0x4UL
#define PERI_MS_PPU_FX_MS_ATT1_PC4_PW_Pos       3UL
#define PERI_MS_PPU_FX_MS_ATT1_PC4_PW_Msk       0x8UL
#define PERI_MS_PPU_FX_MS_ATT1_PC4_NS_Pos       4UL
#define PERI_MS_PPU_FX_MS_ATT1_PC4_NS_Msk       0x10UL
#define PERI_MS_PPU_FX_MS_ATT1_PC5_UR_Pos       8UL
#define PERI_MS_PPU_FX_MS_ATT1_PC5_UR_Msk       0x100UL
#define PERI_MS_PPU_FX_MS_ATT1_PC5_UW_Pos       9UL
#define PERI_MS_PPU_FX_MS_ATT1_PC5_UW_Msk       0x200UL
#define PERI_MS_PPU_FX_MS_ATT1_PC5_PR_Pos       10UL
#define PERI_MS_PPU_FX_MS_ATT1_PC5_PR_Msk       0x400UL
#define PERI_MS_PPU_FX_MS_ATT1_PC5_PW_Pos       11UL
#define PERI_MS_PPU_FX_MS_ATT1_PC5_PW_Msk       0x800UL
#define PERI_MS_PPU_FX_MS_ATT1_PC5_NS_Pos       12UL
#define PERI_MS_PPU_FX_MS_ATT1_PC5_NS_Msk       0x1000UL
#define PERI_MS_PPU_FX_MS_ATT1_PC6_UR_Pos       16UL
#define PERI_MS_PPU_FX_MS_ATT1_PC6_UR_Msk       0x10000UL
#define PERI_MS_PPU_FX_MS_ATT1_PC6_UW_Pos       17UL
#define PERI_MS_PPU_FX_MS_ATT1_PC6_UW_Msk       0x20000UL
#define PERI_MS_PPU_FX_MS_ATT1_PC6_PR_Pos       18UL
#define PERI_MS_PPU_FX_MS_ATT1_PC6_PR_Msk       0x40000UL
#define PERI_MS_PPU_FX_MS_ATT1_PC6_PW_Pos       19UL
#define PERI_MS_PPU_FX_MS_ATT1_PC6_PW_Msk       0x80000UL
#define PERI_MS_PPU_FX_MS_ATT1_PC6_NS_Pos       20UL
#define PERI_MS_PPU_FX_MS_ATT1_PC6_NS_Msk       0x100000UL
#define PERI_MS_PPU_FX_MS_ATT1_PC7_UR_Pos       24UL
#define PERI_MS_PPU_FX_MS_ATT1_PC7_UR_Msk       0x1000000UL
#define PERI_MS_PPU_FX_MS_ATT1_PC7_UW_Pos       25UL
#define PERI_MS_PPU_FX_MS_ATT1_PC7_UW_Msk       0x2000000UL
#define PERI_MS_PPU_FX_MS_ATT1_PC7_PR_Pos       26UL
#define PERI_MS_PPU_FX_MS_ATT1_PC7_PR_Msk       0x4000000UL
#define PERI_MS_PPU_FX_MS_ATT1_PC7_PW_Pos       27UL
#define PERI_MS_PPU_FX_MS_ATT1_PC7_PW_Msk       0x8000000UL
#define PERI_MS_PPU_FX_MS_ATT1_PC7_NS_Pos       28UL
#define PERI_MS_PPU_FX_MS_ATT1_PC7_NS_Msk       0x10000000UL
/* PERI_MS_PPU_FX.MS_ATT2 */
#define PERI_MS_PPU_FX_MS_ATT2_PC8_UR_Pos       0UL
#define PERI_MS_PPU_FX_MS_ATT2_PC8_UR_Msk       0x1UL
#define PERI_MS_PPU_FX_MS_ATT2_PC8_UW_Pos       1UL
#define PERI_MS_PPU_FX_MS_ATT2_PC8_UW_Msk       0x2UL
#define PERI_MS_PPU_FX_MS_ATT2_PC8_PR_Pos       2UL
#define PERI_MS_PPU_FX_MS_ATT2_PC8_PR_Msk       0x4UL
#define PERI_MS_PPU_FX_MS_ATT2_PC8_PW_Pos       3UL
#define PERI_MS_PPU_FX_MS_ATT2_PC8_PW_Msk       0x8UL
#define PERI_MS_PPU_FX_MS_ATT2_PC8_NS_Pos       4UL
#define PERI_MS_PPU_FX_MS_ATT2_PC8_NS_Msk       0x10UL
#define PERI_MS_PPU_FX_MS_ATT2_PC9_UR_Pos       8UL
#define PERI_MS_PPU_FX_MS_ATT2_PC9_UR_Msk       0x100UL
#define PERI_MS_PPU_FX_MS_ATT2_PC9_UW_Pos       9UL
#define PERI_MS_PPU_FX_MS_ATT2_PC9_UW_Msk       0x200UL
#define PERI_MS_PPU_FX_MS_ATT2_PC9_PR_Pos       10UL
#define PERI_MS_PPU_FX_MS_ATT2_PC9_PR_Msk       0x400UL
#define PERI_MS_PPU_FX_MS_ATT2_PC9_PW_Pos       11UL
#define PERI_MS_PPU_FX_MS_ATT2_PC9_PW_Msk       0x800UL
#define PERI_MS_PPU_FX_MS_ATT2_PC9_NS_Pos       12UL
#define PERI_MS_PPU_FX_MS_ATT2_PC9_NS_Msk       0x1000UL
#define PERI_MS_PPU_FX_MS_ATT2_PC10_UR_Pos      16UL
#define PERI_MS_PPU_FX_MS_ATT2_PC10_UR_Msk      0x10000UL
#define PERI_MS_PPU_FX_MS_ATT2_PC10_UW_Pos      17UL
#define PERI_MS_PPU_FX_MS_ATT2_PC10_UW_Msk      0x20000UL
#define PERI_MS_PPU_FX_MS_ATT2_PC10_PR_Pos      18UL
#define PERI_MS_PPU_FX_MS_ATT2_PC10_PR_Msk      0x40000UL
#define PERI_MS_PPU_FX_MS_ATT2_PC10_PW_Pos      19UL
#define PERI_MS_PPU_FX_MS_ATT2_PC10_PW_Msk      0x80000UL
#define PERI_MS_PPU_FX_MS_ATT2_PC10_NS_Pos      20UL
#define PERI_MS_PPU_FX_MS_ATT2_PC10_NS_Msk      0x100000UL
#define PERI_MS_PPU_FX_MS_ATT2_PC11_UR_Pos      24UL
#define PERI_MS_PPU_FX_MS_ATT2_PC11_UR_Msk      0x1000000UL
#define PERI_MS_PPU_FX_MS_ATT2_PC11_UW_Pos      25UL
#define PERI_MS_PPU_FX_MS_ATT2_PC11_UW_Msk      0x2000000UL
#define PERI_MS_PPU_FX_MS_ATT2_PC11_PR_Pos      26UL
#define PERI_MS_PPU_FX_MS_ATT2_PC11_PR_Msk      0x4000000UL
#define PERI_MS_PPU_FX_MS_ATT2_PC11_PW_Pos      27UL
#define PERI_MS_PPU_FX_MS_ATT2_PC11_PW_Msk      0x8000000UL
#define PERI_MS_PPU_FX_MS_ATT2_PC11_NS_Pos      28UL
#define PERI_MS_PPU_FX_MS_ATT2_PC11_NS_Msk      0x10000000UL
/* PERI_MS_PPU_FX.MS_ATT3 */
#define PERI_MS_PPU_FX_MS_ATT3_PC12_UR_Pos      0UL
#define PERI_MS_PPU_FX_MS_ATT3_PC12_UR_Msk      0x1UL
#define PERI_MS_PPU_FX_MS_ATT3_PC12_UW_Pos      1UL
#define PERI_MS_PPU_FX_MS_ATT3_PC12_UW_Msk      0x2UL
#define PERI_MS_PPU_FX_MS_ATT3_PC12_PR_Pos      2UL
#define PERI_MS_PPU_FX_MS_ATT3_PC12_PR_Msk      0x4UL
#define PERI_MS_PPU_FX_MS_ATT3_PC12_PW_Pos      3UL
#define PERI_MS_PPU_FX_MS_ATT3_PC12_PW_Msk      0x8UL
#define PERI_MS_PPU_FX_MS_ATT3_PC12_NS_Pos      4UL
#define PERI_MS_PPU_FX_MS_ATT3_PC12_NS_Msk      0x10UL
#define PERI_MS_PPU_FX_MS_ATT3_PC13_UR_Pos      8UL
#define PERI_MS_PPU_FX_MS_ATT3_PC13_UR_Msk      0x100UL
#define PERI_MS_PPU_FX_MS_ATT3_PC13_UW_Pos      9UL
#define PERI_MS_PPU_FX_MS_ATT3_PC13_UW_Msk      0x200UL
#define PERI_MS_PPU_FX_MS_ATT3_PC13_PR_Pos      10UL
#define PERI_MS_PPU_FX_MS_ATT3_PC13_PR_Msk      0x400UL
#define PERI_MS_PPU_FX_MS_ATT3_PC13_PW_Pos      11UL
#define PERI_MS_PPU_FX_MS_ATT3_PC13_PW_Msk      0x800UL
#define PERI_MS_PPU_FX_MS_ATT3_PC13_NS_Pos      12UL
#define PERI_MS_PPU_FX_MS_ATT3_PC13_NS_Msk      0x1000UL
#define PERI_MS_PPU_FX_MS_ATT3_PC14_UR_Pos      16UL
#define PERI_MS_PPU_FX_MS_ATT3_PC14_UR_Msk      0x10000UL
#define PERI_MS_PPU_FX_MS_ATT3_PC14_UW_Pos      17UL
#define PERI_MS_PPU_FX_MS_ATT3_PC14_UW_Msk      0x20000UL
#define PERI_MS_PPU_FX_MS_ATT3_PC14_PR_Pos      18UL
#define PERI_MS_PPU_FX_MS_ATT3_PC14_PR_Msk      0x40000UL
#define PERI_MS_PPU_FX_MS_ATT3_PC14_PW_Pos      19UL
#define PERI_MS_PPU_FX_MS_ATT3_PC14_PW_Msk      0x80000UL
#define PERI_MS_PPU_FX_MS_ATT3_PC14_NS_Pos      20UL
#define PERI_MS_PPU_FX_MS_ATT3_PC14_NS_Msk      0x100000UL
#define PERI_MS_PPU_FX_MS_ATT3_PC15_UR_Pos      24UL
#define PERI_MS_PPU_FX_MS_ATT3_PC15_UR_Msk      0x1000000UL
#define PERI_MS_PPU_FX_MS_ATT3_PC15_UW_Pos      25UL
#define PERI_MS_PPU_FX_MS_ATT3_PC15_UW_Msk      0x2000000UL
#define PERI_MS_PPU_FX_MS_ATT3_PC15_PR_Pos      26UL
#define PERI_MS_PPU_FX_MS_ATT3_PC15_PR_Msk      0x4000000UL
#define PERI_MS_PPU_FX_MS_ATT3_PC15_PW_Pos      27UL
#define PERI_MS_PPU_FX_MS_ATT3_PC15_PW_Msk      0x8000000UL
#define PERI_MS_PPU_FX_MS_ATT3_PC15_NS_Pos      28UL
#define PERI_MS_PPU_FX_MS_ATT3_PC15_NS_Msk      0x10000000UL


#endif /* _CYIP_PERI_MS_V3_H_ */


/* [] END OF FILE */
