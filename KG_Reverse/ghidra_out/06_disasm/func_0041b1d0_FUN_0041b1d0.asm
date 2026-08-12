; Function: FUN_0041b1d0
; Entry:    0041b1d0
; Size:     59 bytes

0041b1d0  LEA EDX,[ESP + 0x8]
0041b1d4  SUB ESP,0xc
0041b1d7  PUSH EDX
0041b1d8  PUSH dword ptr [ESP + 0x14]
0041b1dc  MOV dword ptr [ESP + 0x8],0x0
0041b1e4  MOV dword ptr [ESP + 0xc],0x0
0041b1ec  MOV dword ptr [ESP + 0x10],0x0
0041b1f4  LEA EDX,[ESP + 0x8]
0041b1f8  PUSH EDX
0041b1f9  CALL EBX
0041b1fb  MOV EAX,dword ptr [ESP + 0xc]
0041b1ff  MOV EDX,dword ptr [ESP + 0x10]
0041b203  MOV ECX,dword ptr [ESP + 0x14]
0041b207  ADD ESP,0x18
0041b20a  RET
