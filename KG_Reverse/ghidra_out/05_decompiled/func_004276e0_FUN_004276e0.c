// Function: FUN_004276e0
// Entry:    004276e0
// Size:     61 bytes
// Conv:     unknown
// Signature: undefined FUN_004276e0(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_004276e0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != 0) {
    iVar1 = FUN_00427720(param_2);
    if (iVar1 != -1) {
      iVar2 = (*(int *)(param_1 + 0x14) - iVar1) + -1;
      if (iVar2 != 0) {
        FUN_00483180(*(int *)(param_1 + 0x10) + iVar1 * 4,*(int *)(param_1 + 0x10) + 4 + iVar1 * 4,
                     iVar2 * 4);
      }
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
    }
  }
  return;
}

