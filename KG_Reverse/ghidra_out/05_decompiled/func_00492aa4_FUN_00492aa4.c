// Function: FUN_00492aa4
// Entry:    00492aa4
// Size:     41 bytes
// Conv:     unknown
// Signature: undefined FUN_00492aa4(void)
// Decompiled by Ghidra 12.1.2


void FUN_00492aa4(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_004858b8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_LAB_02f9c5e4;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  RemoveAll(extraout_ECX);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

