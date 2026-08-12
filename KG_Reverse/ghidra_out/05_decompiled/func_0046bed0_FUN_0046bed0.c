// Function: FUN_0046bed0
// Entry:    0046bed0
// Size:     181 bytes
// Conv:     unknown
// Signature: undefined FUN_0046bed0(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_0046bed0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004a1288;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_02f99e58;
  local_4 = 0;
  if (param_1[0x21] != 0) {
    *(undefined1 *)((int)param_1 + 0x1d) = 1;
    FUN_0046bb50();
    FUN_0046bb50();
    (**(code **)(*(int *)param_1[0x21] + 0x14))();
    if ((undefined4 *)param_1[0x21] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x21])(1);
    }
    param_1[0x21] = 0;
  }
  if (param_1[0x28] != 0) {
    FUN_00492f40(*(undefined4 *)(param_1[0x28] + 0x18));
    FUN_00492f40(param_1[0x28]);
  }
  local_4 = 0xffffffff;
  *param_1 = &PTR_FUN_02f99e8c;
  FUN_0046e510();
  ExceptionList = pvStack_c;
  return;
}

