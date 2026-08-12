; Function: FUN_0041ae10
; Entry:    0041ae10
; Size:     114 bytes

0041ae10  SUB ESP,0x2c
0041ae13  MOV EAX,dword ptr [ECX + 0xdc]
0041ae19  MOV ECX,dword ptr [ECX + 0xe0]
0041ae1f  MOV EDX,dword ptr [ESP + 0x30]
0041ae23  MOV dword ptr [ESP],EAX
0041ae27  LEA EAX,[ESP]
0041ae2b  PUSH 0x0
0041ae2d  PUSH EAX
0041ae2e  PUSH 0x7d8
0041ae33  MOV dword ptr [ESP + 0x10],ECX
0041ae37  MOV dword ptr [ESP + 0x14],0x7
0041ae3f  MOV dword ptr [ESP + 0x30],0x0
0041ae47  MOV dword ptr [ESP + 0x34],0x0
0041ae4f  MOV dword ptr [ESP + 0x18],0x1
0041ae57  MOV dword ptr [ESP + 0x1c],EDX
0041ae5b  CALL 0x00413d70
0041ae60  CMP dword ptr [ESP + 0x24],0x1
0041ae65  JNZ 0x0041ae7a
0041ae67  MOV EAX,dword ptr [ESP + 0x28]
0041ae6b  TEST EAX,EAX
0041ae6d  JZ 0x0041ae7a
0041ae6f  MOV EAX,0x1
0041ae74  ADD ESP,0x2c
0041ae77  RET 0x4
0041ae7a  XOR EAX,EAX
0041ae7c  ADD ESP,0x2c
0041ae7f  RET 0x4
