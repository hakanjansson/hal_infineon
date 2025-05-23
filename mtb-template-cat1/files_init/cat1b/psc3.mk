################################################################################
# \file bsp.mk
#
################################################################################
# \copyright
# Copyright 2022-2024 Cypress Semiconductor Corporation (an Infineon company) or
# an affiliate of Cypress Semiconductor Corporation
#
# SPDX-License-Identifier: Apache-2.0
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
################################################################################

ifeq ($(WHICHFILE),true)
$(info Processing $(lastword $(MAKEFILE_LIST)))
endif

# Any additional components to apply when using this board.
BSP_COMPONENTS:=

BSP_DEFINES:=

# SECURE or NON_SECURE. Leave VCORE_ATTRS blank if trustzone is not used
VCORE_ATTRS?=SECURE

ifneq (,$(filter $(VCORE_ATTRS),SECURE))
    MTB_BSP__LINKER_SCRIPT=$(MTB_TOOLS__TARGET_DIR)/TOOLCHAIN_$(TOOLCHAIN)/linker_s_flash.$(MTB_RECIPE__SUFFIX_LS)
    BSP_COMPONENTS+=SECURE_DEVICE
else
    MTB_BSP__LINKER_SCRIPT=$(MTB_TOOLS__TARGET_DIR)/TOOLCHAIN_$(TOOLCHAIN)/linker_ns_flash.$(MTB_RECIPE__SUFFIX_LS)
    BSP_COMPONENTS+=NON_SECURE_DEVICE
endif

# Generate binary image
ifeq ($(TOOLCHAIN),ARM)
CY_BSP_POSTBUILD+=$(MTB_TOOLCHAIN_ARM__BASE_DIR)/bin/fromelf --output=$(MTB_TOOLS__OUTPUT_CONFIG_DIR)/$(APPNAME).bin --bincombined $(MTB_TOOLS__OUTPUT_CONFIG_DIR)/$(APPNAME).$(MTB_RECIPE__SUFFIX_TARGET);
else
CY_BSP_POSTBUILD+=$(MTB_TOOLCHAIN_GCC_ARM__BASE_DIR)/bin/arm-none-eabi-objcopy -O binary $(MTB_TOOLS__OUTPUT_CONFIG_DIR)/$(APPNAME).$(MTB_RECIPE__SUFFIX_TARGET) $(MTB_TOOLS__OUTPUT_CONFIG_DIR)/$(APPNAME).bin;
endif

################################################################################
# ALL ITEMS BELOW THIS POINT ARE AUTO GENERATED BY THE BSP ASSISTANT TOOL.
# DO NOT MODIFY DIRECTLY. CHANGES SHOULD BE MADE THROUGH THE BSP ASSISTANT.
################################################################################

# Board device selection. MPN_LIST tracks what was selected in the BSP Assistant
# All other variables are derived by BSP Assistant based on the MPN_LIST.
MPN_LIST:=
