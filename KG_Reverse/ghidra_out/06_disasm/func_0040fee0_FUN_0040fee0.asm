; Function: FUN_0040fee0
; Entry:    0040fee0
; Size:     30 bytes

0040fee0  PUSH ESI
0040fee1  MOV ESI,ECX
0040fee3  CALL 0x0040ff00
0040fee8  TEST byte ptr [ESP + 0x8],0x1
0040feed  JZ 0x0040fef8
0040feef  PUSH ESI
0040fef0  CALL 0x00492f40
0040fef5  ADD ESP,0x4
0040fef8  MOV EAX,ESI
0040fefa  POP ESI
0040fefb  RET 0x4
