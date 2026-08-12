; Function: FUN_0040ead0
; Entry:    0040ead0
; Size:     50 bytes

0040ead0  PUSH ESI
0040ead1  PUSH EDI
0040ead2  MOV EDI,ECX
0040ead4  MOV ECX,dword ptr [EDI + 0x1c]
0040ead7  CALL 0x004126c0
0040eadc  MOV EDX,dword ptr [ESP + 0x18]
0040eae0  MOV ECX,dword ptr [ESP + 0x10]
0040eae4  MOV ESI,EAX
0040eae6  MOV EAX,dword ptr [ESP + 0x14]
0040eaea  OR ESI,EDX
0040eaec  MOV EDX,dword ptr [ESP + 0xc]
0040eaf0  PUSH EAX
0040eaf1  PUSH ECX
0040eaf2  PUSH ESI
0040eaf3  PUSH EDX
0040eaf4  MOV ECX,EDI
0040eaf6  CALL 0x0040e9e0
0040eafb  MOV EAX,ESI
0040eafd  POP EDI
0040eafe  POP ESI
0040eaff  RET 0x10
