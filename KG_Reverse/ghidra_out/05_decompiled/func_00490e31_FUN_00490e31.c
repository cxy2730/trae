// Function: FUN_00490e31
// Entry:    00490e31
// Size:     124 bytes
// Conv:     unknown
// Signature: undefined FUN_00490e31(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00490e31(void)

{
  int iVar1;
  undefined4 uVar2;
  int *extraout_ECX;
  int iVar3;
  int unaff_EBP;
  
  FUN_004858b8();
  iVar3 = *(int *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  iVar1 = *extraout_ECX;
  if (iVar3 < *(int *)(iVar1 + -8)) {
    *(undefined **)(unaff_EBP + 0xc) = PTR_DAT_02fd8088;
    iVar1 = *(int *)(iVar1 + -8);
    *(undefined4 *)(unaff_EBP + -4) = 1;
    FUN_00493200(unaff_EBP + 0xc,iVar3,iVar1 - iVar3,0);
    FUN_00492f4b(unaff_EBP + 0xc);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    FUN_004931d6();
    uVar2 = *(undefined4 *)(unaff_EBP + 8);
  }
  else {
    FUN_00492f4b(extraout_ECX);
    uVar2 = *(undefined4 *)(unaff_EBP + 8);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}

