/*
 * task2 26.9.2020.c
 *
 * Created: 9/28/2020 2:48:10 PM
 * Author : User
 */ 

#include <avr/io.h>
#include "IOlib.h"


int main(void)
{
    /* Replace with your application code */
    while (1) 
    {
		int pin_A = 4;
		int pin_B = 3;
		DDRA = (1<<pin_A);
		DDRB = (0<<pin_B);
		
		togglePinA(pin_B);
		if (isPressedA(pin_A))
		{
			setPinB(pin_B);
		} 
		else
		{
			resetPinB(pin_B);
		}
    }
}

