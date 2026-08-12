; Function: FUN_0040fdb0
; Entry:    0040fdb0
; Size:     109 bytes

0040fdb0  PUSH -0x1
0040fdb2  PUSH 0x49e5a3
0040fdb7  MOV EAX,FS:[0x0]
0040fdbd  PUSH EAX
0040fdbe  MOV dword ptr FS:[0x0],ESP
0040fdc5  PUSH ECX
0040fdc6  PUSH ESI
0040fdc7  MOV ESI,ECX
0040fdc9  MOV dword ptr [ESP + 0x4],ESI
0040fdcd  MOV dword ptr [ESI],0x2f95648
0040fdd3  MOV dword ptr [ESP + 0x10],0x0
0040fddb  CALL 0x0040f710
0040fde0  MOV dword ptr [ESI],0x2f95654
0040fde6  ADD ESI,0x8
0040fde9  MOV dword ptr [ESP + 0x10],0x1
0040fdf1  MOV ECX,ESI
0040fdf3  CALL 0x004064a0
0040fdf8  MOV ECX,ESI
0040fdfa  MOV dword ptr [ESP + 0x10],0xffffffff
0040fe02  MOV dword ptr [ESI],0x2f95460
0040fe08  CALL 0x004064a0
0040fe0d  MOV ECX,dword ptr [ESP + 0x8]
0040fe11  POP ESI
0040fe12  MOV dword ptr FS:[0x0],ECX
0040fe19  ADD ESP,0x10
0040fe1c  RET
