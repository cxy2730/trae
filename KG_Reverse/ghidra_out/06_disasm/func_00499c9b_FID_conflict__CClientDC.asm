; Function: FID_conflict:~CClientDC
; Entry:    00499c9b
; Size:     66 bytes

00499c9b  MOV EAX,0x4a15b8
00499ca0  CALL 0x004858b8
00499ca5  PUSH ECX
00499ca6  PUSH ESI
00499ca7  MOV ESI,ECX
00499ca9  MOV dword ptr [EBP + -0x10],ESI
00499cac  MOV dword ptr [ESI],0x2f9aeb8
00499cb2  AND dword ptr [EBP + -0x4],0x0
00499cb6  CALL 0x00499314
00499cbb  PUSH EAX
00499cbc  PUSH dword ptr [ESI + 0x10]
00499cbf  CALL dword ptr [0x004a2520]
00499cc5  OR dword ptr [EBP + -0x4],0xffffffff
00499cc9  MOV ECX,ESI
00499ccb  CALL 0x0049935b
00499cd0  MOV ECX,dword ptr [EBP + -0xc]
00499cd3  POP ESI
00499cd4  MOV dword ptr FS:[0x0],ECX
00499cdb  LEAVE
00499cdc  RET
