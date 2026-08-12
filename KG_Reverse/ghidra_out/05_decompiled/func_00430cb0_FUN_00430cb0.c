// Function: FUN_00430cb0
// Entry:    00430cb0
// Size:     63 bytes
// Conv:     unknown
// Signature: undefined FUN_00430cb0(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_00430cb0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004a0318;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_02f96440;
  local_4 = 0;
  FUN_004931d6(param_1);
  ExceptionList = local_c;
  return;
}

