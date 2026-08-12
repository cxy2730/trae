; Function: FID_conflict:~CHotKeyCtrl
; Entry:    0049b1e9
; Size:     56 bytes

0049b1e9  MOV EAX,0x4a179c
0049b1ee  CALL 0x004858b8
0049b1f3  PUSH ECX
0049b1f4  PUSH ESI
0049b1f5  MOV ESI,ECX
0049b1f7  MOV dword ptr [EBP + -0x10],ESI
0049b1fa  MOV dword ptr [ESI],0x2f9b9f0
0049b200  AND dword ptr [EBP + -0x4],0x0
0049b204  CALL 0x004953fe
0049b209  OR dword ptr [EBP + -0x4],0xffffffff
0049b20d  MOV ECX,ESI
0049b20f  CALL 0x00495240
0049b214  MOV ECX,dword ptr [EBP + -0xc]
0049b217  POP ESI
0049b218  MOV dword ptr FS:[0x0],ECX
0049b21f  LEAVE
0049b220  RET
