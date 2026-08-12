// Function: FUN_0049225f
// Entry:    0049225f
// Size:     45 bytes
// Conv:     unknown
// Signature: undefined FUN_0049225f(void)
// Decompiled by Ghidra 12.1.2


void FUN_0049225f(void)

{
  undefined4 uVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_004858b8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_LAB_02f9b898;
  uVar1 = extraout_ECX[1];
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00492f40(uVar1,extraout_ECX);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

