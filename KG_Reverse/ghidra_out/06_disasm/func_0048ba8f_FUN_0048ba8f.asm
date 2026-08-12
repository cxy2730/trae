; Function: FUN_0048ba8f
; Entry:    0048ba8f
; Size:     69 bytes

0048ba8f  MOV EAX,dword ptr [ESP + 0x4]
0048ba93  MOV ECX,dword ptr [ESP + 0x8]
0048ba97  SUB ECX,dword ptr [EAX + 0x10]
0048ba9a  SAR ECX,0xc
0048ba9d  LEA EAX,[EAX + ECX*0x8 + 0x18]
0048baa1  MOV ECX,dword ptr [ESP + 0xc]
0048baa5  MOVZX EDX,byte ptr [ECX]
0048baa8  ADD dword ptr [EAX],EDX
0048baaa  AND byte ptr [ECX],0x0
0048baad  CMP dword ptr [EAX],0xf0
0048bab3  MOV dword ptr [EAX + 0x4],0xf1
0048baba  JNZ 0x0048bad3
0048babc  INC dword ptr [0x03011174]
0048bac2  CMP dword ptr [0x03011174],0x20
0048bac9  JNZ 0x0048bad3
0048bacb  PUSH 0x10
0048bacd  CALL 0x0048b976
0048bad2  POP ECX
0048bad3  RET
