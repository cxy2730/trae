; Function: FUN_0043bb20
; Entry:    0043bb20
; Size:     71 bytes

0043bb20  PUSH ESI
0043bb21  MOV ESI,dword ptr [ESP + 0xc]
0043bb25  MOV EAX,ESI
0043bb27  IMUL EAX,dword ptr [ESP + 0x14]
0043bb2c  TEST ESI,ESI
0043bb2e  LEA ECX,[EAX + EAX*0x2]
0043bb31  JLE 0x0043bb65
0043bb33  MOV EDX,dword ptr [ESP + 0x10]
0043bb37  MOV EAX,dword ptr [ESP + 0x8]
0043bb3b  PUSH EBX
0043bb3c  ADD EAX,0x2
0043bb3f  LEA ECX,[ECX + EDX*0x1 + 0x2]
0043bb43  MOV BL,byte ptr [EAX]
0043bb45  MOV DL,byte ptr [EAX + -0x1]
0043bb48  MOV byte ptr [ESP + 0x10],BL
0043bb4c  MOV BL,byte ptr [EAX + -0x2]
0043bb4f  MOV byte ptr [ECX + -0x2],BL
0043bb52  MOV byte ptr [ECX + -0x1],DL
0043bb55  MOV DL,byte ptr [ESP + 0x10]
0043bb59  ADD EAX,0x3
0043bb5c  MOV byte ptr [ECX],DL
0043bb5e  ADD ECX,0x3
0043bb61  DEC ESI
0043bb62  JNZ 0x0043bb43
0043bb64  POP EBX
0043bb65  POP ESI
0043bb66  RET
