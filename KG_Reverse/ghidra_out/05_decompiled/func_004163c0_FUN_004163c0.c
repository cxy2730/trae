// Function: FUN_004163c0
// Entry:    004163c0
// Size:     178 bytes
// Conv:     unknown
// Signature: undefined FUN_004163c0(void)
// Decompiled by Ghidra 12.1.2


void FUN_004163c0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (((*(int *)(param_1 + 0xd4) == 0) && (iVar2 = *(int *)(param_1 + 0x9c), iVar2 != 0)) &&
     ((*(int *)(param_1 + 0xa0) == 0 || (*(int *)(param_1 + 0xa0) == 1)))) {
    if (*(int *)(param_1 + 0x9c) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_1 + 0x94);
    }
    iVar1 = FUN_0041bb80(uVar3,iVar2);
    if (iVar1 == 1) {
      FUN_00439b90(uVar3,iVar2,*(int *)(param_1 + 0xa0) == 0);
      return;
    }
    iVar1 = FUN_00424fc0(uVar3,iVar2);
    if (iVar1 == 1) {
      iVar2 = FUN_00424fe0(uVar3,iVar2,0);
      if (iVar2 == 1) {
        FUN_004252a0(*(int *)(param_1 + 0xa0) == 0);
      }
    }
  }
  return;
}

