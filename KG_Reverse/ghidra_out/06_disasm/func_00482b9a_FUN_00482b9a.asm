; Function: FUN_00482b9a
; Entry:    00482b9a
; Size:     24 bytes

00482b9a  PUSH EBX
00482b9b  PUSH ECX
00482b9c  MOV EBX,0x2fd89f4
00482ba1  MOV ECX,dword ptr [EBP + 0x8]
00482ba4  MOV dword ptr [EBX + 0x8],ECX
00482ba7  MOV dword ptr [EBX + 0x4],EAX
00482baa  MOV dword ptr [EBX + 0xc],EBP
00482bad  POP ECX
00482bae  POP EBX
00482baf  RET 0x4
