// Function: FUN_0041f050
// Entry:    0041f050
// Size:     183 bytes
// Conv:     unknown
// Signature: undefined FUN_0041f050(void)
// Decompiled by Ghidra 12.1.2


undefined4 * __thiscall FUN_0041f050(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049f15a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004941d5(0x11e,param_2);
  param_1[0x17] = PTR_DAT_02fd8088;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  FUN_004062a0();
  local_4._0_1_ = 2;
  FUN_00494787();
  param_1[0x20] = &PTR_LAB_02f95e30;
  local_4._0_1_ = 3;
  FUN_00494787();
  param_1[0x2f] = &PTR_LAB_02f95e30;
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_00424ce0();
  *param_1 = &PTR_LAB_02f95d60;
  param_1[0x3f] = 0;
  param_1[0x1f] = 0;
  ExceptionList = local_c;
  return param_1;
}

