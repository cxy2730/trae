// Function: FUN_0048a77d
// Entry:    0048a77d
// Size:     79 bytes
// Conv:     unknown
// Signature: undefined FUN_0048a77d(void)
// Decompiled by Ghidra 12.1.2


void FUN_0048a77d(void)

{
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_02f9d0e0;
  puStack_10 = &LAB_00485274;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (PTR_FUN_02fd98b0 != (undefined *)0x0) {
    local_8 = 1;
    ExceptionList = &pvStack_14;
    (*(code *)PTR_FUN_02fd98b0)();
  }
  local_8 = 0xffffffff;
  FUN_0048a71c();
  return;
}

