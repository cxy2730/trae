// Function: FUN_004319c5
// Entry:    004319c5
// Size:     96 bytes
// Conv:     unknown
// Signature: undefined FUN_004319c5(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_004319c5(void)

{
  int unaff_EBX;
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004937a6();
  if (*(int *)(unaff_EBP + -0x1c) == 1) {
    FUN_00430fe0(*(undefined4 *)(unaff_EBX + 4),0,0);
  }
  FUN_00431200(*(undefined4 *)(unaff_EBX + 4),unaff_EBP + -0x60,0);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined ***)(unaff_EBP + -0x60) = &PTR_FUN_02f9645c;
  FUN_004064a0();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + -0x14);
}

