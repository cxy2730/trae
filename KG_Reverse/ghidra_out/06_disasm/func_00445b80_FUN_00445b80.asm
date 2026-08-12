; Function: FUN_00445b80
; Entry:    00445b80
; Size:     60 bytes

00445b80  PUSH -0x1
00445b82  PUSH 0x4a10b8
00445b87  MOV EAX,FS:[0x0]
00445b8d  PUSH EAX
00445b8e  MOV dword ptr FS:[0x0],ESP
00445b95  PUSH ECX
00445b96  MOV dword ptr [ESP],ECX
00445b9a  MOV dword ptr [ECX],0x2f980d0
00445ba0  MOV dword ptr [ESP + 0xc],0x0
00445ba8  CALL 0x00499e74
00445bad  MOV ECX,dword ptr [ESP + 0x4]
00445bb1  MOV dword ptr FS:[0x0],ECX
00445bb8  ADD ESP,0x10
00445bbb  RET
