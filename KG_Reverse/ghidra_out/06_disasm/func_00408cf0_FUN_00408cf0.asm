; Function: FUN_00408cf0
; Entry:    00408cf0
; Size:     60 bytes

00408cf0  PUSH -0x1
00408cf2  PUSH 0x49ded8
00408cf7  MOV EAX,FS:[0x0]
00408cfd  PUSH EAX
00408cfe  MOV dword ptr FS:[0x0],ESP
00408d05  PUSH ECX
00408d06  MOV dword ptr [ESP],ECX
00408d0a  MOV dword ptr [ECX],0x2f9547c
00408d10  MOV dword ptr [ESP + 0xc],0x0
00408d18  CALL 0x00499e74
00408d1d  MOV ECX,dword ptr [ESP + 0x4]
00408d21  MOV dword ptr FS:[0x0],ECX
00408d28  ADD ESP,0x10
00408d2b  RET
