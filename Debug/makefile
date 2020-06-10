################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Drivers/STM32L0xx_HAL_Driver/Src/subdir.mk
-include Core/Startup/subdir.mk
-include Core/Src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
ibp_l051_maket_cubeide.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
ibp_l051_maket_cubeide.list \

OBJCOPY_BIN += \
ibp_l051_maket_cubeide.bin \


# All Target
all: ibp_l051_maket_cubeide.elf secondary-outputs

# Tool invocations
ibp_l051_maket_cubeide.elf: $(OBJS) $(USER_OBJS) D:\workspace\stm32\cubeide\workspace\ibp_l051_maket_cubeide\STM32L051C8TX_FLASH.ld
	arm-none-eabi-gcc -o "ibp_l051_maket_cubeide.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m0plus -T"D:\workspace\stm32\cubeide\workspace\ibp_l051_maket_cubeide\STM32L051C8TX_FLASH.ld" --specs=nosys.specs -Wl,-Map="ibp_l051_maket_cubeide.map" -Wl,--gc-sections -static --specs=nano.specs -mfloat-abi=soft -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

ibp_l051_maket_cubeide.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "ibp_l051_maket_cubeide.list"
	@echo 'Finished building: $@'
	@echo ' '

ibp_l051_maket_cubeide.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "ibp_l051_maket_cubeide.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_BIN)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
