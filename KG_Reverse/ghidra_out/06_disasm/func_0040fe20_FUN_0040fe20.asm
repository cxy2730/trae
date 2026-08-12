; Function: FUN_0040fe20
; Entry:    0040fe20
; Size:     88 bytes

0040fe20  PUSH -0x1
0040fe22  PUSH 0x49e5bb
0040fe27  MOV EAX,FS:[0x0]
0040fe2d  PUSH EAX
0040fe2e  MOV dword ptr FS:[0x0],ESP
0040fe35  PUSH ECX
0040fe36  PUSH ESI
0040fe37  MOV dword ptr [ESP + 0x4],ECX
0040fe3b  MOV dword ptr [ECX],0x2f95654
0040fe41  LEA ESI,[ECX + 0x8]
0040fe44  MOV dword ptr [ESP + 0x10],0x0
0040fe4c  MOV ECX,ESI
0040fe4e  CALL 0x004064a0
0040fe53  MOV ECX,ESI
0040fe55  MOV dword ptr [ESP + 0x10],0xffffffff
0040fe5d  MOV dword ptr [ESI],0x2f95460
0040fe63  CALL 0x004064a0
0040fe68  MOV ECX,dword ptr [ESP + 0x8]
0040fe6c  POP ESI
0040fe6d  MOV dword ptr FS:[0x0],ECX
0040fe74  ADD ESP,0x10
0040fe77  RET
