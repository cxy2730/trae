; Function: FUN_0043ada0
; Entry:    0043ada0
; Size:     59 bytes

0043ada0  MOV EDX,ECX
0043ada2  PUSH EDI
0043ada3  MOV ECX,0x10
0043ada8  XOR EAX,EAX
0043adaa  LEA EDI,[EDX + 0x4]
0043adad  MOV dword ptr [EDX],0x2f96e7c
0043adb3  STOSD.REP ES:EDI
0043adb5  MOV dword ptr [EDX + 0x48],EAX
0043adb8  MOV dword ptr [EDX + 0x44],EAX
0043adbb  MOV dword ptr [EDX + 0x4c],0x67452301
0043adc2  MOV dword ptr [EDX + 0x50],0xefcdab89
0043adc9  MOV dword ptr [EDX + 0x54],0x98badcfe
0043add0  MOV dword ptr [EDX + 0x58],0x10325476
0043add7  MOV EAX,EDX
0043add9  POP EDI
0043adda  RET
