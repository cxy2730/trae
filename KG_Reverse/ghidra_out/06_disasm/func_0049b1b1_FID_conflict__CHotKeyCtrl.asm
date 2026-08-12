; Function: FID_conflict:~CHotKeyCtrl
; Entry:    0049b1b1
; Size:     56 bytes

0049b1b1  MOV EAX,0x4a1788
0049b1b6  CALL 0x004858b8
0049b1bb  PUSH ECX
0049b1bc  PUSH ESI
0049b1bd  MOV ESI,ECX
0049b1bf  MOV dword ptr [EBP + -0x10],ESI
0049b1c2  MOV dword ptr [ESI],0x2f9b934
0049b1c8  AND dword ptr [EBP + -0x4],0x0
0049b1cc  CALL 0x004953fe
0049b1d1  OR dword ptr [EBP + -0x4],0xffffffff
0049b1d5  MOV ECX,ESI
0049b1d7  CALL 0x00495240
0049b1dc  MOV ECX,dword ptr [EBP + -0xc]
0049b1df  POP ESI
0049b1e0  MOV dword ptr FS:[0x0],ECX
0049b1e7  LEAVE
0049b1e8  RET
