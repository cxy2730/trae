// Function: FUN_00499256
// Entry:    00499256
// Size:     114 bytes
// Conv:     unknown
// Signature: undefined FUN_00499256(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00499256(void)

{
  AFX_MODULE_THREAD_STATE *pAVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_EBP;
  
  FUN_004858b8();
  pAVar1 = AfxGetModuleThreadState();
  if ((*(int *)(pAVar1 + 0x1c) == 0) && (*(int *)(unaff_EBP + 8) != 0)) {
    uVar2 = FUN_00492f05(&LAB_0049a872);
    iVar3 = FUN_00492f17(0x48);
    *(int *)(unaff_EBP + 8) = iVar3;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_00498bc0(&PTR_s_CTempDC_02f9abc8,4,2);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(pAVar1 + 0x1c) = uVar4;
    FUN_00492f05(uVar2);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(pAVar1 + 0x1c);
}

