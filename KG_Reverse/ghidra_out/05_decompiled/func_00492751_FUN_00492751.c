// Function: FUN_00492751
// Entry:    00492751
// Size:     55 bytes
// Conv:     unknown
// Signature: undefined FUN_00492751(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_00492751(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = (*(int *)(param_1 + 8) - param_2) - param_3;
  if (iVar1 != 0) {
    FUN_00483180(*(int *)(param_1 + 4) + param_2 * 4,*(int *)(param_1 + 4) + (param_2 + param_3) * 4
                 ,iVar1 * 4);
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) - param_3;
  return;
}

