// Function: FUN_0040e970
// Entry:    0040e970
// Size:     107 bytes
// Conv:     unknown
// Signature: undefined FUN_0040e970(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_0040e970(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int local_4;
  
  iVar1 = *(int *)(param_1 + 4);
  local_4 = *(int *)(param_1 + 0x18) + iVar1 * -8;
  FUN_00406930(iVar1 << 2,&param_2,4);
  FUN_00406930(iVar1 * 8 + 4,&local_4,4);
  iVar1 = param_4;
  FUN_004065a0(param_4);
  if (0 < iVar1) {
    FUN_004069d0(param_3,iVar1);
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  return;
}

