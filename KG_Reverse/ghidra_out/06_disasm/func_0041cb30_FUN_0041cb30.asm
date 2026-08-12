; Function: FUN_0041cb30
; Entry:    0041cb30
; Size:     60 bytes

0041cb30  PUSH -0x1
0041cb32  PUSH 0x49eef8
0041cb37  MOV EAX,FS:[0x0]
0041cb3d  PUSH EAX
0041cb3e  MOV dword ptr FS:[0x0],ESP
0041cb45  PUSH ECX
0041cb46  MOV dword ptr [ESP],ECX
0041cb4a  MOV dword ptr [ECX],0x2f95a04
0041cb50  MOV dword ptr [ESP + 0xc],0x0
0041cb58  CALL 0x00499e74
0041cb5d  MOV ECX,dword ptr [ESP + 0x4]
0041cb61  MOV dword ptr FS:[0x0],ECX
0041cb68  ADD ESP,0x10
0041cb6b  RET
