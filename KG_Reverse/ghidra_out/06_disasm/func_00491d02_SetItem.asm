; Function: SetItem
; Entry:    00491d02
; Size:     78 bytes

00491d02  PUSH EBP
00491d03  MOV EBP,ESP
00491d05  SUB ESP,0x28
00491d08  MOV EAX,dword ptr [EBP + 0x8]
00491d0b  MOV dword ptr [EBP + -0x24],EAX
00491d0e  MOV EAX,dword ptr [EBP + 0xc]
00491d11  MOV dword ptr [EBP + -0x28],EAX
00491d14  MOV EAX,dword ptr [EBP + 0x10]
00491d17  MOV dword ptr [EBP + -0x18],EAX
00491d1a  MOV EAX,dword ptr [EBP + 0x14]
00491d1d  MOV dword ptr [EBP + -0x10],EAX
00491d20  MOV EAX,dword ptr [EBP + 0x18]
00491d23  MOV dword ptr [EBP + -0xc],EAX
00491d26  MOV EAX,dword ptr [EBP + 0x1c]
00491d29  MOV dword ptr [EBP + -0x20],EAX
00491d2c  MOV EAX,dword ptr [EBP + 0x20]
00491d2f  MOV dword ptr [EBP + -0x1c],EAX
00491d32  MOV EAX,dword ptr [EBP + 0x24]
00491d35  MOV dword ptr [EBP + -0x4],EAX
00491d38  LEA EAX,[EBP + -0x28]
00491d3b  PUSH EAX
00491d3c  PUSH 0x0
00491d3e  PUSH 0x110d
00491d43  PUSH dword ptr [ECX + 0x1c]
00491d46  CALL dword ptr [0x004a2564]
00491d4c  LEAVE
00491d4d  RET 0x20
