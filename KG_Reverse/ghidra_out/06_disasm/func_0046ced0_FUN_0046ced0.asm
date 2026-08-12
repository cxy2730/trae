; Function: FUN_0046ced0
; Entry:    0046ced0
; Size:     30 bytes

0046ced0  PUSH ESI
0046ced1  MOV ESI,ECX
0046ced3  CALL 0x0046cef0
0046ced8  TEST byte ptr [ESP + 0x8],0x1
0046cedd  JZ 0x0046cee8
0046cedf  PUSH ESI
0046cee0  CALL 0x00492f40
0046cee5  ADD ESP,0x4
0046cee8  MOV EAX,ESI
0046ceea  POP ESI
0046ceeb  RET 0x4
