// Function: FUN_0040e580
// Entry:    0040e580
// Size:     181 bytes
// Conv:     unknown
// Signature: undefined FUN_0040e580(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_0040e580(int param_1)

{
  int local_74;
  tagRECT local_70;
  int local_60;
  void *pvStack_1c;
  uint uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049e340;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  GetClientRect(*(HWND *)(param_1 + 0x1c),&local_70);
  FUN_00499cdd(param_1);
  local_4 = 0;
  FUN_0049954d(1);
  FUN_00499605(0xff);
  FUN_00493244(&DAT_02faad48);
  local_4 = CONCAT31(local_4._1_3_,1);
  (**(code **)(local_60 + 0x68))(local_74,*(undefined4 *)(local_74 + -8),&local_70,0x135);
  uStack_14 = uStack_14 & 0xffffff00;
  FUN_004931d6();
  uStack_14 = 0xffffffff;
  CPaintDC::~CPaintDC((CPaintDC *)&local_70);
  ExceptionList = pvStack_1c;
  return;
}

