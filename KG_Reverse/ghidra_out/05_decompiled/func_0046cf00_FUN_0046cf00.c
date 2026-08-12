// Function: FUN_0046cf00
// Entry:    0046cf00
// Size:     197 bytes
// Conv:     unknown
// Signature: undefined FUN_0046cf00(void)
// Decompiled by Ghidra 12.1.2


undefined4 * __thiscall FUN_0046cf00(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004a12d3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0046bb70(param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_02f99f0c;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x17] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  iVar1 = FUN_00492f17(4);
  local_4._0_1_ = 1;
  if (iVar1 == 0) {
    DAT_02fff094 = 0;
  }
  else {
    DAT_02fff094 = FUN_0046bab0(0);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1b] = 0x7fffffff;
  param_1[0x1c] = 0;
  param_1[0x16] = 0;
  if (param_1[0x19] == 0) {
    piVar2 = (int *)FUN_0046ba50();
    param_1[0x19] = piVar2;
    (**(code **)(*piVar2 + 4))(&LAB_0046d540,param_1);
  }
  ExceptionList = local_c;
  return param_1;
}

