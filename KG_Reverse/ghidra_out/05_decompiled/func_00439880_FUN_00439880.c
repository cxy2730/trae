// Function: FUN_00439880
// Entry:    00439880
// Size:     109 bytes
// Conv:     unknown
// Signature: undefined FUN_00439880(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_00439880(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004a0b93;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_02f96e70;
  local_4 = 0;
  FUN_0040f710();
  *param_1 = &PTR_FUN_02f96e64;
  local_4 = 1;
  FUN_004064a0();
  local_4 = 0xffffffff;
  param_1[2] = &PTR_FUN_02f96e60;
  FUN_004064a0();
  ExceptionList = local_c;
  return;
}

