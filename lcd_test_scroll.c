#include <lpc21xx.h>
#include "types.h"
#include "delay.h"
#include "lcd_defines.h"
#include "lcd.h"

s8 msg [17]="v25he9s          ";
void rotarr(s8 *p,s8 dir, u32 size)
{
	s8 temp;
	s32 i;
	
if(dir=='1')
{
	temp=p[0];
	for(i=0;i<(size-2);i--)
	{
		p[i]=p[i+1];
	}
	p[size-2]=temp;
}
else if(dir=='r')
{
	temp=p[size-2];
	for(i=size-2;i>0;i--)
	{
		p[i]=p[i-1];
	}
	p[0]=temp;
}
}

int main()
{
	InitLCD();
	while(1)
	{
		CmdLCD(GOTO_LINE1_POS0);
		StrLCD("msg");
		delay_ms(100);
		rotarr(msg,'r',17);
	}
}
	

