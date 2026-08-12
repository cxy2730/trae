; Function: __allmul
; Entry:    00482d90
; Size:     52 bytes

00482d90  MOV EAX,dword ptr [ESP + 0x8]
00482d94  MOV ECX,dword ptr [ESP + 0x10]
00482d98  OR ECX,EAX
00482d9a  MOV ECX,dword ptr [ESP + 0xc]
00482d9e  JNZ 0x00482da9
00482da0  MOV EAX,dword ptr [ESP + 0x4]
00482da4  MUL ECX
00482da6  RET 0x10
00482da9  PUSH EBX
00482daa  MUL ECX
00482dac  MOV EBX,EAX
00482dae  MOV EAX,dword ptr [ESP + 0x8]
00482db2  MUL dword ptr [ESP + 0x14]
00482db6  ADD EBX,EAX
00482db8  MOV EAX,dword ptr [ESP + 0x8]
00482dbc  MUL ECX
00482dbe  ADD EDX,EBX
00482dc0  POP EBX
00482dc1  RET 0x10
