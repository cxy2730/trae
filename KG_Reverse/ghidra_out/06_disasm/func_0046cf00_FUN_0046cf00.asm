; Function: FUN_0046cf00
; Entry:    0046cf00
; Size:     197 bytes

0046cf00  PUSH -0x1
0046cf02  PUSH 0x4a12d3
0046cf07  MOV EAX,FS:[0x0]
0046cf0d  PUSH EAX
0046cf0e  MOV dword ptr FS:[0x0],ESP
0046cf15  PUSH ECX
0046cf16  MOV EAX,dword ptr [ESP + 0x14]
0046cf1a  PUSH EBX
0046cf1b  PUSH ESI
0046cf1c  MOV ESI,ECX
0046cf1e  PUSH EAX
0046cf1f  MOV dword ptr [ESP + 0xc],ESI
0046cf23  CALL 0x0046bb70
0046cf28  XOR EBX,EBX
0046cf2a  PUSH 0x4
0046cf2c  MOV dword ptr [ESP + 0x18],EBX
0046cf30  MOV dword ptr [ESI],0x2f99f0c
0046cf36  MOV dword ptr [ESI + 0x34],EBX
0046cf39  MOV dword ptr [ESI + 0x38],EBX
0046cf3c  MOV dword ptr [ESI + 0x3c],EBX
0046cf3f  MOV dword ptr [ESI + 0x48],EBX
0046cf42  MOV dword ptr [ESI + 0x4c],EBX
0046cf45  MOV dword ptr [ESI + 0x5c],EBX
0046cf48  MOV dword ptr [ESI + 0x50],EBX
0046cf4b  MOV dword ptr [ESI + 0x54],EBX
0046cf4e  MOV byte ptr [ESI + 0x60],BL
0046cf51  MOV dword ptr [ESI + 0x64],EBX
0046cf54  CALL 0x00492f17
0046cf59  ADD ESP,0x4
0046cf5c  MOV dword ptr [ESP + 0x1c],EAX
0046cf60  CMP EAX,EBX
0046cf62  MOV byte ptr [ESP + 0x14],0x1
0046cf67  JZ 0x0046cf73
0046cf69  PUSH EBX
0046cf6a  MOV ECX,EAX
0046cf6c  CALL 0x0046bab0
0046cf71  JMP 0x0046cf75
0046cf73  XOR EAX,EAX
0046cf75  MOV [0x02fff094],EAX
0046cf7a  MOV EAX,dword ptr [ESI + 0x64]
0046cf7d  CMP EAX,EBX
0046cf7f  MOV byte ptr [ESP + 0x14],BL
0046cf83  MOV dword ptr [ESI + 0x74],EBX
0046cf86  MOV dword ptr [ESI + 0x78],EBX
0046cf89  MOV dword ptr [ESI + 0x7c],EBX
0046cf8c  MOV dword ptr [ESI + 0x6c],0x7fffffff
0046cf93  MOV dword ptr [ESI + 0x70],EBX
0046cf96  MOV dword ptr [ESI + 0x58],EBX
0046cf99  JNZ 0x0046cfb0
0046cf9b  CALL 0x0046ba50
0046cfa0  MOV dword ptr [ESI + 0x64],EAX
0046cfa3  MOV EDX,dword ptr [EAX]
0046cfa5  PUSH ESI
0046cfa6  PUSH 0x46d540
0046cfab  MOV ECX,EAX
0046cfad  CALL dword ptr [EDX + 0x4]
0046cfb0  MOV ECX,dword ptr [ESP + 0xc]
0046cfb4  MOV EAX,ESI
0046cfb6  POP ESI
0046cfb7  POP EBX
0046cfb8  MOV dword ptr FS:[0x0],ECX
0046cfbf  ADD ESP,0x10
0046cfc2  RET 0x4
