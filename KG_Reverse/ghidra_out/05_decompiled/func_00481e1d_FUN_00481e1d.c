// Function: FUN_00481e1d
// Entry:    00481e1d
// Size:     72 bytes
// Conv:     unknown
// Signature: undefined FUN_00481e1d(void)
// Decompiled by Ghidra 12.1.2


void FUN_00481e1d(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_004858b8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_02f9c8e4;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_00498ce4();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00492aa4();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00492aa4();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

