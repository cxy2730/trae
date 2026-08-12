; Function: FUN_00491ede
; Entry:    00491ede
; Size:     41 bytes

00491ede  MOV EAX,0x4a19d0
00491ee3  CALL 0x004858b8
00491ee8  PUSH ECX
00491ee9  MOV dword ptr [EBP + -0x10],ECX
00491eec  MOV dword ptr [ECX],0x2f9c220
00491ef2  AND dword ptr [EBP + -0x4],0x0
00491ef6  CALL 0x00491f31
00491efb  MOV ECX,dword ptr [EBP + -0xc]
00491efe  MOV dword ptr FS:[0x0],ECX
00491f05  LEAVE
00491f06  RET
