// Function: FUN_0040eb10
// Entry:    0040eb10
// Size:     133 bytes
// Conv:     unknown
// Signature: undefined FUN_0040eb10(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_0040eb10(int *param_1,int param_2)

{
  int iVar1;
  
  if (((byte)*(undefined4 *)(param_2 + 0x14) & 1) == 1) {
    (**(code **)(*param_1 + 8))();
    if (*(uint *)(param_2 + 0x28) < *(int *)(param_2 + 0x24) + 4U) {
      FUN_0049a432((*(int *)(param_2 + 0x24) - *(uint *)(param_2 + 0x28)) + 4);
    }
    param_1[1] = **(int **)(param_2 + 0x24);
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 4;
    FUN_00406620(param_2);
    return;
  }
  iVar1 = param_1[1];
  if (*(uint *)(param_2 + 0x28) < *(int *)(param_2 + 0x24) + 4U) {
    FUN_0049a3b6();
  }
  **(int **)(param_2 + 0x24) = iVar1;
  *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 4;
  FUN_00406620(param_2);
  return;
}

