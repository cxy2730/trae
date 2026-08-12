; Function: FUN_00443e80
; Entry:    00443e80
; Size:     109 bytes

00443e80  PUSH -0x1
00443e82  PUSH 0x4a0e70
00443e87  MOV EAX,FS:[0x0]
00443e8d  PUSH EAX
00443e8e  MOV dword ptr FS:[0x0],ESP
00443e95  SUB ESP,0x8
00443e98  PUSH ESI
00443e99  MOV ESI,ECX
00443e9b  MOV dword ptr [ESP + 0x4],ESI
00443e9f  MOV dword ptr [ESI],0x2f97e38
00443ea5  MOV EAX,dword ptr [ESI + 0x58]
00443ea8  MOV dword ptr [ESP + 0x14],0x0
00443eb0  PUSH EAX
00443eb1  CALL dword ptr [0x004a2088]
00443eb7  LEA ECX,[ESI + 0x64]
00443eba  MOV dword ptr [ESP + 0x8],ECX
00443ebe  MOV dword ptr [ECX],0x2f97efc
00443ec4  MOV byte ptr [ESP + 0x14],0x1
00443ec9  CALL 0x00499e74
00443ece  MOV ECX,ESI
00443ed0  MOV dword ptr [ESP + 0x14],0xffffffff
00443ed8  CALL 0x0049b35a
00443edd  MOV ECX,dword ptr [ESP + 0xc]
00443ee1  POP ESI
00443ee2  MOV dword ptr FS:[0x0],ECX
00443ee9  ADD ESP,0x14
00443eec  RET
