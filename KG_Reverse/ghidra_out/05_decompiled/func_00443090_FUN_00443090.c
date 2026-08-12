// Function: FUN_00443090
// Entry:    00443090
// Size:     92 bytes
// Conv:     unknown
// Signature: undefined FUN_00443090(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_00443090(CDialog *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_004a0d53;
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

