// Function: FUN_004321b5
// Entry:    004321b5
// Size:     55 bytes
// Conv:     unknown
// Signature: undefined FUN_004321b5(void)
// Decompiled by Ghidra 12.1.2


void FUN_004321b5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004937a6();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined ***)(unaff_EBP + -0x2c) = &PTR_FUN_02f96460;
  FUN_004064a0();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

