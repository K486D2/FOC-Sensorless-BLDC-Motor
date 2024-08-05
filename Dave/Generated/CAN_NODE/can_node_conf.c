/*********************************************************************************************************************
* DAVE APP Name : CAN_NODE       APP Version: 4.1.24
*
* NOTE:
* This file is generated by DAVE. Any manual modification done to this file will be lost when the code is regenerated.
*********************************************************************************************************************/


/**
 * @cond
 ***********************************************************************************************************************
 *
 * Copyright (c) 2015-2020, Infineon Technologies AG
 * All rights reserved.
 *                                             
 * Redistribution and use in source and binary forms, with or without modification,are permitted provided that the
 * following conditions are met:
 *
 *   Redistributions of source code must retain the above copyright notice, this list of conditions and the  following
 *   disclaimer.
 *
 *   Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the
 *   following disclaimer in the documentation and/or other materials provided with the distribution.
 *
 *   Neither the name of the copyright holders nor the names of its contributors may be used to endorse or promote
 *   products derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,
 * INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE  FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY,OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT  OF THE
 * USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * To improve the quality of the software, users are encouraged to share modifications, enhancements or bug fixes
 * with Infineon Technologies AG (dave@infineon.com).
 ***********************************************************************************************************************
 *
 * Change History
 * --------------
 *
 * 2015-05-15:
 *     - Initial version<br>
 *
 * @endcond
 *
 */

/***********************************************************************************************************************
 * HEADER FILES
 **********************************************************************************************************************/

#include "can_node.h"


/**********************************************************************************************************************
* DATA STRUCTURES
**********************************************************************************************************************/

/**
  * @ingroup can_node_datastructures
  * @{
  */


/**********************************************************************************************************************
* DATA STRUCTURES
**********************************************************************************************************************/

/**< GPIO configuration for output pin */
static const CAN_NODE_GPIO_t CAN_NODE_0_gpio_out = 
{
  .port = (XMC_GPIO_PORT_t *)PORT1_BASE,
  .pin  = (uint8_t)1
};

static const XMC_GPIO_CONFIG_t  CAN_NODE_0_gpio_out_config =
{
  .mode              = XMC_GPIO_MODE_OUTPUT_PUSH_PULL_ALT9,
  .output_level      = XMC_GPIO_OUTPUT_LEVEL_HIGH 
    
};
     

/**< GPIO configuration for input pin */
static const CAN_NODE_GPIO_t CAN_NODE_0_gpio_in = {
  .port = (XMC_GPIO_PORT_t *)PORT1_BASE,
  .pin  = (uint8_t)0
};

static const XMC_GPIO_CONFIG_t  CAN_NODE_0_gpio_in_config =
{
  .mode = XMC_GPIO_MODE_INPUT_TRISTATE    
};

    
/* CAN_NODE Bit Time Configuration */
static const XMC_CAN_NODE_NOMINAL_BIT_TIME_CONFIG_t  CAN_NODE_0_BitTimeConfig = {
  .can_frequency = (uint32_t)4.8E7, 
  .baudrate      = (uint32_t)(500 * 1000),   
  .sample_point  = (uint16_t)(80 * 100),
  .sjw           = (uint16_t)1
};

  
/* Node Service request */
static const CAN_NODE_SR_t CAN_NODE_0_sr = {
  .alert_event_sr      = 0U,
  
  .lec_event_sr        = 0U,
  
  .txok_event_sr       = 0U,
  
  .framecount_event_sr = 0U,
  
};
  
static XMC_CAN_MO_t  CAN_NODE_0_LMO_01 = {
          
  .can_mo_type      = XMC_CAN_MO_TYPE_TRANSMSGOBJ,
  .can_id_mode      = XMC_CAN_FRAME_TYPE_STANDARD_11BITS,
  .can_priority     = XMC_CAN_ARBITRATION_MODE_IDE_DIR_BASED_PRIO_2
      ,
  .can_identifier   = 0x7ffU, 
      
  .can_id_mask      = 0x7ffU,
  .can_ide_mask     = 1U,
  .can_mo_ptr       = (CAN_MO_TypeDef*)CAN_MO19,
  .can_data_length  = 8U,
      
  .can_data[1]      = 0x0U,
      
  .can_data[0]      = 0x0U 
};
      
const CAN_NODE_LMO_t CAN_NODE_0_LMO_01_Config = {
        
  .mo_ptr     = (XMC_CAN_MO_t*)&CAN_NODE_0_LMO_01,    
         
  .number  = 19U,
       
  .tx_sr   = 0U,
  .rx_sr   = 0U,
  .tx_event_enable = false,
  .rx_event_enable = false
};
      
/* CAN_NODE init Structure configuration */

const CAN_NODE_t  CAN_NODE_0 = 
{
  .global_ptr        = (GLOBAL_CAN_t *)&GLOBAL_CAN_0,
  .node_ptr          = (CAN_NODE_TypeDef*)CAN_NODE0,
  .baudrate_config   = (XMC_CAN_NODE_NOMINAL_BIT_TIME_CONFIG_t*)&CAN_NODE_0_BitTimeConfig,
  
  .gpio_out          = &CAN_NODE_0_gpio_out,
  .gpio_out_config   = &CAN_NODE_0_gpio_out_config,  
  .gpio_in           = &CAN_NODE_0_gpio_in,
  .gpio_in_config    = &CAN_NODE_0_gpio_in_config,
  .rx_signal         = XMC_CAN_NODE_RECEIVE_INPUT_RXDCG,
    
  .node_sr_ptr       = (CAN_NODE_SR_t*)&CAN_NODE_0_sr,
  .lmobj_ptr         = { 
  
    (CAN_NODE_LMO_t*)&CAN_NODE_0_LMO_01_Config
        ,  
      NULL
      ,  
      NULL
      ,  
      NULL
      ,  
      NULL
      ,  
      NULL
      ,  
      NULL
      ,  
      NULL
      ,  
      NULL
      ,  
      NULL
      ,  
      NULL
      ,  
      NULL
      ,  
      NULL
      ,  
      NULL
      ,  
      NULL
      ,  
      NULL
      ,  
      NULL
      ,  
      NULL
      ,  
      NULL
      ,  
      NULL
      ,  
      NULL
      ,  
      NULL
      ,  
      NULL
      ,  
      NULL
      ,  
      NULL
      ,  
      NULL
      ,  
      NULL
      ,  
      NULL
      ,  
      NULL
      ,  
      NULL
      ,  
      NULL
      ,  
      NULL
       },
  .node_num          = 0U,
  .mo_count          = 1U,
  .loopback_enable         = false, 
  .alert_event_enable      = false,
  .lec_event_enable        = false, 
  .txok_event_enable       = false, 
  .framecount_event_enable = false 
  };
  
