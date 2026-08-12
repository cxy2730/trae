; Function: FUN_00422eb0
; Entry:    00422eb0
; Size:     48 bytes

00422eb0  PUSH ESI
00422eb1  MOV ESI,dword ptr [ESP + 0x8]
00422eb5  PUSH EDI
00422eb6  XOR EDI,EDI
00422eb8  CMP ESI,EDI
00422eba  JZ 0x00422edb
00422ebc  MOV EAX,dword ptr [ESI + 0x14]
00422ebf  CMP EAX,EDI
00422ec1  JZ 0x00422eca
00422ec3  PUSH EAX
00422ec4  CALL dword ptr [0x004a2088]
00422eca  MOV dword ptr [ESI + 0x4],EDI
00422ecd  MOV dword ptr [ESI],EDI
00422ecf  MOV dword ptr [ESI + 0x10],EDI
00422ed2  MOV dword ptr [ESI + 0x14],EDI
00422ed5  MOV dword ptr [ESI + 0x8],EDI
00422ed8  MOV dword ptr [ESI + 0xc],EDI
00422edb  POP EDI
00422edc  POP ESI
00422edd  RET 0x4
