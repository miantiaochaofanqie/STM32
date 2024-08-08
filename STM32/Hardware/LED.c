#include "stm32f10x.h"                  // Device header

void LED_Init(void)
{
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE);
	GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; //tuiwanshuchu
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_All;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOA,&GPIO_InitStructure);
	GPIO_SetBits(GPIOA,GPIO_Pin_All);
}
void LED_ON(int i)
{
	switch(i){
		case 1  :
       GPIO_ResetBits(GPIOA,GPIO_Pin_1);
       break;
    case 2  :
       GPIO_ResetBits(GPIOA,GPIO_Pin_2);
       break;
    case 3 :
       GPIO_ResetBits(GPIOA,GPIO_Pin_3);
       break; 
		case  4 :
       GPIO_ResetBits(GPIOA,GPIO_Pin_4);
       break;
		case 5  :
       GPIO_ResetBits(GPIOA,GPIO_Pin_5);
       break;
		case 6  :
       GPIO_ResetBits(GPIOA,GPIO_Pin_6);
       break;
		case 7  :
       GPIO_ResetBits(GPIOA,GPIO_Pin_7);
       break;
		case 8  :
       GPIO_ResetBits(GPIOA,GPIO_Pin_8);
       break;
		case 9  :
       GPIO_ResetBits(GPIOA,GPIO_Pin_9);
       break;
		case 10  :
       GPIO_ResetBits(GPIOA,GPIO_Pin_10);
       break;
		case 11  :
       GPIO_ResetBits(GPIOA,GPIO_Pin_11);
       break;
		case 12  :
       GPIO_ResetBits(GPIOA,GPIO_Pin_12);
       break;
		case 13  :
       GPIO_ResetBits(GPIOA,GPIO_Pin_13);
       break;
}
}
void LED_OFF(int i)
{
	switch(i){
		case 1  :
       GPIO_SetBits(GPIOA,GPIO_Pin_1);
       break;
    case 2  :
       GPIO_SetBits(GPIOA,GPIO_Pin_2);
       break;
    case 3 :
       GPIO_SetBits(GPIOA,GPIO_Pin_3);
       break; 
		case  4 :
       GPIO_SetBits(GPIOA,GPIO_Pin_4);
       break;
		case 5  :
       GPIO_SetBits(GPIOA,GPIO_Pin_5);
       break;
		case 6  :
       GPIO_SetBits(GPIOA,GPIO_Pin_6);
       break;
		case 7  :
       GPIO_SetBits(GPIOA,GPIO_Pin_7);
       break;
		case 8  :
       GPIO_SetBits(GPIOA,GPIO_Pin_8);
       break;
		case 9  :
       GPIO_SetBits(GPIOA,GPIO_Pin_9);
       break;
		case 10  :
       GPIO_SetBits(GPIOA,GPIO_Pin_10);
       break;
		case 11  :
       GPIO_SetBits(GPIOA,GPIO_Pin_11);
       break;
		case 12  :
       GPIO_SetBits(GPIOA,GPIO_Pin_12);
       break;
		case 13  :
       GPIO_SetBits(GPIOA,GPIO_Pin_13);
       break;
}
}