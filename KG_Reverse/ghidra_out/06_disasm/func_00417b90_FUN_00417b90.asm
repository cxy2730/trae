; Function: FUN_00417b90
; Entry:    00417b90
; Size:     60 bytes

00417b90  PUSH -0x1
00417b92  PUSH 0x49eba8
00417b97  MOV EAX,FS:[0x0]
00417b9d  PUSH EAX
00417b9e  MOV dword ptr FS:[0x0],ESP
00417ba5  PUSH ECX
00417ba6  MOV dword ptr [ESP],ECX
00417baa  MOV dword ptr [ECX],0x2f95998
00417bb0  MOV dword ptr [ESP + 0xc],0x0
00417bb8  CALL 0x00499e74
00417bbd  MOV ECX,dword ptr [ESP + 0x4]
00417bc1  MOV dword ptr FS:[0x0],ECX
00417bc8  ADD ESP,0x10
00417bcb  RET
