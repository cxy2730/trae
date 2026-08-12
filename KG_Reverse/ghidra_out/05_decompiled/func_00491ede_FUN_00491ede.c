// Function: FUN_00491ede
// Entry:    00491ede
// Size:     41 bytes
// Conv:     unknown
// Signature: undefined FUN_00491ede(void)
// Decompiled by Ghidra 12.1.2


void FUN_00491ede(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_004858b8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_LAB_02f9c220;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00491f31(extraout_ECX);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

