// Function: FUN_0041fa00
// Entry:    0041fa00
// Size:     79 bytes
// Conv:     unknown
// Signature: undefined FUN_0041fa00(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_0041fa00(CDialog *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0049f208;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_004931d6();
  local_4 = 0xffffffff;
  CDialog::~CDialog(param_1);
  ExceptionList = local_c;
  return;
}

