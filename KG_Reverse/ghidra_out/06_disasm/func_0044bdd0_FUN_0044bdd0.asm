; Function: FUN_0044bdd0
; Entry:    0044bdd0
; Size:     31 bytes

0044bdd0  PUSH ESI
0044bdd1  MOV ESI,dword ptr [ESP + 0x8]
0044bdd5  PUSH 0x0
0044bdd7  PUSH ESI
0044bdd8  CALL 0x0044bb60
0044bddd  ADD ESP,0x8
0044bde0  TEST EAX,EAX
0044bde2  JZ 0x0044bded
0044bde4  MOV EAX,dword ptr [ESI + 0x7c]
0044bde7  OR AH,0x10
0044bdea  MOV dword ptr [ESI + 0x7c],EAX
0044bded  POP ESI
0044bdee  RET
