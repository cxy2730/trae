; Function: FUN_0048eda3
; Entry:    0048eda3
; Size:     27 bytes

0048eda3  MOV EAX,dword ptr [ESP + 0x4]
0048eda7  XOR ECX,ECX
0048eda9  CMP dword ptr [EAX],0x0
0048edac  JNZ 0x0048edbb
0048edae  INC ECX
0048edaf  ADD EAX,0x4
0048edb2  CMP ECX,0x3
0048edb5  JL 0x0048eda9
0048edb7  PUSH 0x1
0048edb9  POP EAX
0048edba  RET
0048edbb  XOR EAX,EAX
0048edbd  RET
