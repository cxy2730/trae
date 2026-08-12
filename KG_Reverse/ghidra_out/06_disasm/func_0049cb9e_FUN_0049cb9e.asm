; Function: FUN_0049cb9e
; Entry:    0049cb9e
; Size:     27 bytes

0049cb9e  PUSH ESI
0049cb9f  MOV ESI,ECX
0049cba1  CALL 0x0049cbb9
0049cba6  TEST byte ptr [ESP + 0x8],0x1
0049cbab  JZ 0x0049cbb3
0049cbad  PUSH ESI
0049cbae  CALL 0x0049c898
0049cbb3  MOV EAX,ESI
0049cbb5  POP ESI
0049cbb6  RET 0x4
