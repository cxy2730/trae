; Function: FUN_0047bba0
; Entry:    0047bba0
; Size:     70 bytes

0047bba0  PUSH ESI
0047bba1  MOV ESI,dword ptr [ESP + 0x8]
0047bba5  TEST ESI,ESI
0047bba7  JLE 0x0047bbe4
0047bba9  MOV ECX,dword ptr [ESP + 0x10]
0047bbad  PUSH EBX
0047bbae  PUSH EDI
0047bbaf  MOV EDI,dword ptr [ESP + 0x14]
0047bbb3  MOV EDX,ECX
0047bbb5  LEA EAX,[EDI + 0x4]
0047bbb8  SUB EDX,EDI
0047bbba  MOV EDI,dword ptr [EAX]
0047bbbc  MOV EBX,dword ptr [EAX + -0x4]
0047bbbf  ADD EDI,EBX
0047bbc1  ADD EAX,0x8
0047bbc4  MOV dword ptr [ECX],EDI
0047bbc6  MOV EDI,dword ptr [EAX + -0xc]
0047bbc9  MOV EBX,dword ptr [EAX + -0x8]
0047bbcc  ADD ECX,0x8
0047bbcf  SUB EDI,EBX
0047bbd1  IMUL EDI,dword ptr [0x0300d454]
0047bbd8  SAR EDI,0xa
0047bbdb  MOV dword ptr [EDX + EAX*0x1 + -0x8],EDI
0047bbdf  DEC ESI
0047bbe0  JNZ 0x0047bbba
0047bbe2  POP EDI
0047bbe3  POP EBX
0047bbe4  POP ESI
0047bbe5  RET
