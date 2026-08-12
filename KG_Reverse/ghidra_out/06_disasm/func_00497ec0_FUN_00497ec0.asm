; Function: FUN_00497ec0
; Entry:    00497ec0
; Size:     87 bytes

00497ec0  PUSH ESI
00497ec1  MOV ESI,ECX
00497ec3  MOV EAX,dword ptr [ESI + 0xc]
00497ec6  TEST EAX,EAX
00497ec8  JZ 0x00497f04
00497eca  CMP dword ptr [ESI + 0x10],0x0
00497ece  JNZ 0x00497f13
00497ed0  MOV ECX,dword ptr [ESI + 0x8]
00497ed3  PUSH EDI
00497ed4  MOV EDI,0x400
00497ed9  PUSH EDI
00497eda  PUSH ECX
00497edb  PUSH dword ptr [EAX + 0x4]
00497ede  CALL dword ptr [0x004a25d8]
00497ee4  PUSH dword ptr [ESP + 0xc]
00497ee8  AND AX,0xf6fb
00497eec  OR EAX,EDI
00497eee  PUSH dword ptr [ESI + 0x4]
00497ef1  PUSH EAX
00497ef2  MOV EAX,dword ptr [ESI + 0xc]
00497ef5  PUSH dword ptr [ESI + 0x8]
00497ef8  PUSH dword ptr [EAX + 0x4]
00497efb  CALL dword ptr [0x004a2464]
00497f01  POP EDI
00497f02  JMP 0x00497f13
00497f04  PUSH dword ptr [ESP + 0x8]
00497f08  MOV EAX,dword ptr [ESI + 0x14]
00497f0b  PUSH dword ptr [EAX + 0x1c]
00497f0e  CALL 0x0049a754
00497f13  POP ESI
00497f14  RET 0x4
