; Function: FUN_0048eaeb
; Entry:    0048eaeb
; Size:     53 bytes

0048eaeb  PUSH EBP
0048eaec  MOV EBP,ESP
0048eaee  PUSH ECX
0048eaef  PUSH ESI
0048eaf0  FSTCW word ptr [EBP + -0x4]
0048eaf4  PUSH dword ptr [EBP + -0x4]
0048eaf7  CALL 0x0048eb36
0048eafc  MOV ESI,EAX
0048eafe  MOV EAX,dword ptr [EBP + 0xc]
0048eb01  NOT EAX
0048eb03  AND ESI,EAX
0048eb05  MOV EAX,dword ptr [EBP + 0x8]
0048eb08  AND EAX,dword ptr [EBP + 0xc]
0048eb0b  OR ESI,EAX
0048eb0d  PUSH ESI
0048eb0e  CALL 0x0048ebc8
0048eb13  POP ECX
0048eb14  MOV dword ptr [EBP + 0xc],EAX
0048eb17  POP ECX
0048eb18  FLDCW word ptr [EBP + 0xc]
0048eb1b  MOV EAX,ESI
0048eb1d  POP ESI
0048eb1e  LEAVE
0048eb1f  RET
