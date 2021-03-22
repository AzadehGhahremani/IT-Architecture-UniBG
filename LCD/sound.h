/*
 * sound.h
 *
 * 
 *  Author: FaraDars
 */ 


#ifndef SOUND_H_
#define SOUND_H_

#include "avrlibdefs.h"

void beep(int freq, int t)
{
	sbi(DDRB,0);// Speaker
	while (t--)
	{
		sbi(PORTB,0); // _-_-_-_-
		for(int j=0;j<freq;j++);
		cbi(PORTB,0);
		for(int j=0;j<freq;j++);
	}
}


#endif /* SOUND_H_ */