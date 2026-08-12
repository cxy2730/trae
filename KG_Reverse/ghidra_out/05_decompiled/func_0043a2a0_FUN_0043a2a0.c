// Function: FUN_0043a2a0
// Entry:    0043a2a0
// Size:     89 bytes
// Conv:     unknown
// Signature: undefined FUN_0043a2a0(void)
// Decompiled by Ghidra 12.1.2


void FUN_0043a2a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004a0bc8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0043ada0();
  local_4 = 0;
  FUN_00475bc0(param_1,param_2);
  FUN_0043ae30(param_3);
  ExceptionList = local_c;
  return;
}

