// Function: FUN_0043afd0
// Entry:    0043afd0
// Size:     108 bytes
// Conv:     unknown
// Signature: undefined FUN_0043afd0(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_0043afd0(CDialog *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_004a0c21;
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

