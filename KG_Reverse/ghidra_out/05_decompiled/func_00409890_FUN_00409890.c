// Function: FUN_00409890
// Entry:    00409890
// Size:     60 bytes
// Conv:     unknown
// Signature: undefined FUN_00409890(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_00409890(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0049dfd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_02f9547c;
  local_4 = 0;
  FUN_00499e74(param_1);
  ExceptionList = local_c;
  return;
}

