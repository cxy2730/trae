; Function: __startOneArgErrorHandling
; Entry:    00487e17
; Size:     60 bytes

00487e17  PUSH EBP
00487e18  MOV EBP,ESP
00487e1a  ADD ESP,-0x20
00487e1d  MOV dword ptr [EBP + -0x20],EAX
00487e20  FSTP double ptr [EBP + -0x8]
00487e23  MOV dword ptr [EBP + -0x1c],ECX
00487e26  MOV EAX,dword ptr [EBP + 0x10]
00487e29  MOV ECX,dword ptr [EBP + 0x14]
00487e2c  MOV dword ptr [EBP + -0x18],EAX
00487e2f  MOV dword ptr [EBP + -0x14],ECX
00487e32  LEA EAX,[EBP + 0x8]
00487e35  LEA ECX,[EBP + -0x20]
00487e38  PUSH EAX
00487e39  PUSH ECX
00487e3a  PUSH EDX
00487e3b  CALL 0x0048f1cf
00487e40  ADD ESP,0xc
00487e43  FLD double ptr [EBP + -0x8]
00487e46  CMP word ptr [EBP + 0x8],0x27f
00487e4c  JZ 0x00487e51
00487e4e  FLDCW word ptr [EBP + 0x8]
00487e51  LEAVE
00487e52  RET
