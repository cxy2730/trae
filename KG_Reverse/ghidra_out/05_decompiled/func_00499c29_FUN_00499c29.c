// Function: FUN_00499c29
// Entry:    00499c29
// Size:     86 bytes
// Conv:     unknown
// Signature: undefined FUN_00499c29(void)
// Decompiled by Ghidra 12.1.2


undefined4 * FUN_00499c29(void)

{
  HWND hWnd;
  HDC pHVar1;
  int iVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 *puVar3;
  
  FUN_004858b8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  puVar3 = extraout_ECX;
  FUN_00499226();
  iVar2 = *(int *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *extraout_ECX = &PTR_LAB_02f9aeb8;
  hWnd = (HWND)0x0;
  if (iVar2 != 0) {
    hWnd = *(HWND *)(iVar2 + 0x1c);
  }
  extraout_ECX[4] = hWnd;
  pHVar1 = GetWindowDC(hWnd);
  iVar2 = FUN_004992dd(pHVar1);
  if (iVar2 == 0) {
    FUN_00499f24(unaff_ESI,puVar3);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}

