; Function: FUN_0049be52
; Entry:    0049be52
; Size:     76 bytes

0049be52  PUSH EBP
0049be53  MOV EBP,ESP
0049be55  SUB ESP,0x10
0049be58  PUSH ESI
0049be59  MOV ESI,ECX
0049be5b  PUSH dword ptr [EBP + 0x18]
0049be5e  PUSH dword ptr [ESI + 0x4]
0049be61  CALL dword ptr [0x004a20a0]
0049be67  MOV EAX,dword ptr [EBP + 0x8]
0049be6a  MOV EDX,dword ptr [EBP + 0x10]
0049be6d  MOV ECX,dword ptr [EBP + 0xc]
0049be70  MOV dword ptr [EBP + -0x10],EAX
0049be73  ADD EAX,EDX
0049be75  MOV dword ptr [EBP + -0xc],ECX
0049be78  MOV dword ptr [EBP + -0x8],EAX
0049be7b  MOV EAX,dword ptr [EBP + 0x14]
0049be7e  ADD ECX,EAX
0049be80  XOR EAX,EAX
0049be82  MOV dword ptr [EBP + -0x4],ECX
0049be85  PUSH EAX
0049be86  PUSH EAX
0049be87  LEA ECX,[EBP + -0x10]
0049be8a  PUSH EAX
0049be8b  PUSH ECX
0049be8c  PUSH 0x2
0049be8e  PUSH EAX
0049be8f  PUSH EAX
0049be90  PUSH dword ptr [ESI + 0x4]
0049be93  CALL dword ptr [0x004a20d8]
0049be99  POP ESI
0049be9a  LEAVE
0049be9b  RET 0x14
