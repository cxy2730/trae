// Function: FUN_00498bc0
// Entry:    00498bc0
// Size:     101 bytes
// Conv:     unknown
// Signature: undefined FUN_00498bc0(void)
// Decompiled by Ghidra 12.1.2


undefined4 * FUN_00498bc0(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_004858b8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  CMap<>(10);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  CMap<>(4);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *extraout_ECX = &PTR_FUN_02f9c8e4;
  FUN_00492cdf(7,0);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  extraout_ECX[0xf] = *(undefined4 *)(unaff_EBP + 8);
  extraout_ECX[0x10] = *(undefined4 *)(unaff_EBP + 0xc);
  extraout_ECX[0x11] = *(undefined4 *)(unaff_EBP + 0x10);
  return extraout_ECX;
}

