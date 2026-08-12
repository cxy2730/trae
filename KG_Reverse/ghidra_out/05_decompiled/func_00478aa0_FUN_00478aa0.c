// Function: FUN_00478aa0
// Entry:    00478aa0
// Size:     94 bytes
// Conv:     unknown
// Signature: undefined FUN_00478aa0(void)
// Decompiled by Ghidra 12.1.2


void FUN_00478aa0(int param_1,int param_2,int param_3)

{
  if (0 < param_3) {
    do {
      FUN_0047ecc0(param_1,&DAT_0300c7bc + DAT_0300bfb4);
      FUN_00480020(&DAT_0300c7bc,DAT_0300bfb4,param_2);
      param_1 = param_1 + 0x100;
      param_2 = param_2 + 0x20;
      DAT_0300bfb4 = DAT_0300bfb4 - 0x20 & 0x1ff;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

