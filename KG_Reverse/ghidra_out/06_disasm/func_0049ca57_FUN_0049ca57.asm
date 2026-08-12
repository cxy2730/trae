; Function: FUN_0049ca57
; Entry:    0049ca57
; Size:     93 bytes

0049ca57  PUSH EBP
0049ca58  MOV EBP,ESP
0049ca5a  PUSH ECX
0049ca5b  PUSH EBX
0049ca5c  PUSH ESI
0049ca5d  PUSH EDI
0049ca5e  MOV EDI,ECX
0049ca60  LEA EAX,[EDI + 0x1c]
0049ca63  PUSH EAX
0049ca64  MOV dword ptr [EBP + -0x4],EAX
0049ca67  CALL dword ptr [0x004a2278]
0049ca6d  MOV ESI,dword ptr [EDI + 0x14]
0049ca70  MOV EBX,dword ptr [EBP + 0x8]
0049ca73  TEST ESI,ESI
0049ca75  JZ 0x0049ca9a
0049ca77  CMP EBX,dword ptr [ESI + 0x8]
0049ca7a  JGE 0x0049ca93
0049ca7c  MOV EAX,dword ptr [ESI + 0xc]
0049ca7f  MOV ECX,dword ptr [EAX + EBX*0x4]
0049ca82  TEST ECX,ECX
0049ca84  JZ 0x0049ca8c
0049ca86  MOV EAX,dword ptr [ECX]
0049ca88  PUSH 0x1
0049ca8a  CALL dword ptr [EAX]
0049ca8c  MOV EAX,dword ptr [ESI + 0xc]
0049ca8f  AND dword ptr [EAX + EBX*0x4],0x0
0049ca93  MOV ESI,dword ptr [ESI + 0x4]
0049ca96  TEST ESI,ESI
0049ca98  JNZ 0x0049ca77
0049ca9a  MOV EAX,dword ptr [EDI + 0x10]
0049ca9d  PUSH dword ptr [EBP + -0x4]
0049caa0  AND dword ptr [EAX + EBX*0x8],0xfffffffe
0049caa4  LEA EAX,[EAX + EBX*0x8]
0049caa7  CALL dword ptr [0x004a227c]
0049caad  POP EDI
0049caae  POP ESI
0049caaf  POP EBX
0049cab0  LEAVE
0049cab1  RET 0x4
