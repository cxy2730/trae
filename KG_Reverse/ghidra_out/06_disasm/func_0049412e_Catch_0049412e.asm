; Function: Catch@0049412e
; Entry:    0049412e
; Size:     21 bytes

0049412e  MOV ECX,dword ptr [EBP + -0x2c]
00494131  CALL 0x00493701
00494136  MOV EAX,dword ptr [EBP + -0x24]
00494139  OR dword ptr [EAX + 0x2c],0xffffffff
0049413d  MOV EAX,0x494143
00494142  RET
