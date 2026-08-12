// Function: FUN_00469f50
// Entry:    00469f50
// Size:     49 bytes
// Conv:     unknown
// Signature: undefined FUN_00469f50(void)
// Decompiled by Ghidra 12.1.2


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00469f50(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  if (DAT_02ff2be0 != (code *)0x0) {
    _DAT_02ff2bc0 = (*DAT_02ff2be0)(param_1,param_2,param_3);
    return _DAT_02ff2bc0;
  }
  _DAT_02ff2bc0 = 0;
  return 0;
}

