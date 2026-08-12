// Function: FUN_0041fb20
// Entry:    0041fb20
// Size:     112 bytes
// Conv:     unknown
// Signature: undefined FUN_0041fb20(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_0041fb20(int param_1)

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
      FUN_00439a50(0);
    }
    else {
      iVar2 = FUN_00424fc0(uVar3,iVar2);
      if (iVar2 == 1) {
        FUN_00424e70();
      }
    }
    uVar3 = 0;
    FUN_0049733e(7);
    FUN_004975c2(uVar3);
  }
  return;
}

