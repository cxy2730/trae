// Function: FUN_0049dafb
// Entry:    0049dafb
// Size:     45 bytes
// Conv:     unknown
// Signature: undefined FUN_0049dafb(void)
// Decompiled by Ghidra 12.1.2


void FUN_0049dafb(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_004858b8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_02f9bfd0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_0049a7ac(extraout_ECX + 1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

