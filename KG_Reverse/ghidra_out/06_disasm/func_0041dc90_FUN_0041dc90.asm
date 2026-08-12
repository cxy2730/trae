; Function: FUN_0041dc90
; Entry:    0041dc90
; Size:     51 bytes

0041dc90  PUSH ESI
0041dc91  MOV ESI,ECX
0041dc93  MOV ECX,dword ptr [ESP + 0x8]
0041dc97  CALL 0x004974d5
0041dc9c  MOV ECX,dword ptr [ESI + 0x74]
0041dc9f  POP ESI
0041dca0  LEA EAX,[ECX + EAX*0x8 + -0x8]
0041dca4  MOV ECX,dword ptr [ESP + 0x8]
0041dca8  MOV EAX,dword ptr [EAX]
0041dcaa  CMP dword ptr [EAX + 0x40],ECX
0041dcad  JZ 0x0041dcc0
0041dcaf  MOV EDX,dword ptr [EAX + 0x1c]
0041dcb2  PUSH 0x0
0041dcb4  PUSH 0x0
0041dcb6  PUSH EDX
0041dcb7  MOV dword ptr [EAX + 0x40],ECX
0041dcba  CALL dword ptr [0x004a2540]
0041dcc0  RET 0x8
