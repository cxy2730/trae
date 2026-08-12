// Function: FUN_0046bbc0
// Entry:    0046bbc0
// Size:     144 bytes
// Conv:     unknown
// Signature: undefined FUN_0046bbc0(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_0046bbc0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004a1268;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_02f99e14;
  local_4 = 0;
  *(undefined1 *)((int)param_1 + 0x1d) = 1;
  if ((int *)param_1[9] != (int *)0x0) {
    (**(code **)(*(int *)param_1[9] + 4))();
  }
  if ((int *)param_1[8] != (int *)0x0) {
    (**(code **)(*(int *)param_1[8] + 4))();
  }
  FUN_0046bb50();
  FUN_0046bb50();
  if ((undefined4 *)param_1[9] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[9])(1);
  }
  if ((undefined4 *)param_1[8] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[8])(1);
  }
  local_4 = 0xffffffff;
  FUN_0046e510();
  ExceptionList = pvStack_c;
  return;
}

