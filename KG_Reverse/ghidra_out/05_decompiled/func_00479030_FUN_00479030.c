// Function: FUN_00479030
// Entry:    00479030
// Size:     92 bytes
// Conv:     unknown
// Signature: undefined FUN_00479030(void)
// Decompiled by Ghidra 12.1.2


void FUN_00479030(int param_1,int param_2,int param_3)

{
  if (0 < param_3) {
    do {
      FUN_0047f640(param_1,&DAT_0300c7bc + DAT_0300bfb4);
      FUN_004806b0(&DAT_0300c7bc,DAT_0300bfb4,param_2);
      param_1 = param_1 + 0x100;
      param_2 = param_2 + 8;
      DAT_0300bfb4 = DAT_0300bfb4 - 8 & 0x7f;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

