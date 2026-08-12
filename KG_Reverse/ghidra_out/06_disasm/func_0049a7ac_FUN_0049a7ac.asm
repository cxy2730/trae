; Function: FUN_0049a7ac
; Entry:    0049a7ac
; Size:     25 bytes

0049a7ac  PUSH ESI
0049a7ad  MOV ESI,dword ptr [ESP + 0x8]
0049a7b1  MOV EAX,dword ptr [ESI]
0049a7b3  TEST EAX,EAX
0049a7b5  JZ 0x0049a7c1
0049a7b7  PUSH EAX
0049a7b8  CALL dword ptr [0x004a2088]
0049a7be  AND dword ptr [ESI],0x0
0049a7c1  POP ESI
0049a7c2  RET 0x4
