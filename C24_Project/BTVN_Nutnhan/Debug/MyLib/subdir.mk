################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../MyLib/nutnhan.c 

OBJS += \
./MyLib/nutnhan.o 

C_DEPS += \
./MyLib/nutnhan.d 


# Each subdirectory must supply rules for building sources it contributes
MyLib/%.o MyLib/%.su MyLib/%.cyclo: ../MyLib/%.c MyLib/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xB -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/hdat8/STM32CubeIDE/workspace_1.13.2/BTVN_Nutnhan/MyLib" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-MyLib

clean-MyLib:
	-$(RM) ./MyLib/nutnhan.cyclo ./MyLib/nutnhan.d ./MyLib/nutnhan.o ./MyLib/nutnhan.su

.PHONY: clean-MyLib

