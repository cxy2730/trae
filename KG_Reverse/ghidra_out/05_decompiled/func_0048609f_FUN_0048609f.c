// Function: FUN_0048609f
// Entry:    0048609f
// Size:     214 bytes
// Conv:     unknown
// Signature: undefined FUN_0048609f(void)
// Decompiled by Ghidra 12.1.2


SIZE_T FUN_0048609f(LPCVOID param_1)

{
  byte *pbVar1;
  SIZE_T SVar2;
  undefined1 local_30 [4];
  byte *local_2c;
  undefined1 local_28 [4];
  SIZE_T local_24;
  byte *local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_02f9cbc8;
  puStack_10 = &LAB_00485274;
  local_14 = ExceptionList;
  if (DAT_03014ea8 == 3) {
    ExceptionList = &local_14;
    FUN_00489a54(9);
    local_8 = 0;
    local_20 = (byte *)FUN_0048acdd(param_1);
    if (local_20 != (byte *)0x0) {
      local_24 = *(int *)((int)param_1 + -4) - 9;
    }
    SVar2 = local_24;
    local_8 = 0xffffffff;
    FUN_00486109();
    pbVar1 = local_20;
  }
  else {
    ExceptionList = &local_14;
    if (DAT_03014ea8 != 2) goto LAB_0048615d;
    ExceptionList = &local_14;
    FUN_00489a54(9);
    local_8 = 1;
    local_2c = (byte *)FUN_0048ba38(param_1,local_30,local_28);
    if (local_2c != (byte *)0x0) {
      local_24 = (uint)*local_2c << 4;
    }
    SVar2 = local_24;
    local_8 = 0xffffffff;
    FUN_00486184();
    pbVar1 = local_2c;
  }
  if (pbVar1 != (byte *)0x0) {
    ExceptionList = local_14;
    return SVar2;
  }
LAB_0048615d:
  SVar2 = HeapSize(DAT_03014ea4,0,param_1);
  ExceptionList = local_14;
  return SVar2;
}

