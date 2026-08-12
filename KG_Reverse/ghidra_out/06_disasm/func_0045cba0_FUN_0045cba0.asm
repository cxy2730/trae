; Function: FUN_0045cba0
; Entry:    0045cba0
; Size:     57 bytes

0045cba0  MOV EAX,dword ptr [ESP + 0x14]
0045cba4  PUSH 0x1c
0045cba6  PUSH 0x1
0045cba8  MOV ECX,dword ptr [EAX + 0x28]
0045cbab  PUSH ECX
0045cbac  CALL dword ptr [EAX + 0x20]
0045cbaf  ADD ESP,0xc
0045cbb2  TEST EAX,EAX
0045cbb4  JZ 0x0045cbd8
0045cbb6  MOV DL,byte ptr [ESP + 0x4]
0045cbba  MOV CL,byte ptr [ESP + 0x8]
0045cbbe  MOV byte ptr [EAX + 0x10],DL
0045cbc1  MOV EDX,dword ptr [ESP + 0xc]
0045cbc5  MOV byte ptr [EAX + 0x11],CL
0045cbc8  MOV ECX,dword ptr [ESP + 0x10]
0045cbcc  MOV dword ptr [EAX],0x0
0045cbd2  MOV dword ptr [EAX + 0x14],EDX
0045cbd5  MOV dword ptr [EAX + 0x18],ECX
0045cbd8  RET
