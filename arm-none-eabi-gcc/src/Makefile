#Makefile for arm-none-eabi-gcc
#Run from the /src/ directory using the command 'make'

#Variables
IDIR =../include
REDLIBLOC =C:\nxp\MCUXpressoIDE_10.0.2_411\ide\tools\redlib\include
CC=arm-none-eabi-gcc
CFLAGS=-std=gnu99 -I$(IDIR) -I$(REDLIBLOC) -DCR_INTEGER_PRINTF -DDEBUG -DFSL_RTOS_FREE_RTOS -DFRDM_KW41Z -DFREEDOM -DSDK_DEBUGCONSOLE=0 -D__MCUXPRESSO -D__USE_CMSIS -DSDK_OS_FREE_RTOS -DCPU_MKW41Z512VHT4 -DCPU_MKW41Z512VHT4_cm0plus -D__REDLIB__ -O0 -fno-common -g -Wall -c -fmessage-length=0 -fno-builtin -ffunction-sections -fdata-sections -mcpu=cortex-m0plus -mthumb -D__REDLIB__ -specs=redlib.specs
ODIR=obj
LDIR=libs
#Original locations of libraries
#C:\nxp\MCUXpressoIDE_10.0.2_411\ide\tools\arm-none-eabi\lib\armv6-m
#C:\nxp\MCUXpressoIDE_10.0.2_411\ide\tools\lib\gcc\arm-none-eabi\5.4.1\armv6-m

#_DEPS is a list of all the header files included in the project
_DEPS = arm_common_tables.h arm_const_structs.h arm_math.h board.h clock_config.h cmsis_armcc.h cmsis_armcc_V6.h cmsis_gcc.h core_cm0.h core_cm0plus.h core_cm3.h core_cm4.h core_cm7.h core_cmFunc.h core_cmInstr.h core_cmSimd.h core_sc000.h core_sc300.h croutine.h deprecated_definitions.h event_groups.h FreeRTOS.h FreeRTOSConfig.h freertos_tasks_c_additions.h fsl_clock.h fsl_common.h fsl_debug_console.h fsl_device_registers.h fsl_flash.h fsl_gpio.h fsl_lptmr.h fsl_lpuart.h fsl_lpuart_freertos.h fsl_port.h fsl_smc.h fsl_tickless_generic.h list.h MKW41Z4.h MKW41Z4_features.h mpu_prototypes.h mpu_wrappers.h pin_mux.h portable.h portmacro.h projdefs.h queue.h semphr.h StackMacros.h system_MKW41Z4.h task.h timers.h
#DEPS is the paths to all the included header files, as required by the compiler
#patsbst separates the list _DEPS into space de-limited sections, and adds a prefix of the include directory to make the path
DEPS = $(patsbst %,$(IDIR)/%,$(_DEPS))

_OBJ = board.o clock_config.o croutine.o event_groups.o fsl_clock.o fsl_common.o fsl_debug_console.o fsl_flash.o fsl_gpio.o fsl_lptmr.o fsl_lpuart.o fsl_lpuart_freertos.o fsl_smc.o fsl_tickless_lptmr.o fsl_tickless_systick.o heap_4.o Lab01.o list.o pin_mux.o port.o queue.o startup_mkw41z4.o system_MKW41Z4.o tasks.o timers.o
#OBJ = $(patsbst %,$(ODIR)/%,$(_OBJ))

SRC = board.c clock_config.c croutine.c event_groups.c fsl_clock.c fsl_common.c fsl_debug_console.c fsl_flash.c fsl_gpio.c fsl_lptmr.c fsl_lpuart.c fsl_lpuart_freertos.c fsl_smc.c fsl_tickless_lptmr.c fsl_tickless_systick.c heap_4.c Lab01.c list.c pin_mux.c port.c queue.c startup_mkw41z4.c system_MKW41Z4.c tasks.c timers.c

all : Lab01_test.axf

Lab01_test.axf : $(_OBJ)
	arm-none-eabi-gcc -o Lab01_test.axf -L$(LDIR) -lcr_c -lcr_eabihelpers -lcr_semihost_nf -nostdlib -Xlinker -Map="Lab01_test.map" -Xlinker --gc-sections -Xlinker -print-memory-usage -mcpu=cortex-m0plus -mthumb -T "Lab01_test_Debug.ld" $(_OBJ)
#	arm-none-eabi-gcc -nostdlib -Xlinker -print-memory-usage -mcpu=cortex-m0plus -mthumb $(_OBJ)

	
# compiles all object files if it's C file has been updated, or any header files have been updated
# $@ is a macro for the file to produce -  $(ODIR)/%.o
# $< is a macro for the first item in the dependencies list
%.o: %.c $(DEPS)
	$(CC) -o $@ $< $(CFLAGS)

rebuild :
#touch $(SRC)
	$(CC) -o $@ $< $(CFLAGS)
	arm-none-eabi-gcc -o Lab01_test.axf -L$(LDIR) -lcr_c -lcr_eabihelpers -lcr_semihost_nf -nostdlib -Xlinker -Map="Lab01_test.map" -Xlinker --gc-sections -Xlinker -print-memory-usage -mcpu=cortex-m0plus -mthumb -T "Lab01_test_Debug.ld" $(_OBJ)
	

