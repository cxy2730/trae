// Function: FUN_0049cd41
// Entry:    0049cd41
// Size:     75 bytes
// Conv:     unknown
// Signature: undefined FUN_0049cd41(void)
// Decompiled by Ghidra 12.1.2


int FUN_0049cd41(void)

{
  int iVar1;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_004858b8();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffec;
  if (*extraout_ECX == 0) {
    FUN_0049d98a(0x10);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (*extraout_ECX == 0) {
      iVar1 = (**(code **)(unaff_EBP + 8))();
      *extraout_ECX = iVar1;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0049d9fa(0x10);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *extraout_ECX;
}

