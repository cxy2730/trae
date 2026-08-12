; Function: __fload_withFB
; Entry:    00487ea5
; Size:     67 bytes

00487ea5  MOV EAX,dword ptr [EDX + 0x4]
00487ea8  AND EAX,0x7ff00000
00487ead  CMP EAX,0x7ff00000
00487eb2  JZ 0x00487eb7
00487eb4  FLD double ptr [EDX]
00487eb6  RET
00487eb7  MOV EAX,dword ptr [EDX + 0x4]
00487eba  SUB ESP,0xa
00487ebd  OR EAX,0x7fff0000
00487ec2  MOV dword ptr [ESP + 0x6],EAX
00487ec6  MOV EAX,dword ptr [EDX + 0x4]
00487ec9  MOV ECX,dword ptr [EDX]
00487ecb  SHLD EAX,ECX,0xb
00487ecf  SHL ECX,0xb
00487ed2  MOV dword ptr [ESP + 0x4],EAX
00487ed6  MOV dword ptr [ESP],ECX
00487ed9  FLD extended double ptr [ESP]
00487edc  ADD ESP,0xa
00487edf  TEST EAX,0x0
00487ee4  MOV EAX,dword ptr [EDX + 0x4]
00487ee7  RET
