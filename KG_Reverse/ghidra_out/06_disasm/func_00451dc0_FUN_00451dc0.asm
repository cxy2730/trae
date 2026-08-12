; Function: FUN_00451dc0
; Entry:    00451dc0
; Size:     68 bytes

00451dc0  PUSH ESI
00451dc1  MOV ESI,dword ptr [ESP + 0x8]
00451dc5  PUSH ESI
00451dc6  MOV EAX,dword ptr [ESI + 0x1b0]
00451dcc  MOV dword ptr [EAX],0x451b50
00451dd2  MOV dword ptr [EAX + 0x10],0x0
00451dd9  MOV dword ptr [EAX + 0x14],0x0
00451de0  MOV dword ptr [EAX + 0x18],0x1
00451de7  MOV EAX,dword ptr [ESI]
00451de9  CALL dword ptr [EAX + 0x10]
00451dec  MOV ECX,dword ptr [ESI + 0x1b4]
00451df2  PUSH ESI
00451df3  CALL dword ptr [ECX]
00451df5  ADD ESP,0x8
00451df8  MOV dword ptr [ESI + 0xa0],0x0
00451e02  POP ESI
00451e03  RET
