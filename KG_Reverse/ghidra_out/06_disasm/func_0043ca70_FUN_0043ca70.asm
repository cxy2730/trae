; Function: FUN_0043ca70
; Entry:    0043ca70
; Size:     62 bytes

0043ca70  SUB ESP,0x8
0043ca73  MOV EAX,dword ptr [ESP + 0x10]
0043ca77  MOV byte ptr [ESP + 0x4],0x0
0043ca7c  MOV ECX,EAX
0043ca7e  MOV EDX,EAX
0043ca80  SHR ECX,0x18
0043ca83  SHR EDX,0x10
0043ca86  MOV byte ptr [ESP],CL
0043ca8a  MOV byte ptr [ESP + 0x1],DL
0043ca8e  MOV ECX,EAX
0043ca90  MOV byte ptr [ESP + 0x3],AL
0043ca94  MOV EAX,dword ptr [ESP + 0xc]
0043ca98  LEA EDX,[ESP]
0043ca9c  SHR ECX,0x8
0043ca9f  PUSH EDX
0043caa0  PUSH EAX
0043caa1  MOV byte ptr [ESP + 0xa],CL
0043caa5  CALL 0x0043ca10
0043caaa  ADD ESP,0x10
0043caad  RET
