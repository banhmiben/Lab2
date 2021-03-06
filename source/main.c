/*	Author: lab
 *  Partner(s) Name: Ben Pham
 *	Lab Section:
 *	Assignment: Lab #2  Exercise #3
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {

	DDRA = 0x00; PORTA = 0xFF;
	DDRB = 0x00; PORTB = 0xFF;
	DDRC = 0x00; PORTC = 0xFF;
	DDRD = 0xFF; PORTD = 0x00;

	unsigned unsigned totWeight = 0x00;
	unsigned char tmpA = 0x00;
	unsigned char tmpB = 0x00;
	unsigned char tmpC = 0x00;
	unsigned char tmpD0 = 0x00;
	unsigned char tmpD1 = 0x00;
	unsigned char Diff = 0x00;

	while(1) {

		tmpA = PORTA & 0xFF;
		tmpB = PORTA & 0xFF;
		tmpC = PORTA & 0xFF;
		totWeight = tmpA + tmpB + tmpC;

		if (totWeight > 0x008C) {
			tmpD0 = 0x01;
		} else {
			tmpD0 = 0x00;
		}

		Diff = A - C;
		if (Diff < 0) {
			Diff = Diff * (-1);
		}

		if (Diff > 0x50) {
			tmpD1 = 0x02;
		}

		PORTD = (totweight & 0x00FC) | tmpD1 | tmpD0;

	}



