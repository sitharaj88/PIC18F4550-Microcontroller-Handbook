/**
 * Blink LED Example for PIC18F4550
 * Toggles an LED connected to PORTB0 every 500ms.
 */

 #include <xc.h>
 #include "config.h"
 
 #define LED     LATB0    // LED connected to PORTB0
 #define _XTAL_FREQ 48000000  // Internal oscillator frequency (48 MHz)
 
 void main(void) {
     TRISB0 = 0;   // Set RB0 as output
     ANSELH = 0x00; // Disable analog functions on PORTB
 
     while(1) {
         LED = 1;       // Turn LED ON
         __delay_ms(500); 
         LED = 0;       // Turn LED OFF
         __delay_ms(500);
     }
 }