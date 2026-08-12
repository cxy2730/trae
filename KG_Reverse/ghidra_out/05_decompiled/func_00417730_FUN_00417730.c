// Function: FUN_00417730
// Entry:    00417730
// Size:     150 bytes
// Conv:     unknown
// Signature: undefined FUN_00417730(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_00417730(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0049eaa7;
  local_c = ExceptionList;
  local_4 = 4;
  ExceptionList = &local_c;
  FUN_004931d6();
  local_4._0_1_ = 3;
  FUN_004931d6();
  local_4._0_1_ = 2;
  *(undefined ***)(param_1 + 0x50) = &PTR_FUN_02f958c0;
  FUN_004064a0();
  local_4._0_1_ = 1;
  *(undefined ***)(param_1 + 0x3c) = &PTR_FUN_02f958c0;
  FUN_004064a0();
  local_4 = (uint)local_4._1_3_ << 8;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_02f958c0;
  FUN_004064a0();
  local_4 = 0xffffffff;
  FUN_004931d6();
  ExceptionList = local_c;
  return;
}

