; Function: FUN_00434c90
; Entry:    00434c90
; Size:     60 bytes

00434c90  PUSH -0x1
00434c92  PUSH 0x4a05f8
00434c97  MOV EAX,FS:[0x0]
00434c9d  PUSH EAX
00434c9e  MOV dword ptr FS:[0x0],ESP
00434ca5  PUSH ECX
00434ca6  MOV dword ptr [ESP],ECX
00434caa  MOV dword ptr [ECX],0x2f9652c
00434cb0  MOV dword ptr [ESP + 0xc],0x0
00434cb8  CALL 0x00499e74
00434cbd  MOV ECX,dword ptr [ESP + 0x4]
00434cc1  MOV dword ptr FS:[0x0],ECX
00434cc8  ADD ESP,0x10
00434ccb  RET
