; Function: FUN_00469ff0
; Entry:    00469ff0
; Size:     30 bytes

00469ff0  MOV EAX,dword ptr [ESP + 0x8]
00469ff4  MOV ECX,dword ptr [ESP + 0x4]
00469ff8  LEA EAX,[EAX + EAX*0x2]
00469ffb  MOV EDX,dword ptr [ECX + EAX*0x4]
00469ffe  MOV EAX,dword ptr [ESP + 0xc]
0046a002  LEA ECX,[EDX + EAX*0x4]
0046a005  MOV EDX,dword ptr [ESP + 0x10]
0046a009  LEA EAX,[ECX + EDX*0x1 + -0x4]
0046a00d  RET
