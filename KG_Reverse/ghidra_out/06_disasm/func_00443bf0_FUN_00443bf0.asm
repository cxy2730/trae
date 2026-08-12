; Function: FUN_00443bf0
; Entry:    00443bf0
; Size:     60 bytes

00443bf0  PUSH -0x1
00443bf2  PUSH 0x4a0e08
00443bf7  MOV EAX,FS:[0x0]
00443bfd  PUSH EAX
00443bfe  MOV dword ptr FS:[0x0],ESP
00443c05  PUSH ECX
00443c06  MOV dword ptr [ESP],ECX
00443c0a  MOV dword ptr [ECX],0x2f97d58
00443c10  MOV dword ptr [ESP + 0xc],0x0
00443c18  CALL 0x00499e74
00443c1d  MOV ECX,dword ptr [ESP + 0x4]
00443c21  MOV dword ptr FS:[0x0],ECX
00443c28  ADD ESP,0x10
00443c2b  RET
