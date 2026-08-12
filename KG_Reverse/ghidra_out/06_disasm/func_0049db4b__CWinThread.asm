; Function: ~CWinThread
; Entry:    0049db4b
; Size:     79 bytes

0049db4b  MOV EAX,0x4a1abc
0049db50  CALL 0x004858b8
0049db55  PUSH ECX
0049db56  PUSH ESI
0049db57  MOV ESI,ECX
0049db59  MOV dword ptr [EBP + -0x10],ESI
0049db5c  MOV dword ptr [ESI],0x2f9c448
0049db62  MOV EAX,dword ptr [ESI + 0x28]
0049db65  AND dword ptr [EBP + -0x4],0x0
0049db69  TEST EAX,EAX
0049db6b  JZ 0x0049db74
0049db6d  PUSH EAX
0049db6e  CALL dword ptr [0x004a235c]
0049db74  CALL 0x0049c74a
0049db79  CMP dword ptr [EAX + 0x4],ESI
0049db7c  JNZ 0x0049db82
0049db7e  AND dword ptr [EAX + 0x4],0x0
0049db82  OR dword ptr [EBP + -0x4],0xffffffff
0049db86  MOV ECX,ESI
0049db88  CALL 0x00497a7a
0049db8d  MOV ECX,dword ptr [EBP + -0xc]
0049db90  POP ESI
0049db91  MOV dword ptr FS:[0x0],ECX
0049db98  LEAVE
0049db99  RET
