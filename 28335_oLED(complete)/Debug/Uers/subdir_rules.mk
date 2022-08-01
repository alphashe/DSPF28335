################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Each subdirectory must supply rules for building sources it contributes
Uers/main.obj: ../Uers/main.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: C2000 Compiler'
	"D:/electron/ccs6.0/application/ccsv5/tools/compiler/c2000_6.2.0/bin/cl2000" -v28 -ml -mt --float_support=fpu32 --include_path="D:/electron/28335/software/DSP2833x_Libraries/DSP2833x_headers/include" --include_path="D:/electron/28335/software/learning/28335_oLED(complete)/application/Oled" --include_path="D:/electron/28335/software/learning/28335_oLED(complete)/application/led" --include_path="D:/electron/28335/software/learning/28335_oLED/application/led" --include_path="D:/electron/28335/software/learning/28335_oLED/application/Oled" --include_path="D:/electron/28335/software/DSP2833x_Libraries/DSP2833x_common/include" --include_path="D:/electron/ccs6.0/application/ccsv5/tools/compiler/c2000_6.2.0/include" -g --diag_warning=225 --display_error_number --diag_wrap=off --preproc_with_compile --preproc_dependency="Uers/main.pp" --obj_directory="Uers" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '


