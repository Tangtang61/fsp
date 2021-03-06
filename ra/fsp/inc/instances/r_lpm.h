/***********************************************************************************************************************
 * Copyright [2019] Renesas Electronics Corporation and/or its affiliates.  All Rights Reserved.
 *
 * This software is supplied by Renesas Electronics America Inc. and may only be used with products of Renesas
 * Electronics Corp. and its affiliates ("Renesas").  No other uses are authorized.  This software is protected under
 * all applicable laws, including copyright laws. Renesas reserves the right to change or discontinue this software.
 * THE SOFTWARE IS DELIVERED TO YOU "AS IS," AND RENESAS MAKES NO REPRESENTATIONS OR WARRANTIES, AND TO THE FULLEST
 * EXTENT PERMISSIBLE UNDER APPLICABLE LAW,DISCLAIMS ALL WARRANTIES, WHETHER EXPLICITLY OR IMPLICITLY, INCLUDING
 * WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE, AND NONINFRINGEMENT, WITH RESPECT TO THE SOFTWARE.
 * TO THE MAXIMUM EXTENT PERMITTED BY LAW, IN NO EVENT WILL RENESAS BE LIABLE TO YOU IN CONNECTION WITH THE SOFTWARE
 * (OR ANY PERSON OR ENTITY CLAIMING RIGHTS DERIVED FROM YOU) FOR ANY LOSS, DAMAGES, OR CLAIMS WHATSOEVER, INCLUDING,
 * WITHOUT LIMITATION, ANY DIRECT, CONSEQUENTIAL, SPECIAL, INDIRECT, PUNITIVE, OR INCIDENTAL DAMAGES; ANY LOST PROFITS,
 * OTHER ECONOMIC DAMAGE, PROPERTY DAMAGE, OR PERSONAL INJURY; AND EVEN IF RENESAS HAS BEEN ADVISED OF THE POSSIBILITY
 * OF SUCH LOSS, DAMAGES, CLAIMS OR COSTS.
 **********************************************************************************************************************/

/*******************************************************************************************************************//**
 * @addtogroup LPM
 * @{
 **********************************************************************************************************************/

#ifndef R_LPM_H
#define R_LPM_H

/***********************************************************************************************************************
 * Includes
 **********************************************************************************************************************/
#include "bsp_api.h"
#include "r_lpm_cfg.h"
#include "r_lpm_api.h"

/***********************************************************************************************************************
 * Macro definitions
 **********************************************************************************************************************/
#define LPM_CODE_VERSION_MAJOR    (1U)
#define LPM_CODE_VERSION_MINOR    (0U)

/***********************************************************************************************************************
 * Typedef definitions
 **********************************************************************************************************************/

/** LPM private control block. DO NOT MODIFY. Initialization occurs when R_LPM_Open() is called. */
typedef struct st_lpm_instance_ctrl
{
    uint32_t lpm_open;                 // Indicates whether the open() API has been successfully called.
} lpm_instance_ctrl_t;

/**********************************************************************************************************************
 * Exported global variables
 **********************************************************************************************************************/

/** @cond INC_HEADER_DEFS_SEC */
/** Filled in Interface API structure for this Instance. */
extern const lpm_api_t g_lpm_on_lpm;

/** @endcond */

fsp_err_t R_LPM_Open(lpm_ctrl_t * const p_api_ctrl, lpm_cfg_t const * const p_cfg);
fsp_err_t R_LPM_Close(lpm_ctrl_t * const p_api_ctrl);
fsp_err_t R_LPM_LowPowerReconfigure(lpm_ctrl_t * const p_api_ctrl, lpm_cfg_t const * const p_cfg);
fsp_err_t R_LPM_LowPowerModeEnter(lpm_ctrl_t * const p_api_ctrl);
fsp_err_t R_LPM_VersionGet(fsp_version_t * const p_version);
fsp_err_t R_LPM_IoKeepClear(lpm_ctrl_t * const p_api_ctrl);

#endif

/*******************************************************************************************************************//**
 * @} (end defgroup LPM)
 **********************************************************************************************************************/
