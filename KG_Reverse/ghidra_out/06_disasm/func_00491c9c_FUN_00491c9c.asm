; Function: FUN_00491c9c
; Entry:    00491c9c
; Size:     56 bytes

00491c9c  PUSH EBP
00491c9d  MOV EBP,ESP
00491c9f  SUB ESP,0x28
00491ca2  MOV EAX,dword ptr [EBP + 0x8]
00491ca5  AND dword ptr [EBP + -0x20],0x0
00491ca9  MOV dword ptr [EBP + -0x24],EAX
00491cac  MOV EAX,dword ptr [EBP + 0xc]
00491caf  MOV dword ptr [EBP + -0x1c],EAX
00491cb2  LEA EAX,[EBP + -0x28]
00491cb5  PUSH EAX
00491cb6  PUSH 0x0
00491cb8  PUSH 0x110c
00491cbd  MOV dword ptr [EBP + -0x28],0x8
00491cc4  PUSH dword ptr [ECX + 0x1c]
00491cc7  CALL dword ptr [0x004a2564]
00491ccd  MOV EAX,dword ptr [EBP + -0x20]
00491cd0  LEAVE
00491cd1  RET 0x8
