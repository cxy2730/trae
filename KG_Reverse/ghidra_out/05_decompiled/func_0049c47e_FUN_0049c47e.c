// Function: FUN_0049c47e
// Entry:    0049c47e
// Size:     116 bytes
// Conv:     unknown
// Signature: undefined FUN_0049c47e(void)
// Decompiled by Ghidra 12.1.2


void FUN_0049c47e(void)

{
  int *piVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_004858b8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_02f9bee0;
  piVar1 = (int *)extraout_ECX[0x33];
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x58))();
    if ((int *)extraout_ECX[0x33] != (int *)0x0) {
      (**(code **)(*(int *)extraout_ECX[0x33] + 4))(1);
    }
  }
  if ((HHOOK)extraout_ECX[0xc] != (HHOOK)0x0) {
    UnhookWindowsHookEx((HHOOK)extraout_ECX[0xc]);
  }
  if ((HHOOK)extraout_ECX[0xb] != (HHOOK)0x0) {
    UnhookWindowsHookEx((HHOOK)extraout_ECX[0xb]);
  }
  if (extraout_ECX[3] != 0) {
    FUN_004837fe(extraout_ECX[3]);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

