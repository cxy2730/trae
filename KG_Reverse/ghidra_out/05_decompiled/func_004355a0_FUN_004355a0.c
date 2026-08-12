// Function: FUN_004355a0
// Entry:    004355a0
// Size:     656 bytes
// Conv:     unknown
// Signature: undefined FUN_004355a0(void)
// Decompiled by Ghidra 12.1.2


undefined4 * __thiscall FUN_004355a0(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004a0845;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004941d5(0x43c,param_2);
  local_4 = 0;
  FUN_00494787();
  param_1[0x17] = &PTR_LAB_02f96c90;
  local_4._0_1_ = 1;
  FUN_00494787();
  param_1[0x26] = &PTR_LAB_02f96c90;
  local_4._0_1_ = 2;
  FUN_00494787();
  param_1[0x35] = &PTR_LAB_02f96bd8;
  local_4._0_1_ = 3;
  FUN_00494787();
  param_1[0x44] = &PTR_LAB_02f96bd8;
  local_4._0_1_ = 4;
  FUN_00494787();
  param_1[0x53] = &PTR_LAB_02f96c90;
  local_4._0_1_ = 5;
  FUN_00494787();
  param_1[0x62] = &PTR_LAB_02f96b20;
  local_4._0_1_ = 6;
  FUN_00494787();
  param_1[0x71] = &PTR_LAB_02f96b20;
  local_4._0_1_ = 7;
  FUN_00494787();
  param_1[0x80] = &PTR_LAB_02f96a58;
  local_4._0_1_ = 8;
  FUN_00494787();
  param_1[0x8f] = &PTR_LAB_02f96b20;
  local_4._0_1_ = 9;
  FUN_00494787();
  param_1[0x9e] = &PTR_LAB_02f96a58;
  local_4._0_1_ = 10;
  FUN_00494787();
  param_1[0xad] = &PTR_LAB_02f96b20;
  local_4._0_1_ = 0xb;
  FUN_00494787();
  param_1[0xbc] = &PTR_LAB_02f96b20;
  local_4._0_1_ = 0xc;
  FUN_00494787();
  param_1[0xcb] = &PTR_LAB_02f96b20;
  local_4._0_1_ = 0xd;
  FUN_00494787();
  param_1[0xda] = &PTR_LAB_02f96b20;
  local_4._0_1_ = 0xe;
  FUN_00494787();
  param_1[0xe9] = &PTR_LAB_02f96b20;
  local_4._0_1_ = 0xf;
  FUN_00494787();
  param_1[0xf8] = &PTR_LAB_02f96b20;
  local_4._0_1_ = 0x10;
  FUN_00494787();
  param_1[0x107] = &PTR_LAB_02f96c90;
  local_4._0_1_ = 0x11;
  FUN_00494787();
  param_1[0x116] = &PTR_LAB_02f96a58;
  local_4._0_1_ = 0x12;
  FUN_00494787();
  param_1[0x125] = &PTR_LAB_02f96c90;
  local_4._0_1_ = 0x13;
  FUN_00494787();
  param_1[0x134] = &PTR_LAB_02f96c90;
  local_4._0_1_ = 0x14;
  FUN_00494787();
  param_1[0x143] = &PTR_LAB_02f96c90;
  local_4._0_1_ = 0x15;
  FUN_00494787();
  param_1[0x152] = &PTR_LAB_02f96b20;
  local_4._0_1_ = 0x16;
  FUN_00494787();
  param_1[0x161] = &PTR_LAB_02f96b20;
  local_4._0_1_ = 0x17;
  FUN_00429460();
  local_4 = CONCAT31(local_4._1_3_,0x18);
  FUN_004923a5();
  *param_1 = &PTR_LAB_02f96988;
  ExceptionList = local_c;
  return param_1;
}

