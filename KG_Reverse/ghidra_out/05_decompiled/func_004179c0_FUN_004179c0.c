// Function: FUN_004179c0
// Entry:    004179c0
// Size:     90 bytes
// Conv:     unknown
// Signature: undefined FUN_004179c0(void)
// Decompiled by Ghidra 12.1.2


undefined4 __fastcall FUN_004179c0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049eb3a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00492f17(0x1e4,param_1);
  local_4 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_00417a30(iVar1);
    ExceptionList = local_c;
    return uVar2;
  }
  ExceptionList = local_c;
  return 0;
}

