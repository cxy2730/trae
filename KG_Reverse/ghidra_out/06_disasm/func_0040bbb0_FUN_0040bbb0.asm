; Function: FUN_0040bbb0
; Entry:    0040bbb0
; Size:     62 bytes

0040bbb0  PUSH EBX
0040bbb1  PUSH ESI
0040bbb2  MOV ESI,ECX
0040bbb4  PUSH EDI
0040bbb5  MOV EDI,dword ptr [ESP + 0x10]
0040bbb9  MOV ECX,dword ptr [ESI + 0x5c]
0040bbbc  MOV EAX,dword ptr [EDI]
0040bbbe  PUSH ECX
0040bbbf  MOV ECX,EDI
0040bbc1  CALL dword ptr [EAX + 0x30]
0040bbc4  MOV EDX,dword ptr [ESI + 0x60]
0040bbc7  MOV EBX,dword ptr [EDI]
0040bbc9  PUSH EDX
0040bbca  CALL 0x00406fe0
0040bbcf  ADD ESP,0x4
0040bbd2  MOV ECX,EDI
0040bbd4  PUSH EAX
0040bbd5  CALL dword ptr [EBX + 0x2c]
0040bbd8  LEA EAX,[ESI + 0xb8]
0040bbde  POP EDI
0040bbdf  POP ESI
0040bbe0  POP EBX
0040bbe1  TEST EAX,EAX
0040bbe3  JNZ 0x0040bbe8
0040bbe5  RET 0x8
0040bbe8  MOV EAX,dword ptr [EAX + 0x4]
0040bbeb  RET 0x8
