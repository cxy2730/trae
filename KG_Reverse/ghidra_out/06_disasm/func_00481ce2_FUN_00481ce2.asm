; Function: FUN_00481ce2
; Entry:    00481ce2
; Size:     40 bytes

00481ce2  MOV EAX,dword ptr [ESP + 0x4]
00481ce6  PUSH ESI
00481ce7  MOV ESI,ECX
00481ce9  AND dword ptr [ESI + 0xc],0x0
00481ced  AND dword ptr [ESI + 0x8],0x0
00481cf1  MOV dword ptr [ESI],EAX
00481cf3  MOV EAX,dword ptr [ESP + 0xc]
00481cf7  MOV dword ptr [ESI + 0x4],EAX
00481cfa  LEA EAX,[ESI + 0x10]
00481cfd  PUSH EAX
00481cfe  CALL dword ptr [0x004a22c8]
00481d04  MOV EAX,ESI
00481d06  POP ESI
00481d07  RET 0x8
