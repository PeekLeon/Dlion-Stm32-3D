#include "beep.h"


/*******************************************************������Դ��3D��ӡѧϰʹ��************************************************
																												Dlion-3D��ӡ����
																												3D�����ƴ���---------������̳:www.3dbinmaker.com
																												�ļ�˵������������������   �汾��V1.0
																												Copyright(C)�������ڿƼ����޹�˾
																												All rights reserved
***********************************************************************************************************************************/

	   

//��ʼ��PB8Ϊ�����.��ʹ������ڵ�ʱ��		    
//��������ʼ��
void BEEP_Init(void)
{
 
 GPIO_InitTypeDef  GPIO_InitStructure;
 	
 RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOE, ENABLE);	 //ʹ��GPIOE�˿�ʱ��
 
 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_4;				 //BEEP-->PE.4 �˿�����
 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 //�������
 GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;	 //�ٶ�Ϊ50MHz
 GPIO_Init(GPIOE, &GPIO_InitStructure);	 //���ݲ�����ʼ��GPIOE.4
 
 GPIO_ResetBits(GPIOE,GPIO_Pin_4);//���0���رշ��������


}
void beep(void)
{	BEEP=1;  
	delay_ms(3);
	BEEP=0;	
	delay_ms(3);
}

