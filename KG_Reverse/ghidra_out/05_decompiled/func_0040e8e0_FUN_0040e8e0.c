// Function: FUN_0040e8e0
// Entry:    0040e8e0
// Size:     133 bytes
// Conv:     unknown
// Signature: undefined FUN_0040e8e0(void)
// Decompiled by Ghidra 12.1.2


uint __thiscall FUN_0040e8e0(int param_1,undefined4 param_2,int param_3,uint param_4)

{
  int iVar1;
  uint local_8;
  int local_4;
  
  local_8 = FUN_004126c0();
  local_8 = local_8 | param_4;
  iVar1 = *(int *)(param_1 + 4);
  local_4 = *(int *)(param_1 + 0x18) + iVar1 * -8;
  FUN_00406930(iVar1 << 2,&local_8,4);
  FUN_00406930(iVar1 * 8 + 4,&local_4,4);
  FUN_004065a0(param_3);
  if (0 < param_3) {
    FUN_004069d0(param_2,param_3);
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  return local_8;
}

