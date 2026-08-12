// Function: FUN_0040ff30
// Entry:    0040ff30
// Size:     833 bytes
// Conv:     unknown
// Signature: undefined FUN_0040ff30(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_0040ff30(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0049e7b9;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_02f954f0;
  local_4 = 0x21;
  FUN_00413930(0);
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_02fe8cd0);
  local_4._0_1_ = 0x20;
  param_1[0x104] = &PTR_FUN_02f95460;
  FUN_004064a0();
  local_4._0_1_ = 0x1f;
  *(undefined ***)(param_1 + 0xf2) = &PTR_LAB_02f9558c;
  CWnd::~CWnd((CWnd *)(param_1 + 0xf2));
  local_4._0_1_ = 0x1e;
  param_1[0xee] = &PTR_FUN_02f95644;
  if ((param_1[0xef] == 0) && ((code *)param_1[0xf1] != (code *)0x0)) {
    (*(code *)param_1[0xf1])();
  }
  local_4._0_1_ = 0x1d;
  FUN_0049225f();
  local_4._0_1_ = 0x1c;
  FUN_004272f0();
  local_4._0_1_ = 0x1b;
  param_1[0xe1] = &PTR_FUN_02f95644;
  if ((param_1[0xe2] == 0) && ((code *)param_1[0xe4] != (code *)0x0)) {
    (*(code *)param_1[0xe4])();
  }
  local_4._0_1_ = 0x1a;
  param_1[0xdc] = &PTR_FUN_02f95644;
  if ((param_1[0xdd] == 0) && ((code *)param_1[0xdf] != (code *)0x0)) {
    (*(code *)param_1[0xdf])();
  }
  local_4._0_1_ = 0x19;
  FUN_00430bb0();
  local_4._0_1_ = 0x18;
  FUN_00424da0();
  local_4._0_1_ = 0x17;
  param_1[0xa4] = &PTR_FUN_02f95460;
  FUN_004064a0();
  local_4._0_1_ = 0x16;
  param_1[0x9a] = &PTR_FUN_02f95460;
  FUN_004064a0();
  local_4._0_1_ = 0x15;
  param_1[0x95] = &PTR_FUN_02f95460;
  FUN_004064a0();
  local_4._0_1_ = 0x14;
  param_1[0x90] = &PTR_FUN_02f95460;
  FUN_004064a0();
  local_4._0_1_ = 0x13;
  param_1[0x8b] = &PTR_FUN_02f95460;
  FUN_004064a0();
  local_4._0_1_ = 0x12;
  param_1[0x85] = &PTR_FUN_02f95460;
  FUN_004064a0();
  local_4._0_1_ = 0x11;
  param_1[0x80] = &PTR_FUN_02f95460;
  FUN_004064a0();
  local_4._0_1_ = 0x10;
  param_1[0x7b] = &PTR_FUN_02f95460;
  FUN_004064a0();
  local_4._0_1_ = 0xf;
  FUN_004931d6();
  local_4._0_1_ = 0xe;
  FUN_004931d6();
  local_4._0_1_ = 0xd;
  FUN_004923d8();
  local_4._0_1_ = 0xc;
  param_1[0x68] = &PTR_FUN_02f95460;
  FUN_004064a0();
  local_4._0_1_ = 0xb;
  param_1[0x61] = &PTR_FUN_02f95460;
  FUN_004064a0();
  local_4._0_1_ = 10;
  param_1[0x5c] = &PTR_FUN_02f95460;
  FUN_004064a0();
  local_4._0_1_ = 9;
  param_1[0x57] = &PTR_FUN_02f95460;
  FUN_004064a0();
  local_4._0_1_ = 8;
  param_1[0x52] = &PTR_FUN_02f95460;
  FUN_004064a0();
  local_4._0_1_ = 7;
  param_1[0x4d] = &PTR_FUN_02f95460;
  FUN_004064a0();
  local_4._0_1_ = 6;
  param_1[0x48] = &PTR_FUN_02f95460;
  FUN_004064a0();
  param_1[0x41] = &PTR_FUN_02f95648;
  local_4._0_1_ = 0x22;
  FUN_0040f710();
  param_1[0x41] = &PTR_FUN_02f95654;
  local_4._0_1_ = 0x23;
  FUN_004064a0();
  local_4._0_1_ = 5;
  param_1[0x43] = &PTR_FUN_02f95460;
  FUN_004064a0();
  local_4._0_1_ = 4;
  FUN_004923d8();
  local_4._0_1_ = 3;
  FUN_004923d8();
  local_4._0_1_ = 2;
  FUN_004931d6();
  local_4._0_1_ = 1;
  FUN_004931d6();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004931d6();
  local_4 = 0xffffffff;
  FUN_0049cf71();
  ExceptionList = pvStack_c;
  return;
}

