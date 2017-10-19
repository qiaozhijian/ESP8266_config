#ifndef _ACTION_UART_H_
#define _ACTION_UART_H_

#include <stdint.h>
#include "stm32f407xx.h"

#define TXBUFFERSIZE 400
#define RXBUFFERSIZE  			120*1024//200  	//�����������ֽ��� 200
	  	
extern uint8_t  USART_RX_BUF[RXBUFFERSIZE]; //���ջ���,���USART_REC_LEN���ֽ�.ĩ�ֽ�Ϊ���з� 
extern uint16_t USART_RX_STA;         		//����״̬���	
extern uint32_t USART_RX_CNT;
char *itoa(int value, char *string, int radix);

void USART1_Init(uint32_t bound);
void USART3_Init(uint32_t bound);
void USART_printf(USART_TypeDef * USARTx,char* fmt,...);
#endif


