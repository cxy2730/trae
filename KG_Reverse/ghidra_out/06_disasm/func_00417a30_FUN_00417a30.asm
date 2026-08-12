; Function: FUN_00417a30
; Entry:    00417a30
; Size:     313 bytes

00417a30  PUSH -0x1
00417a32  PUSH 0x49eb92
00417a37  MOV EAX,FS:[0x0]
00417a3d  PUSH EAX
00417a3e  MOV dword ptr FS:[0x0],ESP
00417a45  SUB ESP,0x8
00417a48  PUSH EBX
00417a49  PUSH ESI
00417a4a  MOV ESI,ECX
00417a4c  PUSH EDI
00417a4d  MOV dword ptr [ESP + 0xc],ESI
00417a51  CALL 0x00494787
00417a56  LEA EBX,[ESI + 0x3c]
00417a59  XOR EDI,EDI
00417a5b  MOV dword ptr [ESP + 0x1c],EDI
00417a5f  MOV dword ptr [ESP + 0x10],EBX
00417a63  MOV dword ptr [EBX],0x2f958cc
00417a69  MOV EAX,[0x02fd8088]
00417a6e  MOV dword ptr [EBX + 0x4],EAX
00417a71  LEA ECX,[EBX + 0x10]
00417a74  MOV byte ptr [ESP + 0x1c],0x1
00417a79  CALL 0x004062a0
00417a7e  LEA ECX,[EBX + 0x3c]
00417a81  MOV byte ptr [ESP + 0x1c],0x2
00417a86  CALL 0x004062a0
00417a8b  LEA ECX,[EBX + 0x50]
00417a8e  MOV byte ptr [ESP + 0x1c],0x3
00417a93  CALL 0x004062a0
00417a98  MOV ECX,dword ptr [0x02fd8088]
00417a9e  MOV dword ptr [EBX + 0x74],ECX
00417aa1  MOV EDX,dword ptr [0x02fd8088]
00417aa7  MOV dword ptr [EBX + 0x90],EDX
00417aad  MOV dword ptr [EBX],0x2f958c4
00417ab3  LEA ECX,[ESI + 0xf0]
00417ab9  MOV byte ptr [ESP + 0x1c],0x4
00417abe  CALL 0x00424ce0
00417ac3  LEA ECX,[ESI + 0x1c0]
00417ac9  MOV byte ptr [ESP + 0x1c],0x5
00417ace  CALL 0x004062a0
00417ad3  MOV ECX,dword ptr [ESP + 0x14]
00417ad7  MOV dword ptr [ESI + 0x1d8],EDI
00417add  MOV dword ptr [ESI + 0x1d4],0x2f9598c
00417ae7  MOV dword ptr [ESI + 0xd0],EDI
00417aed  MOV dword ptr [ESI + 0xd4],EDI
00417af3  MOV dword ptr [ESI + 0xe0],EDI
00417af9  MOV dword ptr [ESI + 0xdc],EDI
00417aff  MOV dword ptr [ESI + 0xec],EDI
00417b05  MOV dword ptr [ESI + 0xd8],EDI
00417b0b  MOV dword ptr [ESI + 0x1a0],EDI
00417b11  MOV dword ptr [ESI + 0xe4],EDI
00417b17  MOV dword ptr [ESI + 0x1bc],EDI
00417b1d  MOV dword ptr [ESI + 0x1a8],EDI
00417b23  MOV dword ptr [ESI + 0x1a4],EDI
00417b29  MOV dword ptr [ESI + 0xe8],EDI
00417b2f  MOV dword ptr [ESI + 0x1b0],EDI
00417b35  MOV dword ptr [ESI + 0x1dc],EDI
00417b3b  MOV dword ptr [ESI + 0x1ac],EDI
00417b41  MOV dword ptr [ESI + 0x1e0],EDI
00417b47  MOV dword ptr [ESI + 0x1b8],EDI
00417b4d  MOV dword ptr [ESI + 0x1b4],EDI
00417b53  MOV dword ptr [ESI],0x2f958d4
00417b59  MOV EAX,ESI
00417b5b  POP EDI
00417b5c  POP ESI
00417b5d  POP EBX
00417b5e  MOV dword ptr FS:[0x0],ECX
00417b65  ADD ESP,0x14
00417b68  RET
