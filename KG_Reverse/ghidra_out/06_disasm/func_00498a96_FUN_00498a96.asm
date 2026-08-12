; Function: FUN_00498a96
; Entry:    00498a96
; Size:     39 bytes

00498a96  PUSH ESI
00498a97  CALL 0x0049c724
00498a9c  PUSH dword ptr [ESP + 0x10]
00498aa0  MOV ESI,dword ptr [ESP + 0x10]
00498aa4  MOV EAX,dword ptr [EAX + 0xc]
00498aa7  PUSH ESI
00498aa8  PUSH dword ptr [ESP + 0x10]
00498aac  PUSH EAX
00498aad  CALL dword ptr [0x004a24cc]
00498ab3  TEST EAX,EAX
00498ab5  JNZ 0x00498ab9
00498ab7  AND byte ptr [ESI],AL
00498ab9  POP ESI
00498aba  RET 0xc
