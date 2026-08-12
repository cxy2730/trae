; Function: __copysign
; Entry:    004824bf
; Size:     33 bytes

004824bf  PUSH EBP
004824c0  MOV EBP,ESP
004824c2  PUSH ECX
004824c3  PUSH ECX
004824c4  MOV EAX,dword ptr [EBP + 0x8]
004824c7  MOV dword ptr [EBP + -0x8],EAX
004824ca  MOV EAX,dword ptr [EBP + 0x14]
004824cd  XOR EAX,dword ptr [EBP + 0xc]
004824d0  AND EAX,0x7fffffff
004824d5  XOR EAX,dword ptr [EBP + 0x14]
004824d8  MOV dword ptr [EBP + -0x4],EAX
004824db  FLD double ptr [EBP + -0x8]
004824de  LEAVE
004824df  RET
