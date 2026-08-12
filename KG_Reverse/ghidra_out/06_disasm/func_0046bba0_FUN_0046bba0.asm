; Function: FUN_0046bba0
; Entry:    0046bba0
; Size:     30 bytes

0046bba0  PUSH ESI
0046bba1  MOV ESI,ECX
0046bba3  CALL 0x0046bbc0
0046bba8  TEST byte ptr [ESP + 0x8],0x1
0046bbad  JZ 0x0046bbb8
0046bbaf  PUSH ESI
0046bbb0  CALL 0x00492f40
0046bbb5  ADD ESP,0x4
0046bbb8  MOV EAX,ESI
0046bbba  POP ESI
0046bbbb  RET 0x4
