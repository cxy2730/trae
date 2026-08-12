; Function: FUN_0043eea0
; Entry:    0043eea0
; Size:     45 bytes

0043eea0  MOV EAX,dword ptr [ESP + 0x8]
0043eea4  PUSH ESI
0043eea5  MOV ESI,dword ptr [ESP + 0x8]
0043eea9  PUSH EAX
0043eeaa  PUSH 0x0
0043eeac  PUSH 0x40
0043eeae  LEA ECX,[ESI + 0x20]
0043eeb1  PUSH ECX
0043eeb2  CALL 0x00446400
0043eeb7  MOV EDX,dword ptr [ESI + 0x1c]
0043eeba  PUSH ESI
0043eebb  OR EDX,0x2
0043eebe  MOV dword ptr [ESI + 0x1c],EDX
0043eec1  CALL 0x0043edc0
0043eec6  ADD ESP,0x14
0043eec9  XOR EAX,EAX
0043eecb  POP ESI
0043eecc  RET
