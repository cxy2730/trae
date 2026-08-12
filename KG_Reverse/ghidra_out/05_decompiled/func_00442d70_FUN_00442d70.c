// Function: FUN_00442d70
// Entry:    00442d70
// Size:     60 bytes
// Conv:     unknown
// Signature: undefined FUN_00442d70(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_00442d70(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004a0cf8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_02f97c98;
  local_4 = 0;
  FUN_00499e74(param_1);
  ExceptionList = local_c;
  return;
}

