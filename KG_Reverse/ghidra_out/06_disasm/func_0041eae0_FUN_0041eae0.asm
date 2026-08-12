; Function: FUN_0041eae0
; Entry:    0041eae0
; Size:     143 bytes

0041eae0  PUSH -0x1
0041eae2  PUSH 0x49f0ca
0041eae7  MOV EAX,FS:[0x0]
0041eaed  PUSH EAX
0041eaee  MOV dword ptr FS:[0x0],ESP
0041eaf5  PUSH ECX
0041eaf6  PUSH ESI
0041eaf7  MOV ESI,ECX
0041eaf9  MOV dword ptr [ESP + 0x4],ESI
0041eafd  LEA ECX,[ESI + 0x100]
0041eb03  MOV dword ptr [ESP + 0x10],0x4
0041eb0b  CALL 0x00424da0
0041eb10  LEA ECX,[ESI + 0xbc]
0041eb16  MOV byte ptr [ESP + 0x10],0x3
0041eb1b  CALL 0x0049b35a
0041eb20  LEA ECX,[ESI + 0x80]
0041eb26  MOV byte ptr [ESP + 0x10],0x2
0041eb2b  CALL 0x0049b35a
0041eb30  LEA ECX,[ESI + 0x64]
0041eb33  MOV byte ptr [ESP + 0x10],0x1
0041eb38  MOV dword ptr [ECX],0x2f95d48
0041eb3e  CALL 0x004064a0
0041eb43  LEA ECX,[ESI + 0x5c]
0041eb46  MOV byte ptr [ESP + 0x10],0x0
0041eb4b  CALL 0x004931d6
0041eb50  MOV ECX,ESI
0041eb52  MOV dword ptr [ESP + 0x10],0xffffffff
0041eb5a  CALL 0x00493f68
0041eb5f  MOV ECX,dword ptr [ESP + 0x8]
0041eb63  POP ESI
0041eb64  MOV dword ptr FS:[0x0],ECX
0041eb6b  ADD ESP,0x10
0041eb6e  RET
