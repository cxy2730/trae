// Function: FUN_00427a40
// Entry:    00427a40
// Size:     157 bytes
// Conv:     unknown
// Signature: undefined FUN_00427a40(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00427a40(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_48 [60];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049f6e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00429700();
  local_4 = 0;
  iVar1 = FUN_00427a00(local_48,param_1,param_2,0);
  if (iVar1 != 0) {
    uVar2 = FUN_004297e0();
    local_4 = 0xffffffff;
    thunk_FUN_00429740();
    ExceptionList = local_c;
    return uVar2;
  }
  local_4 = 0xffffffff;
  thunk_FUN_00429740();
  ExceptionList = local_c;
  return 0;
}

