; Function: FUN_00417eb0
; Entry:    00417eb0
; Size:     39 bytes

00417eb0  PUSH ESI
00417eb1  MOV ESI,ECX
00417eb3  MOV EAX,dword ptr [ESI + 0x1b4]
00417eb9  TEST EAX,EAX
00417ebb  JZ 0x00417ed3
00417ebd  MOV dword ptr [ESI + 0x1b4],0x0
00417ec7  CALL 0x00418af0
00417ecc  MOV EAX,dword ptr [ESI]
00417ece  MOV ECX,ESI
00417ed0  CALL dword ptr [EAX + 0x58]
00417ed3  POP ESI
00417ed4  RET 0x8
