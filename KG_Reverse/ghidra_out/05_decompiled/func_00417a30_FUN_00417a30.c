// Function: FUN_00417a30
// Entry:    00417a30
// Size:     313 bytes
// Conv:     unknown
// Signature: undefined FUN_00417a30(void)
// Decompiled by Ghidra 12.1.2


undefined4 * __fastcall FUN_00417a30(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049eb92;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00494787();
  param_1[0xf] = &DAT_02f958cc;
  param_1[0x10] = PTR_DAT_02fd8088;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  FUN_004062a0();
  local_4._0_1_ = 2;
  FUN_004062a0();
  local_4._0_1_ = 3;
  FUN_004062a0();
  param_1[0x2c] = PTR_DAT_02fd8088;
  param_1[0x33] = PTR_DAT_02fd8088;
  param_1[0xf] = &PTR_FUN_02f958c4;
  local_4._0_1_ = 4;
  FUN_00424ce0();
  local_4 = CONCAT31(local_4._1_3_,5);
  FUN_004062a0();
  param_1[0x76] = 0;
  param_1[0x75] = &PTR_LAB_02f9598c;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x38] = 0;
  param_1[0x37] = 0;
  param_1[0x3b] = 0;
  param_1[0x36] = 0;
  param_1[0x68] = 0;
  param_1[0x39] = 0;
  param_1[0x6f] = 0;
  param_1[0x6a] = 0;
  param_1[0x69] = 0;
  param_1[0x3a] = 0;
  param_1[0x6c] = 0;
  param_1[0x77] = 0;
  param_1[0x6b] = 0;
  param_1[0x78] = 0;
  param_1[0x6e] = 0;
  param_1[0x6d] = 0;
  *param_1 = &PTR_LAB_02f958d4;
  ExceptionList = local_c;
  return param_1;
}

