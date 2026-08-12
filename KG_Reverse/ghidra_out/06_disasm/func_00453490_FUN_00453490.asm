; Function: FUN_00453490
; Entry:    00453490
; Size:     52 bytes

00453490  MOV EAX,dword ptr [ESP + 0x4]
00453494  XOR ECX,ECX
00453496  MOV EDX,dword ptr [EAX + 0x1b4]
0045349c  MOV dword ptr [EAX + 0xd8],ECX
004534a2  MOV dword ptr [EAX + 0x90],ECX
004534a8  MOV dword ptr [EAX + 0x19c],ECX
004534ae  MOV dword ptr [EDX + 0x50],ECX
004534b1  MOV EDX,dword ptr [EAX + 0x1b4]
004534b7  MOV dword ptr [EDX + 0x54],ECX
004534ba  MOV EAX,dword ptr [EAX + 0x1b4]
004534c0  MOV dword ptr [EAX + 0x5c],ECX
004534c3  RET
