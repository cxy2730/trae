// Function: FUN_00439a50
// Entry:    00439a50
// Size:     228 bytes
// Conv:     unknown
// Signature: undefined FUN_00439a50(void)
// Decompiled by Ghidra 12.1.2


/* WARNING: Removing unreachable block (ram,0x00439b01) */
/* WARNING: Removing unreachable block (ram,0x00439b0e) */

void FUN_00439a50(int param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004a0ba8;
  local_c = ExceptionList;
  if (param_1 != 0) {
    local_4 = 0;
    ExceptionList = &local_c;
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_02fe8cd0);
    for (uVar1 = 0; (DAT_02fe8cec != 0 && (uVar1 < (uint)(DAT_02fe8cf0 - DAT_02fe8cec >> 2)));
        uVar1 = uVar1 + 1) {
      FUN_004266b0(0,1,*(int *)(DAT_02fe8cec + uVar1 * 4) + 0x20);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_02fe8cd0);
    FUN_00439b40();
    FUN_00492f40(0);
    ExceptionList = local_c;
    return;
  }
  ExceptionList = &local_c;
  FUN_00439b40();
  ExceptionList = local_c;
  return;
}

