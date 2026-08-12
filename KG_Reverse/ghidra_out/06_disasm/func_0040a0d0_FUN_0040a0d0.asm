; Function: FUN_0040a0d0
; Entry:    0040a0d0
; Size:     88 bytes

0040a0d0  SUB ESP,0x2c
0040a0d3  MOV EAX,dword ptr [ECX + 0x88]
0040a0d9  MOV ECX,dword ptr [ECX + 0x8c]
0040a0df  LEA EDX,[ESP]
0040a0e3  PUSH 0x0
0040a0e5  PUSH EDX
0040a0e6  PUSH 0x7d8
0040a0eb  MOV dword ptr [ESP + 0xc],EAX
0040a0ef  MOV dword ptr [ESP + 0x10],ECX
0040a0f3  MOV dword ptr [ESP + 0x14],0xfffffff8
0040a0fb  MOV dword ptr [ESP + 0x18],0x0
0040a103  MOV dword ptr [ESP + 0x30],0x0
0040a10b  MOV dword ptr [ESP + 0x34],0x0
0040a113  CALL 0x00413d70
0040a118  MOV EAX,dword ptr [ESP + 0x34]
0040a11c  MOV dword ptr [EAX],0x0
0040a122  ADD ESP,0x2c
0040a125  RET 0x8
