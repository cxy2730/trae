; Function: FUN_0040edb0
; Entry:    0040edb0
; Size:     37 bytes

0040edb0  PUSH ESI
0040edb1  PUSH EDI
0040edb2  MOV EDI,dword ptr [ESP + 0xc]
0040edb6  MOV ESI,ECX
0040edb8  MOV EAX,dword ptr [EDI + 0x14]
0040edbb  AND EAX,0x1
0040edbe  CMP AL,0x1
0040edc0  JNZ 0x0040edc7
0040edc2  MOV EDX,dword ptr [ESI]
0040edc4  CALL dword ptr [EDX + 0x8]
0040edc7  PUSH EDI
0040edc8  LEA ECX,[ESI + 0x8]
0040edcb  CALL 0x00406620
0040edd0  POP EDI
0040edd1  POP ESI
0040edd2  RET 0x4
