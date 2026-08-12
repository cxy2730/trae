; Function: FUN_00417bf0
; Entry:    00417bf0
; Size:     60 bytes

00417bf0  PUSH -0x1
00417bf2  PUSH 0x49ebc8
00417bf7  MOV EAX,FS:[0x0]
00417bfd  PUSH EAX
00417bfe  MOV dword ptr FS:[0x0],ESP
00417c05  PUSH ECX
00417c06  MOV dword ptr [ESP],ECX
00417c0a  MOV dword ptr [ECX],0x2f95998
00417c10  MOV dword ptr [ESP + 0xc],0x0
00417c18  CALL 0x00499e74
00417c1d  MOV ECX,dword ptr [ESP + 0x4]
00417c21  MOV dword ptr FS:[0x0],ECX
00417c28  ADD ESP,0x10
00417c2b  RET
