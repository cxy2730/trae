// Function: FUN_004837fe
// Entry:    004837fe
// Size:     215 bytes
// Conv:     unknown
// Signature: undefined FUN_004837fe(void)
// Decompiled by Ghidra 12.1.2


void FUN_004837fe(LPVOID param_1)

{
  int iVar1;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  int local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_02f9ca08;
  puStack_10 = &LAB_00485274;
  local_14 = ExceptionList;
  if (param_1 == (LPVOID)0x0) {
    return;
  }
  if (DAT_03014ea8 == 3) {
    ExceptionList = &local_14;
    FUN_00489a54(9);
    local_8 = 0;
    local_20 = FUN_0048acdd(param_1);
    if (local_20 != 0) {
      FUN_0048ad08(local_20,param_1);
    }
    local_8 = 0xffffffff;
    FUN_00483868();
    iVar1 = local_20;
  }
  else {
    ExceptionList = &local_14;
    if (DAT_03014ea8 != 2) goto LAB_004838ca;
    ExceptionList = &local_14;
    FUN_00489a54(9);
    local_8 = 1;
    local_28 = FUN_0048ba38(param_1,&local_2c,&local_24);
    if (local_28 != 0) {
      FUN_0048ba8f(local_2c,local_24,local_28);
    }
    local_8 = 0xffffffff;
    FUN_004838c0();
    iVar1 = local_28;
  }
  if (iVar1 != 0) {
    ExceptionList = local_14;
    return;
  }
LAB_004838ca:
  HeapFree(DAT_03014ea4,0,param_1);
  ExceptionList = local_14;
  return;
}

