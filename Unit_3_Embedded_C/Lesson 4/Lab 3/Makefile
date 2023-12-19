#@copyright : Bavly-Mansour
CC=arm-none-eabi-
CFLAGS=  -mcpu=cortex-m4 -gdwarf-2 -g
INCS= -I .
LIBS=
SRC= $(wildcard *.c)
OBJ= $(SRC:.c=.o)
As = $(wildcard *.s)
AsOBJ = $(As:.s=.o)
Project_name=unit3_lab4_cortexM4

all: $(Project_name).bin
	@echo "==============================="
	@echo "==============DONE============="
	@echo "==============================="

%.o: %.c
	$(CC)gcc.exe -c $(CFLAGS) $(INCS) $< -o $@
	@echo "==============Complier gcc DONE=============="


%.o:%.s
	$(CC)as.exe $(CFLAGS) $(INCS) $< -o $@
	@echo "==============STARTUP DONE=============="

$(Project_name).elf: $(OBJ) $(AsOBJ)
	$(CC)ld.exe -T linker_script.ld -Map=app.map $(OBJ) $(AsOBJ) -o $@
	cp $(Project_name).elf	$(Project_name).axf
	@echo "==============linker DONE=============="

$(Project_name).bin: $(Project_name).elf
	$(CC)objcopy.exe -O binary $(Project_name).elf $(Project_name).bin 
	@echo "=============File.bin DONE=============="

$(Project_name).hex: $(Project_name).elf
	$(CC)objcopy.exe -O binary $< $@
	@echo "==============File.hex DONE=============="

clean:
	rm *.elf *.bin
	@echo "==========CLEAN=============="

clean_all:
	rm *.elf *.bin *.o
	@echo "==========CLEAN ALL=============="