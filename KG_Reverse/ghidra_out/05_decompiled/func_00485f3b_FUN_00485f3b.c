// Function: FUN_00485f3b
// Entry:    00485f3b
// Size:     280 bytes
// Conv:     unknown
// Signature: undefined FUN_00485f3b(void)
// Decompiled by Ghidra 12.1.2


LPVOID FUN_00485f3b(LPVOID param_1,uint param_2)

{
  int iVar1;
  LPVOID pvVar2;
  SIZE_T dwBytes;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  LPVOID local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_02f9cbb0;
  puStack_10 = &LAB_00485274;
  local_14 = ExceptionList;
  if (param_2 < 0xffffffe1) {
    if (DAT_03014ea8 == 3) {
      ExceptionList = &local_14;
      FUN_00489a54(9);
      local_8 = 0;
      local_24 = FUN_0048acdd(param_1);
      if (((local_24 != 0) && (local_20 = (LPVOID)0x0, param_2 <= DAT_03014ea0)) &&
         (iVar1 = FUN_0048b4e6(local_24,param_1,param_2), iVar1 != 0)) {
        local_20 = param_1;
      }
      local_8 = 0xffffffff;
      FUN_00485fcd();
      if (local_24 == 0) {
        pvVar2 = (LPVOID)FUN_0048606b();
        return pvVar2;
      }
    }
    else {
      if (DAT_03014ea8 == 2) {
        if (param_2 == 0) {
          param_2 = 1;
        }
        dwBytes = param_2 + 0xf & 0xfffffff0;
        ExceptionList = &local_14;
        FUN_00489a54(9);
        local_8 = 1;
        local_2c = FUN_0048ba38(param_1,&local_30,&local_28);
        if (local_2c != 0) {
          local_20 = (LPVOID)0x0;
          if ((dwBytes <= DAT_02fdbaf4) &&
             (iVar1 = FUN_0048be00(local_30,local_28,local_2c,param_2 + 0xf >> 4), iVar1 != 0)) {
            local_20 = param_1;
          }
          __local_unwind2(&local_14,0xffffffff);
          ExceptionList = local_14;
          return local_20;
        }
        local_8 = 0xffffffff;
        FUN_00486062();
        if (local_2c != 0) {
          ExceptionList = local_14;
          return local_20;
        }
      }
      else {
        if (param_2 == 0) {
          param_2 = 1;
        }
        dwBytes = param_2 + 0xf & 0xfffffff0;
        ExceptionList = &local_14;
      }
      local_20 = HeapReAlloc(DAT_03014ea4,0x10,param_1,dwBytes);
    }
  }
  else {
    local_20 = (LPVOID)0x0;
  }
  ExceptionList = local_14;
  return local_20;
}

