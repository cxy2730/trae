// Function: FUN_00430850
// Entry:    00430850
// Size:     250 bytes
// Conv:     unknown
// Signature: undefined FUN_00430850(void)
// Decompiled by Ghidra 12.1.2


void FUN_00430850(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  CDialog local_f0 [216];
  undefined4 local_18;
  undefined4 local_14;
  undefined1 auStack_10 [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004a02a9;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar1 = FUN_0042a5e0();
  FUN_0042a5f0(2);
  FUN_0043af20(0);
  local_14 = param_2;
  local_4 = 0;
  local_18 = param_1;
  FUN_0049428a();
  FUN_0042a5f0(uVar1);
  if (param_3 != 0) {
    FUN_004932c3(auStack_10);
  }
  local_4 = 3;
  FUN_004931d6();
  local_4._0_1_ = 2;
  FID_conflict__CHotKeyCtrl();
  local_4 = CONCAT31(local_4._1_3_,1);
  FID_conflict__CHotKeyCtrl();
  local_4 = 0xffffffff;
  CDialog::~CDialog(local_f0);
  ExceptionList = pvStack_c;
  return;
}

