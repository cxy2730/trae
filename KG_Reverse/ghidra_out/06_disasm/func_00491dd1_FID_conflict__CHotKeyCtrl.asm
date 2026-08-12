; Function: FID_conflict:~CHotKeyCtrl
; Entry:    00491dd1
; Size:     56 bytes

00491dd1  MOV EAX,0x4a19a8
00491dd6  CALL 0x004858b8
00491ddb  PUSH ECX
00491ddc  PUSH ESI
00491ddd  MOV ESI,ECX
00491ddf  MOV dword ptr [EBP + -0x10],ESI
00491de2  MOV dword ptr [ESI],0x2f9c164
00491de8  AND dword ptr [EBP + -0x4],0x0
00491dec  CALL 0x004953fe
00491df1  OR dword ptr [EBP + -0x4],0xffffffff
00491df5  MOV ECX,ESI
00491df7  CALL 0x00495240
00491dfc  MOV ECX,dword ptr [EBP + -0xc]
00491dff  POP ESI
00491e00  MOV dword ptr FS:[0x0],ECX
00491e07  LEAVE
00491e08  RET
