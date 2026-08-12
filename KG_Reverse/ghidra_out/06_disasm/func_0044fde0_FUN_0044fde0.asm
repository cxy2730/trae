; Function: FUN_0044fde0
; Entry:    0044fde0
; Size:     27 bytes

0044fde0  MOV EAX,dword ptr [ESP + 0x4]
0044fde4  TEST EAX,EAX
0044fde6  JZ 0x0044fdfa
0044fde8  MOV DL,byte ptr [EAX + 0x158]
0044fdee  MOV ECX,0x10
0044fdf3  CMP DL,CL
0044fdf5  JNZ 0x0044fdfa
0044fdf7  OR dword ptr [EAX + 0x7c],ECX
0044fdfa  RET
