/*
 * Copyright (c) 2013 - 2015, Freescale Semiconductor, Inc.
 * Copyright 2016-2017 NXP
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * o Redistributions of source code must retain the above copyright notice, this list
 *   of conditions and the following disclaimer.
 *
 * o Redistributions in binary form must reproduce the above copyright notice, this
 *   list of conditions and the following disclaimer in the documentation and/or
 *   other materials provided with the distribution.
 *
 * o Neither the name of the copyright holder nor the names of its
 *   contributors may be used to endorse or promote products derived from this
 *   software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */


#include "FreeRTOS.h"
#include "task.h"
#include "fsl_device_registers.h"
#include "fsl_debug_console.h"
#include "board.h"

#include "pin_mux.h"
#include <stdbool.h>
#include "clock_config.h"


/*******************************************************************************
 * Definitions
 ******************************************************************************/
   portTickType Seconds2Ticks(const float s){
    return (portTickType) (s * (const float) configTICK_RATE_HZ);
}
/*******************************************************************************
 * Prototypes
 ******************************************************************************/
void FlashLED2();
void FlashLED3();
/*******************************************************************************
 * Code
 ******************************************************************************/
/*!
 * @brief Main function
 */
int main(void)
{
    //char ch;

    /* Init board hardware. */
    BOARD_InitPins();
    BOARD_BootClockRUN();
    BOARD_InitDebugConsole();

    SystemCoreClockUpdate();
    LED_RED_INIT(1);
           // LED_Initialize();
           // LED_Off(2);
                  // vTaskDelay( 500 / portTICK_RATE_MS );
                //  LED_Off(3);
                //  xTaskCreate(OffLED2,"OffLED2",configMINIMAL_STACK_SIZE,(void*)NULL,1,(xTaskHandle*) NULL);
                //  xTaskCreate(OffLED3,"OffLED3",configMINIMAL_STACK_SIZE,(void*)NULL,1,(xTaskHandle*) NULL);
           xTaskCreate(FlashLED2,"LEDtask2",configMINIMAL_STACK_SIZE,(void*)NULL,1,(xTaskHandle*) NULL);
//            xTaskCreate(FlashLED3,"LEDtask3",configMINIMAL_STACK_SIZE,(void*)NULL, 1,(xTaskHandle*) NULL);
                 // vTaskDelay( 500 / portTICK_RATE_MS );

                  vTaskStartScheduler();
            return 0;
}
void FlashLED2(){

        while(1){
            LED_RED_OFF();
            vTaskDelay( 800 / portTICK_RATE_MS ); // Software interrupt so that LED2 is off at the start

      LED_RED_ON();
             // vTaskDelay(200);
     vTaskDelay( Seconds2Ticks(1.70)); // Green light is on 70% of the time
       LED_RED_OFF();
       vTaskDelay(Seconds2Ticks(1.30));
        }
            }
 //   }//
//*/
/*  /*
void FlashLED3(){
            //  LED_Off(3);
            //  vTaskDelay(200);
        while(1){
       LED_On(3);
     vTaskDelay( Seconds2Ticks(0.05)); // red light is on 5% of the time
      LED_Off(3);
      vTaskDelay(Seconds2Ticks(0.95));
     }
        }

//*/
