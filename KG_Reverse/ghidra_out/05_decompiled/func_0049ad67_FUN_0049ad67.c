// Function: FUN_0049ad67
// Entry:    0049ad67
// Size:     89 bytes
// Conv:     unknown
// Signature: undefined FUN_0049ad67(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_0049ad67(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  FUN_004858b8();
  *(undefined **)(unaff_EBP + -0x10) = PTR_DAT_02fd8088;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00498a12(*(undefined4 *)(unaff_EBP + 8));
  iVar1 = *(int *)(unaff_EBP + 0x10);
  if (iVar1 == -1) {
    iVar1 = *(int *)(unaff_EBP + 8);
  }
  uVar2 = FUN_0049ad2f(*(undefined4 *)(unaff_EBP + -0x10),*(undefined4 *)(unaff_EBP + 0xc),iVar1);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004931d6();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}

