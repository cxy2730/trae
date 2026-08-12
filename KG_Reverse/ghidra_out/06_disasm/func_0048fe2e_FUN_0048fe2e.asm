; Function: FUN_0048fe2e
; Entry:    0048fe2e
; Size:     34 bytes

0048fe2e  MOV EAX,dword ptr [ESP + 0x4]
0048fe32  MOV ECX,EAX
0048fe34  AND EAX,0x1f
0048fe37  SAR ECX,0x5
0048fe3a  LEA EAX,[EAX + EAX*0x8]
0048fe3d  MOV ECX,dword ptr [ECX*0x4 + 0x3014ec0]
0048fe44  LEA EAX,[ECX + EAX*0x4 + 0xc]
0048fe48  PUSH EAX
0048fe49  CALL dword ptr [0x004a227c]
0048fe4f  RET
