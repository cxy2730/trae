; Function: FUN_0045abd0
; Entry:    0045abd0
; Size:     257 bytes

0045abd0  PUSH ESI
0045abd1  MOV ESI,dword ptr [ESP + 0x8]
0045abd5  PUSH EDI
0045abd6  PUSH 0x2c
0045abd8  MOV EAX,dword ptr [ESI + 0x4]
0045abdb  PUSH 0x1
0045abdd  PUSH ESI
0045abde  CALL dword ptr [EAX]
0045abe0  MOV EDI,EAX
0045abe2  ADD ESP,0xc
0045abe5  MOV dword ptr [ESI + 0x1c8],EDI
0045abeb  MOV dword ptr [EDI],0x45ad80
0045abf1  MOV dword ptr [EDI + 0xc],0x45bf90
0045abf8  MOV dword ptr [EDI + 0x20],0x0
0045abff  MOV dword ptr [EDI + 0x28],0x0
0045ac06  CMP dword ptr [ESI + 0x78],0x3
0045ac0a  JZ 0x0045ac14
0045ac0c  MOV ECX,dword ptr [ESI]
0045ac0e  PUSH ESI
0045ac0f  CALL dword ptr [ECX]
0045ac11  ADD ESP,0x4
0045ac14  MOV EDX,dword ptr [ESI + 0x4]
0045ac17  PUSH EBX
0045ac18  PUSH 0x80
0045ac1d  PUSH 0x1
0045ac1f  PUSH ESI
0045ac20  CALL dword ptr [EDX]
0045ac22  ADD ESP,0xc
0045ac25  MOV dword ptr [EDI + 0x18],EAX
0045ac28  XOR EBX,EBX
0045ac2a  MOV EAX,dword ptr [ESI + 0x4]
0045ac2d  PUSH 0x1000
0045ac32  PUSH 0x1
0045ac34  PUSH ESI
0045ac35  CALL dword ptr [EAX + 0x4]
0045ac38  MOV ECX,dword ptr [EDI + 0x18]
0045ac3b  ADD EBX,0x4
0045ac3e  ADD ESP,0xc
0045ac41  CMP EBX,0x80
0045ac47  MOV dword ptr [ECX + EBX*0x1 + -0x4],EAX
0045ac4b  JL 0x0045ac2a
0045ac4d  MOV dword ptr [EDI + 0x1c],0x1
0045ac54  MOV EAX,dword ptr [ESI + 0x6c]
0045ac57  TEST EAX,EAX
0045ac59  JZ 0x0045ac92
0045ac5b  MOV EBX,dword ptr [ESI + 0x60]
0045ac5e  CMP EBX,0x8
0045ac61  JGE 0x0045ac6b
0045ac63  MOV EDX,dword ptr [ESI]
0045ac65  PUSH ESI
0045ac66  CALL dword ptr [EDX]
0045ac68  ADD ESP,0x4
0045ac6b  CMP EBX,0x100
0045ac71  JLE 0x0045ac7b
0045ac73  MOV EAX,dword ptr [ESI]
0045ac75  PUSH ESI
0045ac76  CALL dword ptr [EAX]
0045ac78  ADD ESP,0x4
0045ac7b  MOV ECX,dword ptr [ESI + 0x4]
0045ac7e  PUSH 0x3
0045ac80  PUSH EBX
0045ac81  PUSH 0x1
0045ac83  PUSH ESI
0045ac84  CALL dword ptr [ECX + 0x8]
0045ac87  ADD ESP,0x10
0045ac8a  MOV dword ptr [EDI + 0x10],EAX
0045ac8d  MOV dword ptr [EDI + 0x14],EBX
0045ac90  JMP 0x0045ac99
0045ac92  MOV dword ptr [EDI + 0x10],0x0
0045ac99  MOV EAX,dword ptr [ESI + 0x58]
0045ac9c  MOV ECX,0x2
0045aca1  TEST EAX,EAX
0045aca3  POP EBX
0045aca4  JZ 0x0045aca9
0045aca6  MOV dword ptr [ESI + 0x58],ECX
0045aca9  CMP dword ptr [ESI + 0x58],ECX
0045acac  JNZ 0x0045acce
0045acae  MOV EAX,dword ptr [ESI + 0x70]
0045acb1  MOV EDX,dword ptr [ESI + 0x4]
0045acb4  ADD EAX,ECX
0045acb6  LEA EAX,[EAX + EAX*0x2]
0045acb9  SHL EAX,0x1
0045acbb  PUSH EAX
0045acbc  PUSH 0x1
0045acbe  PUSH ESI
0045acbf  CALL dword ptr [EDX + 0x4]
0045acc2  PUSH ESI
0045acc3  MOV dword ptr [EDI + 0x20],EAX
0045acc6  CALL 0x0045ace0
0045accb  ADD ESP,0x10
0045acce  POP EDI
0045accf  POP ESI
0045acd0  RET
