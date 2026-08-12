; Function: FUN_00432b10
; Entry:    00432b10
; Size:     25 bytes

00432b10  MOV EAX,dword ptr [ECX + 0x4]
00432b13  MOV EDX,dword ptr [ESP + 0x4]
00432b17  MOV ECX,dword ptr [EAX + 0xc]
00432b1a  ADD ECX,0x4
00432b1d  IMUL ECX,dword ptr [ESP + 0x8]
00432b22  LEA EAX,[ECX + EDX*0x1 + 0x4]
00432b26  RET 0x8
