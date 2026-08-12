; Function: FUN_0042a5a0
; Entry:    0042a5a0
; Size:     60 bytes

0042a5a0  PUSH -0x1
0042a5a2  PUSH 0x49fd88
0042a5a7  MOV EAX,FS:[0x0]
0042a5ad  PUSH EAX
0042a5ae  MOV dword ptr FS:[0x0],ESP
0042a5b5  PUSH ECX
0042a5b6  MOV dword ptr [ESP],ECX
0042a5ba  MOV dword ptr [ECX],0x2f96400
0042a5c0  MOV dword ptr [ESP + 0xc],0x0
0042a5c8  CALL 0x00499e74
0042a5cd  MOV ECX,dword ptr [ESP + 0x4]
0042a5d1  MOV dword ptr FS:[0x0],ECX
0042a5d8  ADD ESP,0x10
0042a5db  RET
