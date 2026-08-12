// Function: FUN_00476920
// Entry:    00476920
// Size:     94 bytes
// Conv:     unknown
// Signature: undefined FUN_00476920(void)
// Decompiled by Ghidra 12.1.2


void FUN_00476920(int param_1,int param_2,int param_3)

{
  if (0 < param_3) {
    do {
      FUN_0047c0b0(param_1,&DAT_030120c0 + DAT_03009094);
      FUN_0047ae20(&DAT_030120c0,DAT_03009094,param_2);
      param_1 = param_1 + 0x100;
      param_2 = param_2 + 0x10;
      DAT_03009094 = DAT_03009094 - 0x10 & 0xff;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

