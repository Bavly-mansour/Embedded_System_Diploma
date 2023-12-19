/*This is linker script for LAB3 CPU=CORTEX-M4 ,by : ENG_BAVLY*/

MEMORY 	
{
	flash(RX) : ORIGIN = 0x00000000, LENGTH = 512M
	sram(RWX) : ORIGIN = 0x20000000, LENGTH = 512M
	/*flash memory origin and length , flash: read and execute*/
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
			_E_DATA = .;          /*end of data section */
		}>sram AT> flash          /*virtual memory :sram */

	.bss :{
			_S_bss = . ;         /*start of bss section */
			*(.bss*)
			_E_bss = . ;  
		}>sram 
                                /* bss are the uninitialized variables = zeros so ignore them from the flash */


}


