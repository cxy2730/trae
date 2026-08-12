// Function: Catch@00431082
// Entry:    00431082
// Size:     59 bytes
// Conv:     unknown
// Signature: undefined Catch@00431082(void)
// Decompiled by Ghidra 12.1.2


undefined * Catch_00431082(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  uVar2 = *(undefined4 *)(unaff_EBP + -0x18);
  *(undefined4 *)(unaff_EBP + -0x24) = uVar2;
  if (*(int *)(unaff_EBP + 0x10) != 0) {
    iVar1 = FUN_00430c50(uVar2,*(undefined4 *)(unaff_EBP + -0x14));
    if (iVar1 != 0) {
      FUN_0041ce70();
      return &DAT_004310ab;
    }
  }
  uVar2 = FUN_00430aa0(uVar2);
  *(undefined4 *)(unaff_EBP + 8) = uVar2;
  return &LAB_004310cd;
}

