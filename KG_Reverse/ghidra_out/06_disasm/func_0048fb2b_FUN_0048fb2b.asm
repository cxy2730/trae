; Function: FUN_0048fb2b
; Entry:    0048fb2b
; Size:     68 bytes

0048fb2b  INC dword ptr [0x03010f4c]
0048fb31  PUSH 0x1000
0048fb36  CALL 0x004838e7
0048fb3b  POP ECX
0048fb3c  MOV ECX,dword ptr [ESP + 0x4]
0048fb40  TEST EAX,EAX
0048fb42  MOV dword ptr [ECX + 0x8],EAX
0048fb45  JZ 0x0048fb54
0048fb47  OR dword ptr [ECX + 0xc],0x8
0048fb4b  MOV dword ptr [ECX + 0x18],0x1000
0048fb52  JMP 0x0048fb65
0048fb54  OR dword ptr [ECX + 0xc],0x4
0048fb58  LEA EAX,[ECX + 0x14]
0048fb5b  MOV dword ptr [ECX + 0x8],EAX
0048fb5e  MOV dword ptr [ECX + 0x18],0x2
0048fb65  MOV EAX,dword ptr [ECX + 0x8]
0048fb68  AND dword ptr [ECX + 0x4],0x0
0048fb6c  MOV dword ptr [ECX],EAX
0048fb6e  RET
