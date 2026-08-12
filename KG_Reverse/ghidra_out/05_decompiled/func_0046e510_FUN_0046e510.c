// Function: FUN_0046e510
// Entry:    0046e510
// Size:     135 bytes
// Conv:     unknown
// Signature: undefined FUN_0046e510(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_0046e510(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &PTR_FUN_02f99fd4;
  FUN_0046bae0();
  *(undefined1 *)((int)param_1 + 0x1d) = 1;
  *(undefined1 *)(param_1 + 7) = 0;
  FUN_0046bb50();
  FUN_0046bb50();
  FUN_0046baf0();
  if ((undefined4 *)param_1[5] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[5])(1);
  }
  iVar1 = param_1[3];
  if (iVar1 != 0) {
    FUN_0046bad0();
    FUN_00492f40(iVar1);
  }
  iVar1 = param_1[2];
  if (iVar1 != 0) {
    FUN_0046bb30();
    FUN_00492f40(iVar1);
  }
  iVar1 = param_1[1];
  if (iVar1 != 0) {
    FUN_0046bb30();
    FUN_00492f40(iVar1);
  }
  return;
}

