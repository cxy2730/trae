; Function: FUN_0048fac2
; Entry:    0048fac2
; Size:     105 bytes

0048fac2  PUSH EBP
0048fac3  MOV EBP,ESP
0048fac5  MOV EAX,dword ptr [EBP + 0x8]
0048fac8  TEST EAX,EAX
0048faca  JNZ 0x0048face
0048facc  POP EBP
0048facd  RET
0048face  CMP dword ptr [0x0301119c],0x0
0048fad5  JNZ 0x0048fae9
0048fad7  MOV CX,word ptr [EBP + 0xc]
0048fadb  CMP CX,0xff
0048fae0  JA 0x0048fb1b
0048fae2  PUSH 0x1
0048fae4  MOV byte ptr [EAX],CL
0048fae6  POP EAX
0048fae7  POP EBP
0048fae8  RET
0048fae9  LEA ECX,[EBP + 0x8]
0048faec  AND dword ptr [EBP + 0x8],0x0
0048faf0  PUSH ECX
0048faf1  PUSH 0x0
0048faf3  PUSH dword ptr [0x02fd9ac0]
0048faf9  PUSH EAX
0048fafa  LEA EAX,[EBP + 0xc]
0048fafd  PUSH 0x1
0048faff  PUSH EAX
0048fb00  PUSH 0x220
0048fb05  PUSH dword ptr [0x030111ac]
0048fb0b  CALL dword ptr [0x004a22ac]
0048fb11  TEST EAX,EAX
0048fb13  JZ 0x0048fb1b
0048fb15  CMP dword ptr [EBP + 0x8],0x0
0048fb19  JZ 0x0048fb29
0048fb1b  CALL 0x004843ad
0048fb20  MOV dword ptr [EAX],0x2a
0048fb26  OR EAX,0xffffffff
0048fb29  POP EBP
0048fb2a  RET
