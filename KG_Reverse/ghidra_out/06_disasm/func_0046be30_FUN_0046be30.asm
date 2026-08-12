; Function: FUN_0046be30
; Entry:    0046be30
; Size:     126 bytes

0046be30  MOV EAX,dword ptr [ESP + 0x4]
0046be34  PUSH ESI
0046be35  MOV ESI,ECX
0046be37  PUSH EAX
0046be38  CALL 0x0046e400
0046be3d  MOV ECX,dword ptr [ESP + 0xc]
0046be41  XOR EAX,EAX
0046be43  MOV dword ptr [ESI + 0xac],ECX
0046be49  OR ECX,0xffffffff
0046be4c  MOV dword ptr [ESI + 0x28],EAX
0046be4f  MOV dword ptr [ESI + 0x84],EAX
0046be55  MOV byte ptr [ESI + 0x80],AL
0046be5b  MOV dword ptr [ESI + 0x8c],EAX
0046be61  MOV dword ptr [ESI + 0x7c],EAX
0046be64  MOV dword ptr [ESI + 0x90],EAX
0046be6a  MOV dword ptr [ESI + 0x34],EAX
0046be6d  MOV dword ptr [ESI + 0x88],EAX
0046be73  MOV dword ptr [ESI + 0x2c],EAX
0046be76  MOV dword ptr [ESI + 0x30],EAX
0046be79  MOV dword ptr [ESI + 0xa4],EAX
0046be7f  MOV dword ptr [ESI + 0xa8],EAX
0046be85  MOV dword ptr [ESI + 0xa0],EAX
0046be8b  MOV dword ptr [ESI],0x2f99e58
0046be91  MOV dword ptr [ESI + 0x38],ECX
0046be94  MOV dword ptr [ESI + 0x3c],0x3
0046be9b  MOV dword ptr [ESI + 0x40],0x10000
0046bea2  MOV dword ptr [ESI + 0xb0],ECX
0046bea8  MOV EAX,ESI
0046beaa  POP ESI
0046beab  RET 0x8
