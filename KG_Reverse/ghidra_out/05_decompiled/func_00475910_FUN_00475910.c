// Function: FUN_00475910
// Entry:    00475910
// Size:     121 bytes
// Conv:     unknown
// Signature: undefined FUN_00475910(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_00475910(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004a13e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_02f9a078;
  local_4 = 0;
  *(undefined1 *)((int)param_1 + 0x1d) = 1;
  *(undefined1 *)(param_1 + 7) = 0;
  FUN_0046bb50();
  FUN_0046bb50();
  if (param_1[8] != 0) {
    FUN_00492f40(param_1[8]);
    param_1[8] = 0;
  }
  local_4 = 0xffffffff;
  FUN_0046e510();
  ExceptionList = local_c;
  return;
}

