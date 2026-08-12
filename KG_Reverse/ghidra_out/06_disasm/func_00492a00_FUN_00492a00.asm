; Function: FUN_00492a00
; Entry:    00492a00
; Size:     32 bytes

00492a00  MOV EAX,dword ptr [ESP + 0x8]
00492a04  IMUL EAX,dword ptr [ESP + 0xc]
00492a09  ADD EAX,0x4
00492a0c  PUSH EAX
00492a0d  CALL 0x00492f17
00492a12  POP ECX
00492a13  MOV ECX,dword ptr [ESP + 0x4]
00492a17  MOV EDX,dword ptr [ECX]
00492a19  MOV dword ptr [EAX],EDX
00492a1b  MOV dword ptr [ECX],EAX
00492a1d  RET 0xc
