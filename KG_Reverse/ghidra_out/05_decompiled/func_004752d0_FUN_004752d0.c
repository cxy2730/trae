// Function: FUN_004752d0
// Entry:    004752d0
// Size:     157 bytes
// Conv:     unknown
// Signature: undefined FUN_004752d0(void)
// Decompiled by Ghidra 12.1.2


undefined4 * __thiscall FUN_004752d0(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004a13cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[5] = param_2;
  *param_1 = &PTR_FUN_02f9a05c;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = param_3;
  uVar1 = FUN_00492f17(param_2 + param_3);
  param_1[0xb] = uVar1;
  iVar2 = FUN_00492f17(4);
  local_4 = 0;
  if (iVar2 != 0) {
    uVar1 = FUN_0046bab0(0);
    param_1[1] = uVar1;
    ExceptionList = local_c;
    return param_1;
  }
  param_1[1] = 0;
  ExceptionList = local_c;
  return param_1;
}

