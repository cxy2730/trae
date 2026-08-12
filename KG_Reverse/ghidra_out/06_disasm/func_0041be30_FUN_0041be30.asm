; Function: FUN_0041be30
; Entry:    0041be30
; Size:     136 bytes

0041be30  FLD double ptr [0x02f959f8]
0041be36  FCOMP double ptr [ESP + 0x8]
0041be3a  FNSTSW AX
0041be3c  TEST AH,0x1
0041be3f  JNZ 0x0041be76
0041be41  FLD double ptr [0x02f959f0]
0041be47  FCOMP double ptr [ESP + 0x8]
0041be4b  FNSTSW AX
0041be4d  TEST AH,0x41
0041be50  JNZ 0x0041be9a
0041be52  MOV ECX,dword ptr [ESP + 0x4]
0041be56  MOV dword ptr [ESP + 0xc],0xc1241034
0041be5e  MOV EDX,dword ptr [ESP + 0xc]
0041be62  MOV dword ptr [ESP + 0x8],0x0
0041be6a  MOV EAX,dword ptr [ESP + 0x8]
0041be6e  PUSH EDX
0041be6f  PUSH EAX
0041be70  CALL 0x004815aa
0041be75  RET
0041be76  MOV ECX,dword ptr [ESP + 0x4]
0041be7a  MOV dword ptr [ESP + 0xc],0x41469240
0041be82  MOV EDX,dword ptr [ESP + 0xc]
0041be86  MOV dword ptr [ESP + 0x8],0x80000000
0041be8e  MOV EAX,dword ptr [ESP + 0x8]
0041be92  PUSH EDX
0041be93  PUSH EAX
0041be94  CALL 0x004815aa
0041be99  RET
0041be9a  MOV ECX,dword ptr [ESP + 0xc]
0041be9e  MOV EAX,dword ptr [ESP + 0x8]
0041bea2  MOV EDX,ECX
0041bea4  MOV dword ptr [ESP + 0xc],ECX
0041bea8  MOV ECX,dword ptr [ESP + 0x4]
0041beac  PUSH EDX
0041bead  PUSH EAX
0041beae  MOV dword ptr [ESP + 0x10],EAX
0041beb2  CALL 0x004815aa
0041beb7  RET
