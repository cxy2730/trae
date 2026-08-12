; Function: FID_conflict:~CHotKeyCtrl
; Entry:    0049b292
; Size:     56 bytes

0049b292  MOV EAX,0x4a17b0
0049b297  CALL 0x004858b8
0049b29c  PUSH ECX
0049b29d  PUSH ESI
0049b29e  MOV ESI,ECX
0049b2a0  MOV dword ptr [EBP + -0x10],ESI
0049b2a3  MOV dword ptr [ESI],0x2f9bab0
0049b2a9  AND dword ptr [EBP + -0x4],0x0
0049b2ad  CALL 0x004953fe
0049b2b2  OR dword ptr [EBP + -0x4],0xffffffff
0049b2b6  MOV ECX,ESI
0049b2b8  CALL 0x00495240
0049b2bd  MOV ECX,dword ptr [EBP + -0xc]
0049b2c0  POP ESI
0049b2c1  MOV dword ptr FS:[0x0],ECX
0049b2c8  LEAVE
0049b2c9  RET
