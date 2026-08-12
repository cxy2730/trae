; Function: Catch@0043bf3b
; Entry:    0043bf3b
; Size:     28 bytes

0043bf3b  MOV EAX,dword ptr [EBP + -0x18]
0043bf3e  MOV ECX,dword ptr [EBP + -0x3c]
0043bf41  TEST EAX,EAX
0043bf43  MOV dword ptr [EBP + -0x40],ECX
0043bf46  JZ 0x0043bf51
0043bf48  PUSH EAX
0043bf49  CALL 0x00492f40
0043bf4e  ADD ESP,0x4
0043bf51  MOV EAX,0x43bf57
0043bf56  RET
