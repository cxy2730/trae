; Function: FUN_0048dec5
; Entry:    0048dec5
; Size:     26 bytes

0048dec5  MOV EDX,dword ptr [ESP + 0x4]
0048dec9  DEC dword ptr [EDX + 0x4]
0048decc  JS 0x0048ded7
0048dece  MOV ECX,dword ptr [EDX]
0048ded0  MOVZX EAX,byte ptr [ECX]
0048ded3  INC ECX
0048ded4  MOV dword ptr [EDX],ECX
0048ded6  RET
0048ded7  PUSH EDX
0048ded8  CALL 0x0048c863
0048dedd  POP ECX
0048dede  RET
