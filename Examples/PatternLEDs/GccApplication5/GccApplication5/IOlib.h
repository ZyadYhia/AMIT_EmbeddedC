/*
 * IOlib.h
 *
 * Created: 9/28/2020 2:49:17 PM
 *  Author: User
 */ 


#ifndef IOLIB_H_
#define IOLIB_H_

//--------------------------PORTA----------------------------
void dPortA(int data);
void setPortA(int data);
void setPinA(int pinNumber);
void resetPinA(int pinNumber);
void togglePinA(int pinNumber);
int isPressedA(int pinNumber);
//--------------------------PORTB----------------------------
void dPortB(int data);
void setPortB(int data);
void setPinB(int pinNumber);
void resetPinB(int pinNumber);
void togglePinB(int pinNumber);
int isPressedB(int pinNumber);
//--------------------------PORTC----------------------------
void dPortC(int data);
void setPortC(int data);
void setPinC(int pinNumber);
void resetPinC(int pinNumber);
void togglePinC(int pinNumber);
int isPressedC(int pinNumber);
//------------------------- POTD-----------------------------
void dPortD(int data);
void setPortD(int data);
void setPinD(int pinNumber);
void resetPinD(int pinNumber);
void togglePinD(int pinNumber);
int isPressedD(int pinNumber);
//------------------------------------------------------

//------------------------------------------------------
//--------------------------PORTA----------------------------
void dPortA(int data){
	if (data == 0)
	{
		DDRA = 0x00;
	} 
	else
	{
		DDRA = 0xFF;
	}
}
void setPortA(int data){
	PORTA = data;
}
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
void dPortB(int data){
	if (data == 0)
	{
		DDRB = 0x00;
	}
	else
	{
		DDRB = 0xFF;
	}
}
void setPortB(int data){
	PORTB = data;
}
void setPinB(int pinNumber){
	PORTB |=(1<<pinNumber);
}
void resetPinB(int pinNumber){
	PORTB &=~(1<<pinNumber);
}
void togglePinB(int pinNumber){
	PORTB ^=(1<<pinNumber);
}
int isPressedB(int pinNumber){
	if (PINB | (1<<pinNumber))
	{
		return 1;
	}
	else{
		return 0;
	}
}
//--------------------------PORTC----------------------------
void dPortC(int data){
	if (data == 0)
	{
		DDRC = 0x00;
	}
	else
	{
		DDRC = 0xFF;
	}
}
void setPortC(int data){
	PORTC = data;
}
void setPinC(int pinNumber){
	PORTC |=(1<<pinNumber);
}
void resetPinC(int pinNumber){
	PORTC &=~(1<<pinNumber);
}
void togglePinC(int pinNumber){
	PORTC ^=(1<<pinNumber);
}
int isPressedC(int pinNumber){
	if (PINC | (1<<pinNumber))
	{
		return 1;
	}
	else{
		return 0;
	}
}
//------------------------- PORTD-----------------------------
void dPortD(int data){
	if (data == 0)
	{
		DDRD = 0x00;
	}
	else
	{
		DDRD = 0xFF;
	}
}
void setPortD(int data){
	PORTD = data;
}
void setPinD(int pinNumber){
	PORTD |=(1<<pinNumber);
}
void resetPinD(int pinNumber){
	PORTD &=~(1<<pinNumber);
}
void togglePinD(int pinNumber){
	PORTD ^=(1<<pinNumber);
}
int isPressedD(int pinNumber){
	if (PIND | (1<<pinNumber))
	{
		return 1;
	}
	else{
		return 0;
	}
}


#endif /* IOLIB_H_ */