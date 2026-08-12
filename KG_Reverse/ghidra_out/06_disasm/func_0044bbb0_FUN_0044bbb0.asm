; Function: FUN_0044bbb0
; Entry:    0044bbb0
; Size:     29 bytes

0044bbb0  PUSH ESI
0044bbb1  MOV ESI,dword ptr [ESP + 0x8]
0044bbb5  PUSH 0x0
0044bbb7  PUSH ESI
0044bbb8  CALL 0x0044bb60
0044bbbd  ADD ESP,0x8
0044bbc0  TEST EAX,EAX
0044bbc2  JZ 0x0044bbcb
0044bbc4  OR dword ptr [ESI + 0x7c],0x4000000
0044bbcb  POP ESI
0044bbcc  RET
