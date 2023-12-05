#include "uart.h"
#define UART0DR *((volatile unsigned int*)((unsigned int*)0x101f1000))


//UART0DR is uart data register 
//volatile unsigned int* is data type 
//unsigned int* is casting 
// 0x101f1000 is the address


void Uart_Send_String (unsigned char* P_tx_string){

	//a function that receives a pointer P_tx_string 

	while (*P_tx_string != '\0')
	{
		// while string != null

		UART0DR = (unsigned int)(*P_tx_string);
		P_tx_string ++;
	}

}