// Function: FUN_0048c74e
// Entry:    0048c74e
// Size:     49 bytes
// Conv:     unknown
// Signature: undefined FUN_0048c74e(void)
// Decompiled by Ghidra 12.1.2


void FUN_0048c74e(undefined4 param_1,int param_2,undefined4 param_3,int *param_4)

{
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    FUN_0048c719(param_1,param_3,param_4);
  } while (*param_4 != -1);
  return;
}

