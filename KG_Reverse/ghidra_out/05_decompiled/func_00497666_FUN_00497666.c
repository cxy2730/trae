// Function: FUN_00497666
// Entry:    00497666
// Size:     130 bytes
// Conv:     unknown
// Signature: undefined FUN_00497666(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00497666(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  undefined4 uVar2;
  
  FUN_004858b8();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  FUN_00497799(unaff_EBP + -300);
  *(undefined **)(unaff_EBP + -0x10) = PTR_DAT_02fd8088;
  uVar2 = 0x100;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  uVar1 = FUN_004935ba(0x100);
  FUN_0049d689(unaff_EBP + -0x11a,uVar1,uVar2);
  FUN_00493609(0xffffffff);
  FUN_00492f4b(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -0x14) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_004931d6();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + 8);
}

