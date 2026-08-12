// Function: FUN_0048ea31
// Entry:    0048ea31
// Size:     49 bytes
// Conv:     unknown
// Signature: undefined FUN_0048ea31(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_0048ea31(byte param_1,uint param_2,byte param_3)

{
  if ((*(byte *)((int)&DAT_030150e0 + param_1 + 1) & param_3) == 0) {
    if (param_2 == 0) {
      param_2 = 0;
    }
    else {
      param_2 = *(ushort *)(&DAT_02fd98be + (uint)param_1 * 2) & param_2;
    }
    if (param_2 == 0) {
      return 0;
    }
  }
  return 1;
}

