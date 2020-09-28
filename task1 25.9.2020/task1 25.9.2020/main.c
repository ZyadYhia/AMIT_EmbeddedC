/*
 * GccApplication1.c
 *
 * Created: 9/28/2020 1:40:00 PM
 * Author : User
 */ 

#include <avr/io.h>
//--------------------------PORTA----------------------------
void setPinA(int pinNumber);
void resetPinA(int pinNumber);
void togglePinA(int pinNumber);
int isPressedA(int pinNumber);
//--------------------------PORTB----------------------------
void setPinB(int pinNumber);
void resetPinB(int pinNumber);
void togglePinB(int pinNumber);
int isPressedB(int pinNumber);
//--------------------------PORTC----------------------------
void setPinC(int pinNumber);
void resetPinC(int pinNumber);
void togglePinC(int pinNumber);
int isPressedC(int pinNumber);
//------------------------- POTD-----------------------------
void setPinD(int pinNumber);
void resetPinD(int pinNumber);
void togglePinD(int pinNumber);
int isPressedD(int pinNumber);
//------------------------------------------------------
//------------------------------------------------------
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
//--------------------------PORTA----------------------------
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
//--------------------------PORTB----------------------------
void setPinB(int pinNumber){
	PORTA |=(1<<pinNumber);
	return 0;
}
void resetPinB(int pinNumber){
	PORTA &=~(1<<pinNumber);
	return 0;
}
void togglePinB(int pinNumber){
	PORTA ^=(1<<pinNumber);
	return 0;
}
int isPressedB(int pinNumber){
	if (PINA | (1<<pinNumber))
	{
		return 1;
	}
	else{
		return 0;
	}
}
//--------------------------PORTC----------------------------
void setPinC(int pinNumber){
	PORTA |=(1<<pinNumber);
	return 0;
}
void resetPinC(int pinNumber){
	PORTA &=~(1<<pinNumber);
	return 0;
}
void togglePinC(int pinNumber){
	PORTA ^=(1<<pinNumber);
	return 0;
}
int isPressedC(int pinNumber){
	if (PINA | (1<<pinNumber))
	{
		return 1;
	}
	else{
		return 0;
	}
}
//------------------------- PORTD-----------------------------
void setPinD(int pinNumber){
	PORTA |=(1<<pinNumber);
	return 0;
}
void resetPinD(int pinNumber){
	PORTA &=~(1<<pinNumber);
	return 0;
}
void togglePinD(int pinNumber){
	PORTA ^=(1<<pinNumber);
	return 0;
}
int isPressedD(int pinNumber){
	if (PINA | (1<<pinNumber))
	{
		return 1;
	}
	else{
		return 0;
	}
}
