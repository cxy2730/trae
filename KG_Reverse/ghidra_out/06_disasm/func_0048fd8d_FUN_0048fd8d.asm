; Function: FUN_0048fd8d
; Entry:    0048fd8d
; Size:     66 bytes

0048fd8d  MOV EAX,dword ptr [ESP + 0x4]
0048fd91  CMP EAX,dword ptr [0x03014fc0]
0048fd97  JNC 0x0048fdb8
0048fd99  MOV ECX,EAX
0048fd9b  AND EAX,0x1f
0048fd9e  SAR ECX,0x5
0048fda1  LEA EAX,[EAX + EAX*0x8]
0048fda4  MOV ECX,dword ptr [ECX*0x4 + 0x3014ec0]
0048fdab  TEST byte ptr [ECX + EAX*0x4 + 0x4],0x1
0048fdb0  LEA EAX,[ECX + EAX*0x4]
0048fdb3  JZ 0x0048fdb8
0048fdb5  MOV EAX,dword ptr [EAX]
0048fdb7  RET
0048fdb8  CALL 0x004843ad
0048fdbd  MOV dword ptr [EAX],0x9
0048fdc3  CALL 0x004843b6
0048fdc8  AND dword ptr [EAX],0x0
0048fdcb  OR EAX,0xffffffff
0048fdce  RET
