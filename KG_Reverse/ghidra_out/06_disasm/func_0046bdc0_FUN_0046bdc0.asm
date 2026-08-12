; Function: FUN_0046bdc0
; Entry:    0046bdc0
; Size:     36 bytes

0046bdc0  PUSH ESI
0046bdc1  MOV ESI,ECX
0046bdc3  PUSH 0x1
0046bdc5  CALL dword ptr [0x004a2318]
0046bdcb  MOV AL,byte ptr [ESI + 0x1d]
0046bdce  TEST AL,AL
0046bdd0  JNZ 0x0046bddd
0046bdd2  MOV AL,byte ptr [ESI + 0x1c]
0046bdd5  TEST AL,AL
0046bdd7  JNZ 0x0046bddd
0046bdd9  XOR EAX,EAX
0046bddb  POP ESI
0046bddc  RET
0046bddd  MOV EAX,0x1
0046bde2  POP ESI
0046bde3  RET
