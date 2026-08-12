// Function: FUN_0048a71c
// Entry:    0048a71c
// Size:     86 bytes
// Conv:     unknown
// Signature: undefined FUN_0048a71c(void)
// Decompiled by Ghidra 12.1.2


void FUN_0048a71c(void)

{
  int iVar1;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_02f9d0c8;
  puStack_10 = &LAB_00485274;
  pvStack_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &pvStack_14;
  iVar1 = FUN_004871ba();
  if (*(int *)(iVar1 + 0x60) != 0) {
    local_8 = 1;
    iVar1 = FUN_004871ba();
    (**(code **)(iVar1 + 0x60))();
  }
  local_8 = 0xffffffff;
  FUN_00484403();
  return;
}

