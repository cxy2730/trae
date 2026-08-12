; Function: FUN_00430bb0
; Entry:    00430bb0
; Size:     86 bytes

00430bb0  PUSH -0x1
00430bb2  PUSH 0x4a02fb
00430bb7  MOV EAX,FS:[0x0]
00430bbd  PUSH EAX
00430bbe  MOV dword ptr FS:[0x0],ESP
00430bc5  PUSH ECX
00430bc6  PUSH ESI
00430bc7  MOV ESI,ECX
00430bc9  MOV dword ptr [ESP + 0x4],ESI
00430bcd  MOV dword ptr [ESI],0x2f96438
00430bd3  MOV dword ptr [ESP + 0x10],0x0
00430bdb  CALL 0x00430c10
00430be0  LEA ECX,[ESI + 0x8]
00430be3  MOV dword ptr [ESP + 0x10],0xffffffff
00430beb  MOV dword ptr [ECX],0x2f96434
00430bf1  CALL 0x004064a0
00430bf6  MOV ECX,dword ptr [ESP + 0x8]
00430bfa  POP ESI
00430bfb  MOV dword ptr FS:[0x0],ECX
00430c02  ADD ESP,0x10
00430c05  RET
