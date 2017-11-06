################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../freertos/croutine.c \
../freertos/event_groups.c \
../freertos/fsl_tickless_lptmr.c \
../freertos/fsl_tickless_systick.c \
../freertos/heap_4.c \
../freertos/list.c \
../freertos/port.c \
../freertos/queue.c \
../freertos/tasks.c \
../freertos/timers.c 

OBJS += \
./freertos/croutine.o \
./freertos/event_groups.o \
./freertos/fsl_tickless_lptmr.o \
./freertos/fsl_tickless_systick.o \
./freertos/heap_4.o \
./freertos/list.o \
./freertos/port.o \
./freertos/queue.o \
./freertos/tasks.o \
./freertos/timers.o 

C_DEPS += \
./freertos/croutine.d \
./freertos/event_groups.d \
./freertos/fsl_tickless_lptmr.d \
./freertos/fsl_tickless_systick.d \
./freertos/heap_4.d \
./freertos/list.d \
./freertos/port.d \
./freertos/queue.d \
./freertos/tasks.d \
./freertos/timers.d 


# Each subdirectory must supply rules for building sources it contributes
freertos/%.o: ../freertos/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -DCR_INTEGER_PRINTF -DSDK_DEBUGCONSOLE=0 -D__MCUXPRESSO -D__USE_CMSIS -DDEBUG -DFSL_RTOS_FREE_RTOS -DSDK_OS_FREE_RTOS -DCPU_MKW41Z512CAT4 -DCPU_MKW41Z512CAT4_cm0plus -D__REDLIB__ -I"C:\Users\Joe\Documents\MCUXpressoIDE_10.0.2_411\workspace\Lab01_Xpresso\source" -I"C:\Users\Joe\Documents\MCUXpressoIDE_10.0.2_411\workspace\Lab01_Xpresso" -I"C:\Users\Joe\Documents\MCUXpressoIDE_10.0.2_411\workspace\Lab01_Xpresso\startup" -I"C:\Users\Joe\Documents\MCUXpressoIDE_10.0.2_411\workspace\Lab01_Xpresso\drivers" -I"C:\Users\Joe\Documents\MCUXpressoIDE_10.0.2_411\workspace\Lab01_Xpresso\frdmkw41z" -I"C:\Users\Joe\Documents\MCUXpressoIDE_10.0.2_411\workspace\Lab01_Xpresso\freertos" -I"C:\Users\Joe\Documents\MCUXpressoIDE_10.0.2_411\workspace\Lab01_Xpresso\CMSIS" -I"C:\Users\Joe\Documents\MCUXpressoIDE_10.0.2_411\workspace\Lab01_Xpresso\utilities" -O0 -fno-common -g3 -Wall -c -fmessage-length=0 -fno-builtin -ffunction-sections -fdata-sections -mcpu=cortex-m0plus -mthumb -D__REDLIB__ -specs=redlib.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


