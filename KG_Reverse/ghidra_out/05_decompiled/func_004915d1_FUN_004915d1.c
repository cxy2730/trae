// Function: FUN_004915d1
// Entry:    004915d1
// Size:     272 bytes
// Conv:     unknown
// Signature: undefined FUN_004915d1(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_004915d1(void)

{
  byte bVar1;
  HWND pHVar2;
  int iVar3;
  LPARAM LVar4;
  LRESULT LVar5;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_004858b8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  bVar1 = *(byte *)(extraout_ECX + 0x92);
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  iVar3 = extraout_ECX;
  if (((bVar1 & 8) != 0) && (pHVar2 = *(HWND *)(extraout_ECX + 0x1c), pHVar2 != (HWND)0x0)) {
    *(undefined **)(unaff_EBP + -0x10) = PTR_DAT_02fd8088;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    pHVar2 = GetParent(pHVar2);
    iVar3 = FUN_00494bb2(pHVar2);
    LVar4 = FUN_004935ba(0x104);
    LVar5 = SendMessageA(*(HWND *)(iVar3 + 0x1c),0x464,0x104,LVar4);
    if (LVar5 < 0) {
      FUN_00493161();
    }
    else {
      FUN_00493609(0xffffffff);
    }
    if (*(int *)(*(int *)(unaff_EBP + -0x10) + -8) != 0) {
      pHVar2 = GetParent(*(HWND *)(*(int *)(unaff_EBP + -0x14) + 0x1c));
      iVar3 = FUN_00494bb2(pHVar2);
      LVar4 = FUN_004935ba(0x104);
      LVar5 = SendMessageA(*(HWND *)(iVar3 + 0x1c),0x465,0x104,LVar4);
      if (-1 < LVar5) {
        FUN_00493609(0xffffffff);
        FUN_00492f4b(unaff_EBP + -0x10);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_004931d6();
        goto LAB_004916a9;
      }
      FUN_00493161();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_004931d6();
    iVar3 = *(int *)(unaff_EBP + -0x14);
  }
  FUN_00493244(*(undefined4 *)(iVar3 + 0x78));
LAB_004916a9:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + 8);
}

