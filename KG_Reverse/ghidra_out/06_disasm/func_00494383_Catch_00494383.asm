; Function: Catch@00494383
; Entry:    00494383
; Size:     21 bytes

00494383  MOV ECX,dword ptr [EBP + -0x24]
00494386  CALL 0x00493701
0049438b  MOV EAX,dword ptr [EBP + -0x1c]
0049438e  OR dword ptr [EAX + 0x2c],0xffffffff
00494392  MOV EAX,0x494398
00494397  RET
