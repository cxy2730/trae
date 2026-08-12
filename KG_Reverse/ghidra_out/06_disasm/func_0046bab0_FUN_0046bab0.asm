; Function: FUN_0046bab0
; Entry:    0046bab0
; Size:     31 bytes

0046bab0  MOV EAX,dword ptr [ESP + 0x4]
0046bab4  PUSH ESI
0046bab5  AND EAX,0xff
0046baba  PUSH 0x0
0046babc  PUSH EAX
0046babd  MOV ESI,ECX
0046babf  PUSH 0x0
0046bac1  CALL dword ptr [0x004a21b8]
0046bac7  MOV dword ptr [ESI],EAX
0046bac9  MOV EAX,ESI
0046bacb  POP ESI
0046bacc  RET 0x4
