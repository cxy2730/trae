// Function: FUN_00493fa6
// Entry:    00493fa6
// Size:     392 bytes
// Conv:     unknown
// Signature: undefined FUN_00493fa6(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00493fa6(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  LPVOID pvVar4;
  HWND pHVar5;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_004858b8();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffc0;
  *(int **)(unaff_EBP + -0x24) = extraout_ECX;
  if (*(int *)(unaff_EBP + 0x10) == 0) {
    iVar2 = FUN_0049c724();
    *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(iVar2 + 8);
  }
  iVar2 = FUN_0049c724();
  piVar1 = *(int **)(iVar2 + 0x1038);
  *(int **)(unaff_EBP + -0x28) = piVar1;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00496fff(0x10);
  FUN_00496fff(0x3c000);
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*extraout_ECX + 0xb4))(unaff_EBP + -0x34);
    if (iVar2 == 0) goto LAB_0049400e;
    uVar3 = (**(code **)(*piVar1 + 0x10))(unaff_EBP + -0x34,*(undefined4 *)(unaff_EBP + 8));
    *(undefined4 *)(unaff_EBP + 8) = uVar3;
  }
  if (*(int *)(unaff_EBP + 8) == 0) {
LAB_0049400e:
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return 0;
  }
  *(undefined **)(unaff_EBP + -0x1c) = PTR_DAT_02fd8088;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  iVar2 = FUN_00498efa(*(undefined4 *)(unaff_EBP + 8),unaff_EBP + -0x1c,unaff_EBP + -0x20);
  if (iVar2 != 0) {
    iVar2 = GetSystemMetrics(0x2a);
    if (iVar2 == 0) goto LAB_004940ef;
    iVar2 = FUN_00482dc4(*(undefined4 *)(unaff_EBP + -0x1c),"MS Shell Dlg");
    if (iVar2 != 0) {
      iVar2 = FUN_00482dc4(*(undefined4 *)(unaff_EBP + -0x1c),"MS Sans Serif");
      if (iVar2 != 0) {
        iVar2 = FUN_00482dc4(*(undefined4 *)(unaff_EBP + -0x1c),&DAT_02f9b26c);
        if (iVar2 != 0) goto LAB_004940ef;
      }
    }
    if (*(short *)(unaff_EBP + -0x20) == 8) {
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
    }
  }
  FUN_00498d49(*(undefined4 *)(unaff_EBP + 8));
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00499083(*(undefined4 *)(unaff_EBP + -0x20));
  uVar3 = FUN_00498de6();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar3;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00498dd8();
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    pvVar4 = GlobalLock(*(HGLOBAL *)(unaff_EBP + -0x14));
    *(LPVOID *)(unaff_EBP + 8) = pvVar4;
  }
LAB_004940ef:
  extraout_ECX[0xb] = -1;
  extraout_ECX[9] = extraout_ECX[9] | 0x10;
  FUN_00495080(extraout_ECX);
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    pHVar5 = (HWND)0x0;
  }
  else {
    pHVar5 = *(HWND *)(*(int *)(unaff_EBP + 0xc) + 0x1c);
  }
  pHVar5 = CreateDialogIndirectParamA
                     (*(HINSTANCE *)(unaff_EBP + 0x10),*(LPCDLGTEMPLATEA *)(unaff_EBP + 8),pHVar5,
                      FUN_00493dee,0);
  *(HWND *)(unaff_EBP + -0x18) = pHVar5;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_004931d6();
  uVar3 = FUN_0049414b();
  return uVar3;
}

