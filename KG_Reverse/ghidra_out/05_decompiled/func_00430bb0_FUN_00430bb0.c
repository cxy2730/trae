// Function: FUN_00430bb0
// Entry:    00430bb0
// Size:     86 bytes
// Conv:     unknown
// Signature: undefined FUN_00430bb0(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_00430bb0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004a02fb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_02f96438;
  local_4 = 0;
  FUN_00430c10();
  local_4 = 0xffffffff;
  param_1[2] = &PTR_FUN_02f96434;
  FUN_004064a0();
  ExceptionList = local_c;
  return;
}

