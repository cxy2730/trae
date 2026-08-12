// Function: FUN_00420530
// Entry:    00420530
// Size:     222 bytes
// Conv:     unknown
// Signature: undefined FUN_00420530(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00420530(undefined4 param_1,HGLOBAL param_2)

{
  int *piVar1;
  SIZE_T SVar2;
  int iVar3;
  undefined2 local_2c;
  int local_2a;
  undefined2 local_26;
  undefined2 local_24;
  int local_22;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0049f2a8;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  if (param_2 != (HGLOBAL)0x0) {
    ExceptionList = &local_10;
    FUN_00493768();
    local_8 = 1;
    piVar1 = GlobalLock(param_2);
    iVar3 = 1 << (*(byte *)((int)piVar1 + 0xe) & 0x1f);
    if (0x100 < iVar3) {
      iVar3 = 0;
    }
    local_2c = 0x4d42;
    SVar2 = GlobalSize(param_2);
    local_2a = SVar2 + 0xe;
    local_26 = 0;
    local_24 = 0;
    local_22 = *piVar1 + 0xe + iVar3 * 4;
    FUN_004069d0(&local_2c,0xe);
    SVar2 = GlobalSize(param_2);
    FUN_004069d0(piVar1,SVar2);
    GlobalUnlock(param_2);
    local_8 = 0xffffffff;
    FUN_004937a6();
    ExceptionList = local_10;
    return 1;
  }
  return 0;
}

