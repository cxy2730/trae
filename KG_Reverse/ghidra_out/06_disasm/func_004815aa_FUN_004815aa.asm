; Function: FUN_004815aa
; Entry:    004815aa
; Size:     15 bytes

004815aa  FLD double ptr [ESP + 0x4]
004815ae  MOV EAX,ECX
004815b0  FSTP double ptr [EAX]
004815b2  AND dword ptr [EAX + 0x8],0x0
004815b6  RET 0x8
