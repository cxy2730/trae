; Function: FUN_0046df40
; Entry:    0046df40
; Size:     100 bytes

0046df40  PUSH EBP
0046df41  MOV EBP,ESP
0046df43  SUB ESP,0x8
0046df46  PUSH EBX
0046df47  PUSH ESI
0046df48  PUSH EDI
0046df49  MOV EDI,dword ptr [EBP + 0xc]
0046df4c  MOV dword ptr [EBP + -0x8],EDI
0046df4f  MOV AL,byte ptr [EDI + 0x100]
0046df55  MOV CL,byte ptr [EDI + 0x101]
0046df5b  MOV byte ptr [EBP + 0xf],AL
0046df5e  MOV byte ptr [EBP + -0x1],CL
0046df61  XOR EBX,EBX
0046df63  MOV BL,byte ptr [EBP + 0xf]
0046df66  XOR EDX,EDX
0046df68  MOV DL,byte ptr [EBP + -0x1]
0046df6b  MOV ESI,dword ptr [EBP + -0x8]
0046df6e  MOV ECX,dword ptr [EBP + 0x8]
0046df71  TEST ECX,ECX
0046df73  JLE 0x0046df85
0046df75  INC BL
0046df77  MOV AL,byte ptr [ESI + EBX*0x1]
0046df7a  ADD DL,AL
0046df7c  XCHG byte ptr [ESI + EDX*0x1],AL
0046df7f  MOV byte ptr [ESI + EBX*0x1],AL
0046df82  DEC ECX
0046df83  JNZ 0x0046df75
0046df85  MOV byte ptr [EBP + 0xf],BL
0046df88  MOV byte ptr [EBP + -0x1],DL
0046df8b  MOV DL,byte ptr [EBP + 0xf]
0046df8e  MOV AL,byte ptr [EBP + -0x1]
0046df91  MOV byte ptr [EDI + 0x100],DL
0046df97  MOV byte ptr [EDI + 0x101],AL
0046df9d  POP EDI
0046df9e  POP ESI
0046df9f  POP EBX
0046dfa0  MOV ESP,EBP
0046dfa2  POP EBP
0046dfa3  RET
