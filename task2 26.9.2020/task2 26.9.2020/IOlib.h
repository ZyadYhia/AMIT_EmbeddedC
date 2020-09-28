/*
 * IOlib.h
 *
 * Created: 9/28/2020 2:49:17 PM
 *  Author: User
 */ 


#ifndef IOLIB_H_
#define IOLIB_H_

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
//--------------------------PORTA----------------------------
void setPinA(int pinNumber){
	PORTA |=(1<<pinNumber);
}
void resetPinA(int pinNumber){
	PORTA &=~(1<<pinNumber);
}
void togglePinA(int pinNumber){
	PORTA ^=(1<<pinNumber);
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
}
void resetPinB(int pinNumber){
	PORTA &=~(1<<pinNumber);
}
void togglePinB(int pinNumber){
	PORTA ^=(1<<pinNumber);
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
}
void resetPinC(int pinNumber){
	PORTA &=~(1<<pinNumber);
}
void togglePinC(int pinNumber){
	PORTA ^=(1<<pinNumber);
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
}
void resetPinD(int pinNumber){
	PORTA &=~(1<<pinNumber);
}
void togglePinD(int pinNumber){
	PORTA ^=(1<<pinNumber);
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


#endif /* IOLIB_H_ */