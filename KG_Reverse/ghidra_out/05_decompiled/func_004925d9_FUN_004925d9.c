// Function: FUN_004925d9
// Entry:    004925d9
// Size:     92 bytes
// Conv:     unknown
// Signature: undefined FUN_004925d9(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_004925d9(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = (*(int *)(param_1 + 8) - param_2) - param_3;
  FUN_00492416(*(int *)(param_1 + 4) + param_2 * 4,param_3);
  if (iVar1 != 0) {
    FUN_00483180(*(int *)(param_1 + 4) + param_2 * 4,*(int *)(param_1 + 4) + (param_2 + param_3) * 4
                 ,iVar1 * 4);
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) - param_3;
  return;
}

