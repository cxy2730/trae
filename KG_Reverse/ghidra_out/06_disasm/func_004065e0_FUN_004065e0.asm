; Function: FUN_004065e0
; Entry:    004065e0
; Size:     57 bytes

004065e0  MOV EAX,dword ptr [ESP + 0x4]
004065e4  MOV EDX,dword ptr [ECX + 0x4]
004065e7  PUSH ESI
004065e8  MOV ESI,dword ptr [EAX + 0x4]
004065eb  MOV dword ptr [ECX + 0x4],ESI
004065ee  MOV ESI,dword ptr [EAX + 0x8]
004065f1  MOV dword ptr [EAX + 0x4],EDX
004065f4  MOV EDX,dword ptr [ECX + 0x8]
004065f7  MOV dword ptr [ECX + 0x8],ESI
004065fa  MOV ESI,dword ptr [EAX + 0xc]
004065fd  MOV dword ptr [EAX + 0x8],EDX
00406600  MOV EDX,dword ptr [ECX + 0xc]
00406603  MOV dword ptr [ECX + 0xc],ESI
00406606  MOV ESI,dword ptr [EAX + 0x10]
00406609  MOV dword ptr [EAX + 0xc],EDX
0040660c  MOV EDX,dword ptr [ECX + 0x10]
0040660f  MOV dword ptr [ECX + 0x10],ESI
00406612  MOV dword ptr [EAX + 0x10],EDX
00406615  POP ESI
00406616  RET 0x4
