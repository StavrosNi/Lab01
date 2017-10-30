//test git commit
// DON'T FORGET TO PRESS RESET AFTER PROGRAMMING
 
#include <stdio.h>
 
#include "FreeRTOS.h"                                       //
#include "task.h"
 
#include "Board_LED.h"                  // ::Board Support:LED
#include "Board_Buttons.h"              // ::Board Support:Buttons
 
#include "MKW41Z4.h"                    // Device header
 
 //LED_Off(2);
// LED_Off(3);
void LEDtask2(void *pvParameters);
void LEDtask3(void *pvParameters);
//void OffLED2(void *pvParameters);
//void OffLED3(void *pvParameters);
void FlashLED2();
void FlashLED3();
 
int main()
    {
       
        SystemCoreClockUpdate();
       
        LED_Initialize();
       // LED_Off(2);
              // vTaskDelay( 500 / portTICK_RATE_MS );
            //  LED_Off(3);
            //  xTaskCreate(OffLED2,"OffLED2",configMINIMAL_STACK_SIZE,(void*)NULL,1,(xTaskHandle*) NULL);
            //  xTaskCreate(OffLED3,"OffLED3",configMINIMAL_STACK_SIZE,(void*)NULL,1,(xTaskHandle*) NULL);
       xTaskCreate(FlashLED2,"LEDtask2",configMINIMAL_STACK_SIZE,(void*)NULL,1,(xTaskHandle*) NULL);
        xTaskCreate(FlashLED3,"LEDtask3",configMINIMAL_STACK_SIZE,(void*)NULL, 1,(xTaskHandle*) NULL);
             // vTaskDelay( 500 / portTICK_RATE_MS );
 
              vTaskStartScheduler();
        return 0;
    }
   
    portTickType Seconds2Ticks(const float s){
    return (portTickType) (s * (const float) configTICK_RATE_HZ);
}
///*  
 
//void OffLED2(){
      //while(1)
    //  LED_Off(2);
    //}
   
//void OffLED3(){
    //while(1){
    //  LED_Off(3);
    //}
 
void FlashLED2(){
               
        while(1){
            LED_Off(2);
            vTaskDelay( 800 / portTICK_RATE_MS ); // Software interrupt so that LED2 is off at the start
           
      LED_On(2);
             // vTaskDelay(200);
     vTaskDelay( Seconds2Ticks(1.70)); // Green light is on 70% of the time
       LED_Off(2);
       vTaskDelay(Seconds2Ticks(1.30));        
        }
            }
 //   }//  
//*/
///*  /*
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