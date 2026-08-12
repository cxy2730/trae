// Function: FUN_0046ba50
// Entry:    0046ba50
// Size:     87 bytes
// Conv:     unknown
// Signature: undefined FUN_0046ba50(void)
// Decompiled by Ghidra 12.1.2


undefined4 __fastcall FUN_0046ba50(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004a124b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00492f17(0x14,param_1);
  local_4 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_0046e2f0(iVar1);
    ExceptionList = local_c;
    return uVar2;
  }
  ExceptionList = local_c;
  return 0;
}

