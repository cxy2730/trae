; Function: FUN_0049ad67
; Entry:    0049ad67
; Size:     89 bytes

0049ad67  MOV EAX,0x4a1a94
0049ad6c  CALL 0x004858b8
0049ad71  PUSH ECX
0049ad72  MOV EAX,[0x02fd8088]
0049ad77  MOV dword ptr [EBP + -0x10],EAX
0049ad7a  PUSH dword ptr [EBP + 0x8]
0049ad7d  AND dword ptr [EBP + -0x4],0x0
0049ad81  LEA ECX,[EBP + -0x10]
0049ad84  CALL 0x00498a12
0049ad89  MOV EAX,dword ptr [EBP + 0x10]
0049ad8c  CMP EAX,-0x1
0049ad8f  JNZ 0x0049ad94
0049ad91  MOV EAX,dword ptr [EBP + 0x8]
0049ad94  PUSH ESI
0049ad95  PUSH EAX
0049ad96  PUSH dword ptr [EBP + 0xc]
0049ad99  PUSH dword ptr [EBP + -0x10]
0049ad9c  CALL 0x0049ad2f
0049ada1  OR dword ptr [EBP + -0x4],0xffffffff
0049ada5  LEA ECX,[EBP + -0x10]
0049ada8  MOV ESI,EAX
0049adaa  CALL 0x004931d6
0049adaf  MOV ECX,dword ptr [EBP + -0xc]
0049adb2  MOV EAX,ESI
0049adb4  POP ESI
0049adb5  MOV dword ptr FS:[0x0],ECX
0049adbc  LEAVE
0049adbd  RET 0xc
