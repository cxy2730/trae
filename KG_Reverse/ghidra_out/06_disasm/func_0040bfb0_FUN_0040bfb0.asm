; Function: FUN_0040bfb0
; Entry:    0040bfb0
; Size:     60 bytes

0040bfb0  PUSH -0x1
0040bfb2  PUSH 0x49e168
0040bfb7  MOV EAX,FS:[0x0]
0040bfbd  PUSH EAX
0040bfbe  MOV dword ptr FS:[0x0],ESP
0040bfc5  PUSH ECX
0040bfc6  MOV dword ptr [ESP],ECX
0040bfca  MOV dword ptr [ECX],0x2f9547c
0040bfd0  MOV dword ptr [ESP + 0xc],0x0
0040bfd8  CALL 0x00499e74
0040bfdd  MOV ECX,dword ptr [ESP + 0x4]
0040bfe1  MOV dword ptr FS:[0x0],ECX
0040bfe8  ADD ESP,0x10
0040bfeb  RET
