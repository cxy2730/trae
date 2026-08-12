// Function: FUN_00406930
// Entry:    00406930
// Size:     150 bytes
// Conv:     unknown
// Signature: undefined FUN_00406930(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall FUN_00406930(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_4 == 0) {
    return 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (param_2 == iVar1) {
    uVar2 = FUN_004069d0(param_3,param_4);
    return uVar2;
  }
  iVar3 = param_2;
  if (param_2 <= iVar1) {
    iVar3 = iVar1;
  }
  iVar3 = FUN_00406390(iVar3 + param_4);
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = iVar3 + param_2;
  if (param_2 < iVar1) {
    FUN_00406c40(iVar3 + param_4,iVar3,iVar1 - param_2);
  }
  if (param_3 != 0) {
    FUN_00406c40(iVar3,param_3);
    return 1;
  }
  FUN_00406ca0(iVar3,param_4);
  return 1;
}

