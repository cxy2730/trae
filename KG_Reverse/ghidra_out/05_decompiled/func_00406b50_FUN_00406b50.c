// Function: FUN_00406b50
// Entry:    00406b50
// Size:     172 bytes
// Conv:     unknown
// Signature: undefined FUN_00406b50(void)
// Decompiled by Ghidra 12.1.2


bool __thiscall FUN_00406b50(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == -1) {
    param_3 = *(int *)(param_1 + 0x10) - param_3;
    if ((param_3 < 0) || (param_3 == 0)) {
      FUN_004064a0();
      return true;
    }
  }
  else {
    if (param_3 == 0) {
      return true;
    }
    if ((*(int *)(param_1 + 8) == 0) || (iVar2 = *(int *)(param_1 + 0x10), iVar2 <= param_2)) {
      return false;
    }
    iVar1 = *(int *)(param_1 + 8) + param_2;
    iVar3 = iVar2 - param_2;
    if (param_3 < iVar3) {
      FUN_00406c40(iVar1,iVar1 + param_3,(iVar2 - param_2) - param_3);
      iVar3 = param_3;
    }
    if (*(int *)(param_1 + 0x10) == iVar3) {
      FUN_004064a0();
      return true;
    }
    param_3 = *(int *)(param_1 + 0x10) - iVar3;
  }
  iVar2 = FUN_00406390(param_3);
  return iVar2 != 0;
}

