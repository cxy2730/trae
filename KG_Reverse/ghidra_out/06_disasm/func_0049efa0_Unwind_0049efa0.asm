; Function: Unwind@0049efa0
; Entry:    0049efa0
; Size:     23 bytes

0049efa0  MOV EAX,dword ptr [EBP + -0x14]
0049efa3  AND EAX,0x1
0049efa6  TEST EAX,EAX
0049efa8  JZ 0x0049efb6
0049efae  LEA ECX,[EBP + -0x10]
0049efb1  JMP 0x004931d6
0049efb6  RET
