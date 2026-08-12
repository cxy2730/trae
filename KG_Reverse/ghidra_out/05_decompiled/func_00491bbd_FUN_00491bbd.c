// Function: FUN_00491bbd
// Entry:    00491bbd
// Size:     160 bytes
// Conv:     unknown
// Signature: undefined FUN_00491bbd(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00491bbd(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_ECX;
  int unaff_EBP;
  int iVar4;
  
  FUN_004858b8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(unaff_EBP + 0xc);
  puVar1 = PTR_DAT_02fd8088;
  *(undefined4 *)(unaff_EBP + -0x38) = 1;
  *(undefined **)(unaff_EBP + 0xc) = puVar1;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  iVar4 = 0x80;
  do {
    iVar4 = iVar4 * 2;
    uVar2 = FUN_00493631(iVar4);
    *(undefined4 *)(unaff_EBP + -0x28) = uVar2;
    *(int *)(unaff_EBP + -0x24) = iVar4;
    SendMessageA(*(HWND *)(extraout_ECX + 0x1c),0x110c,0,unaff_EBP + -0x38);
    iVar3 = lstrlenA(*(LPCSTR *)(unaff_EBP + -0x28));
  } while (iVar3 == iVar4 + -1);
  FUN_00493609(0xffffffff);
  FUN_00492f4b(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -0x10) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_004931d6();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + 8);
}

