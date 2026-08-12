; Function: FUN_0048fa40
; Entry:    0048fa40
; Size:     41 bytes

0048fa40  MOV EAX,dword ptr [ESP + 0x4]
0048fa44  CMP EAX,dword ptr [0x03014fc0]
0048fa4a  JC 0x0048fa4f
0048fa4c  XOR EAX,EAX
0048fa4e  RET
0048fa4f  MOV ECX,EAX
0048fa51  AND EAX,0x1f
0048fa54  SAR ECX,0x5
0048fa57  LEA EAX,[EAX + EAX*0x8]
0048fa5a  MOV ECX,dword ptr [ECX*0x4 + 0x3014ec0]
0048fa61  MOV AL,byte ptr [ECX + EAX*0x4 + 0x4]
0048fa65  AND EAX,0x40
0048fa68  RET
