################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include src/subdir.mk
-include kit_flashpwr/BRD4302A/subdir.mk
-include emlib/subdir.mk
-include device/EFR32_B_1_1_B/gcc/subdir.mk
-include bgapi/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: LED_Blinking.axf

# Tool invocations
LED_Blinking.axf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: GNU ARM C Linker'
	arm-none-eabi-gcc -g -gdwarf-2 -mcpu=cortex-m4 -mthumb -T "/Users/joyce/SimplicityStudio/v4_workspace/LED_Blinking/linker/GCC/efr32bg1b232f256gm56.ld" -Xlinker -no-enum-size-warning -Xlinker -no-wchar-size-warning -Xlinker --gc-sections -Xlinker -Map="LED_Blinking.map" -mfpu=fpv4-sp-d16 -mfloat-abi=hard -o LED_Blinking.axf "./application_properties.o" "./gatt_db.o" "./main.o" "./bgapi/dmadrv.o" "./bgapi/em_adc.o" "./bgapi/em_ldma.o" "./bgapi/em_leuart.o" "./device/EFR32_B_1_1_B/gcc/startup_efr32bg1b.o" "./emlib/em_cmu.o" "./emlib/em_gpio.o" "./emlib/em_i2c.o" "./emlib/em_letimer.o" "./emlib/em_msc.o" "./emlib/em_rtcc.o" "./emlib/em_system.o" "./emlib/em_timer.o" "./emlib/em_usart.o" "./kit_flashpwr/BRD4302A/mx25flash_spi.o" "./src/InitDevice.o" "./src/adc.o" "./src/cmu.o" "./src/gpio.o" "./src/i2c.o" "./src/letimer.o" "./src/sleep.o" "./src/timer.o" "./src/usart.o" "/Applications/Simplicity Studio.app/Contents/Eclipse/developer/sdks/gecko_sdk_suite/v1.1//protocol/bluetooth_2.4/lib/EFR32BG1B/EABI/stack.a" "/Applications/Simplicity Studio.app/Contents/Eclipse/developer/sdks/gecko_sdk_suite/v1.1//protocol/bluetooth_2.4/lib/EFR32BG1B/EABI/binstack.o" "/Applications/Simplicity Studio.app/Contents/Eclipse/developer/sdks/gecko_sdk_suite/v1.1//protocol/bluetooth_2.4/lib/EFR32BG1B/EABI/binbootloader.o" "/Applications/Simplicity Studio.app/Contents/Eclipse/developer/sdks/gecko_sdk_suite/v1.1//protocol/bluetooth_2.4/lib/EFR32BG1B/GCC/bgapi.a" -lm -Wl,--start-group -lgcc -lc -lnosys -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

	@echo 'Building hex file: LED_Blinking.hex'
	arm-none-eabi-objcopy -O ihex "LED_Blinking.axf" "LED_Blinking.hex"
	@echo ' '

	@echo 'Building bin file: LED_Blinking.bin'
	arm-none-eabi-objcopy -O binary "LED_Blinking.axf" "LED_Blinking.bin"
	@echo ' '

	@echo 'Building s37 file: LED_Blinking.s37'
	arm-none-eabi-objcopy -O srec "LED_Blinking.axf" "LED_Blinking.s37"
	@echo ' '

	@echo 'Running size tool'
	arm-none-eabi-size "LED_Blinking.axf"
	@echo ' '

# Other Targets
clean:
	-$(RM) $(EXECUTABLES)$(OBJS)$(C_DEPS) LED_Blinking.axf
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
