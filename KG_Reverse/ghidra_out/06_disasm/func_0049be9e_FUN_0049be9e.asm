; Function: FUN_0049be9e
; Entry:    0049be9e
; Size:     42 bytes

0049be9e  PUSH ESI
0049be9f  MOV ESI,ECX
0049bea1  PUSH dword ptr [ESP + 0xc]
0049bea5  CALL 0x0049a8c4
0049beaa  MOV EAX,dword ptr [ESP + 0x8]
0049beae  AND dword ptr [ESI + 0x2c],0x0
0049beb2  MOV dword ptr [ESI + 0x28],EAX
0049beb5  MOV dword ptr [ESI],0x2f9c2b0
0049bebb  MOV dword ptr [ESI + 0x30],0x1
0049bec2  MOV EAX,ESI
0049bec4  POP ESI
0049bec5  RET 0x8
