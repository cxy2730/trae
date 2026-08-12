; Function: FUN_0044b170
; Entry:    0044b170
; Size:     75 bytes

0044b170  MOV EAX,dword ptr [ESP + 0x4]
0044b174  XOR ECX,ECX
0044b176  MOV CL,byte ptr [EAX + 0x15a]
0044b17c  MOV dword ptr [EAX + 0x2cc],0x44b1c0
0044b186  ADD ECX,0x7
0044b189  MOV dword ptr [EAX + 0x2d0],0x44b200
0044b193  AND ECX,0xfffffff8
0044b196  MOV dword ptr [EAX + 0x2d4],0x44b230
0044b1a0  CMP ECX,0x8
0044b1a3  JNZ 0x0044b1b0
0044b1a5  MOV dword ptr [EAX + 0x2d8],0x44b2a0
0044b1af  RET
0044b1b0  MOV dword ptr [EAX + 0x2d8],0x44b340
0044b1ba  RET
