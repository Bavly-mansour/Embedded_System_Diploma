/*This is linker script for LAB2 CPU=CORTEX-M3 ,by : ENG_BAVLY*/

MEMORY 	
{
	flash(RX) :	ORIGIN = 0X08000000 , LENGTH = 128K
	/*flash memory origin and length , flash: read and execute*/
 	sram(RWX) : ORIGIN = 0X20000000 , LENGTH = 20K
 	/*sRAM origin and length , sram : read write execute*/

}
/*sections*/
SECTIONS {
	.text :{
		*(.vectors*)
			*(.text*)
			*(.rodata)
			_E_text = .;           /*end of text section in flash @ 0x08000b3*/

		}> flash 
	                          /*everything inside .text put it in flash */

	.data :{
			_S_DATA = .;          /*start of data section @ 0x08000b3 the same 	address of end text section */
			*(.data)
			. = ALIGN(4) ;
			_E_DATA = .;         /*end of data section */
		}>sram AT > flash        /*virtual memory :sram */

	.bss :{
			_S_bss = . ;         /*start of bss section */
			*(.bss*)
			. = ALIGN(4);
			_E_bss = . ;  
			. = ALIGN(4);       /*end of bss section */        
			. = . + 0x1000 ;
			_stack_top = . ;
		}>sram 
/* bss are the uninitialized variables = zeros so ignore them from the flash */


}


