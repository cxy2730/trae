; Function: FUN_004818c7
; Entry:    004818c7
; Size:     48 bytes

004818c7  PUSH EBP
004818c8  MOV EBP,ESP
004818ca  MOV EAX,dword ptr [EBP + 0x8]
004818cd  TEST EAX,EAX
004818cf  JZ 0x004818d4
004818d1  MOV EAX,dword ptr [EAX + 0x4]
004818d4  PUSH dword ptr [EBP + 0x24]
004818d7  PUSH dword ptr [EBP + 0x20]
004818da  PUSH dword ptr [EBP + 0x1c]
004818dd  PUSH dword ptr [EBP + 0x18]
004818e0  PUSH dword ptr [EBP + 0x14]
004818e3  PUSH dword ptr [EBP + 0x10]
004818e6  PUSH dword ptr [EBP + 0xc]
004818e9  PUSH EAX
004818ea  PUSH dword ptr [ECX + 0x4]
004818ed  CALL dword ptr [0x004a2604]
004818f3  POP EBP
004818f4  RET 0x20
