; Function: FUN_00451880
; Entry:    00451880
; Size:     74 bytes

00451880  PUSH ESI
00451881  MOV ESI,dword ptr [ESP + 0x8]
00451885  PUSH 0x1c
00451887  PUSH 0x0
00451889  MOV EAX,dword ptr [ESI + 0x4]
0045188c  PUSH ESI
0045188d  CALL dword ptr [EAX]
0045188f  ADD ESP,0xc
00451892  MOV dword ptr [ESI + 0x1b0],EAX
00451898  MOV dword ptr [EAX],0x451b50
0045189e  MOV dword ptr [EAX + 0x4],0x451dc0
004518a5  MOV dword ptr [EAX + 0x8],0x4518d0
004518ac  MOV dword ptr [EAX + 0xc],0x451b30
004518b3  MOV dword ptr [EAX + 0x10],0x0
004518ba  MOV dword ptr [EAX + 0x14],0x0
004518c1  MOV dword ptr [EAX + 0x18],0x1
004518c8  POP ESI
004518c9  RET
