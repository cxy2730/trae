// Function: FUN_00430950
// Entry:    00430950
// Size:     108 bytes
// Conv:     unknown
// Signature: undefined FUN_00430950(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_00430950(CDialog *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_004a02e1;
  local_c = ExceptionList;
  local_4 = 2;
  ExceptionList = &local_c;
  FUN_004931d6();
  local_4._0_1_ = 1;
  FID_conflict__CHotKeyCtrl();
  local_4 = (uint)local_4._1_3_ << 8;
  FID_conflict__CHotKeyCtrl();
  local_4 = 0xffffffff;
  CDialog::~CDialog(param_1);
  ExceptionList = local_c;
  return;
}

