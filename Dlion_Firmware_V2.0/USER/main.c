#include "sys.h"
#include "usart.h"		
#include "delay.h"	
#include "beep.h" 
#include "adc.h"
#include "24cxx.h"
#include "flash.h" 
#include "spi.h"
#include "Dlion.h"      



/*******************************************************������Դ��3D��ӡѧϰʹ��************************************************
																												Dlion-3D��ӡ����
																												3D�����ƴ���---------������̳:www.3dbinmaker.com
																												�ļ�˵����������   �汾��V1.0
																												Copyright(C)�������ڿƼ����޹�˾
																												All rights reserved
***********************************************************************************************************************************/



int main(void)
 {	
	SystemInit();			//ϵͳ��ʼ��	
	delay_init();	    	//��ʱ������ʼ��
	NVIC_Configuration(); 	//����NVIC�жϷ���2:2λ��ռ���ȼ���2λ��Ӧ���ȼ�
	TIM4_Int_Init(9,7199);//72M  7199��Ƶ��1s��Ҫ10000��72000000/7199=10000Hz����ʱ��Ƶ�ʣ�1ms��Ҫ10�����˴���9����1ms
	uart1_init(115200);	 	//���ڳ�ʼ��Ϊ115200
	BEEP_Init();         	//��ʼ���������˿�
	BEEP=1;  
	delay_ms(10);
	BEEP=0;	
	SPI2_Init();		   	//��ʼ��SD FLASH SPI�ӿ� 
	setup(); 
	loop();
 }
