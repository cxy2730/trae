// Function: FUN_0046d390
// Entry:    0046d390
// Size:     108 bytes
// Conv:     unknown
// Signature: undefined FUN_0046d390(void)
// Decompiled by Ghidra 12.1.2


int __thiscall FUN_0046d390(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0xc))
                    (param_2,*(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x7c));
  if (iVar1 == 0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0x10))(0);
    if (iVar1 == 0) {
      if (DAT_02fff098 == 0) {
        DAT_02fff098 = *param_2;
      }
      *param_2 = *param_2 + *(int *)(param_1 + 0x7c);
      FUN_004754d0(param_2);
      iVar1 = *(int *)(param_1 + 0x7c) + *(int *)(param_1 + 0x54);
      *(int *)(param_1 + 0x7c) = iVar1;
      (**(code **)(**(int **)(param_1 + 0x18) + 0x2c))(iVar1);
      iVar1 = 0;
    }
  }
  return iVar1;
}

