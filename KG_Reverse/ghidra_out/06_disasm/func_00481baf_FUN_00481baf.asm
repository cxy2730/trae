; Function: FUN_00481baf
; Entry:    00481baf
; Size:     41 bytes

00481baf  MOV EAX,0x4a1824
00481bb4  CALL 0x004858b8
00481bb9  PUSH ECX
00481bba  MOV dword ptr [EBP + -0x10],ECX
00481bbd  MOV dword ptr [ECX],0x2f9afc8
00481bc3  AND dword ptr [EBP + -0x4],0x0
00481bc7  CALL 0x00499e74
00481bcc  MOV ECX,dword ptr [EBP + -0xc]
00481bcf  MOV dword ptr FS:[0x0],ECX
00481bd6  LEAVE
00481bd7  RET
