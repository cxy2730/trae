; Function: FUN_00491ad9
; Entry:    00491ad9
; Size:     76 bytes

00491ad9  PUSH EBP
00491ada  MOV EBP,ESP
00491adc  SUB ESP,0x24
00491adf  MOV EAX,dword ptr [EBP + 0x1c]
00491ae2  PUSH ESI
00491ae3  MOV dword ptr [EBP + -0x24],EAX
00491ae6  MOV EAX,dword ptr [EBP + 0x18]
00491ae9  MOV dword ptr [EBP + -0x20],EAX
00491aec  MOV EAX,dword ptr [EBP + 0x14]
00491aef  MOV dword ptr [EBP + -0x1c],EAX
00491af2  MOV EAX,dword ptr [EBP + 0x10]
00491af5  MOV dword ptr [EBP + -0x18],EAX
00491af8  MOV EAX,dword ptr [EBP + 0xc]
00491afb  DEC EAX
00491afc  MOV ESI,ECX
00491afe  MOV dword ptr [EBP + -0x14],EAX
00491b01  MOV EAX,dword ptr [EBP + 0x8]
00491b04  ADD EAX,0xfffff894
00491b09  MOV dword ptr [EBP + -0x10],EAX
00491b0c  MOV EAX,dword ptr [EBP + 0x20]
00491b0f  MOV dword ptr [EBP + -0x4],EAX
00491b12  LEA EAX,[EBP + -0x24]
00491b15  PUSH EAX
00491b16  CALL 0x004863a9
00491b1b  MOV dword ptr [ESI],EAX
00491b1d  POP ECX
00491b1e  MOV EAX,ESI
00491b20  POP ESI
00491b21  LEAVE
00491b22  RET 0x1c
