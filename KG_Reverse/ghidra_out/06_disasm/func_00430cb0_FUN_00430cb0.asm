; Function: FUN_00430cb0
; Entry:    00430cb0
; Size:     63 bytes

00430cb0  PUSH -0x1
00430cb2  PUSH 0x4a0318
00430cb7  MOV EAX,FS:[0x0]
00430cbd  PUSH EAX
00430cbe  MOV dword ptr FS:[0x0],ESP
00430cc5  PUSH ECX
00430cc6  MOV dword ptr [ESP],ECX
00430cca  MOV dword ptr [ECX],0x2f96440
00430cd0  ADD ECX,0x10
00430cd3  MOV dword ptr [ESP + 0xc],0x0
00430cdb  CALL 0x004931d6
00430ce0  MOV ECX,dword ptr [ESP + 0x4]
00430ce4  MOV dword ptr FS:[0x0],ECX
00430ceb  ADD ESP,0x10
00430cee  RET
