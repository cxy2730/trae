; Function: FUN_0046bb00
; Entry:    0046bb00
; Size:     37 bytes

0046bb00  MOV EAX,dword ptr [ESP + 0x4]
0046bb04  PUSH ESI
0046bb05  PUSH 0x2fff090
0046bb0a  MOV ESI,ECX
0046bb0c  PUSH 0x7fffffff
0046bb11  PUSH EAX
0046bb12  PUSH 0x0
0046bb14  MOV dword ptr [ESI],EAX
0046bb16  CALL dword ptr [0x004a226c]
0046bb1c  MOV dword ptr [ESI + 0x4],EAX
0046bb1f  MOV EAX,ESI
0046bb21  POP ESI
0046bb22  RET 0x4
