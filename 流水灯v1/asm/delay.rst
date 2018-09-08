ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Intel 8051), page 1.
Hexadecimal [24-Bits]



                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.5.0 #9253 (Apr  3 2018) (Linux)
                                      4 ; This file was generated Sat Sep  8 14:20:58 2018
                                      5 ;--------------------------------------------------------
                                      6 	.module delay
                                      7 	.optsdcc -mmcs51 --model-small
                                      8 	
                                      9 ;--------------------------------------------------------
                                     10 ; Public variables in this module
                                     11 ;--------------------------------------------------------
                                     12 	.globl _delaySecond
                                     13 	.globl _delayMs
                                     14 ;--------------------------------------------------------
                                     15 ; special function registers
                                     16 ;--------------------------------------------------------
                                     17 	.area RSEG    (ABS,DATA)
      000000                         18 	.org 0x0000
                                     19 ;--------------------------------------------------------
                                     20 ; special function bits
                                     21 ;--------------------------------------------------------
                                     22 	.area RSEG    (ABS,DATA)
      000000                         23 	.org 0x0000
                                     24 ;--------------------------------------------------------
                                     25 ; overlayable register banks
                                     26 ;--------------------------------------------------------
                                     27 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                         28 	.ds 8
                                     29 ;--------------------------------------------------------
                                     30 ; internal ram data
                                     31 ;--------------------------------------------------------
                                     32 	.area DSEG    (DATA)
                                     33 ;--------------------------------------------------------
                                     34 ; overlayable items in internal ram 
                                     35 ;--------------------------------------------------------
                                     36 	.area	OSEG    (OVR,DATA)
                                     37 ;--------------------------------------------------------
                                     38 ; indirectly addressable internal ram data
                                     39 ;--------------------------------------------------------
                                     40 	.area ISEG    (DATA)
                                     41 ;--------------------------------------------------------
                                     42 ; absolute internal ram data
                                     43 ;--------------------------------------------------------
                                     44 	.area IABS    (ABS,DATA)
                                     45 	.area IABS    (ABS,DATA)
                                     46 ;--------------------------------------------------------
                                     47 ; bit data
                                     48 ;--------------------------------------------------------
                                     49 	.area BSEG    (BIT)
                                     50 ;--------------------------------------------------------
                                     51 ; paged external ram data
                                     52 ;--------------------------------------------------------
                                     53 	.area PSEG    (PAG,XDATA)
                                     54 ;--------------------------------------------------------
                                     55 ; external ram data
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Intel 8051), page 2.
Hexadecimal [24-Bits]



                                     56 ;--------------------------------------------------------
                                     57 	.area XSEG    (XDATA)
                                     58 ;--------------------------------------------------------
                                     59 ; absolute external ram data
                                     60 ;--------------------------------------------------------
                                     61 	.area XABS    (ABS,XDATA)
                                     62 ;--------------------------------------------------------
                                     63 ; external initialized ram data
                                     64 ;--------------------------------------------------------
                                     65 	.area XISEG   (XDATA)
                                     66 	.area HOME    (CODE)
                                     67 	.area GSINIT0 (CODE)
                                     68 	.area GSINIT1 (CODE)
                                     69 	.area GSINIT2 (CODE)
                                     70 	.area GSINIT3 (CODE)
                                     71 	.area GSINIT4 (CODE)
                                     72 	.area GSINIT5 (CODE)
                                     73 	.area GSINIT  (CODE)
                                     74 	.area GSFINAL (CODE)
                                     75 	.area CSEG    (CODE)
                                     76 ;--------------------------------------------------------
                                     77 ; global & static initialisations
                                     78 ;--------------------------------------------------------
                                     79 	.area HOME    (CODE)
                                     80 	.area GSINIT  (CODE)
                                     81 	.area GSFINAL (CODE)
                                     82 	.area GSINIT  (CODE)
                                     83 ;--------------------------------------------------------
                                     84 ; Home
                                     85 ;--------------------------------------------------------
                                     86 	.area HOME    (CODE)
                                     87 	.area HOME    (CODE)
                                     88 ;--------------------------------------------------------
                                     89 ; code
                                     90 ;--------------------------------------------------------
                                     91 	.area CSEG    (CODE)
                                     92 ;------------------------------------------------------------
                                     93 ;Allocation info for local variables in function 'delay'
                                     94 ;------------------------------------------------------------
                                     95 ;second                    Allocated to registers r7 
                                     96 ;i                         Allocated to registers r6 
                                     97 ;j                         Allocated to registers r5 
                                     98 ;------------------------------------------------------------
                                     99 ;	delay.c:1: void delay(unsigned char second)
                                    100 ;	-----------------------------------------
                                    101 ;	 function delay
                                    102 ;	-----------------------------------------
      00007F                        103 _delaySecond:
                           000007   104 	ar7 = 0x07
                           000006   105 	ar6 = 0x06
                           000005   106 	ar5 = 0x05
                           000004   107 	ar4 = 0x04
                           000003   108 	ar3 = 0x03
                           000002   109 	ar2 = 0x02
                           000001   110 	ar1 = 0x01
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Intel 8051), page 3.
Hexadecimal [24-Bits]



                           000000   111 	ar0 = 0x00
      00007F AF 82            [24]  112 	mov	r7,dpl
      000081 7E C8            [12]  113 	mov	r6,#0xC8
                                    114 ;	delay.c:5: second=second*10;
      000083 EF               [12]  115 	mov	a,r7
      000084 75 F0 0A         [24]  116 	mov	b,#0x0A
      000087 A4               [48]  117 	mul	ab
      000088 FF               [12]  118 	mov	r7,a
      000089                        119 d1:
      000089 7E C8            [12]  120 	mov	r6,#0xC8
      00008B                        121 d2:
      00008B 7D F8            [12]  122 	mov	r5,#0xF8
      00008D                        123 d3:
      00008D DD FE            [24]  124 	djnz	r5,d3
      00008F DE FA            [24]  125 	djnz	r6,d2
      000091 DF F6            [24]  126 	djnz	r7,d1
      000093 22               [24]  127         ret
      000094                        128 _delayMs:
      000094 AF 82            [24]  129 	mov	r7,dpl
      000096                        130 dms1:
      000096 AE 83            [24]  131 	mov	r6,dph
      000098                        132 dms2:
      000098 7D FA            [12]  133 	mov	r5,#0xFA
      00009A                        134 dms3:
      00009A 00               [12]  135 	nop
      00009B 00               [12]  136 	nop
      00009C DD FC            [24]  137 	djnz	r5,dms3
      00009E DE F8            [24]  138 	djnz	r6,dms2
      0000A0 DF F4            [24]  139 	djnz	r7,dms1
      0000A2 22               [24]  140         ret		
      0000A3                        141 00110$:
                                    142 	.area CSEG    (CODE)
                                    143 	.area CONST   (CODE)
                                    144 	.area XINIT   (CODE)
                                    145 	.area CABS    (ABS,CODE)
