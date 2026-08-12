// Function: FUN_00445bc0
// Entry:    00445bc0
// Size:     60 bytes
// Conv:     unknown
// Signature: undefined FUN_00445bc0(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_00445bc0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004a10d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_02f980d0;
  local_4 = 0;
  FUN_00499e74(param_1);
  ExceptionList = local_c;
  return;
}

