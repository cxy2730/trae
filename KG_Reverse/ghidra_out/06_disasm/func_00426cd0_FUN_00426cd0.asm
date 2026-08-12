; Function: FUN_00426cd0
; Entry:    00426cd0
; Size:     77 bytes

00426cd0  PUSH ESI
00426cd1  MOV ESI,ECX
00426cd3  MOV EAX,dword ptr [ESI + 0x4]
00426cd6  TEST EAX,EAX
00426cd8  JNZ 0x00426ce3
00426cda  MOV EAX,dword ptr [ESI + 0xc]
00426cdd  TEST EAX,EAX
00426cdf  JZ 0x00426ce3
00426ce1  CALL EAX
00426ce3  MOV ECX,dword ptr [ESP + 0x8]
00426ce7  TEST ECX,ECX
00426ce9  JZ 0x00426d04
00426ceb  MOV EAX,dword ptr [ESP + 0xc]
00426cef  TEST EAX,EAX
00426cf1  JZ 0x00426d04
00426cf3  MOV dword ptr [ESI + 0x8],EAX
00426cf6  MOV EAX,dword ptr [ESP + 0x10]
00426cfa  MOV dword ptr [ESI + 0x4],ECX
00426cfd  MOV dword ptr [ESI + 0xc],EAX
00426d00  POP ESI
00426d01  RET 0xc
00426d04  MOV dword ptr [ESI + 0x4],0x0
00426d0b  MOV dword ptr [ESI + 0x8],0x0
00426d12  MOV dword ptr [ESI + 0xc],0x0
00426d19  POP ESI
00426d1a  RET 0xc
