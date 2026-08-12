; Function: FUN_00445bc0
; Entry:    00445bc0
; Size:     60 bytes

00445bc0  PUSH -0x1
00445bc2  PUSH 0x4a10d8
00445bc7  MOV EAX,FS:[0x0]
00445bcd  PUSH EAX
00445bce  MOV dword ptr FS:[0x0],ESP
00445bd5  PUSH ECX
00445bd6  MOV dword ptr [ESP],ECX
00445bda  MOV dword ptr [ECX],0x2f980d0
00445be0  MOV dword ptr [ESP + 0xc],0x0
00445be8  CALL 0x00499e74
00445bed  MOV ECX,dword ptr [ESP + 0x4]
00445bf1  MOV dword ptr FS:[0x0],ECX
00445bf8  ADD ESP,0x10
00445bfb  RET
