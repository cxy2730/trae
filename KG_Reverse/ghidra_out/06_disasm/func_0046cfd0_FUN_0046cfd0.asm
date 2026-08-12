; Function: FUN_0046cfd0
; Entry:    0046cfd0
; Size:     30 bytes

0046cfd0  PUSH ESI
0046cfd1  MOV ESI,ECX
0046cfd3  CALL 0x0046cff0
0046cfd8  TEST byte ptr [ESP + 0x8],0x1
0046cfdd  JZ 0x0046cfe8
0046cfdf  PUSH ESI
0046cfe0  CALL 0x00492f40
0046cfe5  ADD ESP,0x4
0046cfe8  MOV EAX,ESI
0046cfea  POP ESI
0046cfeb  RET 0x4
