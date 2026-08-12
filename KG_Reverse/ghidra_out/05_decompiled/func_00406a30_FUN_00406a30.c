// Function: FUN_00406a30
// Entry:    00406a30
// Size:     279 bytes
// Conv:     unknown
// Signature: undefined FUN_00406a30(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall FUN_00406a30(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if ((param_3 == 0) || (iVar1 <= param_2)) {
    uVar2 = FUN_00406930(param_2,param_4,param_5);
    return uVar2;
  }
  if (param_5 == 0) {
    uVar2 = FUN_00406b50(param_2,param_3);
    return uVar2;
  }
  iVar3 = iVar1 - param_2;
  if (iVar3 < param_3) {
    param_3 = iVar3;
  }
  iVar3 = iVar3 - param_3;
  if (param_3 < param_5) {
    iVar4 = FUN_00406390((iVar1 - param_3) + param_5);
    if (iVar4 == 0) {
      return 0;
    }
    iVar4 = iVar4 + param_2;
    if (0 < iVar3) {
      FUN_00406c40(iVar4 + param_5,iVar4 + param_3,iVar3);
    }
  }
  else {
    iVar4 = *(int *)(param_1 + 8) + param_2;
    if (param_5 < param_3) {
      if (0 < iVar3) {
        FUN_00406c40(iVar4 + param_5,iVar4 + param_3,iVar3);
      }
      iVar4 = FUN_00406390((iVar1 - param_3) + param_5);
      if (iVar4 == 0) {
        return 0;
      }
      iVar4 = iVar4 + param_2;
    }
  }
  if (param_4 != 0) {
    FUN_00406c40(iVar4,param_4);
    return 1;
  }
  FUN_00406ca0(iVar4,param_5);
  return 1;
}

