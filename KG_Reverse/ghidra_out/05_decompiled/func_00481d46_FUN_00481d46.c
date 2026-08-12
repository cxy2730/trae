// Function: FUN_00481d46
// Entry:    00481d46
// Size:     121 bytes
// Conv:     unknown
// Signature: undefined FUN_00481d46(void)
// Decompiled by Ghidra 12.1.2


int * FUN_00481d46(void)

{
  int iVar1;
  int *piVar2;
  int *extraout_ECX;
  int iVar3;
  int unaff_EBP;
  
  FUN_004858b8();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffe8;
  *(int **)(unaff_EBP + -0x14) = extraout_ECX;
  EnterCriticalSection((LPCRITICAL_SECTION)(extraout_ECX + 4));
  if (extraout_ECX[3] == 0) {
    iVar3 = *extraout_ECX;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iVar1 = FUN_00492a00(extraout_ECX + 2,extraout_ECX[1],iVar3);
    iVar3 = extraout_ECX[1];
    piVar2 = (int *)((iVar3 + -1) * *extraout_ECX + 4 + iVar1);
    if (-1 < iVar3 + -1) {
      do {
        *piVar2 = extraout_ECX[3];
        extraout_ECX[3] = (int)piVar2;
        piVar2 = (int *)((int)piVar2 - *extraout_ECX);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  piVar2 = (int *)extraout_ECX[3];
  extraout_ECX[3] = *piVar2;
  LeaveCriticalSection((LPCRITICAL_SECTION)(extraout_ECX + 4));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return piVar2;
}

