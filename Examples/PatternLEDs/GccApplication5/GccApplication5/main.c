/*
 * GccApplication5.c
 *
 * Created: 10/4/2020 2:00:04 PM
 * Author : User
 */ 
#define  F_CPU 16000000

#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#include "IOlib.h"


int main(void)
{  
	dPortC(1);
	char pattern = 0x01;  // right to left pattern
	//char pattern = 0x80;  // left to right pattern
	    while (1) 
    {
		// left to right pattern
		
		/*setPortC(pattern);
		pattern/=2;
		_delay_ms(200);
		
		if (pattern == 0x00)
		{
			_delay_ms(200);
			pattern = 0x80;
		}*/
		
		// right to left pattern
		
		setPortC(pattern);
		pattern*=2;
		_delay_ms(200);
		
		if (pattern == 0x00)
		{
			_delay_ms(200);
			pattern = 0x01;
		}
		
		
		
		// right to left pattern
		
		/*for (int i = 0; i<8;i++)
		{
			
			setPinC(i);
			_delay_ms(200);
			setPortC(0);
		}*/
		
		
		
		
		
    }
}

