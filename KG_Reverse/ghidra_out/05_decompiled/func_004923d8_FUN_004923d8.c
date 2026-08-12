// Function: FUN_004923d8
// Entry:    004923d8
// Size:     62 bytes
// Conv:     unknown
// Signature: undefined FUN_004923d8(void)
// Decompiled by Ghidra 12.1.2


void FUN_004923d8(void)

{
  undefined4 uVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_004858b8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_LAB_02f9bf10;
  uVar1 = extraout_ECX[2];
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00492416(extraout_ECX[1],uVar1);
  FUN_00492f40(extraout_ECX[1]);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

