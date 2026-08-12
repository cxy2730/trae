; Function: FUN_0049c8ac
; Entry:    0049c8ac
; Size:     66 bytes

0049c8ac  PUSH ESI
0049c8ad  MOV ESI,ECX
0049c8af  XOR EAX,EAX
0049c8b1  MOV dword ptr [ESI + 0x14],EAX
0049c8b4  MOV dword ptr [ESI + 0x18],EAX
0049c8b7  MOV dword ptr [ESI + 0x18],0x4
0049c8be  MOV dword ptr [ESI + 0x4],EAX
0049c8c1  MOV dword ptr [ESI + 0x8],0x1
0049c8c8  MOV dword ptr [ESI + 0xc],EAX
0049c8cb  MOV dword ptr [ESI + 0x10],EAX
0049c8ce  CALL dword ptr [0x004a2208]
0049c8d4  CMP EAX,-0x1
0049c8d7  MOV dword ptr [ESI],EAX
0049c8d9  JNZ 0x0049c8e0
0049c8db  CALL 0x0049132a
0049c8e0  LEA EAX,[ESI + 0x1c]
0049c8e3  PUSH EAX
0049c8e4  CALL dword ptr [0x004a22c8]
0049c8ea  MOV EAX,ESI
0049c8ec  POP ESI
0049c8ed  RET
