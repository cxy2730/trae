; Function: FUN_0041caf0
; Entry:    0041caf0
; Size:     60 bytes

0041caf0  PUSH -0x1
0041caf2  PUSH 0x49eed8
0041caf7  MOV EAX,FS:[0x0]
0041cafd  PUSH EAX
0041cafe  MOV dword ptr FS:[0x0],ESP
0041cb05  PUSH ECX
0041cb06  MOV dword ptr [ESP],ECX
0041cb0a  MOV dword ptr [ECX],0x2f95a04
0041cb10  MOV dword ptr [ESP + 0xc],0x0
0041cb18  CALL 0x00499e74
0041cb1d  MOV ECX,dword ptr [ESP + 0x4]
0041cb21  MOV dword ptr FS:[0x0],ECX
0041cb28  ADD ESP,0x10
0041cb2b  RET
