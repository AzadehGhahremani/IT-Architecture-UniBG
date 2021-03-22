/*
 * GLCD.c
 *
 * 
 * Author : FaraDars
 */ 

#include <avr/io.h>
#include "glcd.h"
#include "rprintf.h"
#include "img.h"
#include <util/delay.h>

int main(void)
{
    /* Replace with your application code */
	int j=0;
	glcdInit();
	rprintfInit(glcdWriteChar);
    while (1) 
    {
		glcdClearScreen();
		glcdHome();
		switch (j)
		{
		case 0:
			rprintf("GLCD Test j=%d",j);
			break;
		case 1:
			glcdRectangle(10,5,40,100);
			break;
		case 2:
			glcdCircle(64,32,20);
			break;
		case 3:
			glcdGotoChar(2,6);
			glcdPutStr("FaraDars");
			break;
		case 4:
			glcdGotoChar(3,7);
			glcdWriteCharGr(0);		
			break;
		case 5:
			for (int i=0;i<1024;i++)
			{
				glcdDataWrite(pgm_read_byte(logo+i));
			}
			break;
		case 6:
			for (int i=0;i<1024;i++)
			{
				glcdDataWrite(pgm_read_byte(faradars+i));
			}
			break;
		}
		_delay_ms(2000);
		j++;
		if(j>6)j=0;
    }
}

