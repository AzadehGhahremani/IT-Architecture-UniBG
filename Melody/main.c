/*
 * Melody.c
 *
 * 
 * Author : FaraDars
 */ 

#include <avr/io.h>
#include "sound.h"


int main(void)
{
    /* Replace with your application code */
    while (1) 
    {
		beep(200,80);
		beep(100,160);
    }
}

