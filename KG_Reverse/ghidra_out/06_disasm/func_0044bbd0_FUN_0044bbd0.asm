; Function: FUN_0044bbd0
; Entry:    0044bbd0
; Size:     29 bytes

0044bbd0  PUSH ESI
0044bbd1  MOV ESI,dword ptr [ESP + 0x8]
0044bbd5  PUSH 0x0
0044bbd7  PUSH ESI
0044bbd8  CALL 0x0044bb60
0044bbdd  ADD ESP,0x8
0044bbe0  TEST EAX,EAX
0044bbe2  JZ 0x0044bbeb
0044bbe4  OR dword ptr [ESI + 0x7c],0x40000
0044bbeb  POP ESI
0044bbec  RET
