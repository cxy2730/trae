; Function: FUN_0043cc80
; Entry:    0043cc80
; Size:     100 bytes

0043cc80  MOV EAX,dword ptr [ESP + 0x8]
0043cc84  MOV CX,word ptr [EAX + 0x72]
0043cc88  TEST CH,0x80
0043cc8b  JZ 0x0043ccac
0043cc8d  MOV ECX,dword ptr [EAX + 0x8]
0043cc90  PUSH -0x1
0043cc92  AND ECX,0xffffe7fa
0043cc98  PUSH 0x10
0043cc9a  MOV dword ptr [EAX + 0x8],ECX
0043cc9d  PUSH EAX
0043cc9e  MOV EAX,dword ptr [ESP + 0x10]
0043cca2  PUSH EAX
0043cca3  CALL 0x0043c5f0
0043cca8  ADD ESP,0x10
0043ccab  RET
0043ccac  MOV EDX,dword ptr [EAX + 0x8]
0043ccaf  TEST CL,0x80
0043ccb2  JZ 0x0043ccb9
0043ccb4  OR DH,0x8
0043ccb7  JMP 0x0043ccbc
0043ccb9  AND DH,0xf7
0043ccbc  TEST CL,0x2
0043ccbf  MOV dword ptr [EAX + 0x8],EDX
0043ccc2  JZ 0x0043ccc9
0043ccc4  OR EDX,0x4
0043ccc7  JMP 0x0043cccc
0043ccc9  AND EDX,0xfffffffb
0043cccc  TEST CL,0x1
0043cccf  MOV dword ptr [EAX + 0x8],EDX
0043ccd2  MOV ECX,EDX
0043ccd4  JZ 0x0043ccdd
0043ccd6  OR ECX,0x1
0043ccd9  MOV dword ptr [EAX + 0x8],ECX
0043ccdc  RET
0043ccdd  AND ECX,0xfffffffe
0043cce0  MOV dword ptr [EAX + 0x8],ECX
0043cce3  RET
