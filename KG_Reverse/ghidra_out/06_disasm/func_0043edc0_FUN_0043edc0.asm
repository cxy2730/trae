; Function: FUN_0043edc0
; Entry:    0043edc0
; Size:     45 bytes

0043edc0  PUSH ESI
0043edc1  MOV ESI,dword ptr [ESP + 0x8]
0043edc5  TEST ESI,ESI
0043edc7  JZ 0x0043edeb
0043edc9  MOV EAX,dword ptr [ESI]
0043edcb  TEST EAX,EAX
0043edcd  JZ 0x0043edeb
0043edcf  MOV ECX,dword ptr [EAX + 0x8]
0043edd2  TEST ECX,ECX
0043edd4  JNZ 0x0043edeb
0043edd6  PUSH ESI
0043edd7  PUSH 0x43edf0
0043eddc  PUSH ESI
0043eddd  CALL 0x00446a50
0043ede2  ADD ESP,0xc
0043ede5  MOV dword ptr [ESI],0x0
0043edeb  POP ESI
0043edec  RET
