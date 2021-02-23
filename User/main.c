#include <stc8.h>
#include <led.h>
#include <sysclk.h>
#include <gpioconfig.h>
#include <Delay.h>
#include <oled.h>

unsigned int num;
int main(void)
{
	sysclk_init();
	gpioconfig();
	OLED_Init();			//初始化OLED  
	OLED_Clear(); 
	num=38;
	while(1) 
	{		
		P01=0;
		OLED_Clear();
		OLED_ShowCHinese(0,0,0);//当
		OLED_ShowCHinese(18,0,1);//前
		OLED_ShowCHinese(36,0,2);//温
		OLED_ShowCHinese(54,0,3);//度
		OLED_ShowString(72,0,":",16);
		OLED_ShowCHinese(108,0,6);//℃
		OLED_ShowCHinese(0,3,4);//报
		OLED_ShowCHinese(18,3,5);//警
		OLED_ShowCHinese(36,3,2);//温
		OLED_ShowCHinese(54,3,3);//度
		OLED_ShowString(72,3,":",16);
		OLED_ShowNum(90,3,num,2,16);
		OLED_ShowCHinese(108,3,6);//℃ 
		delay_ms(8000);
		delay_ms(8000);
	}	  
}


