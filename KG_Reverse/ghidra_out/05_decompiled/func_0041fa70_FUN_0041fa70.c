// Function: FUN_0041fa70
// Entry:    0041fa70
// Size:     172 bytes
// Conv:     unknown
// Signature: undefined FUN_0041fa70(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_0041fa70(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (((*(int *)(param_1 + 0x60) == 0xb) && (*(int *)(param_1 + 0x7c) == 2)) &&
     (iVar2 = *(int *)(param_1 + 0x74), iVar2 != 0)) {
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_1 + 0x6c);
    }
    iVar1 = FUN_0041bb80(uVar3,iVar2);
    if (iVar1 == 1) {
      FUN_00439b90(uVar3,iVar2,0);
LAB_0041fabd:
      uVar3 = 1;
      FUN_0049733e(7);
      FUN_004975c2(uVar3);
      return;
    }
    iVar1 = FUN_00424fc0(uVar3,iVar2);
    if (iVar1 == 1) {
      iVar2 = FUN_00424fe0(uVar3,iVar2,0);
      if (iVar2 == 1) {
        FUN_004252a0(0);
        goto LAB_0041fabd;
      }
    }
    FUN_004961e7(&DAT_02fafcbc,&DAT_02fafb28,0x10);
  }
  return;
}

