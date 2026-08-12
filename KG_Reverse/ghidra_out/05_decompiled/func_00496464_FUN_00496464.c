// Function: FUN_00496464
// Entry:    00496464
// Size:     164 bytes
// Conv:     unknown
// Signature: undefined FUN_00496464(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00496464(void)

{
  HWND hWnd;
  int iVar1;
  HWND pHVar2;
  undefined4 uVar3;
  int unaff_EBP;
  
  FUN_004858b8();
  iVar1 = FUN_00494b40(0);
  if (iVar1 != 0) {
    hWnd = *(HWND *)(unaff_EBP + 8);
    iVar1 = FUN_00492b65(hWnd);
    if (iVar1 != 0) {
      uVar3 = FUN_00496437(*(undefined4 *)(unaff_EBP + 0xc));
      goto LAB_004964f8;
    }
    pHVar2 = GetParent(hWnd);
    iVar1 = FUN_00492b65(pHVar2);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x34) != 0)) {
      iVar1 = FUN_00492b65(hWnd);
      if (iVar1 != 0) {
        FUN_004947c5(hWnd);
        *(undefined4 *)(unaff_EBP + -4) = 0;
        *(int *)(unaff_EBP + -0x10) = iVar1;
        uVar3 = FUN_00496437(*(undefined4 *)(unaff_EBP + 0xc));
        *(undefined4 *)(unaff_EBP + -0x2c) = 0;
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        CWnd::~CWnd((CWnd *)(unaff_EBP + -0x48));
        goto LAB_004964f8;
      }
    }
  }
  uVar3 = 0;
LAB_004964f8:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}

