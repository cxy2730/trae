// Function: FUN_00434da0
// Entry:    00434da0
// Size:     95 bytes
// Conv:     unknown
// Signature: undefined FUN_00434da0(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_00434da0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_004a0653;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_02f96600;
  local_4 = 1;
  FUN_004931d6();
  local_4 = local_4 & 0xffffff00;
  FUN_004931d6();
  local_4 = 0xffffffff;
  FID_conflict__CHotKeyCtrl();
  ExceptionList = local_c;
  return;
}

