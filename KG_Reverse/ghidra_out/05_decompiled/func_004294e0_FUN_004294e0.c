// Function: FUN_004294e0
// Entry:    004294e0
// Size:     96 bytes
// Conv:     unknown
// Signature: undefined FUN_004294e0(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_004294e0(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0049fc56;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  *(undefined ***)(param_1 + 0x40) = &PTR_FUN_02f9628c;
  FUN_004064a0();
  local_4 = local_4 & 0xffffff00;
  FUN_004931d6();
  local_4 = 0xffffffff;
  FUN_004931d6();
  ExceptionList = local_c;
  return;
}

