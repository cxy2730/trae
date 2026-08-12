// Function: FUN_0046e400
// Entry:    0046e400
// Size:     232 bytes
// Conv:     unknown
// Signature: undefined FUN_0046e400(void)
// Decompiled by Ghidra 12.1.2


undefined4 * __thiscall FUN_0046e400(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004a1361;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_02f99fd4;
  param_1[4] = param_2;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)((int)param_1 + 0x1d) = 0;
  *(undefined1 *)((int)param_1 + 0x1e) = 1;
  param_1[5] = 0;
  param_1[6] = 0;
  iVar1 = FUN_00492f17(8);
  local_4 = 0;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0046bb00(0);
  }
  local_4 = 0xffffffff;
  param_1[2] = uVar2;
  iVar1 = FUN_00492f17(8);
  local_4 = 1;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0046bb00(0);
  }
  local_4 = 0xffffffff;
  param_1[1] = uVar2;
  iVar1 = FUN_00492f17(4);
  local_4 = 2;
  if (iVar1 != 0) {
    uVar2 = FUN_0046bab0(0);
    param_1[3] = uVar2;
    ExceptionList = local_c;
    return param_1;
  }
  param_1[3] = 0;
  ExceptionList = local_c;
  return param_1;
}

