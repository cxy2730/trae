; Function: FUN_0049d32d
; Entry:    0049d32d
; Size:     50 bytes

0049d32d  PUSH ESI
0049d32e  MOV ESI,ECX
0049d330  PUSH EDI
0049d331  XOR EDI,EDI
0049d333  LEA EAX,[ESI + 0x5c]
0049d336  MOV dword ptr [ESI + 0x1c],EDI
0049d339  PUSH EAX
0049d33a  MOV dword ptr [ESI + 0x20],EDI
0049d33d  MOV dword ptr [ESI + 0x28],EDI
0049d340  MOV dword ptr [ESI + 0x2c],EDI
0049d343  MOV dword ptr [ESI + 0x34],EDI
0049d346  MOV dword ptr [ESI + 0x64],EDI
0049d349  CALL dword ptr [0x004a2570]
0049d34f  MOV dword ptr [ESI + 0x58],EDI
0049d352  MOV dword ptr [ESI + 0x54],EDI
0049d355  MOV dword ptr [ESI + 0x24],0x1
0049d35c  POP EDI
0049d35d  POP ESI
0049d35e  RET
