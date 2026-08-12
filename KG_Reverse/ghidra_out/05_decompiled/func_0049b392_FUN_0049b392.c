// Function: FUN_0049b392
// Entry:    0049b392
// Size:     162 bytes
// Conv:     unknown
// Signature: undefined FUN_0049b392(void)
// Decompiled by Ghidra 12.1.2


undefined4 * FUN_0049b392(void)

{
  int iVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  bool bVar2;
  undefined4 uVar3;
  
  FUN_004858b8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *extraout_ECX = &PTR_FUN_02f9bdc4;
  *(undefined ***)(unaff_EBP + -0x18) = &PTR_LAB_02f9bdb4;
  bVar2 = DAT_03010cfc == 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (bVar2) {
    iVar1 = FUN_0049d756();
    if (*(int *)(iVar1 + 0x20) == 0) {
      uVar3 = 0x7913;
      goto LAB_0049b3de;
    }
  }
  uVar3 = 0x7914;
LAB_0049b3de:
  FUN_00481bd8(uVar3);
  GetObjectA(*(HANDLE *)(unaff_EBP + -0x14),0x18,(LPVOID)(unaff_EBP + -0x30));
  extraout_ECX[2] = *(int *)(unaff_EBP + -0x2c) / 3;
  extraout_ECX[3] = *(undefined4 *)(unaff_EBP + -0x28);
  uVar3 = Detach();
  extraout_ECX[1] = uVar3;
  *(undefined ***)(unaff_EBP + -0x18) = &PTR_LAB_02f9afc8;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00499e74();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}

