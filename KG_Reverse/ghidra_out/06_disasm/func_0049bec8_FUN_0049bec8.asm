; Function: FUN_0049bec8
; Entry:    0049bec8
; Size:     28 bytes

0049bec8  PUSH ESI
0049bec9  MOV ESI,ECX
0049becb  CALL 0x0049bee4
0049bed0  TEST byte ptr [ESP + 0x8],0x1
0049bed5  JZ 0x0049bede
0049bed7  PUSH ESI
0049bed8  CALL 0x00492f40
0049bedd  POP ECX
0049bede  MOV EAX,ESI
0049bee0  POP ESI
0049bee1  RET 0x4
