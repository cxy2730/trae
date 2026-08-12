; Function: FUN_0046beb0
; Entry:    0046beb0
; Size:     30 bytes

0046beb0  PUSH ESI
0046beb1  MOV ESI,ECX
0046beb3  CALL 0x0046bed0
0046beb8  TEST byte ptr [ESP + 0x8],0x1
0046bebd  JZ 0x0046bec8
0046bebf  PUSH ESI
0046bec0  CALL 0x00492f40
0046bec5  ADD ESP,0x4
0046bec8  MOV EAX,ESI
0046beca  POP ESI
0046becb  RET 0x4
