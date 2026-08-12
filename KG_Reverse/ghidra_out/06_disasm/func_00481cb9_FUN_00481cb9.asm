; Function: FUN_00481cb9
; Entry:    00481cb9
; Size:     41 bytes

00481cb9  MOV EAX,0x4a1af8
00481cbe  CALL 0x004858b8
00481cc3  PUSH ECX
00481cc4  MOV dword ptr [EBP + -0x10],ECX
00481cc7  MOV dword ptr [ECX],0x2f9c51c
00481ccd  AND dword ptr [EBP + -0x4],0x0
00481cd1  CALL 0x0049859b
00481cd6  MOV ECX,dword ptr [EBP + -0xc]
00481cd9  MOV dword ptr FS:[0x0],ECX
00481ce0  LEAVE
00481ce1  RET
