; Function: FUN_0049c821
; Entry:    0049c821
; Size:     19 bytes

0049c821  MOV EDX,dword ptr [ECX + 0x4]
0049c824  MOV EAX,dword ptr [ESP + 0x4]
0049c828  PUSH ESI
0049c829  MOV ESI,dword ptr [ECX]
0049c82b  MOV dword ptr [EDX + EAX*0x1],ESI
0049c82e  MOV dword ptr [ECX],EAX
0049c830  POP ESI
0049c831  RET 0x4
