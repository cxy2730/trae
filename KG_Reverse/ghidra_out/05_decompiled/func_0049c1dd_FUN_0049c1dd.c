// Function: FUN_0049c1dd
// Entry:    0049c1dd
// Size:     41 bytes
// Conv:     unknown
// Signature: undefined FUN_0049c1dd(void)
// Decompiled by Ghidra 12.1.2


void FUN_0049c1dd(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_004858b8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_LAB_02f9afc8;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00499e74(extraout_ECX);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

