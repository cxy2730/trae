// Function: FUN_00491f6b
// Entry:    00491f6b
// Size:     57 bytes
// Conv:     unknown
// Signature: undefined FUN_00491f6b(void)
// Decompiled by Ghidra 12.1.2


undefined4 * FUN_00491f6b(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_004858b8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_00494787();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  CMap<>(10);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_LAB_02f9c69c;
  return extraout_ECX;
}

