// Function: FUN_0046d7a0
// Entry:    0046d7a0
// Size:     158 bytes
// Conv:     unknown
// Signature: undefined FUN_0046d7a0(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_0046d7a0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004a1308;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_02f99f54;
  local_4 = 0;
  *(undefined1 *)((int)param_1 + 0x1d) = 1;
  *(undefined1 *)(param_1 + 7) = 0;
  FUN_0046bb50();
  FUN_0046bb50();
  if ((int *)param_1[0x55] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x55] + 0x14))();
    if ((undefined4 *)param_1[0x55] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x55])(1);
    }
  }
  if (param_1[0x52] != 0) {
    FUN_004842bd(param_1[0x52]);
    param_1[0x52] = 0;
  }
  local_4 = 0xffffffff;
  FUN_00475910();
  ExceptionList = pvStack_c;
  return;
}

