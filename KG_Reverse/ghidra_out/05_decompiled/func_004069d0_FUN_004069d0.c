// Function: FUN_004069d0
// Entry:    004069d0
// Size:     81 bytes
// Conv:     unknown
// Signature: undefined FUN_004069d0(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall FUN_004069d0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (0 < param_3) {
    iVar1 = *(int *)(param_1 + 0x10);
    iVar2 = FUN_00406390(iVar1 + param_3);
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = iVar2 + iVar1;
    if (param_2 != 0) {
      FUN_00406c40(iVar2,param_2);
      return 1;
    }
    FUN_00406ca0(iVar2,param_3);
  }
  return 1;
}

