; Function: FUN_0049d9fa
; Entry:    0049d9fa
; Size:     33 bytes

0049d9fa  CMP dword ptr [0x03010f08],0x0
0049da01  JNZ 0x0049da18
0049da03  MOV EAX,dword ptr [ESP + 0x4]
0049da07  LEA EAX,[EAX + EAX*0x2]
0049da0a  LEA EAX,[EAX*0x8 + 0x3010d70]
0049da11  PUSH EAX
0049da12  CALL dword ptr [0x004a227c]
0049da18  RET 0x4
