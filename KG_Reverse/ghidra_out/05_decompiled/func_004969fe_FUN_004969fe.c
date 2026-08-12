// Function: FUN_004969fe
// Entry:    004969fe
// Size:     94 bytes
// Conv:     unknown
// Signature: undefined FUN_004969fe(void)
// Decompiled by Ghidra 12.1.2


void FUN_004969fe(void)

{
  int iVar1;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_004858b8();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffd0;
  FUN_00496aa0(extraout_ECX,*(undefined4 *)(unaff_EBP + 8));
  iVar1 = FUN_0049c4f2();
  *(undefined4 *)(unaff_EBP + 8) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(iVar1 + 0xb8);
  *(int *)(iVar1 + 0xb8) = extraout_ECX[7];
  (**(code **)(*extraout_ECX + 0x84))(unaff_EBP + -0x2c);
  *(undefined4 *)(unaff_EBP + 8) = 1;
  FUN_00496a83();
  return;
}

