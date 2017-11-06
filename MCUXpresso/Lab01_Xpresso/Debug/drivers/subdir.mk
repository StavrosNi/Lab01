################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../drivers/fsl_clock.c \
../drivers/fsl_common.c \
../drivers/fsl_flash.c \
../drivers/fsl_gpio.c \
../drivers/fsl_lptmr.c \
../drivers/fsl_lpuart.c \
../drivers/fsl_lpuart_freertos.c \
../drivers/fsl_smc.c 

OBJS += \
./drivers/fsl_clock.o \
./drivers/fsl_common.o \
./drivers/fsl_flash.o \
./drivers/fsl_gpio.o \
./drivers/fsl_lptmr.o \
./drivers/fsl_lpuart.o \
./drivers/fsl_lpuart_freertos.o \
./drivers/fsl_smc.o 

C_DEPS += \
./drivers/fsl_clock.d \
./drivers/fsl_common.d \
./drivers/fsl_flash.d \
./drivers/fsl_gpio.d \
./drivers/fsl_lptmr.d \
./drivers/fsl_lpuart.d \
./drivers/fsl_lpuart_freertos.d \
./drivers/fsl_smc.d 


# Each subdirectory must supply rules for building sources it contributes
drivers/%.o: ../drivers/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -DCR_INTEGER_PRINTF -DSDK_DEBUGCONSOLE=0 -D__MCUXPRESSO -D__USE_CMSIS -DDEBUG -DFSL_RTOS_FREE_RTOS -DSDK_OS_FREE_RTOS -DCPU_MKW41Z512CAT4 -DCPU_MKW41Z512CAT4_cm0plus -D__REDLIB__ -I"C:\Users\Joe\Documents\MCUXpressoIDE_10.0.2_411\workspace\Lab01_Xpresso\source" -I"C:\Users\Joe\Documents\MCUXpressoIDE_10.0.2_411\workspace\Lab01_Xpresso" -I"C:\Users\Joe\Documents\MCUXpressoIDE_10.0.2_411\workspace\Lab01_Xpresso\startup" -I"C:\Users\Joe\Documents\MCUXpressoIDE_10.0.2_411\workspace\Lab01_Xpresso\drivers" -I"C:\Users\Joe\Documents\MCUXpressoIDE_10.0.2_411\workspace\Lab01_Xpresso\frdmkw41z" -I"C:\Users\Joe\Documents\MCUXpressoIDE_10.0.2_411\workspace\Lab01_Xpresso\freertos" -I"C:\Users\Joe\Documents\MCUXpressoIDE_10.0.2_411\workspace\Lab01_Xpresso\CMSIS" -I"C:\Users\Joe\Documents\MCUXpressoIDE_10.0.2_411\workspace\Lab01_Xpresso\utilities" -O0 -fno-common -g3 -Wall -c -fmessage-length=0 -fno-builtin -ffunction-sections -fdata-sections -mcpu=cortex-m0plus -mthumb -D__REDLIB__ -specs=redlib.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


