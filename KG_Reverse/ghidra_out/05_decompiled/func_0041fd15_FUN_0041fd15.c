// Function: FUN_0041fd15
// Entry:    0041fd15
// Size:     309 bytes
// Conv:     unknown
// Signature: undefined FUN_0041fd15(void)
// Decompiled by Ghidra 12.1.2


HMENU FUN_0041fd15(undefined4 param_1,undefined **param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  HMENU pHVar4;
  LPACCEL paccel;
  HACCEL pHVar5;
  WORD *pWVar6;
  int iVar7;
  undefined4 *puVar8;
  WORD *pWVar9;
  WORD *pWVar10;
  undefined4 *unaff_EDI;
  uint uVar11;
  uint in_stack_00000018;
  void *in_stack_0000001c;
  undefined4 in_stack_00000024;
  int in_stack_00000030;
  int in_stack_00000034;
  undefined4 in_stack_00000038;
  undefined4 *in_stack_0000003c;
  undefined4 in_stack_00000040;
  
  DAT_02fe8830 = 20000;
  FUN_004062a0();
  param_2 = &PTR_FUN_02f95fa8;
  puVar8 = (undefined4 *)0x0;
  in_stack_00000024 = 0;
  if (unaff_EDI != (undefined4 *)0x0) {
    puVar8 = &param_2;
  }
  pHVar4 = CreateMenu();
  uVar3 = in_stack_00000040;
  uVar2 = in_stack_00000038;
  iVar7 = in_stack_00000030;
  if (pHVar4 != (HMENU)0x0) {
    while (in_stack_00000034 = iVar7, 0 < in_stack_00000034) {
      FUN_0041fe80(pHVar4,&stack0x0000002c,&stack0x00000034,uVar2,puVar8,uVar3);
      unaff_EDI = in_stack_0000003c;
      iVar7 = in_stack_00000034;
    }
  }
  if ((unaff_EDI != (undefined4 *)0x0) && (uVar11 = in_stack_00000018 >> 3, uVar11 != 0)) {
    paccel = (LPACCEL)FUN_00492f17(uVar11 * 6);
    if (puVar8[4] == 0) {
      pWVar9 = (WORD *)0x0;
    }
    else {
      pWVar9 = (WORD *)puVar8[2];
    }
    iVar7 = 0;
    if (uVar11 != 0) {
      pWVar6 = &paccel->key;
      do {
        pWVar10 = pWVar9 + 2;
        pWVar6[1] = *pWVar9;
        pWVar9 = pWVar9 + 4;
        iVar1 = *(int *)pWVar10 * 4;
        ((tagACCEL *)(pWVar6 + -1))->fVirt = (&DAT_02fafe04)[*(int *)pWVar10 * 4] | 3;
        *pWVar6 = *(WORD *)(&DAT_02fafe06 + iVar1);
        if (*(short *)(&DAT_02fafe06 + iVar1) != 0) {
          iVar7 = iVar7 + 1;
          pWVar6 = pWVar6 + 3;
        }
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
      if (0 < iVar7) {
        pHVar5 = CreateAcceleratorTableA(paccel,iVar7);
        *in_stack_0000003c = pHVar5;
      }
    }
    FUN_00492f40(paccel);
  }
  in_stack_00000024 = 0xffffffff;
  param_2 = &PTR_FUN_02f95fa4;
  FUN_004064a0();
  ExceptionList = in_stack_0000001c;
  return pHVar4;
}

