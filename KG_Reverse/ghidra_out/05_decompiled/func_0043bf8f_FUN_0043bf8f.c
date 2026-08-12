// Function: FUN_0043bf8f
// Entry:    0043bf8f
// Size:     407 bytes
// Conv:     unknown
// Signature: undefined FUN_0043bf8f(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_0043bf8f(void)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  uint uVar7;
  int iVar8;
  int unaff_EBP;
  int iVar9;
  int unaff_EDI;
  
  do {
    uVar7 = *(int *)(unaff_EBP + -0x14) - *(int *)(unaff_EBP + -0x20);
    while ((uVar7 & 3) != 0) {
      if (*(int *)(unaff_EBP + -0x2c) <= *(int *)(unaff_EBP + 0xc)) {
        iVar4 = FUN_0043bbb0(*(undefined4 *)(unaff_EBP + 8),unaff_EBP + -0x109c,0x1000);
        *(int *)(unaff_EBP + -0x2c) = iVar4;
        *(undefined4 *)(unaff_EBP + 0xc) = 0;
        if (iVar4 < 1) {
          FUN_00492f40(*(undefined4 *)(unaff_EBP + 0x10));
          goto LAB_0043c004;
        }
      }
      iVar4 = *(int *)(unaff_EBP + -0x14) + 1;
      *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 1;
      *(int *)(unaff_EBP + -0x14) = iVar4;
      uVar7 = iVar4 - *(int *)(unaff_EBP + -0x20);
    }
    iVar8 = *(int *)(unaff_EBP + -0x24);
    *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x28) + -1;
    iVar4 = *(int *)(unaff_EBP + -0x1c);
    iVar9 = *(int *)(unaff_EBP + -0x28);
LAB_0043be4b:
    if (iVar9 < 0) {
      if (iVar4 != 0) {
        FUN_00492f40(iVar4);
      }
      if (*(int *)(unaff_EBP + -0x18) != 0) {
        FUN_00492f40(*(int *)(unaff_EBP + -0x18));
      }
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return *(undefined4 *)(unaff_EBP + 0x10);
    }
    iVar9 = iVar9 * unaff_EDI * 3;
    if ((*(short *)(unaff_EBP + -0x8a) == 0x18) || (*(short *)(unaff_EBP + -0x8a) == 0x20)) {
      if (iVar4 == 0) {
        iVar4 = FUN_00492f17(iVar8);
        *(int *)(unaff_EBP + -0x1c) = iVar4;
      }
      iVar4 = FUN_0043bbb0(*(undefined4 *)(unaff_EBP + 8),iVar4,iVar8);
      if (iVar4 == iVar8) break;
      FUN_00492f40(*(undefined4 *)(unaff_EBP + -0x1c));
      FUN_00492f40(*(undefined4 *)(unaff_EBP + 0x10));
LAB_0043c004:
      iVar4 = *(int *)(unaff_EBP + -0x18);
      if (iVar4 == 0) goto switchD_0043bd2c_caseD_2;
      goto LAB_0043c00b;
    }
    uVar7 = *(uint *)(unaff_EBP + -0x8a) & 0xffff;
    iVar4 = 0;
    *(uint *)(unaff_EBP + -0x34) = uVar7;
    *(undefined1 *)(unaff_EBP + -0x38) = 0;
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
    if (0 < unaff_EDI) {
      puVar5 = (undefined1 *)(iVar9 + 1 + *(int *)(unaff_EBP + 0x10));
      do {
        if (iVar4 < 1) {
          if (*(int *)(unaff_EBP + -0x2c) <= *(int *)(unaff_EBP + 0xc)) {
            iVar4 = FUN_0043bbb0(*(undefined4 *)(unaff_EBP + 8),unaff_EBP + -0x109c,0x1000);
            *(int *)(unaff_EBP + -0x2c) = iVar4;
            *(undefined4 *)(unaff_EBP + 0xc) = 0;
            if (iVar4 < 1) {
              FUN_00492f40(*(undefined4 *)(unaff_EBP + 0x10));
              iVar4 = *(int *)(unaff_EBP + -0x18);
              if (iVar4 != 0) {
LAB_0043c00b:
                FUN_00492f40(iVar4);
              }
switchD_0043bd2c_caseD_2:
              ExceptionList = *(void **)(unaff_EBP + -0xc);
              return 0;
            }
          }
          iVar4 = 8;
          uVar1 = *(undefined1 *)(unaff_EBP + -0x109c + *(int *)(unaff_EBP + 0xc));
          *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 1;
          *(undefined1 *)(unaff_EBP + -0x38) = uVar1;
          *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
        }
        iVar4 = iVar4 - *(int *)(unaff_EBP + -0x34);
        uVar2 = (*(uint *)(unaff_EBP + -0x38) & 0xff) >> ((byte)iVar4 & 0x1f) &
                (1 << ((byte)uVar7 & 0x1f)) - 1U;
        puVar5[1] = *(undefined1 *)(*(int *)(unaff_EBP + -0x18) + uVar2 * 4);
        *puVar5 = *(undefined1 *)(*(int *)(unaff_EBP + -0x18) + 1 + uVar2 * 4);
        puVar5[-1] = *(undefined1 *)(*(int *)(unaff_EBP + -0x18) + 2 + uVar2 * 4);
        iVar9 = *(int *)(unaff_EBP + -0x30) + 1;
        *(int *)(unaff_EBP + -0x30) = iVar9;
        puVar5 = puVar5 + 3;
        if (unaff_EDI <= iVar9) {
          uVar3 = FUN_0043bf8f();
          return uVar3;
        }
      } while( true );
    }
  } while( true );
  puVar5 = (undefined1 *)(iVar9 + *(int *)(unaff_EBP + 0x10));
  if (0 < unaff_EDI) {
    iVar4 = *(int *)(unaff_EBP + -0x1c);
    puVar6 = (undefined1 *)(iVar4 + 1);
    iVar9 = iVar4 - (int)puVar6;
    *(int *)(unaff_EBP + -0x34) = (iVar4 - (int)puVar6) + 2;
    iVar4 = unaff_EDI;
    do {
      *puVar5 = puVar6[*(int *)(unaff_EBP + -0x34)];
      puVar5[1] = *puVar6;
      puVar5[2] = puVar6[iVar9];
      puVar5 = puVar5 + 3;
      puVar6 = puVar6 + *(int *)(unaff_EBP + -0x3c);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar8 = *(int *)(unaff_EBP + -0x24);
  }
  iVar4 = *(int *)(unaff_EBP + -0x14) + iVar8;
  *(int *)(unaff_EBP + -0x14) = iVar4;
  FUN_00493768();
  *(undefined4 *)(unaff_EBP + -4) = 3;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  while ((iVar4 - *(int *)(unaff_EBP + -0x20) & 3U) != 0) {
    (**(code **)(**(int **)(unaff_EBP + 8) + 0x28))(1,1);
    iVar4 = iVar4 + 1;
    *(int *)(unaff_EBP + -0x14) = iVar4;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004937a6();
  *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x28) + -1;
  iVar4 = *(int *)(unaff_EBP + -0x1c);
  iVar9 = *(int *)(unaff_EBP + -0x28);
  goto LAB_0043be4b;
}

