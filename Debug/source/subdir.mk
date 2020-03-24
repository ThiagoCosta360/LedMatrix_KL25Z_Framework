################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../source/cpp_config.cpp \
../source/main.cpp \
../source/mkl_GPIO.cpp \
../source/mkl_GPIOPort.cpp \
../source/mkl_MATRIX.cpp \
../source/mkl_MatrixPatterns.cpp 

OBJS += \
./source/cpp_config.o \
./source/main.o \
./source/mkl_GPIO.o \
./source/mkl_GPIOPort.o \
./source/mkl_MATRIX.o \
./source/mkl_MatrixPatterns.o 

CPP_DEPS += \
./source/cpp_config.d \
./source/main.d \
./source/mkl_GPIO.d \
./source/mkl_GPIOPort.d \
./source/mkl_MATRIX.d \
./source/mkl_MatrixPatterns.d 


# Each subdirectory must supply rules for building sources it contributes
source/%.o: ../source/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C++ Compiler'
	arm-none-eabi-c++ -DCPU_MKL25Z128VFT4 -DCPU_MKL25Z128VFT4_cm0plus -DFSL_RTOS_BM -DSDK_OS_BAREMETAL -DSDK_DEBUGCONSOLE=0 -D__MCUXPRESSO -D__USE_CMSIS -DDEBUG -D__NEWLIB__ -I"C:\Users\thiag\Documents\MCUXpressoIDE_11.1.0_3209\workspace\TesteMatrizLED_Project\board" -I"C:\Users\thiag\Documents\MCUXpressoIDE_11.1.0_3209\workspace\TesteMatrizLED_Project\source" -I"C:\Users\thiag\Documents\MCUXpressoIDE_11.1.0_3209\workspace\TesteMatrizLED_Project" -I"C:\Users\thiag\Documents\MCUXpressoIDE_11.1.0_3209\workspace\TesteMatrizLED_Project\drivers" -I"C:\Users\thiag\Documents\MCUXpressoIDE_11.1.0_3209\workspace\TesteMatrizLED_Project\CMSIS" -I"C:\Users\thiag\Documents\MCUXpressoIDE_11.1.0_3209\workspace\TesteMatrizLED_Project\utilities" -I"C:\Users\thiag\Documents\MCUXpressoIDE_11.1.0_3209\workspace\TesteMatrizLED_Project\startup" -O0 -fno-common -g3 -Wall -c -ffunction-sections -fdata-sections -ffreestanding -fno-builtin -fno-rtti -fno-exceptions -fmerge-constants -fmacro-prefix-map="../$(@D)/"=. -mcpu=cortex-m0plus -mthumb -D__NEWLIB__ -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


