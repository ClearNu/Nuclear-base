#include <REGX52.H>


/**
  * @brief  定时器0初始化,1毫秒@12.000Mhz
  * @param  无
  * @retval 无
  */





void Timer0_Init(void)		//1??@12.000MHz
{
		TMOD &= 0xF0;		
		TMOD |= 0x01;	
		TL0 = 0x9C;		//??????
		TH0 = 0xFF;		//??????
		TF0 = 0;		
		TR0 = 1;		
		ET0=1;
		EA=1;
		PT0=0;
}
/*
void Timer0_Routine() interrupt 1
{
		static unsigned int T0Count;
		TL0 = 0x9C;		//??????
		TH0 = 0xFF;		//??????
		T0Count++;
		if(T0Count>=1000)
		{
			T0Count=0;
			
		}
}
*/