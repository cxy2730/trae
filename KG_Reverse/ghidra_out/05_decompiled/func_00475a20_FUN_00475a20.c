// Function: FUN_00475a20
// Entry:    00475a20
// Size:     89 bytes
// Conv:     unknown
// Signature: undefined FUN_00475a20(void)
// Decompiled by Ghidra 12.1.2


void FUN_00475a20(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004a1408;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00475a90();
  local_4 = 0;
  FUN_00475bc0(param_1,param_2);
  FUN_00475ad0(param_3);
  ExceptionList = local_c;
  return;
}

