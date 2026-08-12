; Function: FUN_0048eb20
; Entry:    0048eb20
; Size:     22 bytes

0048eb20  MOV EAX,dword ptr [ESP + 0x8]
0048eb24  AND EAX,0xfff7ffff
0048eb29  PUSH EAX
0048eb2a  PUSH dword ptr [ESP + 0x8]
0048eb2e  CALL 0x0048eaeb
0048eb33  POP ECX
0048eb34  POP ECX
0048eb35  RET
