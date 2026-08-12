// Function: FUN_00429460
// Entry:    00429460
// Size:     97 bytes
// Conv:     unknown
// Signature: undefined FUN_00429460(void)
// Decompiled by Ghidra 12.1.2


int __fastcall FUN_00429460(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_0049fc31;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined **)(param_1 + 0x20) = PTR_DAT_02fd8088;
  *(undefined **)(param_1 + 0x3c) = PTR_DAT_02fd8088;
  local_4 = 1;
  uStack_3 = 0;
  FUN_004062a0();
  _local_4 = CONCAT31(uStack_3,2);
  FUN_00429540();
  ExceptionList = local_c;
  return param_1;
}

