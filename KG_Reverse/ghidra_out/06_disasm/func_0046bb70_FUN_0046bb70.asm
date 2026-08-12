; Function: FUN_0046bb70
; Entry:    0046bb70
; Size:     46 bytes

0046bb70  MOV EAX,dword ptr [ESP + 0x4]
0046bb74  PUSH ESI
0046bb75  MOV ESI,ECX
0046bb77  PUSH EAX
0046bb78  CALL 0x0046e400
0046bb7d  XOR EAX,EAX
0046bb7f  MOV dword ptr [ESI],0x2f99e14
0046bb85  MOV dword ptr [ESI + 0x20],EAX
0046bb88  MOV dword ptr [ESI + 0x24],EAX
0046bb8b  MOV dword ptr [ESI + 0x30],EAX
0046bb8e  MOV dword ptr [ESI + 0x28],EAX
0046bb91  MOV dword ptr [ESI + 0x2c],0xffffffff
0046bb98  MOV EAX,ESI
0046bb9a  POP ESI
0046bb9b  RET 0x4
