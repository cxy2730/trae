// Function: FUN_00483925
// Entry:    00483925
// Size:     231 bytes
// Conv:     unknown
// Signature: undefined FUN_00483925(void)
// Decompiled by Ghidra 12.1.2


void FUN_00483925(uint param_1)

{
  int iVar1;
  uint dwBytes;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_02f9ca20;
  puStack_10 = &LAB_00485274;
  local_14 = ExceptionList;
  if (DAT_03014ea8 == 3) {
    ExceptionList = &local_14;
    if (param_1 <= DAT_03014ea0) {
      ExceptionList = &local_14;
      FUN_00489a54(9);
      local_8 = 0;
      iVar1 = FUN_0048b031(param_1);
      local_8 = 0xffffffff;
      FUN_0048398c();
      if (iVar1 != 0) {
        ExceptionList = local_14;
        return;
      }
    }
  }
  else {
    ExceptionList = &local_14;
    if (DAT_03014ea8 == 2) {
      if (param_1 == 0) {
        dwBytes = 0x10;
      }
      else {
        dwBytes = param_1 + 0xf & 0xfffffff0;
      }
      ExceptionList = &local_14;
      if (dwBytes <= DAT_02fdbaf4) {
        ExceptionList = &local_14;
        FUN_00489a54(9);
        local_8 = 1;
        iVar1 = FUN_0048bad4(dwBytes >> 4);
        local_8 = 0xffffffff;
        FUN_004839eb();
        if (iVar1 != 0) {
          ExceptionList = local_14;
          return;
        }
      }
      goto LAB_00483a04;
    }
  }
  if (param_1 == 0) {
    param_1 = 1;
  }
  dwBytes = param_1 + 0xf & 0xfffffff0;
LAB_00483a04:
  HeapAlloc(DAT_03014ea4,0,dwBytes);
  ExceptionList = local_14;
  return;
}

