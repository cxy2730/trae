// Function: FUN_00491820
// Entry:    00491820
// Size:     144 bytes
// Conv:     unknown
// Signature: undefined FUN_00491820(void)
// Decompiled by Ghidra 12.1.2


undefined4 * FUN_00491820(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_004858b8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_004941d5(0,*(undefined4 *)(unaff_EBP + 0x10));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *extraout_ECX = &PTR_LAB_02f9c7dc;
  _memset(extraout_ECX + 0x17,0,0x24);
  extraout_ECX[0xf] = 0x7007;
  extraout_ECX[0x17] = 0x24;
  uVar1 = FUN_004918fd();
  extraout_ECX[0x1b] = uVar1;
  extraout_ECX[0x1c] = *(uint *)(unaff_EBP + 0xc) | 0x10;
  if (DAT_03010cfc == 0) {
    iVar2 = FUN_004944b9();
    if (iVar2 != 0) {
      extraout_ECX[0x1c] = extraout_ECX[0x1c] | 8;
    }
  }
  iVar2 = *(int *)(unaff_EBP + 8);
  extraout_ECX[0x1e] = FUN_0049191e;
  extraout_ECX[0x1a] = iVar2;
  if (iVar2 != 0) {
    extraout_ECX[0x1c] = extraout_ECX[0x1c] | 1;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}

