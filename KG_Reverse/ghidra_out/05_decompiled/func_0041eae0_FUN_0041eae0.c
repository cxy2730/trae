// Function: FUN_0041eae0
// Entry:    0041eae0
// Size:     143 bytes
// Conv:     unknown
// Signature: undefined FUN_0041eae0(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_0041eae0(CDialog *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0049f0ca;
  local_c = ExceptionList;
  local_4 = 4;
  ExceptionList = &local_c;
  FUN_00424da0();
  local_4._0_1_ = 3;
  FID_conflict__CHotKeyCtrl();
  local_4._0_1_ = 2;
  FID_conflict__CHotKeyCtrl();
  local_4._0_1_ = 1;
  *(undefined ***)(param_1 + 100) = &PTR_FUN_02f95d48;
  FUN_004064a0();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004931d6();
  local_4 = 0xffffffff;
  CDialog::~CDialog(param_1);
  ExceptionList = local_c;
  return;
}

