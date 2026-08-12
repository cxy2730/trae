// Function: FUN_00446810
// Entry:    00446810
// Size:     86 bytes
// Conv:     unknown
// Signature: undefined FUN_00446810(void)
// Decompiled by Ghidra 12.1.2


void FUN_00446810(int param_1,undefined4 param_2,int param_3)

{
  if ((*(uint *)(param_1 + 0x74) & 0x8000) == 0) {
    if (param_3 < 1) {
      FUN_00446620(param_1,param_2);
      return;
    }
    FUN_00446650(param_1,param_2);
    return;
  }
  if (param_3 < 2) {
    FUN_00446780(param_1,param_2);
    return;
  }
  FUN_004467e0(param_1,param_2);
  return;
}

