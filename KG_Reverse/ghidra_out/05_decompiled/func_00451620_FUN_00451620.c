// Function: FUN_00451620
// Entry:    00451620
// Size:     120 bytes
// Conv:     unknown
// Signature: undefined FUN_00451620(void)
// Decompiled by Ghidra 12.1.2


undefined4 * __thiscall FUN_00451620(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004a1103;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004941d5(0x464,param_2);
  local_4 = 0;
  FUN_00494787();
  param_1[0x17] = &PTR_LAB_02f98b58;
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00494787();
  param_1[0x26] = &PTR_LAB_02f98aa0;
  *param_1 = &PTR_LAB_02f989d0;
  ExceptionList = local_c;
  return param_1;
}

