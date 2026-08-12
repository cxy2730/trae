// Function: FUN_0049b52b
// Entry:    0049b52b
// Size:     155 bytes
// Conv:     unknown
// Signature: undefined FUN_0049b52b(void)
// Decompiled by Ghidra 12.1.2


int FUN_0049b52b(void)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_004858b8();
  iVar3 = FUN_0049cd41(&LAB_0049c415);
  bVar2 = FUN_00497418();
  if ((bVar2 & 0x50) == 0x50) {
    FUN_00499b75(extraout_ECX);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    uVar4 = FUN_00481bfc();
    uVar4 = FUN_00499471(uVar4);
    GetTextMetricsA(*(HDC *)(unaff_EBP + -0x18),(LPTEXTMETRICA)(unaff_EBP + -0x58));
    FUN_00499471(uVar4);
    iVar1 = *(int *)(unaff_EBP + -0x58);
    *(int *)(extraout_ECX + 0x3c) = iVar1;
    iVar3 = *(int *)(iVar3 + 0xc) + 1;
    if (iVar3 <= iVar1) {
      iVar3 = iVar1;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FID_conflict__CClientDC();
  }
  else {
    iVar3 = *(int *)(iVar3 + 0xc) + 1;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar3;
}

