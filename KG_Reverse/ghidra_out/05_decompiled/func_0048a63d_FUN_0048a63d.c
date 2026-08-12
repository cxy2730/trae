// Function: FUN_0048a63d
// Entry:    0048a63d
// Size:     86 bytes
// Conv:     unknown
// Signature: undefined FUN_0048a63d(void)
// Decompiled by Ghidra 12.1.2


void FUN_0048a63d(int param_1)

{
  int iVar1;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_02f9d0b8;
  puStack_10 = &LAB_00485274;
  local_14 = ExceptionList;
  if ((param_1 != 0) && (iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 4), iVar1 != 0)) {
    local_8 = 0;
    ExceptionList = &local_14;
    FUN_00482812(*(undefined4 *)(param_1 + 0x18),iVar1);
  }
  ExceptionList = local_14;
  return;
}

