; Function: FUN_0045c3c0
; Entry:    0045c3c0
; Size:     28 bytes

0045c3c0  MOV EAX,dword ptr [ESP + 0xc]
0045c3c4  MOV ECX,dword ptr [ESP + 0x10]
0045c3c8  MOV EDX,EAX
0045c3ca  SHL EDX,0x8
0045c3cd  SUB EDX,EAX
0045c3cf  LEA EAX,[ECX + EDX*0x2 + 0xff]
0045c3d6  ADD ECX,ECX
0045c3d8  CDQ
0045c3d9  IDIV ECX
0045c3db  RET
