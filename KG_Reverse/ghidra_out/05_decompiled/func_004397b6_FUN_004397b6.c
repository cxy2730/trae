// Function: FUN_004397b6
// Entry:    004397b6
// Size:     47 bytes
// Conv:     unknown
// Signature: undefined FUN_004397b6(void)
// Decompiled by Ghidra 12.1.2


void FUN_004397b6(void)

{
  int unaff_EBP;
  
  FUN_004064a0();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined ***)(unaff_EBP + -0x38) = &PTR_FUN_02f96e60;
  FUN_004064a0();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

