// Function: FUN_00481cb9
// Entry:    00481cb9
// Size:     41 bytes
// Conv:     unknown
// Signature: undefined FUN_00481cb9(void)
// Decompiled by Ghidra 12.1.2


void FUN_00481cb9(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_004858b8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_LAB_02f9c51c;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_0049859b(extraout_ECX);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

