#include "stm32f10x.h"  // Device header
#include "Delay.h" //delay
#include "LED.h"
#include "Key.h"

uint8_t KeyNum;

int main()
{
	
	LED_Init();
	Key_Init();
	while(1)
	{
		KeyNum = Key_GetNum();
		if(KeyNum == 1)
		{
			LED_ON(1);
		}
		if(KeyNum == 2)
		{
			LED_OFF(1);
		}
	}

}
