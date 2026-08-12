; Function: FUN_0049c528
; Entry:    0049c528
; Size:     99 bytes

0049c528  MOV EAX,ECX
0049c52a  XOR EDX,EDX
0049c52c  LEA ECX,[EAX + 0x103c]
0049c532  MOV dword ptr [EAX + 0x1c],EDX
0049c535  MOV dword ptr [EAX + 0x20],EDX
0049c538  MOV dword ptr [EAX + 0x24],EDX
0049c53b  MOV dword ptr [EAX + 0x28],EDX
0049c53e  MOV dword ptr [ECX],EDX
0049c540  MOV dword ptr [ECX + 0x4],EDX
0049c543  OR dword ptr [EAX + 0x104c],0xffffffff
0049c54a  LEA ECX,[EAX + 0x1048]
0049c550  MOV dword ptr [ECX + 0x8],EDX
0049c553  MOV dword ptr [ECX + 0x1c],EDX
0049c556  MOV dword ptr [ECX + 0x20],EDX
0049c559  MOV CL,byte ptr [ESP + 0x4]
0049c55d  MOV dword ptr [EAX],0x2f9bee8
0049c563  MOV dword ptr [EAX + 0x28],0x1c
0049c56a  MOV dword ptr [EAX + 0x20],0x14
0049c571  MOV dword ptr [EAX + 0x18],EDX
0049c574  MOV byte ptr [EAX + 0x14],CL
0049c577  MOV dword ptr [EAX + 0x30],0x1
0049c57e  MOV dword ptr [EAX + 0x1040],0x18
0049c588  RET 0x4
