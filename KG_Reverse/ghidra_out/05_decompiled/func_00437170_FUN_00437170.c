// Function: FUN_00437170
// Entry:    00437170
// Size:     128 bytes
// Conv:     unknown
// Signature: undefined FUN_00437170(void)
// Decompiled by Ghidra 12.1.2


undefined4 * __fastcall FUN_00437170(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004a0a68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00494787();
  param_1[0x38] = 1;
  param_1[0x2e] = 1;
  local_4 = 0;
  *param_1 = &PTR_LAB_02f96d98;
  param_1[0x34] = 0;
  param_1[0x37] = 0xffffff;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x39] = 0;
  FUN_004372f0();
  ExceptionList = local_c;
  return param_1;
}

