// Function: FUN_0043a220
// Entry:    0043a220
// Size:     46 bytes
// Conv:     unknown
// Signature: undefined FUN_0043a220(void)
// Decompiled by Ghidra 12.1.2


undefined4 * FUN_0043a220(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
    }
    param_1 = param_1 + 1;
    param_3 = param_3 + 1;
  } while (param_1 != param_2);
  return param_3;
}

