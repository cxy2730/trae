// Function: FUN_00493701
// Entry:    00493701
// Size:     18 bytes
// Conv:     unknown
// Signature: undefined FUN_00493701(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_00493701(int *param_1)

{
  if ((0 < param_1[1]) && (param_1 != (int *)0x0)) {
    (**(code **)(*param_1 + 4))(1);
  }
  return;
}

