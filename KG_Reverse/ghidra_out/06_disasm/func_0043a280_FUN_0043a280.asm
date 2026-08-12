; Function: FUN_0043a280
; Entry:    0043a280
; Size:     17 bytes

0043a280  MOV EAX,dword ptr [ESP + 0x4]
0043a284  TEST EAX,EAX
0043a286  JZ 0x0043a290
0043a288  MOV ECX,dword ptr [ESP + 0x8]
0043a28c  MOV EDX,dword ptr [ECX]
0043a28e  MOV dword ptr [EAX],EDX
0043a290  RET
