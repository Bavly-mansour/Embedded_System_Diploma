/*
***************************************
***************************************
learn-in-depth 
By:Bavly Mansour
***************************************
***************************************
*/

#include <stdint.h>
//#define STACK_Start_SP 0x20001000  //txt replacement of STACK_Start_SP "stack pointer" to address 0x20001000
extern int main (void);            // define external int main (void)
void Reset_Handler (void);          //define rest_handler function 


/*Copying data from flash to SRAM and allocate space
 for bss and stack according to the memory bourders */


void Default_Handler ()
{
	Reset_Handler();
}

void NMI_Handler() __attribute__ ((weak,alias("Default_Handler")));;
void H_Fault_Handler() __attribute__ ((weak,alias("Default_Handler")));;


/*booking 1024 B locate by .bss through uninitialized  
array of int 256 element (256*4=1024)*/

static unsigned long Stack_top[256];

//array of pointer to function take nothing and return void 
void ( * const g_p_fn_Vectors[])() __attribute__ ((section(".vectors"))) ={
 (void (*)())   ((unsigned long)Stack_top + sizeof(Stack_top)),
 &Reset_Handler ,
 &NMI_Handler , 
 &H_Fault_Handler
};
 

extern unsigned int _E_text;
extern unsigned int _S_DATA;
extern unsigned int _E_DATA;
extern unsigned int _S_bss;
extern unsigned int _E_bss;
extern unsigned int _stack_top;


void Reset_Handler (void)
{
	// copying data from ROM to RAM
	unsigned int DATA_size = (unsigned char*)&_E_DATA - (unsigned char*)&_S_DATA;
	unsigned char* P_src = (unsigned char*)&_E_text ;
	unsigned char* P_dst = (unsigned char*)&_S_DATA ;

	for (int i =0 ; i < DATA_size ; i++){
		*((unsigned char *)P_dst++) = *((unsigned char*)P_src++) ;
	}



	// bss with zero 
	unsigned int bss_size = (unsigned char*)&_E_bss - (unsigned char*)&_S_bss ;
	P_dst = (unsigned char*)&_S_bss ;
	for (int i =0 ; i < bss_size ; i++ ){
		*((unsigned char*)P_dst++) = *((unsigned char*)P_src++) ; 
	}
	//go to main()
	main();
}

