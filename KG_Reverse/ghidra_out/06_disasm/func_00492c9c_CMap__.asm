; Function: CMap<>
; Entry:    00492c9c
; Size:     39 bytes

00492c9c  MOV EAX,ECX
00492c9e  XOR ECX,ECX
00492ca0  MOV dword ptr [EAX + 0x4],ECX
00492ca3  MOV dword ptr [EAX + 0xc],ECX
00492ca6  MOV dword ptr [EAX + 0x10],ECX
00492ca9  MOV dword ptr [EAX + 0x14],ECX
00492cac  MOV ECX,dword ptr [ESP + 0x4]
00492cb0  MOV dword ptr [EAX],0x2f9c9dc
00492cb6  MOV dword ptr [EAX + 0x8],0x11
00492cbd  MOV dword ptr [EAX + 0x18],ECX
00492cc0  RET 0x4
