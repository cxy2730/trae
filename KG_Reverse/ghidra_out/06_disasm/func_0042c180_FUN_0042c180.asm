; Function: FUN_0042c180
; Entry:    0042c180
; Size:     60 bytes

0042c180  PUSH -0x1
0042c182  PUSH 0x49ff38
0042c187  MOV EAX,FS:[0x0]
0042c18d  PUSH EAX
0042c18e  MOV dword ptr FS:[0x0],ESP
0042c195  PUSH ECX
0042c196  MOV dword ptr [ESP],ECX
0042c19a  MOV dword ptr [ECX],0x2f96400
0042c1a0  MOV dword ptr [ESP + 0xc],0x0
0042c1a8  CALL 0x00499e74
0042c1ad  MOV ECX,dword ptr [ESP + 0x4]
0042c1b1  MOV dword ptr FS:[0x0],ECX
0042c1b8  ADD ESP,0x10
0042c1bb  RET
