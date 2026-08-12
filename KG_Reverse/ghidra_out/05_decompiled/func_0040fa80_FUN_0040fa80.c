// Function: FUN_0040fa80
// Entry:    0040fa80
// Size:     812 bytes
// Conv:     unknown
// Signature: undefined FUN_0040fa80(void)
// Decompiled by Ghidra 12.1.2


undefined4 * __fastcall FUN_0040fa80(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049e57a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0049ce27(0);
  param_1[0x34] = PTR_DAT_02fd8088;
  param_1[0x35] = PTR_DAT_02fd8088;
  param_1[0x36] = PTR_DAT_02fd8088;
  local_4._0_1_ = 3;
  local_4._1_3_ = 0;
  FUN_004923a5();
  local_4._0_1_ = 4;
  FUN_004923a5();
  FUN_004062a0();
  param_1[0x42] = 0;
  param_1[0x41] = &PTR_FUN_02f95648;
  FUN_004062a0();
  param_1[0x48] = &PTR_FUN_02f954b0;
  FUN_004062a0();
  param_1[0x4d] = &PTR_FUN_02f954b0;
  FUN_004062a0();
  param_1[0x52] = &PTR_FUN_02f954b0;
  FUN_004062a0();
  param_1[0x57] = &PTR_FUN_02f954b0;
  FUN_004062a0();
  param_1[0x5c] = &PTR_FUN_02f954b0;
  FUN_004062a0();
  param_1[0x61] = &PTR_FUN_02f954b0;
  FUN_004062a0();
  param_1[0x68] = &PTR_FUN_02f954b0;
  local_4._0_1_ = 0xd;
  FUN_004923a5();
  param_1[0x73] = PTR_DAT_02fd8088;
  param_1[0x74] = PTR_DAT_02fd8088;
  FUN_004062a0();
  param_1[0x7b] = &PTR_FUN_02f954b0;
  FUN_004062a0();
  param_1[0x80] = &PTR_FUN_02f954b0;
  FUN_004062a0();
  param_1[0x85] = &PTR_FUN_02f954b0;
  FUN_004062a0();
  param_1[0x8b] = &PTR_FUN_02f954b0;
  FUN_004062a0();
  FUN_004062a0();
  FUN_004062a0();
  FUN_004062a0();
  local_4._0_1_ = 0x18;
  FUN_00424ce0();
  local_4._0_1_ = 0x19;
  FUN_00430b50();
  param_1[0xdd] = 0;
  param_1[0xdc] = &PTR_FUN_02f95644;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xe1] = &PTR_FUN_02f95644;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  local_4._0_1_ = 0x1c;
  FUN_004272b0();
  local_4._0_1_ = 0x1d;
  FUN_0049222c();
  param_1[0xee] = &PTR_FUN_02f95644;
  param_1[0xef] = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  local_4 = CONCAT31(local_4._1_3_,0x1f);
  FUN_00494787();
  param_1[0xf2] = &PTR_LAB_02f9558c;
  FUN_004062a0();
  param_1[0x104] = &PTR_FUN_02f954b0;
  *param_1 = &PTR_LAB_02f954f0;
  param_1[0x42] = param_1;
  param_1[0x67] = 0;
  param_1[0x66] = 0;
  param_1[0x10a] = 0;
  param_1[0x109] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x78] = 0;
  param_1[0x77] = 0;
  param_1[0x7a] = 0;
  param_1[0x79] = 0;
  param_1[0xa0] = 0;
  param_1[0x9f] = 0;
  param_1[0xa1] = 0;
  param_1[0xa3] = 0;
  param_1[0xa2] = 0;
  param_1[0xe0] = 0;
  param_1[0xe8] = 0;
  param_1[0x101] = 0;
  param_1[0x102] = 0;
  param_1[0x103] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x8a] = 0;
  param_1[0x10b] = 0;
  param_1[0x72] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_02fe8cd0);
  ExceptionList = local_c;
  return param_1;
}

