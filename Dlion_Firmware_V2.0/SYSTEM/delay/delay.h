#ifndef __DELAY_H
#define __DELAY_H 			   
#include "sys.h"


/*******************************************************������Դ��3D��ӡѧϰʹ��************************************************
																												Dlion-3D��ӡ����
																												3D�����ƴ���---------������̳:www.3dbinmaker.com
																												�ļ�˵����delay��ʱ����   �汾��V1.0
																												Copyright(C)�������ڿƼ����޹�˾
																												All rights reserved
***********************************************************************************************************************************/


extern volatile unsigned long  timer4_millis;
#define millis() timer4_millis 	 
void delay_init(void);
void TIM4_Int_Init(u16 arr,u16 psc)	;
void delay_ms(u16 nms);
void delay_us(u32 nus);

#endif





























