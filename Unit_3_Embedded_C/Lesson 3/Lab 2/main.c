/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Eng Bavly Mansour
 * @brief          : Main program body
 ******************************************************************************
 */

#include <stdint.h>
//#include <platform_Types.h>


#define RCC_BASE       0x40021000
#define GPIOA_BASE     0x40010800
#define RCC_APB2ENR    *(volatile uint32_t*) (RCC_BASE + 0x18)
// 0x18 is the offset of base memory address
#define GPIOA_CHR      *(volatile uint32_t*) (GPIOA_BASE +0x04)
// general purpose input output port A
#define GPIOA_ODR      *(volatile uint32_t*) (RCC_BASE + 0x0c)
// output data register

//#if !defined(__SOFT_FP__) && defined(__ARM_FP)
//  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
//#endif

unsigned char g_variable[3] = {1,2,3};
unsigned char const const_var[3] = {1,2,3};
unsigned char bss_var[3] ;

/*g_variable : global variable 
const_var    : constant variable 
bss_var      : uninitialized variable*/

int main(void)
{
	/* Loop forever */
	int i;
	RCC_APB2ENR |=(1<<2);
	GPIOA_CHR &= 0xff0ffff;
	GPIOA_CHR |= 0x00200000;
	while (1){

		GPIOA_ODR |=1<<13;
		// set 1 to a bit |= 1<<n
		for (i =0 ; i < 5000 ;  i++)
			GPIOA_ODR &=~ (1<<13);
		// clear a bit &=~(1<<n)
		for (i=0; i< 5000 ; i++);

	}
	return 0;
}
