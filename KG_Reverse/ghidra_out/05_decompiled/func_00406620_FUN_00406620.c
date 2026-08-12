// Function: FUN_00406620
// Entry:    00406620
// Size:     173 bytes
// Conv:     unknown
// Signature: undefined FUN_00406620(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_00406620(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if ((~*(uint *)(param_2 + 0x14) & 1) == 0) {
    FUN_004064a0();
    if (*(uint *)(param_2 + 0x28) < *(int *)(param_2 + 0x24) + 4U) {
      FUN_0049a432((*(int *)(param_2 + 0x24) - *(uint *)(param_2 + 0x28)) + 4);
    }
    iVar2 = **(int **)(param_2 + 0x24);
    *(int **)(param_2 + 0x24) = *(int **)(param_2 + 0x24) + 1;
    if (0 < iVar2) {
      iVar3 = FUN_004062c0(iVar2);
      if (iVar3 != 0) {
        FUN_0049a217(*(undefined4 *)(param_1 + 8),iVar2);
        return;
      }
      FUN_0049a5f2(1,0);
    }
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    if (*(uint *)(param_2 + 0x28) < *(int *)(param_2 + 0x24) + 4U) {
      FUN_0049a3b6();
    }
    **(undefined4 **)(param_2 + 0x24) = uVar1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 4;
    if (0 < *(int *)(param_1 + 0x10)) {
      FUN_0049a326(*(undefined4 *)(param_1 + 8),*(int *)(param_1 + 0x10));
      return;
    }
  }
  return;
}

