; Function: FUN_0044bac0
; Entry:    0044bac0
; Size:     156 bytes

0044bac0  PUSH ESI
0044bac1  MOV ESI,dword ptr [ESP + 0x8]
0044bac5  PUSH 0x0
0044bac7  PUSH ESI
0044bac8  CALL 0x0044bb60
0044bacd  ADD ESP,0x8
0044bad0  TEST EAX,EAX
0044bad2  JZ 0x0044bb5a
0044bad8  MOV ECX,dword ptr [ESP + 0xc]
0044badc  TEST ECX,ECX
0044bade  JZ 0x0044bb5a
0044bae0  MOV EDX,dword ptr [ESP + 0x10]
0044bae4  TEST EDX,EDX
0044bae6  JNZ 0x0044baf8
0044bae8  PUSH 0x2fb2ae0
0044baed  PUSH ESI
0044baee  CALL 0x00446560
0044baf3  ADD ESP,0x8
0044baf6  POP ESI
0044baf7  RET
0044baf8  MOV EAX,dword ptr [ESI + 0x7c]
0044bafb  PUSH EBX
0044bafc  PUSH EDI
0044bafd  MOV EDI,dword ptr [ESI + 0x78]
0044bb00  AND EAX,0xff7fffff
0044bb05  AND EDI,0xffffdfff
0044bb0b  OR EAX,0x40080
0044bb10  MOV dword ptr [ESI + 0x78],EDI
0044bb13  MOV dword ptr [ESI + 0x7c],EAX
0044bb16  MOV EBX,dword ptr [ECX]
0044bb18  LEA EDI,[ESI + 0x168]
0044bb1e  MOV dword ptr [ESI + 0x168],EBX
0044bb24  MOV EBX,dword ptr [ECX + 0x4]
0044bb27  MOV dword ptr [EDI + 0x4],EBX
0044bb2a  MOV CX,word ptr [ECX + 0x8]
0044bb2e  MOV byte ptr [ESI + 0x162],DL
0044bb34  MOV word ptr [EDI + 0x8],CX
0044bb38  MOV ECX,dword ptr [ESP + 0x20]
0044bb3c  MOV dword ptr [ESI + 0x164],ECX
0044bb42  MOV ECX,dword ptr [ESP + 0x1c]
0044bb46  POP EDI
0044bb47  POP EBX
0044bb48  TEST ECX,ECX
0044bb4a  JZ 0x0044bb54
0044bb4c  OR AH,0x1
0044bb4f  MOV dword ptr [ESI + 0x7c],EAX
0044bb52  POP ESI
0044bb53  RET
0044bb54  AND AH,0xfe
0044bb57  MOV dword ptr [ESI + 0x7c],EAX
0044bb5a  POP ESI
0044bb5b  RET
