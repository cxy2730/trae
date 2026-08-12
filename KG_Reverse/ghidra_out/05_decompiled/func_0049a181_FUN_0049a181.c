// Function: FUN_0049a181
// Entry:    0049a181
// Size:     70 bytes
// Conv:     unknown
// Signature: undefined FUN_0049a181(void)
// Decompiled by Ghidra 12.1.2


void FUN_0049a181(void)

{
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_004858b8();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((*(int *)(extraout_ECX + 0x20) != 0) && ((*(byte *)(extraout_ECX + 0x14) & 2) == 0)) {
    FUN_0049a209();
  }
  FUN_0049a1c7();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004931d6();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

