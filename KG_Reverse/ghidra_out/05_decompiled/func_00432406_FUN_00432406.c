// Function: FUN_00432406
// Entry:    00432406
// Size:     223 bytes
// Conv:     unknown
// Signature: undefined FUN_00432406(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00432406(void)

{
  undefined4 uVar1;
  undefined4 *unaff_EBX;
  int unaff_EBP;
  int iVar2;
  int iVar3;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004937a6();
  uVar1 = *(undefined4 *)(unaff_EBP + -0x14);
  iVar3 = unaff_EBX[2];
  if (0 < iVar3) {
    if (1 < iVar3) {
      unaff_EBX[2] = iVar3 + -1;
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return uVar1;
    }
    FUN_00493768();
    iVar3 = unaff_EBX[0x92];
    *(undefined4 *)(unaff_EBP + -4) = 3;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = unaff_EBX[0x90];
    }
    *(int *)(unaff_EBP + -0x18) = iVar3;
    for (iVar2 = 0; iVar2 < (int)unaff_EBX[0x76]; iVar2 = iVar2 + 1) {
      if (*(char *)(iVar2 + 0x224 + (int)unaff_EBX) != '\0') {
        (**(code **)(*(int *)*unaff_EBX + 0x28))
                  (unaff_EBX[iVar2 + 0x77] * *(int *)(unaff_EBX[1] + 8),0);
        iVar3 = *(int *)(unaff_EBP + -0x18);
        (**(code **)(*(int *)*unaff_EBX + 0x38))(iVar3,*(undefined4 *)(unaff_EBX[1] + 8));
      }
      iVar3 = iVar3 + *(int *)(unaff_EBX[1] + 8);
      *(int *)(unaff_EBP + -0x18) = iVar3;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_004937a6();
    FUN_00430fe0(*unaff_EBX,0xffffffff,0);
    unaff_EBX[2] = unaff_EBX[2] + -1;
    uVar1 = *(undefined4 *)(unaff_EBP + -0x14);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar1;
}

