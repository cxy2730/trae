; Function: FUN_00443bb0
; Entry:    00443bb0
; Size:     60 bytes

00443bb0  PUSH -0x1
00443bb2  PUSH 0x4a0de8
00443bb7  MOV EAX,FS:[0x0]
00443bbd  PUSH EAX
00443bbe  MOV dword ptr FS:[0x0],ESP
00443bc5  PUSH ECX
00443bc6  MOV dword ptr [ESP],ECX
00443bca  MOV dword ptr [ECX],0x2f97d58
00443bd0  MOV dword ptr [ESP + 0xc],0x0
00443bd8  CALL 0x00499e74
00443bdd  MOV ECX,dword ptr [ESP + 0x4]
00443be1  MOV dword ptr FS:[0x0],ECX
00443be8  ADD ESP,0x10
00443beb  RET
