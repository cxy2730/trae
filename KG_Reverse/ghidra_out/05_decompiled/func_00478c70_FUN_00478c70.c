// Function: FUN_00478c70
// Entry:    00478c70
// Size:     97 bytes
// Conv:     unknown
// Signature: undefined FUN_00478c70(void)
// Decompiled by Ghidra 12.1.2


void FUN_00478c70(int param_1,int param_2,int param_3)

{
  param_1 = param_1 + 4;
  if (0 < param_3) {
    do {
      FUN_0047efa0(param_1,&DAT_0300c7bc + DAT_0300bfb4);
      FUN_00480020(&DAT_0300c7bc,DAT_0300bfb4,param_2);
      param_1 = param_1 + 0x100;
      param_2 = param_2 + 0x20;
      DAT_0300bfb4 = DAT_0300bfb4 - 0x20 & 0x1ff;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

