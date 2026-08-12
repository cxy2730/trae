// Function: FUN_00427d60
// Entry:    00427d60
// Size:     222 bytes
// Conv:     unknown
// Signature: undefined FUN_00427d60(void)
// Decompiled by Ghidra 12.1.2


undefined4
FUN_00427d60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  CMemFile local_34 [40];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049f748;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004064a0();
  FUN_0049a8c4(0x400);
  local_4 = 0;
  iVar1 = FUN_004280f0(local_34,param_2,param_3,param_4,param_5);
  if (iVar1 == 0) {
    local_4 = 0xffffffff;
    CMemFile::~CMemFile(local_34);
    ExceptionList = local_c;
    return 0;
  }
  iVar1 = FUN_00493bd0();
  if (0 < iVar1) {
    uVar2 = FUN_0049a93b();
    FUN_004069d0(uVar2,iVar1);
    FUN_004837fe(uVar2);
  }
  local_4 = 0xffffffff;
  CMemFile::~CMemFile(local_34);
  ExceptionList = local_c;
  return 1;
}

