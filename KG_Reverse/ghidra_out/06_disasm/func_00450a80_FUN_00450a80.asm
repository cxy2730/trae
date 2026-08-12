; Function: FUN_00450a80
; Entry:    00450a80
; Size:     56 bytes

00450a80  MOV EAX,dword ptr [ESP + 0x4]
00450a84  TEST EAX,EAX
00450a86  JZ 0x00450ab7
00450a88  MOV EAX,dword ptr [ESP + 0x8]
00450a8c  TEST EAX,EAX
00450a8e  JZ 0x00450ab7
00450a90  MOV ECX,dword ptr [ESP + 0xc]
00450a94  MOV EDX,dword ptr [ESP + 0x10]
00450a98  MOV dword ptr [EAX + 0xc0],ECX
00450a9e  MOV CL,byte ptr [ESP + 0x14]
00450aa2  MOV byte ptr [EAX + 0xc8],CL
00450aa8  MOV ECX,dword ptr [EAX + 0x8]
00450aab  OR CL,0x80
00450aae  MOV dword ptr [EAX + 0xc4],EDX
00450ab4  MOV dword ptr [EAX + 0x8],ECX
00450ab7  RET
