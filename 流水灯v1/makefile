rmobj=*.rel *.lst ./*.asm *.sym *.hex *.bin *.ihx *.lk *.map *.mem *.rst
.PHONY:clean compileAll all
clean:
	rm $(rmobj) 
	@echo "clean complete"
compileAll: 
	sdcc -c main.c
link:
	sdcc main.rel asm/delay.rel
delay:
	sdas8051 -l -s -o asm/delay.asm
all:    compileAll delay link
	packihx main.ihx > main.hex
	objcopy -I ihex -O binary main.hex main.bin
	\cp main.hex /home/jiayang/1TBDisk/单片机 
  
