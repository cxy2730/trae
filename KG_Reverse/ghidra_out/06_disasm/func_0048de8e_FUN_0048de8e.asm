; Function: FUN_0048de8e
; Entry:    0048de8e
; Size:     55 bytes

0048de8e  CMP dword ptr [0x02fd9ac0],0x1
0048de95  PUSH ESI
0048de96  JLE 0x0048dea8
0048de98  MOV ESI,dword ptr [ESP + 0x8]
0048de9c  PUSH 0x4
0048de9e  PUSH ESI
0048de9f  CALL 0x0048a852
0048dea4  POP ECX
0048dea5  POP ECX
0048dea6  JMP 0x0048deb7
0048dea8  MOV ESI,dword ptr [ESP + 0x8]
0048deac  MOV EAX,[0x02fd98b4]
0048deb1  MOV AL,byte ptr [EAX + ESI*0x2]
0048deb4  AND EAX,0x4
0048deb7  TEST EAX,EAX
0048deb9  JNZ 0x0048dec1
0048debb  AND ESI,0xffffffdf
0048debe  SUB ESI,0x7
0048dec1  MOV EAX,ESI
0048dec3  POP ESI
0048dec4  RET
