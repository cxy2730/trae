// Function: FUN_00493819
// Entry:    00493819
// Size:     72 bytes
// Conv:     unknown
// Signature: undefined FUN_00493819(void)
// Decompiled by Ghidra 12.1.2


void FUN_00493819(void)

{
  int iVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_004858b8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_LAB_02f9aaa4;
  iVar1 = extraout_ECX[1];
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if ((iVar1 != -1) && (extraout_ECX[2] != 0)) {
    FUN_00493af1();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_004931d6();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

