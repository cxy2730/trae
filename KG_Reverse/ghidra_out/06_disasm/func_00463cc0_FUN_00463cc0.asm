; Function: FUN_00463cc0
; Entry:    00463cc0
; Size:     29 bytes

00463cc0  MOV EAX,dword ptr [ESP + 0x4]
00463cc4  MOV ECX,dword ptr [ESP + 0x8]
00463cc8  CMP EAX,ECX
00463cca  JNC 0x00463cd7
00463ccc  PUSH 0xd
00463cce  CALL dword ptr [0x004a225c]
00463cd4  XOR EAX,EAX
00463cd6  RET
00463cd7  MOV EAX,0x1
00463cdc  RET
