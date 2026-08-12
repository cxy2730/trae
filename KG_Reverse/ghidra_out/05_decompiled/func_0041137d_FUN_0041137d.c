// Function: FUN_0041137d
// Entry:    0041137d
// Size:     46 bytes
// Conv:     unknown
// Signature: undefined FUN_0041137d(void)
// Decompiled by Ghidra 12.1.2


void FUN_0041137d(void)

{
  int *piVar1;
  int iVar2;
  int unaff_EBX;
  int unaff_EBP;
  int *unaff_ESI;
  int unaff_EDI;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004937a6();
  FUN_00493768();
  *(undefined4 *)(unaff_EBP + -4) = 3;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (unaff_ESI != (int *)0x0) {
    (**(code **)(*unaff_ESI + 4))(1);
    FUN_004113bd();
    return;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004937a6();
  iVar2 = *(int *)(unaff_EBP + -0x14) + 1;
  *(int *)(unaff_EBP + -0x14) = iVar2;
  if (iVar2 <= unaff_EDI) {
    piVar1 = *(int **)(*(int *)(unaff_EBX + 0x234) + iVar2 * 4);
    *(int **)(unaff_EBP + -0x20) = piVar1;
    FUN_00493768();
    iVar2 = *piVar1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    (**(code **)(iVar2 + 0x4c))();
    FUN_0041137d();
    return;
  }
  FUN_004064a0();
  FUN_004064a0();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

