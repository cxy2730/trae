; Function: FUN_0044bdf0
; Entry:    0044bdf0
; Size:     29 bytes

0044bdf0  PUSH ESI
0044bdf1  MOV ESI,dword ptr [ESP + 0x8]
0044bdf5  PUSH 0x0
0044bdf7  PUSH ESI
0044bdf8  CALL 0x0044bb60
0044bdfd  ADD ESP,0x8
0044be00  TEST EAX,EAX
0044be02  JZ 0x0044be0b
0044be04  OR dword ptr [ESI + 0x7c],0x2001000
0044be0b  POP ESI
0044be0c  RET
