// Function: FUN_00417460
// Entry:    00417460
// Size:     543 bytes
// Conv:     unknown
// Signature: undefined FUN_00417460(void)
// Decompiled by Ghidra 12.1.2


HGLOBAL FUN_00417460(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  SIZE_T dwBytes;
  HGLOBAL hMem;
  CSharedFile local_e4 [60];
  undefined **local_a8;
  undefined *local_a4;
  undefined **local_98;
  undefined **local_6c;
  uint local_64;
  int local_5c;
  undefined **local_58;
  undefined *local_34;
  undefined *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0049ea59;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff10;
  local_a8 = (undefined **)&DAT_02f958cc;
  local_a4 = PTR_DAT_02fd8088;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_004062a0();
  local_8._0_1_ = 1;
  FUN_004062a0();
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_004062a0();
  local_a8 = &PTR_FUN_02f958c4;
  local_34 = PTR_DAT_02fd8088;
  local_18 = PTR_DAT_02fd8088;
  local_8 = 3;
  iVar1 = FUN_00406ef0(param_1,param_2);
  if ((iVar1 != 0) && (local_5c != 0)) {
    FUN_00493768();
    local_8._0_1_ = 10;
    FUN_0049be9e(0x2002,0x1000);
    local_8._0_1_ = 0xb;
    FUN_0049aaab(-(uint)(local_5c != 0) & local_64,local_5c);
    dwBytes = FUN_00493bd0();
    hMem = (HGLOBAL)FUN_0049bf95();
    GlobalUnlock(hMem);
    GlobalReAlloc(hMem,dwBytes,2);
    local_8._0_1_ = 10;
    CSharedFile::~CSharedFile(local_e4);
    local_8 = CONCAT31(local_8._1_3_,3);
    FUN_004937a6();
    local_8 = 0x10;
    FUN_004931d6();
    local_8._0_1_ = 0xf;
    FUN_004931d6();
    local_8._0_1_ = 0xe;
    local_58 = &PTR_FUN_02f958c0;
    FUN_004064a0();
    local_8._0_1_ = 0xd;
    local_6c = &PTR_FUN_02f958c0;
    FUN_004064a0();
    local_8 = CONCAT31(local_8._1_3_,0xc);
    local_98 = &PTR_FUN_02f958c0;
    FUN_004064a0();
    local_8 = 0xffffffff;
    FUN_004931d6();
    ExceptionList = local_10;
    return hMem;
  }
  local_8 = 8;
  FUN_004931d6();
  local_8._0_1_ = 7;
  FUN_004931d6();
  local_8._0_1_ = 6;
  local_58 = &PTR_FUN_02f958c0;
  FUN_004064a0();
  local_8._0_1_ = 5;
  local_6c = &PTR_FUN_02f958c0;
  FUN_004064a0();
  local_8 = CONCAT31(local_8._1_3_,4);
  local_98 = &PTR_FUN_02f958c0;
  FUN_004064a0();
  local_8 = 0xffffffff;
  FUN_004931d6();
  ExceptionList = local_10;
  return (HGLOBAL)0x0;
}

