################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

CG_TOOL_ROOT := D:/electron/ccs6.0/application/ccsv5/tools/compiler/c2000_6.2.0

ORDERED_OBJS += \
$(GEN_CMDS__FLAG) \
"./Uers/main.obj" \
"./application/Oled/Oled.obj" \
"./application/led/leds.obj" \
"./libraries/DSP2833x_usDelay.obj" \
"./libraries/DSP2833x_SysCtrl.obj" \
"./libraries/DSP2833x_PieVect.obj" \
"./libraries/DSP2833x_PieCtrl.obj" \
"./libraries/DSP2833x_Gpio.obj" \
"./libraries/DSP2833x_GlobalVariableDefs.obj" \
"./libraries/DSP2833x_DefaultIsr.obj" \
"./libraries/DSP2833x_CodeStartBranch.obj" \
"./libraries/DSP2833x_ADC_cal.obj" \
"../libraries/28335_RAM_lnk.cmd" \
"../libraries/DSP2833x_Headers_nonBIOS.cmd" \
"../libraries/IQmath.lib" \
-l"libc.a" \

-include ../makefile.init

RM := DEL /F
RMDIR := RMDIR /S/Q

# All of the sources participating in the build are defined here
-include sources.mk
-include libraries/subdir_vars.mk
-include application/led/subdir_vars.mk
-include application/Oled/subdir_vars.mk
-include Uers/subdir_vars.mk
-include libraries/subdir_rules.mk
-include application/led/subdir_rules.mk
-include application/Oled/subdir_rules.mk
-include Uers/subdir_rules.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(S62_DEPS)),)
-include $(S62_DEPS)
endif
ifneq ($(strip $(C64_DEPS)),)
-include $(C64_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(S55_DEPS)),)
-include $(S55_DEPS)
endif
ifneq ($(strip $(C67_DEPS)),)
-include $(C67_DEPS)
endif
ifneq ($(strip $(C??_DEPS)),)
-include $(C??_DEPS)
endif
ifneq ($(strip $(CLA_DEPS)),)
-include $(CLA_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(S??_DEPS)),)
-include $(S??_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(C62_DEPS)),)
-include $(C62_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(K_DEPS)),)
-include $(K_DEPS)
endif
ifneq ($(strip $(C43_DEPS)),)
-include $(C43_DEPS)
endif
ifneq ($(strip $(S67_DEPS)),)
-include $(S67_DEPS)
endif
ifneq ($(strip $(SA_DEPS)),)
-include $(SA_DEPS)
endif
ifneq ($(strip $(S43_DEPS)),)
-include $(S43_DEPS)
endif
ifneq ($(strip $(OPT_DEPS)),)
-include $(OPT_DEPS)
endif
ifneq ($(strip $(S64_DEPS)),)
-include $(S64_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(C55_DEPS)),)
-include $(C55_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: 28335_Oled.out

# Tool invocations
28335_Oled.out: $(OBJS) $(CMD_SRCS) $(LIB_SRCS) $(GEN_CMDS)
	@echo 'Building target: $@'
	@echo 'Invoking: C2000 Linker'
	"D:/electron/ccs6.0/application/ccsv5/tools/compiler/c2000_6.2.0/bin/cl2000" -v28 -ml -mt --float_support=fpu32 -g --diag_warning=225 --display_error_number --diag_wrap=off -z -m"28335_Oled.map" --stack_size=0x300 --warn_sections -i"D:/electron/ccs6.0/application/ccsv5/tools/compiler/c2000_6.2.0/lib" -i"D:/electron/ccs6.0/application/ccsv5/tools/compiler/c2000_6.2.0/include" --reread_libs --display_error_number --diag_wrap=off --xml_link_info="28335_Oled_linkInfo.xml" --rom_model -o "28335_Oled.out" $(ORDERED_OBJS)
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(C2000_EXECUTABLE_OUTPUTS__QUOTED) "28335_Oled.out"
	-$(RM) "libraries\DSP2833x_DefaultIsr.pp" "libraries\DSP2833x_GlobalVariableDefs.pp" "libraries\DSP2833x_Gpio.pp" "libraries\DSP2833x_PieCtrl.pp" "libraries\DSP2833x_PieVect.pp" "libraries\DSP2833x_SysCtrl.pp" "application\led\leds.pp" "application\Oled\Oled.pp" "Uers\main.pp" 
	-$(RM) "libraries\DSP2833x_ADC_cal.obj" "libraries\DSP2833x_CodeStartBranch.obj" "libraries\DSP2833x_DefaultIsr.obj" "libraries\DSP2833x_GlobalVariableDefs.obj" "libraries\DSP2833x_Gpio.obj" "libraries\DSP2833x_PieCtrl.obj" "libraries\DSP2833x_PieVect.obj" "libraries\DSP2833x_SysCtrl.obj" "libraries\DSP2833x_usDelay.obj" "application\led\leds.obj" "application\Oled\Oled.obj" "Uers\main.obj" 
	-$(RM) "libraries\DSP2833x_ADC_cal.pp" "libraries\DSP2833x_CodeStartBranch.pp" "libraries\DSP2833x_usDelay.pp" 
	-@echo 'Finished clean'
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

