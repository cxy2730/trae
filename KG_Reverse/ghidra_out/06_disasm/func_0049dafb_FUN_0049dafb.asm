; Function: FUN_0049dafb
; Entry:    0049dafb
; Size:     45 bytes

0049dafb  MOV EAX,0x4a1940
0049db00  CALL 0x004858b8
0049db05  PUSH ECX
0049db06  MOV dword ptr [EBP + -0x10],ECX
0049db09  MOV dword ptr [ECX],0x2f9bfd0
0049db0f  AND dword ptr [EBP + -0x4],0x0
0049db13  ADD ECX,0x4
0049db16  PUSH ECX
0049db17  CALL 0x0049a7ac
0049db1c  MOV ECX,dword ptr [EBP + -0xc]
0049db1f  MOV dword ptr FS:[0x0],ECX
0049db26  LEAVE
0049db27  RET
