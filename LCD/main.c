/*
 * LCD HD44780
 *
 * 
 * Author : FaraDars
 */ 

#include <avr/io.h>
#include "global.h"
#include <util/delay.h>
#include "lcd.h"
#include "rprintf.h"
#include "sound.h"



int main(void)
{
    /* Replace with your application code */
	lcdInit();
	rprintfInit(lcdDataWrite);

	for (int i=10;i>=0;i--)
	{
		lcdClear();
		lcdGotoXY(7,0);
		rprintf("%d",i);
		beep(100,80);
		_delay_ms(1000);
	}

	beep(200,80);
	beep(100,160);
	beep(50,320);

	lcdClear();
	lcdGotoXY(4,0);
	rprintf("FaraDars");
	lcdGotoXY(0,1);
	rprintf("HD44780 2x16 LCD");

    while (1) 
    {
    }
}

