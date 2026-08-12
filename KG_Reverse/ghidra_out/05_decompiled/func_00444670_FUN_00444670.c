// Function: FUN_00444670
// Entry:    00444670
// Size:     192 bytes
// Conv:     unknown
// Signature: undefined FUN_00444670(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_00444670(CWnd *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_004a0f78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = &PTR_LAB_02f98000;
  local_4 = 5;
  FUN_00499e74();
  FUN_00499e74();
  local_4._0_1_ = 4;
  FUN_00492015();
  *(undefined ***)(param_1 + 0x98) = &PTR_LAB_02f980d0;
  local_4._0_1_ = 6;
  FUN_00499e74();
  *(undefined ***)(param_1 + 0x90) = &PTR_LAB_02f980d0;
  local_4._0_1_ = 7;
  FUN_00499e74();
  local_4._0_1_ = 1;
  FUN_004931d6();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004931d6();
  local_4 = 0xffffffff;
  CWnd::~CWnd(param_1);
  ExceptionList = local_c;
  return;
}

