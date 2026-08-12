; Function: FUN_0048bea9
; Entry:    0048bea9
; Size:     27 bytes

0048bea9  MOV EAX,[0x0301117c]
0048beae  TEST EAX,EAX
0048beb0  JZ 0x0048bec1
0048beb2  PUSH dword ptr [ESP + 0x4]
0048beb6  CALL EAX
0048beb8  TEST EAX,EAX
0048beba  POP ECX
0048bebb  JZ 0x0048bec1
0048bebd  PUSH 0x1
0048bebf  POP EAX
0048bec0  RET
0048bec1  XOR EAX,EAX
0048bec3  RET
