; Function: FUN_004540b0
; Entry:    004540b0
; Size:     31 bytes

004540b0  MOV EAX,dword ptr [ESP + 0x4]
004540b4  PUSH 0x118
004540b9  PUSH 0x0
004540bb  PUSH EAX
004540bc  MOV ECX,dword ptr [EAX + 0x4]
004540bf  CALL dword ptr [ECX]
004540c1  ADD ESP,0xc
004540c4  MOV dword ptr [EAX + 0x114],0x0
004540ce  RET
