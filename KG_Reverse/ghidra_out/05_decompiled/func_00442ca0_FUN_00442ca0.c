// Function: FUN_00442ca0
// Entry:    00442ca0
// Size:     206 bytes
// Conv:     unknown
// Signature: undefined FUN_00442ca0(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_00442ca0(undefined4 param_1)

{
  DWORD DVar1;
  undefined4 uVar2;
  undefined **local_78 [2];
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  CPaintDC local_60 [4];
  HDC local_5c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004a0cd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00499cdd(param_1);
  local_4 = 0;
  FUN_0049988e(&local_70);
  DVar1 = GetSysColor(0xf);
  FUN_00499eda(DVar1);
  local_4._0_1_ = 1;
  uVar2 = FUN_00499471(local_78);
  PatBlt(local_5c,local_70,local_6c,local_68 - local_70,local_64 - local_6c,0xf00021);
  FUN_00499471(uVar2);
  local_78[0] = &PTR_LAB_02f97c98;
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_00499e74();
  local_4 = 0xffffffff;
  CPaintDC::~CPaintDC(local_60);
  ExceptionList = local_c;
  return;
}

