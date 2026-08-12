// Function: FUN_004282b0
// Entry:    004282b0
// Size:     1262 bytes
// Conv:     unknown
// Signature: undefined FUN_004282b0(void)
// Decompiled by Ghidra 12.1.2


undefined4 __fastcall FUN_004282b0(int *param_1)

{
  int iVar1;
  undefined4 uStack_650;
  int iStack_64c;
  CDialog aCStack_640 [1572];
  void *pvStack_1c;
  undefined4 uStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0049f9eb;
  local_c = ExceptionList;
  if ((int *)param_1[3] != (int *)0x0) {
    iStack_64c = 0x4282df;
    ExceptionList = &local_c;
    iVar1 = (**(code **)(*(int *)param_1[3] + 0x5c))();
    iStack_64c = 0;
    uStack_650 = 0x4282ec;
    FUN_004355a0();
    uStack_4 = 0;
    if (iVar1 != 0) {
      uStack_650 = 0x428308;
      iStack_64c = iVar1;
      FUN_00429600();
    }
    iStack_64c = 0x428311;
    iVar1 = FUN_0049428a();
    if (iVar1 == 1) {
      iStack_64c = 0x428538;
      iVar1 = (**(code **)(*(int *)param_1[3] + 0x60))();
      if (iVar1 == 1) {
        iStack_64c = 0;
        uStack_650 = 0xc;
        (**(code **)(*param_1 + 4))(1);
        uStack_14 = 0x32;
        FUN_004923d8();
        uStack_14._0_1_ = 0x31;
        FUN_004294e0();
        uStack_14._0_1_ = 0x30;
        FID_conflict__CHotKeyCtrl();
        uStack_14._0_1_ = 0x2f;
        FID_conflict__CHotKeyCtrl();
        uStack_14._0_1_ = 0x2e;
        FID_conflict__CHotKeyCtrl();
        uStack_14._0_1_ = 0x2d;
        FID_conflict__CHotKeyCtrl();
        uStack_14._0_1_ = 0x2c;
        FID_conflict__CHotKeyCtrl();
        uStack_14._0_1_ = 0x2b;
        FID_conflict__CHotKeyCtrl();
        uStack_14._0_1_ = 0x2a;
        FID_conflict__CHotKeyCtrl();
        uStack_14._0_1_ = 0x29;
        FID_conflict__CHotKeyCtrl();
        uStack_14._0_1_ = 0x28;
        FID_conflict__CHotKeyCtrl();
        uStack_14._0_1_ = 0x27;
        FID_conflict__CHotKeyCtrl();
        uStack_14._0_1_ = 0x26;
        FID_conflict__CHotKeyCtrl();
        uStack_14._0_1_ = 0x25;
        FID_conflict__CHotKeyCtrl();
        uStack_14._0_1_ = 0x24;
        FID_conflict__CHotKeyCtrl();
        uStack_14._0_1_ = 0x23;
        FID_conflict__CHotKeyCtrl();
        uStack_14._0_1_ = 0x22;
        FID_conflict__CHotKeyCtrl();
        uStack_14._0_1_ = 0x21;
        FID_conflict__CHotKeyCtrl();
        uStack_14._0_1_ = 0x20;
        FID_conflict__CHotKeyCtrl();
        uStack_14._0_1_ = 0x1f;
        FID_conflict__CHotKeyCtrl();
        uStack_14._0_1_ = 0x1e;
        FID_conflict__CHotKeyCtrl();
        uStack_14._0_1_ = 0x1d;
        FID_conflict__CHotKeyCtrl();
        uStack_14._0_1_ = 0x1c;
        FID_conflict__CHotKeyCtrl();
        uStack_14._0_1_ = 0x1b;
        FID_conflict__CHotKeyCtrl();
        uStack_14 = CONCAT31(uStack_14._1_3_,0x1a);
        FID_conflict__CHotKeyCtrl();
        uStack_14 = 0xffffffff;
        CDialog::~CDialog((CDialog *)&uStack_650);
        ExceptionList = pvStack_1c;
        return 1;
      }
      uStack_4 = 0xffffffff;
      FUN_004287a0();
    }
    else {
      uStack_4 = 0x19;
      FUN_004923d8();
      uStack_4._0_1_ = 0x18;
      FUN_004294e0();
      uStack_4._0_1_ = 0x17;
      FID_conflict__CHotKeyCtrl();
      uStack_4._0_1_ = 0x16;
      FID_conflict__CHotKeyCtrl();
      uStack_4._0_1_ = 0x15;
      FID_conflict__CHotKeyCtrl();
      uStack_4._0_1_ = 0x14;
      FID_conflict__CHotKeyCtrl();
      uStack_4._0_1_ = 0x13;
      FID_conflict__CHotKeyCtrl();
      uStack_4._0_1_ = 0x12;
      FID_conflict__CHotKeyCtrl();
      uStack_4._0_1_ = 0x11;
      FID_conflict__CHotKeyCtrl();
      uStack_4._0_1_ = 0x10;
      FID_conflict__CHotKeyCtrl();
      uStack_4._0_1_ = 0xf;
      FID_conflict__CHotKeyCtrl();
      uStack_4._0_1_ = 0xe;
      FID_conflict__CHotKeyCtrl();
      uStack_4._0_1_ = 0xd;
      FID_conflict__CHotKeyCtrl();
      uStack_4._0_1_ = 0xc;
      FID_conflict__CHotKeyCtrl();
      uStack_4._0_1_ = 0xb;
      FID_conflict__CHotKeyCtrl();
      uStack_4._0_1_ = 10;
      FID_conflict__CHotKeyCtrl();
      uStack_4._0_1_ = 9;
      FID_conflict__CHotKeyCtrl();
      uStack_4._0_1_ = 8;
      FID_conflict__CHotKeyCtrl();
      uStack_4._0_1_ = 7;
      FID_conflict__CHotKeyCtrl();
      uStack_4._0_1_ = 6;
      FID_conflict__CHotKeyCtrl();
      uStack_4._0_1_ = 5;
      FID_conflict__CHotKeyCtrl();
      uStack_4._0_1_ = 4;
      FID_conflict__CHotKeyCtrl();
      uStack_4._0_1_ = 3;
      FID_conflict__CHotKeyCtrl();
      uStack_4._0_1_ = 2;
      FID_conflict__CHotKeyCtrl();
      uStack_4 = CONCAT31(uStack_4._1_3_,1);
      FID_conflict__CHotKeyCtrl();
      uStack_4 = 0xffffffff;
      CDialog::~CDialog(aCStack_640);
    }
  }
  ExceptionList = local_c;
  return 0;
}

