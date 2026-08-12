// Function: FUN_00451b50
// Entry:    00451b50
// Size:     177 bytes
// Conv:     unknown
// Signature: undefined FUN_00451b50(void)
// Decompiled by Ghidra 12.1.2


int FUN_00451b50(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[0x6c];
  if (*(int *)(iVar1 + 0x14) != 0) {
    return 2;
  }
  iVar2 = (**(code **)(param_1[0x6d] + 4))(param_1);
  if (iVar2 == 1) {
    if (*(int *)(iVar1 + 0x18) != 0) {
      FUN_00451c10(param_1);
      *(undefined4 *)(iVar1 + 0x18) = 0;
      return 1;
    }
    if (*(int *)(iVar1 + 0x10) == 0) {
      (**(code **)*param_1)(param_1);
    }
    FUN_004518d0(param_1);
  }
  else if (iVar2 == 2) {
    *(undefined4 *)(iVar1 + 0x14) = 1;
    if (*(int *)(iVar1 + 0x18) == 0) {
      if ((int)param_1[0x24] < (int)param_1[0x26]) {
        param_1[0x26] = param_1[0x24];
        return 2;
      }
    }
    else if (*(int *)(param_1[0x6d] + 0x54) != 0) {
      (**(code **)*param_1)(param_1);
      return 2;
    }
  }
  return iVar2;
}

