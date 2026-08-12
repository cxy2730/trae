// Function: FUN_004222a0
// Entry:    004222a0
// Size:     105 bytes
// Conv:     unknown
// Signature: undefined FUN_004222a0(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall FUN_004222a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0049f448;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00493768();
  local_8 = 1;
  uVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x34))(param_2,param_3);
  local_8 = 0xffffffff;
  FUN_004937a6();
  ExceptionList = local_10;
  return uVar1;
}

