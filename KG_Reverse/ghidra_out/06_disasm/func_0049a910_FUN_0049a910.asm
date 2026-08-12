; Function: FUN_0049a910
; Entry:    0049a910
; Size:     43 bytes

0049a910  MOV EAX,dword ptr [ESP + 0xc]
0049a914  AND dword ptr [ECX + 0x14],0x0
0049a918  MOV EDX,dword ptr [ESP + 0x8]
0049a91c  MOV dword ptr [ECX + 0x10],EAX
0049a91f  NEG EAX
0049a921  SBB EAX,EAX
0049a923  AND dword ptr [ECX + 0x24],0x0
0049a927  NOT EAX
0049a929  AND EAX,EDX
0049a92b  MOV dword ptr [ECX + 0x18],EDX
0049a92e  MOV dword ptr [ECX + 0x1c],EAX
0049a931  MOV EAX,dword ptr [ESP + 0x4]
0049a935  MOV dword ptr [ECX + 0x20],EAX
0049a938  RET 0xc
