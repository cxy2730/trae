// Function: FUN_00476bc0
// Entry:    00476bc0
// Size:     95 bytes
// Conv:     unknown
// Signature: undefined FUN_00476bc0(void)
// Decompiled by Ghidra 12.1.2


void FUN_00476bc0(int param_1,int param_2,int param_3)

{
  param_1 = param_1 + 4;
  if (0 < param_3) {
    do {
      FUN_0047c360(param_1,&DAT_030120c0 + DAT_03009094);
      FUN_0047b470(&DAT_030120c0,DAT_03009094,param_2);
      param_1 = param_1 + 0x100;
      param_2 = param_2 + 8;
      DAT_03009094 = DAT_03009094 - 8 & 0x7f;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

