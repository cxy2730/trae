// Function: FUN_0043af20
// Entry:    0043af20
// Size:     132 bytes
// Conv:     unknown
// Signature: undefined FUN_0043af20(void)
// Decompiled by Ghidra 12.1.2


undefined4 * __thiscall FUN_0043af20(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004a0bf3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004941d5(0x46e,param_2);
  local_4 = 0;
  FUN_00494787();
  param_1[0x17] = &PTR_LAB_02f97040;
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00494787();
  param_1[0x26] = &PTR_LAB_02f96f88;
  param_1[0x38] = PTR_DAT_02fd8088;
  *param_1 = &PTR_LAB_02f96eb8;
  ExceptionList = local_c;
  return param_1;
}

