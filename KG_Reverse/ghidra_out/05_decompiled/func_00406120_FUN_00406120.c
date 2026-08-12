// Function: FUN_00406120
// Entry:    00406120
// Size:     95 bytes
// Conv:     unknown
// Signature: undefined FUN_00406120(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_00406120(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0049dc8b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_02f93c4c;
  local_4 = 0;
  param_1[0x1e] = &PTR_FUN_02f93c48;
  FUN_004064a0();
  local_4 = 0xffffffff;
  param_1[0x16] = &PTR_FUN_02f93c48;
  FUN_004064a0();
  ExceptionList = local_c;
  return;
}

