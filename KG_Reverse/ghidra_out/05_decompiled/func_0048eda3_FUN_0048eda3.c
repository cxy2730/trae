// Function: FUN_0048eda3
// Entry:    0048eda3
// Size:     27 bytes
// Conv:     unknown
// Signature: undefined FUN_0048eda3(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_0048eda3(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*param_1 != 0) {
      return 0;
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 1;
  } while (iVar1 < 3);
  return 1;
}

