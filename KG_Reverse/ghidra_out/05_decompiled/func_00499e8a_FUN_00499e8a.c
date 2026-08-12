// Function: FUN_00499e8a
// Entry:    00499e8a
// Size:     80 bytes
// Conv:     unknown
// Signature: undefined FUN_00499e8a(void)
// Decompiled by Ghidra 12.1.2


undefined4 * FUN_00499e8a(void)

{
  COLORREF color;
  HPEN pHVar1;
  int iVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 *puVar3;
  
  FUN_004858b8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[1] = 0;
  color = *(COLORREF *)(unaff_EBP + 0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *extraout_ECX = &PTR_LAB_02f9afa8;
  puVar3 = extraout_ECX;
  pHVar1 = CreatePen(*(int *)(unaff_EBP + 8),*(int *)(unaff_EBP + 0xc),color);
  iVar2 = FUN_00499e1d(pHVar1);
  if (iVar2 == 0) {
    FUN_00499f24(unaff_ESI,puVar3);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}

