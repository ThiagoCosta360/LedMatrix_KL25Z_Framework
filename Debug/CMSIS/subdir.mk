################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../CMSIS/system_MKL25Z4.c 

OBJS += \
./CMSIS/system_MKL25Z4.o 

C_DEPS += \
./CMSIS/system_MKL25Z4.d 


# Each subdirectory must supply rules for building sources it contributes
CMSIS/%.o: ../CMSIS/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -D__NEWLIB__ -DCPU_MKL25Z128VFT4 -DCPU_MKL25Z128VFT4_cm0plus -DFSL_RTOS_BM -DSDK_OS_BAREMETAL -DSDK_DEBUGCONSOLE=0 -D__MCUXPRESSO -D__USE_CMSIS -DDEBUG -I"C:\Users\thiag\Documents\MCUXpressoIDE_11.1.0_3209\workspace\TesteMatrizLED_Project\board" -I"C:\Users\thiag\Documents\MCUXpressoIDE_11.1.0_3209\workspace\TesteMatrizLED_Project\source" -I"C:\Users\thiag\Documents\MCUXpressoIDE_11.1.0_3209\workspace\TesteMatrizLED_Project" -I"C:\Users\thiag\Documents\MCUXpressoIDE_11.1.0_3209\workspace\TesteMatrizLED_Project\drivers" -I"C:\Users\thiag\Documents\MCUXpressoIDE_11.1.0_3209\workspace\TesteMatrizLED_Project\CMSIS" -I"C:\Users\thiag\Documents\MCUXpressoIDE_11.1.0_3209\workspace\TesteMatrizLED_Project\utilities" -I"C:\Users\thiag\Documents\MCUXpressoIDE_11.1.0_3209\workspace\TesteMatrizLED_Project\startup" -O0 -fno-common -g3 -Wall -c -fmessage-length=0 -fno-builtin -ffunction-sections -fdata-sections -fmerge-constants -fmacro-prefix-map="../$(@D)/"=. -mcpu=cortex-m0plus -mthumb -D__NEWLIB__ -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


