/*-----------------------------------------------------------------------------
 * Name:    Buttons_FRDM-KW41Z.c
 * Purpose: Buttons interface for FRDM-KW40Z evaluation board
 * Rev.:    1.00
 *----------------------------------------------------------------------------*/

/* Copyright (c) 2015 ARM LIMITED

   All rights reserved.
   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:
   - Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.
   - Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in the
     documentation and/or other materials provided with the distribution.
   - Neither the name of ARM nor the names of its contributors may be used
     to endorse or promote products derived from this software without
     specific prior written permission.
   *
   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
   AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
   IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
   ARE DISCLAIMED. IN NO EVENT SHALL COPYRIGHT HOLDERS AND CONTRIBUTORS BE
   LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
   CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
   SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
   INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
   CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
   ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
   POSSIBILITY OF SUCH DAMAGE.
   ---------------------------------------------------------------------------*/

#include "MKW41Z4.h"                    // Device header
#include "Board_Buttons.h"              // ::Board Support:Buttons

#define NUM_KEYS  2                     // Number of available keys

/* Keys for FRDM-KW41Z */
                                        // Reset           (SW5)
#define KEY_SW3    (1 << 0)             // Represent PTC5 (SW3)
#define KEY_SW4    (1 << 1)             // Represent PTC4 (SW4)


/**
  \fn          int32_t Buttons_Initialize (void)
  \brief       Initialize buttons
  \returns
   - \b  0: function succeeded
   - \b -1: function failed
*/
int32_t Buttons_Initialize (void) {

  SIM->SCGC5 |= (1U << SIM_SCGC5_PORTC_SHIFT);

  PORTC->PCR[ 4]  =   (1U <<  8) | (3u <<  0);
  PORTC->PCR[ 5]  =   (1U <<  8) | (3u <<  0);
  PORTC->ISFR    &=  ((1U <<  4) | (1U <<  5));
  GPIOC->PDDR    &= ~((1U <<  4) | (1U <<  5));

  return (0);
}


/**
  \fn          int32_t Buttons_Uninitialize (void)
  \brief       De-initialize buttons
  \returns
   - \b  0: function succeeded
   - \b -1: function failed
*/
int32_t Buttons_Uninitialize (void) {

  return (0);
}


/**
  \fn          uint32_t Buttons_GetState (void)
  \brief       Get buttons state
  \returns     Buttons state
*/
uint32_t Buttons_GetState (void) {

  uint32_t val = 0;

  if (~(GPIOC->PDIR) & (1U <<  4)) {
    val |= KEY_SW4;
  }
  if (~(GPIOC->PDIR) & (1U <<  5)) {
    val |= KEY_SW3;
  }

  return (val);
}


/**
  \fn          uint32_t Buttons_GetCount (void)
  \brief       Get number of available buttons
  \return      Number of available buttons
*/
uint32_t Buttons_GetCount (void) {
  return (NUM_KEYS);
}

