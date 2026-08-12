; Function: FUN_0043ade0
; Entry:    0043ade0
; Size:     75 bytes

0043ade0  PUSH EDI
0043ade1  MOV EDI,dword ptr [ESP + 0x10]
0043ade5  TEST EDI,EDI
0043ade7  JBE 0x0043ae27
0043ade9  MOV EDX,dword ptr [ESP + 0x8]
0043aded  MOV ECX,dword ptr [ESP + 0xc]
0043adf1  PUSH ESI
0043adf2  OR ESI,0xffffffff
0043adf5  LEA EAX,[EDX + 0x1]
0043adf8  SUB ESI,EDX
0043adfa  MOV DL,byte ptr [ECX]
0043adfc  ADD ECX,0x4
0043adff  MOV byte ptr [EAX + -0x1],DL
0043ae02  MOV EDX,dword ptr [ECX + -0x4]
0043ae05  SHR EDX,0x8
0043ae08  MOV byte ptr [EAX],DL
0043ae0a  MOV EDX,dword ptr [ECX + -0x4]
0043ae0d  SHR EDX,0x10
0043ae10  MOV byte ptr [EAX + 0x1],DL
0043ae13  MOV EDX,dword ptr [ECX + -0x4]
0043ae16  SHR EDX,0x18
0043ae19  MOV byte ptr [EAX + 0x2],DL
0043ae1c  ADD EAX,0x4
0043ae1f  LEA EDX,[ESI + EAX*0x1]
0043ae22  CMP EDX,EDI
0043ae24  JC 0x0043adfa
0043ae26  POP ESI
0043ae27  POP EDI
0043ae28  RET 0xc
