; Function: __ftol
; Entry:    00482498
; Size:     39 bytes

00482498  PUSH EBP
00482499  MOV EBP,ESP
0048249b  ADD ESP,-0xc
0048249e  FSTCW word ptr [EBP + -0x2]
004824a2  WAIT
004824a3  MOV AX,word ptr [EBP + -0x2]
004824a7  OR AH,0xc
004824aa  MOV word ptr [EBP + -0x4],AX
004824ae  FLDCW word ptr [EBP + -0x4]
004824b1  FISTP qword ptr [EBP + -0xc]
004824b4  FLDCW word ptr [EBP + -0x2]
004824b7  MOV EAX,dword ptr [EBP + -0xc]
004824ba  MOV EDX,dword ptr [EBP + -0x8]
004824bd  LEAVE
004824be  RET
