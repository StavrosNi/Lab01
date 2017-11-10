#Makefile for arm-none-eabi-gcc
#Run from the /src/ directory using the command 'make'

#Variables
IDIR =../include
CC=arm-none-eabi-gcc
CFLAGS=-std=gnu99 -I$(IDIR) -DCR_INTEGER_PRINTF -DDEBUG -DFSL_RTOS_FREE_RTOS -DFRDM_KW41Z -DFREEDOM -DSDK_DEBUGCONSOLE=0 -D__MCUXPRESSO -D__USE_CMSIS -DSDK_OS_FREE_RTOS -DCPU_MKW41Z512VHT4 -DCPU_MKW41Z512VHT4_cm0plus -D__REDLIB__ -O0 -fno-common -g -Wall -c -fmessage-length=0 -fno-builtin -ffunction-sections -fdata-sections -mcpu=cortex-m0plus -mthumb -D__REDLIB__
ODIR=obj


#_DEPS is a list of all the header files included in the project
_DEPS = arm_common_tables.h arm_const_structs.h arm_math.h board.h clock_config.h cmsis_armcc.h cmsis_armcc_V6.h cmsis_gcc.h core_cm0.h core_cm0plus.h core_cm3.h core_cm4.h core_cm7.h core_cmFunc.h core_cmInstr.h core_cmSimd.h core_sc000.h core_sc300.h croutine.h deprecated_definitions.h event_groups.h FreeRTOS.h FreeRTOSConfig.h freertos_tasks_c_additions.h fsl_clock.h fsl_common.h fsl_debug_console.h fsl_device_registers.h fsl_flash.h fsl_gpio.h fsl_lptmr.h fsl_lpuart.h fsl_lpuart_freertos.h fsl_port.h fsl_smc.h fsl_tickless_generic.h list.h MKW41Z4.h MKW41Z4_features.h mpu_prototypes.h mpu_wrappers.h pin_mux.h portable.h portmacro.h projdefs.h queue.h semphr.h StackMacros.h system_MKW41Z4.h task.h timers.h
#DEPS is the paths to all the included header files, as required by the compiler
#patsbst separates the list _DEPS into space de-limited sections, and adds a prefix of the include directory to make the path
DEPS = $(patsbst %,$(IDIR)/%,$(_DEPS))

# compiles all object files if it's C file has been updated, or any header files have been updated
# $@ is a macro for the file to produce -  $(ODIR)/%.o
# $< is a macro for the first item in the dependencies list
$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -o $@ $< $(CFLAGS)
