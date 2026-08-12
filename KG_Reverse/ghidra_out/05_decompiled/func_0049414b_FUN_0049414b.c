// Function: FUN_0049414b
// Entry:    0049414b
// Size:     125 bytes
// Conv:     unknown
// Signature: undefined FUN_0049414b(void)
// Decompiled by Ghidra 12.1.2


bool FUN_0049414b(void)

{
  int iVar1;
  int *unaff_EBX;
  int unaff_EBP;
  int *unaff_ESI;
  int *unaff_EDI;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (unaff_EDI != unaff_EBX) {
    (**(code **)(*unaff_EDI + 0x14))(unaff_EBP + -0x34);
    if (*(int **)(unaff_EBP + -0x18) != unaff_EBX) {
      (**(code **)(*unaff_ESI + 0xb4))();
    }
  }
  iVar1 = FUN_004950cc();
  if (iVar1 == 0) {
    (**(code **)(*unaff_ESI + 0xa4))();
  }
  if ((*(int **)(unaff_EBP + -0x18) != unaff_EBX) && ((*(byte *)(unaff_ESI + 9) & 0x10) == 0)) {
    DestroyWindow(*(HWND *)(unaff_EBP + -0x18));
    *(int **)(unaff_EBP + -0x18) = unaff_EBX;
  }
  if (*(int **)(unaff_EBP + -0x14) != unaff_EBX) {
    GlobalUnlock(*(HGLOBAL *)(unaff_EBP + -0x14));
    GlobalFree(*(HGLOBAL *)(unaff_EBP + -0x14));
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(int **)(unaff_EBP + -0x18) != unaff_EBX;
}

