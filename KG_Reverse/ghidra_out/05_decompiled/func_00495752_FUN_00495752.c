// Function: FUN_00495752
// Entry:    00495752
// Size:     145 bytes
// Conv:     unknown
// Signature: undefined FUN_00495752(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00495752(void)

{
  WNDCLASSA *lpWndClass;
  ATOM AVar1;
  BOOL BVar2;
  undefined4 uVar3;
  int iVar4;
  int unaff_EBP;
  
  FUN_004858b8();
  lpWndClass = *(WNDCLASSA **)(unaff_EBP + 8);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffc4;
  BVar2 = GetClassInfoA(lpWndClass->hInstance,lpWndClass->lpszClassName,
                        (LPWNDCLASSA)(unaff_EBP + -0x38));
  if (BVar2 == 0) {
    AVar1 = RegisterClassA(lpWndClass);
    if (AVar1 == 0) {
      uVar3 = 0;
      goto LAB_004957d2;
    }
    iVar4 = FUN_0049c724();
    if (*(char *)(iVar4 + 0x14) != '\0') {
      FUN_0049d98a(1);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      iVar4 = FUN_0049c724();
      lstrcatA((LPSTR)(iVar4 + 0x34),lpWndClass->lpszClassName);
      *(undefined1 *)(unaff_EBP + 10) = 10;
      *(undefined1 *)(unaff_EBP + 0xb) = 0;
      lstrcatA((LPSTR)(iVar4 + 0x34),(LPCSTR)(unaff_EBP + 10));
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_0049d9fa(1);
    }
  }
  uVar3 = 1;
LAB_004957d2:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}

