// Function: FUN_004933b9
// Entry:    004933b9
// Size:     102 bytes
// Conv:     unknown
// Signature: undefined FUN_004933b9(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_004933b9(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int unaff_EBP;
  
  FUN_004858b8();
  puVar3 = PTR_DAT_02fd8088;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined **)(unaff_EBP + -0x10) = puVar3;
  iVar1 = **(int **)(unaff_EBP + 0x10);
  iVar2 = **(int **)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_0049337b(*(undefined4 *)(iVar2 + -8),iVar2,*(undefined4 *)(iVar1 + -8),iVar1);
  FUN_00492f4b(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -0x14) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_004931d6();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + 8);
}

