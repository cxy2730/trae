; Function: FUN_0049ae68
; Entry:    0049ae68
; Size:     95 bytes

0049ae68  PUSH ESI
0049ae69  PUSH EDI
0049ae6a  MOV ESI,ECX
0049ae6c  PUSH 0x2
0049ae6e  CALL 0x0049d98a
0049ae73  MOV EDI,dword ptr [ESP + 0xc]
0049ae77  ADD dword ptr [ESI + 0xa0],EDI
0049ae7d  MOV EAX,dword ptr [ESI + 0xa0]
0049ae83  TEST EAX,EAX
0049ae85  JLE 0x0049aea8
0049ae87  PUSH dword ptr [0x03010cdc]
0049ae8d  CALL dword ptr [0x004a2510]
0049ae93  TEST EDI,EDI
0049ae95  JLE 0x0049aebb
0049ae97  CMP dword ptr [ESI + 0xa0],0x1
0049ae9e  JNZ 0x0049aebb
0049aea0  MOV dword ptr [ESI + 0xa4],EAX
0049aea6  JMP 0x0049aebb
0049aea8  PUSH dword ptr [ESI + 0xa4]
0049aeae  AND dword ptr [ESI + 0xa0],0x0
0049aeb5  CALL dword ptr [0x004a2510]
0049aebb  PUSH 0x2
0049aebd  CALL 0x0049d9fa
0049aec2  POP EDI
0049aec3  POP ESI
0049aec4  RET 0x4
