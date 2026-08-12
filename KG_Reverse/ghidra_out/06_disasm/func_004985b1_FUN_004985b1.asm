; Function: FUN_004985b1
; Entry:    004985b1
; Size:     33 bytes

004985b1  CMP dword ptr [ESP + 0x4],0x0
004985b6  JZ 0x004985cf
004985b8  PUSH dword ptr [ESP + 0x8]
004985bc  PUSH dword ptr [ESP + 0x8]
004985c0  PUSH dword ptr [ESP + 0xc]
004985c4  CALL 0x004986dd
004985c9  PUSH EAX
004985ca  CALL 0x00498672
004985cf  RET 0x8
