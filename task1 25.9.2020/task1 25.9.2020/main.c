/*
 * GccApplication1.c
 *
 * Created: 9/28/2020 1:40:00 PM
 * Author : User
 */ 

#include <avr/io.h>
void setPinA(int pinNumber);
void resetPinA(int pinNumber);
void togglePinA(int pinNumber);
int isPressedA(int pinNumber);

int main(void)
{
	int pin = 4;
	DDRA = (1<<pin) ;
    /* Replace with your application code */
    while (1) 
    {
		
		setPinA(pin);
		resetPinA(pin);
		togglePinA(pin);
		isPressedA(pin);
		
    }
}

void setPinA(int pinNumber){
	PORTA |=(1<<pinNumber);
	return 0;
}
void resetPinA(int pinNumber){
	PORTA &=~(1<<pinNumber);
	return 0;
}
void togglePinA(int pinNumber){
	PORTA ^=(1<<pinNumber);
	return 0;
}
int isPressedA(int pinNumber){
	if (PINA | (1<<pinNumber))
	{
		return 1;
	}
	else{
		return 0;
	}
}
