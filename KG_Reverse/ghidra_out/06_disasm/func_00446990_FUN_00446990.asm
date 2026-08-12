; Function: FUN_00446990
; Entry:    00446990
; Size:     30 bytes

00446990  MOV EAX,dword ptr [ESP + 0x4]
00446994  TEST EAX,EAX
00446996  JZ 0x004469ad
00446998  MOV ECX,dword ptr [ESP + 0x8]
0044699c  MOV EDX,dword ptr [ESP + 0xc]
004469a0  MOV dword ptr [EAX + 0x54],ECX
004469a3  MOV ECX,dword ptr [ESP + 0x10]
004469a7  MOV dword ptr [EAX + 0x4c],EDX
004469aa  MOV dword ptr [EAX + 0x50],ECX
004469ad  RET
