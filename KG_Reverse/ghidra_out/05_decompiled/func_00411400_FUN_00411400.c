// Function: FUN_00411400
// Entry:    00411400
// Size:     172 bytes
// Conv:     unknown
// Signature: undefined FUN_00411400(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall FUN_00411400(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    iVar1 = FUN_0041bb80(param_2,param_3);
    if (iVar1 == 0) {
      iVar1 = FUN_00424fc0(param_2,param_3);
      if (iVar1 == 0) {
        return 0;
      }
    }
    else if (iVar1 == 1) {
      uVar2 = FUN_00439b90(param_2,param_3,param_4);
      return uVar2;
    }
    FUN_0041b0d0();
    FUN_004069d0(param_2,param_3);
    if (*(int *)(param_1 + 0x2a0) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_1 + 0x298);
    }
    iVar1 = FUN_00424fe0(uVar2,*(undefined4 *)(param_1 + 0x2a0),0);
    if (iVar1 == 1) {
      FUN_004252a0(param_4);
    }
    return 1;
  }
  return 0;
}

