; Function: FUN_0040ada0
; Entry:    0040ada0
; Size:     110 bytes

0040ada0  MOV ECX,dword ptr [ESP + 0x8]
0040ada4  MOV EDX,dword ptr [ESP + 0x4]
0040ada8  SUB ESP,0x10c
0040adae  LEA EAX,[ESP]
0040adb2  PUSH ESI
0040adb3  PUSH EAX
0040adb4  PUSH 0x1
0040adb6  PUSH 0x0
0040adb8  PUSH ECX
0040adb9  PUSH EDX
0040adba  CALL dword ptr [0x004a2000]
0040adc0  MOV ESI,EAX
0040adc2  TEST ESI,ESI
0040adc4  JNZ 0x0040ae02
0040adc6  MOV EDX,dword ptr [ESP + 0x4]
0040adca  LEA EAX,[ESP + 0x8]
0040adce  LEA ECX,[ESP + 0xc]
0040add2  PUSH EAX
0040add3  PUSH ECX
0040add4  PUSH ESI
0040add5  PUSH EDX
0040add6  MOV dword ptr [ESP + 0x18],0x104
0040adde  CALL dword ptr [0x004a2008]
0040ade4  MOV ECX,dword ptr [ESP + 0x11c]
0040adeb  LEA EAX,[ESP + 0xc]
0040adef  PUSH EAX
0040adf0  PUSH ECX
0040adf1  CALL dword ptr [0x004a22dc]
0040adf7  MOV EDX,dword ptr [ESP + 0x4]
0040adfb  PUSH EDX
0040adfc  CALL dword ptr [0x004a2010]
0040ae02  MOV EAX,ESI
0040ae04  POP ESI
0040ae05  ADD ESP,0x10c
0040ae0b  RET 0xc
