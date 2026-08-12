// Function: FUN_0048ed7c
// Entry:    0048ed7c
// Size:     27 bytes
// Conv:     unknown
// Signature: undefined FUN_0048ed7c(void)
// Decompiled by Ghidra 12.1.2


void FUN_0048ed7c(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  param_1 = param_1 - (int)param_2;
  iVar1 = 3;
  do {
    *(undefined4 *)(param_1 + (int)param_2) = *param_2;
    param_2 = param_2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

