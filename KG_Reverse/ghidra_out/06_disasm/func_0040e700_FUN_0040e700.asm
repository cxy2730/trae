; Function: FUN_0040e700
; Entry:    0040e700
; Size:     45 bytes

0040e700  MOV EAX,dword ptr [ESP + 0x4]
0040e704  MOV EDX,dword ptr [ECX + 0x4]
0040e707  PUSH ESI
0040e708  ADD ECX,0x8
0040e70b  MOV ESI,dword ptr [EAX + 0x4]
0040e70e  ADD EAX,0x8
0040e711  MOV dword ptr [ECX + -0x4],ESI
0040e714  MOV ESI,dword ptr [EAX + 0x14]
0040e717  MOV dword ptr [EAX + -0x4],EDX
0040e71a  MOV EDX,dword ptr [ECX + 0x14]
0040e71d  MOV dword ptr [ECX + 0x14],ESI
0040e720  MOV dword ptr [EAX + 0x14],EDX
0040e723  PUSH EAX
0040e724  CALL 0x004065e0
0040e729  POP ESI
0040e72a  RET 0x4
