; Function: FUN_0049b2d2
; Entry:    0049b2d2
; Size:     103 bytes

0049b2d2  PUSH EBP
0049b2d3  MOV EBP,ESP
0049b2d5  MOV EAX,dword ptr [EBP + 0x8]
0049b2d8  SUB EAX,0x2b
0049b2db  JZ 0x0049b327
0049b2dd  DEC EAX
0049b2de  JZ 0x0049b31a
0049b2e0  DEC EAX
0049b2e1  JZ 0x0049b30d
0049b2e3  SUB EAX,0xc
0049b2e6  JZ 0x0049b2fb
0049b2e8  PUSH dword ptr [EBP + 0x14]
0049b2eb  PUSH dword ptr [EBP + 0x10]
0049b2ee  PUSH dword ptr [EBP + 0xc]
0049b2f1  PUSH dword ptr [EBP + 0x8]
0049b2f4  CALL 0x00496508
0049b2f9  JMP 0x0049b335
0049b2fb  MOV EAX,dword ptr [ECX]
0049b2fd  PUSH dword ptr [EBP + 0x10]
0049b300  CALL dword ptr [EAX + 0xc0]
0049b306  MOV ECX,dword ptr [EBP + 0x14]
0049b309  MOV dword ptr [ECX],EAX
0049b30b  JMP 0x0049b332
0049b30d  MOV EAX,dword ptr [ECX]
0049b30f  PUSH dword ptr [EBP + 0x10]
0049b312  CALL dword ptr [EAX + 0xc4]
0049b318  JMP 0x0049b332
0049b31a  MOV EAX,dword ptr [ECX]
0049b31c  PUSH dword ptr [EBP + 0x10]
0049b31f  CALL dword ptr [EAX + 0xbc]
0049b325  JMP 0x0049b332
0049b327  MOV EAX,dword ptr [ECX]
0049b329  PUSH dword ptr [EBP + 0x10]
0049b32c  CALL dword ptr [EAX + 0xb8]
0049b332  PUSH 0x1
0049b334  POP EAX
0049b335  POP EBP
0049b336  RET 0x10
