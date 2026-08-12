; Function: CMap<>
; Entry:    00492a36
; Size:     39 bytes

00492a36  MOV EAX,ECX
00492a38  XOR ECX,ECX
00492a3a  MOV dword ptr [EAX + 0x4],ECX
00492a3d  MOV dword ptr [EAX + 0xc],ECX
00492a40  MOV dword ptr [EAX + 0x10],ECX
00492a43  MOV dword ptr [EAX + 0x14],ECX
00492a46  MOV ECX,dword ptr [ESP + 0x4]
00492a4a  MOV dword ptr [EAX],0x2f9c5e4
00492a50  MOV dword ptr [EAX + 0x8],0x11
00492a57  MOV dword ptr [EAX + 0x18],ECX
00492a5a  RET 0x4
