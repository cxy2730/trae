// Function: FUN_00427ae0
// Entry:    00427ae0
// Size:     132 bytes
// Conv:     unknown
// Signature: undefined FUN_00427ae0(void)
// Decompiled by Ghidra 12.1.2


void FUN_00427ae0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 local_48 [60];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049f708;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00429700();
  local_4 = 0;
  iVar1 = FUN_00427a00(local_48,param_1,param_2,1);
  if (iVar1 == 0) {
    FUN_00493161();
  }
  else {
    FUN_004298d0(param_3);
  }
  local_4 = 0xffffffff;
  thunk_FUN_00429740();
  ExceptionList = local_c;
  return;
}

