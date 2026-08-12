; Function: FUN_0044bdb0
; Entry:    0044bdb0
; Size:     29 bytes

0044bdb0  PUSH ESI
0044bdb1  MOV ESI,dword ptr [ESP + 0x8]
0044bdb5  PUSH 0x0
0044bdb7  PUSH ESI
0044bdb8  CALL 0x0044bb60
0044bdbd  ADD ESP,0x8
0044bdc0  TEST EAX,EAX
0044bdc2  JZ 0x0044bdcb
0044bdc4  OR dword ptr [ESI + 0x7c],0x2001000
0044bdcb  POP ESI
0044bdcc  RET
