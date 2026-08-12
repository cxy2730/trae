// Function: FUN_0049ab34
// Entry:    0049ab34
// Size:     42 bytes
// Conv:     unknown
// Signature: undefined FUN_0049ab34(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_0049ab34(int *param_1)

{
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  if ((param_1[8] != 0) && (param_1[9] != 0)) {
    (**(code **)(*param_1 + 0x60))(param_1[8]);
  }
  param_1[8] = 0;
  return;
}

