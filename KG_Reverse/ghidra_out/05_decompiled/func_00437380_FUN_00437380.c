// Function: FUN_00437380
// Entry:    00437380
// Size:     90 bytes
// Conv:     unknown
// Signature: undefined FUN_00437380(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_00437380(undefined4 param_1)

{
  CPaintDC local_60 [84];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004a0aa8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00499cdd(param_1);
  local_4 = 0;
  FUN_00437570(local_60);
  local_4 = 0xffffffff;
  CPaintDC::~CPaintDC(local_60);
  ExceptionList = local_c;
  return;
}

