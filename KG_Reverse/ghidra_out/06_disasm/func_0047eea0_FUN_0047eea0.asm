; Function: FUN_0047eea0
; Entry:    0047eea0
; Size:     251 bytes

0047eea0  SUB ESP,0x18
0047eea3  MOV EAX,dword ptr [ESP + 0x1c]
0047eea7  PUSH EBP
0047eea8  MOV EBP,dword ptr [ESP + 0x24]
0047eeac  SAR EBP,0x1
0047eeae  TEST EAX,EAX
0047eeb0  MOV dword ptr [ESP + 0x18],EBP
0047eeb4  LEA ECX,[EBP + -0x1]
0047eeb7  JLE 0x0047ef96
0047eebd  LEA EDX,[EBP*0x4 + 0x0]
0047eec4  PUSH EBX
0047eec5  PUSH ESI
0047eec6  MOV ESI,dword ptr [ESP + 0x30]
0047eeca  MOV dword ptr [ESP + 0x10],EDX
0047eece  MOV EDX,dword ptr [ESP + 0x34]
0047eed2  SHL ECX,0x2
0047eed5  SUB ESI,EDX
0047eed7  PUSH EDI
0047eed8  MOV dword ptr [ESP + 0x2c],0x1
0047eee0  MOV dword ptr [ESP + 0x10],0x0
0047eee8  MOV dword ptr [ESP + 0x20],ECX
0047eeec  MOV dword ptr [ESP + 0x1c],ESI
0047eef0  MOV dword ptr [ESP + 0x18],EAX
0047eef4  JMP 0x0047eefa
0047eef6  MOV ESI,dword ptr [ESP + 0x1c]
0047eefa  MOV ECX,dword ptr [ESP + 0x10]
0047eefe  TEST EBP,EBP
0047ef00  JLE 0x0047ef19
0047ef02  MOV ECX,dword ptr [ESP + 0x14]
0047ef06  MOV EAX,EDX
0047ef08  ADD ESI,EDX
0047ef0a  MOV EDI,EBP
0047ef0c  MOV EBX,dword ptr [ESI]
0047ef0e  ADD ESI,0x4
0047ef11  MOV dword ptr [EAX],EBX
0047ef13  ADD EAX,0x8
0047ef16  DEC EDI
0047ef17  JNZ 0x0047ef0c
0047ef19  MOV EDI,dword ptr [ESP + 0x2c]
0047ef1d  LEA EBX,[EBP + -0x1]
0047ef20  TEST EBX,EBX
0047ef22  JLE 0x0047ef4b
0047ef24  MOV EAX,dword ptr [ESP + 0x34]
0047ef28  MOV EBP,dword ptr [ESP + 0x20]
0047ef2c  ADD EAX,ECX
0047ef2e  LEA ESI,[EDX + 0x4]
0047ef31  LEA EDI,[EDI + EBX*0x2]
0047ef34  ADD ECX,EBP
0047ef36  FLD float ptr [EAX + 0x4]
0047ef39  FADD float ptr [EAX]
0047ef3b  ADD ESI,0x8
0047ef3e  ADD EAX,0x4
0047ef41  DEC EBX
0047ef42  FSTP float ptr [ESI + -0x8]
0047ef45  JNZ 0x0047ef36
0047ef47  MOV EBP,dword ptr [ESP + 0x24]
0047ef4b  MOV EAX,dword ptr [ESP + 0x34]
0047ef4f  MOV ESI,dword ptr [ESP + 0x10]
0047ef53  MOV ECX,dword ptr [ECX + EAX*0x1]
0047ef56  MOV EAX,dword ptr [ESP + 0x38]
0047ef5a  MOV dword ptr [EAX + EDI*0x4],ECX
0047ef5d  MOV ECX,dword ptr [ESP + 0x30]
0047ef61  MOV EDI,dword ptr [ESP + 0x14]
0047ef65  LEA EAX,[ECX*0x4 + 0x0]
0047ef6c  ADD ESI,EAX
0047ef6e  ADD EDX,EAX
0047ef70  MOV dword ptr [ESP + 0x10],ESI
0047ef74  MOV ESI,dword ptr [ESP + 0x2c]
0047ef78  ADD EDI,EAX
0047ef7a  MOV EAX,dword ptr [ESP + 0x18]
0047ef7e  ADD ESI,ECX
0047ef80  DEC EAX
0047ef81  MOV dword ptr [ESP + 0x14],EDI
0047ef85  MOV dword ptr [ESP + 0x2c],ESI
0047ef89  MOV dword ptr [ESP + 0x18],EAX
0047ef8d  JNZ 0x0047eef6
0047ef93  POP EDI
0047ef94  POP ESI
0047ef95  POP EBX
0047ef96  POP EBP
0047ef97  ADD ESP,0x18
0047ef9a  RET
