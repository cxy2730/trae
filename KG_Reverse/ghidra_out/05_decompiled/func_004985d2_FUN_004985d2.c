// Function: FUN_004985d2
// Entry:    004985d2
// Size:     160 bytes
// Conv:     unknown
// Signature: undefined FUN_004985d2(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_004985d2(void)

{
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_004858b8();
  if (*(int **)(unaff_EBP + 0x10) != (int *)0x0) {
    **(int **)(unaff_EBP + 0x10) = *(int *)(extraout_ECX + 8) + 0xf1a0;
  }
  *(undefined **)(unaff_EBP + -0x10) = PTR_DAT_02fd8088;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00492f4b(extraout_ECX + 0x10);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(*(int *)(unaff_EBP + 0x10) + -8) == 0) {
    FUN_00498a12(0xf006);
  }
  FUN_0049b19a(unaff_EBP + -0x10,*(int *)(extraout_ECX + 8) + 0xf1a0,
               *(undefined4 *)(unaff_EBP + 0x10));
  lstrcpynA(*(LPSTR *)(unaff_EBP + 8),*(LPCSTR *)(unaff_EBP + -0x10),*(int *)(unaff_EBP + 0xc));
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_004931d6();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004931d6();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 1;
}

