; Function: FUN_0049aaab
; Entry:    0049aaab
; Size:     66 bytes

0049aaab  PUSH ESI
0049aaac  PUSH EDI
0049aaad  MOV EDI,dword ptr [ESP + 0x10]
0049aab1  MOV ESI,ECX
0049aab3  TEST EDI,EDI
0049aab5  JZ 0x0049aae8
0049aab7  MOV EAX,dword ptr [ESI + 0x14]
0049aaba  ADD EAX,EDI
0049aabc  CMP EAX,dword ptr [ESI + 0x18]
0049aabf  JBE 0x0049aac7
0049aac1  MOV EDX,dword ptr [ESI]
0049aac3  PUSH EAX
0049aac4  CALL dword ptr [EDX + 0x64]
0049aac7  MOV ECX,dword ptr [ESI + 0x20]
0049aaca  MOV EAX,dword ptr [ESI]
0049aacc  ADD ECX,dword ptr [ESI + 0x14]
0049aacf  PUSH EDI
0049aad0  PUSH dword ptr [ESP + 0x10]
0049aad4  PUSH ECX
0049aad5  MOV ECX,ESI
0049aad7  CALL dword ptr [EAX + 0x5c]
0049aada  ADD dword ptr [ESI + 0x14],EDI
0049aadd  MOV EAX,dword ptr [ESI + 0x14]
0049aae0  CMP EAX,dword ptr [ESI + 0x1c]
0049aae3  JBE 0x0049aae8
0049aae5  MOV dword ptr [ESI + 0x1c],EAX
0049aae8  POP EDI
0049aae9  POP ESI
0049aaea  RET 0x8
