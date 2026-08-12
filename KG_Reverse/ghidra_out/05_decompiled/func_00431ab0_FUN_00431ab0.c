// Function: FUN_00431ab0
// Entry:    00431ab0
// Size:     129 bytes
// Conv:     unknown
// Signature: undefined FUN_00431ab0(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_00431ab0(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004a039e;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  if (0 < (int)param_1[2]) {
    ExceptionList = &local_c;
    FUN_00430fe0(*param_1,0xffffffff,0);
  }
  iVar1 = param_1[3];
  while (iVar1 != 0) {
    param_1[3] = *(undefined4 *)(iVar1 + 4);
    FUN_00492f40(iVar1);
    iVar1 = param_1[3];
  }
  local_4 = 0xffffffff;
  param_1[0x8e] = &PTR_FUN_02f96460;
  FUN_004064a0();
  ExceptionList = local_c;
  return;
}

