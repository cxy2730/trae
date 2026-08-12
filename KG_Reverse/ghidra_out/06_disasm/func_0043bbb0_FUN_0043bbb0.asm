; Function: FUN_0043bbb0
; Entry:    0043bbb0
; Size:     101 bytes

0043bbb0  PUSH EBP
0043bbb1  MOV EBP,ESP
0043bbb3  PUSH -0x1
0043bbb5  PUSH 0x4a0c88
0043bbba  MOV EAX,FS:[0x0]
0043bbc0  PUSH EAX
0043bbc1  MOV dword ptr FS:[0x0],ESP
0043bbc8  SUB ESP,0x10
0043bbcb  PUSH EBX
0043bbcc  PUSH ESI
0043bbcd  PUSH EDI
0043bbce  LEA ECX,[EBP + -0x1c]
0043bbd1  MOV dword ptr [EBP + -0x10],ESP
0043bbd4  CALL 0x00493768
0043bbd9  MOV EDX,dword ptr [EBP + 0x10]
0043bbdc  MOV ECX,dword ptr [EBP + 0x8]
0043bbdf  PUSH EDX
0043bbe0  MOV EDX,dword ptr [EBP + 0xc]
0043bbe3  MOV EAX,dword ptr [ECX]
0043bbe5  MOV dword ptr [EBP + -0x4],0x0
0043bbec  PUSH EDX
0043bbed  MOV byte ptr [EBP + -0x4],0x1
0043bbf1  CALL dword ptr [EAX + 0x34]
0043bbf4  MOV ESI,EAX
0043bbf6  MOV dword ptr [EBP + -0x4],0xffffffff
0043bbfd  CALL 0x004937a6
0043bc02  MOV EAX,ESI
0043bc04  MOV ECX,dword ptr [EBP + -0xc]
0043bc07  MOV dword ptr FS:[0x0],ECX
0043bc0e  POP EDI
0043bc0f  POP ESI
0043bc10  POP EBX
0043bc11  MOV ESP,EBP
0043bc13  POP EBP
0043bc14  RET
