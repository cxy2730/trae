// Function: FUN_0040f760
// Entry:    0040f760
// Size:     103 bytes
// Conv:     unknown
// Signature: undefined FUN_0040f760(void)
// Decompiled by Ghidra 12.1.2


void FUN_0040f760(void)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0049e3b1;
  local_c = ExceptionList;
  local_4 = 2;
  ExceptionList = &local_c;
  FUN_0040f260();
  local_4._0_1_ = 1;
  FUN_0040f260();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004931d6();
  local_4 = 0xffffffff;
  FUN_004931d6();
  ExceptionList = local_c;
  return;
}

