; Function: FUN_00491cd4
; Entry:    00491cd4
; Size:     46 bytes

00491cd4  PUSH EBP
00491cd5  MOV EBP,ESP
00491cd7  SUB ESP,0x28
00491cda  MOV EAX,dword ptr [EBP + 0x8]
00491cdd  MOV dword ptr [EBP + -0x28],0x40
00491ce4  MOV dword ptr [EBP + -0x24],EAX
00491ce7  LEA EAX,[EBP + -0x28]
00491cea  PUSH EAX
00491ceb  PUSH 0x0
00491ced  PUSH 0x110c
00491cf2  PUSH dword ptr [ECX + 0x1c]
00491cf5  CALL dword ptr [0x004a2564]
00491cfb  MOV EAX,dword ptr [EBP + -0x8]
00491cfe  LEAVE
00491cff  RET 0x4
