; Function: FUN_0043afb0
; Entry:    0043afb0
; Size:     30 bytes

0043afb0  PUSH ESI
0043afb1  MOV ESI,ECX
0043afb3  CALL 0x0043afd0
0043afb8  TEST byte ptr [ESP + 0x8],0x1
0043afbd  JZ 0x0043afc8
0043afbf  PUSH ESI
0043afc0  CALL 0x00492f40
0043afc5  ADD ESP,0x4
0043afc8  MOV EAX,ESI
0043afca  POP ESI
0043afcb  RET 0x4
