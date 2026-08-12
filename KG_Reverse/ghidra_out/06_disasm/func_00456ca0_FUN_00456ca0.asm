; Function: FUN_00456ca0
; Entry:    00456ca0
; Size:     81 bytes

00456ca0  MOV ECX,dword ptr [ESP + 0x4]
00456ca4  PUSH ESI
00456ca5  MOV EDX,0x1
00456caa  MOV ESI,dword ptr [ECX + 0x144]
00456cb0  MOV EAX,dword ptr [ECX + 0x1a8]
00456cb6  CMP ESI,EDX
00456cb8  JG 0x00456ce4
00456cba  MOV EDX,dword ptr [ECX + 0x13c]
00456cc0  MOV ESI,dword ptr [ECX + 0x94]
00456cc6  MOV ECX,dword ptr [ECX + 0x148]
00456ccc  DEC EDX
00456ccd  CMP ESI,EDX
00456ccf  JNC 0x00456ce1
00456cd1  MOV EDX,dword ptr [ECX + 0xc]
00456cd4  XOR ECX,ECX
00456cd6  MOV dword ptr [EAX + 0x1c],EDX
00456cd9  MOV dword ptr [EAX + 0x14],ECX
00456cdc  MOV dword ptr [EAX + 0x18],ECX
00456cdf  POP ESI
00456ce0  RET
00456ce1  MOV EDX,dword ptr [ECX + 0x48]
00456ce4  XOR ECX,ECX
00456ce6  MOV dword ptr [EAX + 0x1c],EDX
00456ce9  MOV dword ptr [EAX + 0x14],ECX
00456cec  MOV dword ptr [EAX + 0x18],ECX
00456cef  POP ESI
00456cf0  RET
