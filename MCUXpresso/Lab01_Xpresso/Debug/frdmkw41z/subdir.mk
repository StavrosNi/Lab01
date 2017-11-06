################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../frdmkw41z/board.c \
../frdmkw41z/clock_config.c \
../frdmkw41z/pin_mux.c 

OBJS += \
./frdmkw41z/board.o \
./frdmkw41z/clock_config.o \
./frdmkw41z/pin_mux.o 

C_DEPS += \
./frdmkw41z/board.d \
./frdmkw41z/clock_config.d \
./frdmkw41z/pin_mux.d 


# Each subdirectory must supply rules for building sources it contributes
frdmkw41z/%.o: ../frdmkw41z/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -DCR_INTEGER_PRINTF -DSDK_DEBUGCONSOLE=0 -D__MCUXPRESSO -D__USE_CMSIS -DDEBUG -DFSL_RTOS_FREE_RTOS -DSDK_OS_FREE_RTOS -DCPU_MKW41Z512CAT4 -DCPU_MKW41Z512CAT4_cm0plus -D__REDLIB__ -I"C:\Users\Joe\Documents\MCUXpressoIDE_10.0.2_411\workspace\Lab01_Xpresso\source" -I"C:\Users\Joe\Documents\MCUXpressoIDE_10.0.2_411\workspace\Lab01_Xpresso" -I"C:\Users\Joe\Documents\MCUXpressoIDE_10.0.2_411\workspace\Lab01_Xpresso\startup" -I"C:\Users\Joe\Documents\MCUXpressoIDE_10.0.2_411\workspace\Lab01_Xpresso\drivers" -I"C:\Users\Joe\Documents\MCUXpressoIDE_10.0.2_411\workspace\Lab01_Xpresso\frdmkw41z" -I"C:\Users\Joe\Documents\MCUXpressoIDE_10.0.2_411\workspace\Lab01_Xpresso\freertos" -I"C:\Users\Joe\Documents\MCUXpressoIDE_10.0.2_411\workspace\Lab01_Xpresso\CMSIS" -I"C:\Users\Joe\Documents\MCUXpressoIDE_10.0.2_411\workspace\Lab01_Xpresso\utilities" -O0 -fno-common -g3 -Wall -c -fmessage-length=0 -fno-builtin -ffunction-sections -fdata-sections -mcpu=cortex-m0plus -mthumb -D__REDLIB__ -specs=redlib.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


