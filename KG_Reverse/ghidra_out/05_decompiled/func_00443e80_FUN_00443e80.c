// Function: FUN_00443e80
// Entry:    00443e80
// Size:     109 bytes
// Conv:     unknown
// Signature: undefined FUN_00443e80(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_00443e80(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004a0e70;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_02f97e38;
  local_4 = 0;
  DeleteObject((HGDIOBJ)param_1[0x16]);
  param_1[0x19] = &PTR_LAB_02f97efc;
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00499e74();
  local_4 = 0xffffffff;
  FID_conflict__CHotKeyCtrl();
  ExceptionList = local_c;
  return;
}

