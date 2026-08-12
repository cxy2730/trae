// Function: FUN_00407080
// Entry:    00407080
// Size:     159 bytes
// Conv:     unknown
// Signature: undefined FUN_00407080(void)
// Decompiled by Ghidra 12.1.2


void FUN_00407080(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((~(byte)*(undefined4 *)(param_2 + 0x14) & 1) == 1) {
    iVar1 = *(int *)(*param_1 + -8);
    if (*(uint *)(param_2 + 0x28) < *(int *)(param_2 + 0x24) + 4U) {
      FUN_0049a3b6();
    }
    **(int **)(param_2 + 0x24) = iVar1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 4;
    if (0 < iVar1) {
      FUN_0049a326(*param_1,iVar1);
      return;
    }
  }
  else {
    FUN_00493161();
    if (*(uint *)(param_2 + 0x28) < *(int *)(param_2 + 0x24) + 4U) {
      FUN_0049a432((*(int *)(param_2 + 0x24) - *(uint *)(param_2 + 0x28)) + 4);
    }
    iVar1 = **(int **)(param_2 + 0x24);
    *(int **)(param_2 + 0x24) = *(int **)(param_2 + 0x24) + 1;
    if (0 < iVar1) {
      uVar2 = FUN_004935ba(iVar1);
      FUN_0049a217(uVar2,iVar1);
      FUN_00493609(0xffffffff);
    }
  }
  return;
}

