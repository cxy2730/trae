// Function: FUN_004188b0
// Entry:    004188b0
// Size:     125 bytes
// Conv:     unknown
// Signature: undefined FUN_004188b0(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_004188b0(undefined4 param_1)

{
  BOOL BVar1;
  RECT local_70;
  CPaintDC local_60 [84];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049ed08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00499cdd(param_1);
  local_4 = 0;
  FUN_0049988e(&local_70);
  BVar1 = IsRectEmpty(&local_70);
  if (BVar1 != 1) {
    FUN_00418410(local_60,&local_70);
  }
  local_4 = 0xffffffff;
  CPaintDC::~CPaintDC(local_60);
  ExceptionList = local_c;
  return;
}

