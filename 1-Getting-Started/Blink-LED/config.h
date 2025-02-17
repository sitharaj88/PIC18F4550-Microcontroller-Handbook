/**
 * Configuration settings for PIC18F4550
 * Generated using MPLAB X's Configuration Bits tool.
 */

 #pragma config FOSC = INTOSC_HS  // Internal oscillator, HS oscillator
 #pragma config WDT = OFF         // Watchdog Timer disabled
 #pragma config PWRTE = ON        // Power-up Timer enabled
 #pragma config BOREN = ON        // Brown-out Reset enabled
 #pragma config LVP = OFF         // Low-voltage programming disabled
 #pragma config CPUDIV = OSC1_PLL2// CPU clock divided by 2 (48 MHz)
 
 #include <xc.h>