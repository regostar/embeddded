/*******************************************************
This program was created by the CodeWizardAVR V3.31 
Automatic Program Generator
� Copyright 1998-2017 Pavel Haiduc, HP InfoTech s.r.l.
http://www.hpinfotech.com

Project : 
Version : 
Date    : 20-01-2018
Author  : Rego
Company : VIP
Comments: 


Chip type               : ATmega8
Program type            : Application
AVR Core Clock frequency: 12.000000 MHz
Memory model            : Small
External RAM size       : 0
Data Stack size         : 256
*******************************************************/

#include <io.h>
#include<delay.h>

// Declare your global variables here
//Steps:-
//compile and build
//open HID BOOSTFlash
//reset device,detect,add hex file- path is 
/*C:\Users\sumi\Desktop\renu\embedded workshop\proj\Debug\Exe
*/
//then flash device
void main(void)
{      //assign a DDR -data direction register
//4 BITS AS OUTPUT the next 4 bits/ports as INPUT
//DDRB=0b11110000; //INSIDE TO OUTSIDE
//DDRC=0b00001111;
DDRB=0xFF;
//DDRC=0x00;  used to give input by default
while (1)
      {
         PORTB=0x0F;  //BLINK ALL led       
         //to blink all LEDS 
         //0b00011110
         //0b00000001 didnt turn on the first LED
         //reason it may be used by any other ...
        // PORTC=0x0F;
      }
}
