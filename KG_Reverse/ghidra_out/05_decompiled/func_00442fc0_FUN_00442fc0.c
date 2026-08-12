// Function: FUN_00442fc0
// Entry:    00442fc0
// Size:     202 bytes
// Conv:     unknown
// Signature: undefined FUN_00442fc0(void)
// Decompiled by Ghidra 12.1.2


void FUN_00442fc0(void)

{
  int iVar1;
  CDialog local_ec [212];
  undefined4 local_18;
  undefined4 local_14;
  int iStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004a0d31;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00451620(0);
  local_4 = 0;
  local_18 = 1;
  local_14 = FUN_00443c40();
  iVar1 = FUN_0049428a();
  if (iVar1 == 1) {
    FUN_00443c70(iStack_10 + -1);
  }
  FUN_004975e9();
  local_4 = 2;
  FID_conflict__CHotKeyCtrl();
  local_4 = CONCAT31(local_4._1_3_,1);
  FID_conflict__CHotKeyCtrl();
  local_4 = 0xffffffff;
  CDialog::~CDialog(local_ec);
  ExceptionList = pvStack_c;
  return;
}

