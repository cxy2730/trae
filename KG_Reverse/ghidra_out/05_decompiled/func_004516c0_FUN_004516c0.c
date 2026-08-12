// Function: FUN_004516c0
// Entry:    004516c0
// Size:     92 bytes
// Conv:     unknown
// Signature: undefined FUN_004516c0(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_004516c0(CDialog *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_004a1123;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FID_conflict__CHotKeyCtrl();
  local_4 = local_4 & 0xffffff00;
  FID_conflict__CHotKeyCtrl();
  local_4 = 0xffffffff;
  CDialog::~CDialog(param_1);
  ExceptionList = local_c;
  return;
}

