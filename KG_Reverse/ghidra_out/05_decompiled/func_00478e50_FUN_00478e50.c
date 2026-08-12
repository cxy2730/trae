// Function: FUN_00478e50
// Entry:    00478e50
// Size:     94 bytes
// Conv:     unknown
// Signature: undefined FUN_00478e50(void)
// Decompiled by Ghidra 12.1.2


void FUN_00478e50(int param_1,int param_2,int param_3)

{
  if (0 < param_3) {
    do {
      FUN_0047f2e0(param_1,&DAT_0300c7bc + DAT_0300bfb4);
      FUN_00480330(&DAT_0300c7bc,DAT_0300bfb4,param_2);
      param_1 = param_1 + 0x100;
      param_2 = param_2 + 0x10;
      DAT_0300bfb4 = DAT_0300bfb4 - 0x10 & 0xff;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

