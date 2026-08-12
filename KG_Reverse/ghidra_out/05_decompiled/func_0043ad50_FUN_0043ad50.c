// Function: FUN_0043ad50
// Entry:    0043ad50
// Size:     76 bytes
// Conv:     unknown
// Signature: undefined FUN_0043ad50(void)
// Decompiled by Ghidra 12.1.2


void FUN_0043ad50(uint *param_1,uint param_2,uint param_3,uint param_4,int param_5,byte param_6,
                 int param_7)

{
  uint uVar1;
  
  uVar1 = *param_1 + ((~param_4 | param_2) ^ param_3) + param_5 + param_7;
  *param_1 = uVar1;
  *param_1 = (uVar1 >> (0x20 - param_6 & 0x1f) | uVar1 << (param_6 & 0x1f)) + param_2;
  return;
}

