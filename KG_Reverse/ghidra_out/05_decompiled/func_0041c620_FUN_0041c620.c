// Function: FUN_0041c620
// Entry:    0041c620
// Size:     125 bytes
// Conv:     unknown
// Signature: undefined FUN_0041c620(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_0041c620(undefined4 param_1,undefined4 param_2)

{
  undefined *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0049ee3f;
  local_c = ExceptionList;
  local_10 = 0;
  local_14 = PTR_DAT_02fd8088;
  local_4 = 1;
  ExceptionList = &local_c;
  FUN_00490f5e(param_2,&stack0x0000000c);
  FUN_00492f4b(&local_14);
  local_10 = 1;
  local_4 = local_4 & 0xffffff00;
  FUN_004931d6();
  ExceptionList = local_c;
  return param_1;
}

