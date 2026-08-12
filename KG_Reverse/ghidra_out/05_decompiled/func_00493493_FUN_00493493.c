// Function: FUN_00493493
// Entry:    00493493
// Size:     116 bytes
// Conv:     unknown
// Signature: undefined FUN_00493493(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00493493(void)

{
  undefined *puVar1;
  int iVar2;
  int unaff_EBP;
  
  FUN_004858b8();
  puVar1 = PTR_DAT_02fd8088;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined **)(unaff_EBP + -0x10) = puVar1;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = lstrlenA(*(LPCSTR *)(unaff_EBP + 0xc));
  }
  FUN_0049337b(iVar2,*(undefined4 *)(unaff_EBP + 0xc),
               *(undefined4 *)(**(int **)(unaff_EBP + 0x10) + -8),**(int **)(unaff_EBP + 0x10));
  FUN_00492f4b(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -0x14) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_004931d6();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + 8);
}

