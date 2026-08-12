// Function: FUN_00428da0
// Entry:    00428da0
// Size:     1056 bytes
// Conv:     unknown
// Signature: undefined FUN_00428da0(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_00428da0(int param_1,int param_2,int param_3,int param_4,int *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined4 *puVar15;
  int iStack_40;
  int iStack_18;
  uint uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0049fbb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004292d0(0,0xffffffff);
  if (*(int **)(param_1 + 0xc) == (int *)0x0) {
    ExceptionList = local_c;
    return;
  }
  iVar3 = (**(code **)(**(int **)(param_1 + 0xc) + 8))();
  iVar4 = (**(code **)(**(int **)(param_1 + 0xc) + 0x10))();
  iVar14 = 0;
  iVar12 = 0;
  if (0 < iVar4) {
    do {
      iVar5 = (**(code **)(**(int **)(param_1 + 0xc) + 0x14))(iVar12);
      iVar14 = iVar14 + iVar5;
      iVar12 = iVar12 + 1;
    } while (iVar12 < iVar4);
  }
  iVar12 = FUN_004295c0();
  if (iVar12 == -1) {
LAB_00428e22:
    iVar12 = MulDiv(param_2,100,iVar14);
    if (iVar12 != -2) goto LAB_00428e38;
  }
  else {
    if (iVar12 != -2) goto LAB_00428e38;
    if (param_2 < iVar14) goto LAB_00428e22;
  }
  iVar12 = 100;
LAB_00428e38:
  param_3 = (param_3 * 100) / iVar12;
  iVar12 = (**(code **)(**(int **)(param_1 + 0xc) + 0x18))();
  iVar14 = 0;
  if (0 < iVar12) {
    do {
      iVar5 = (**(code **)(**(int **)(param_1 + 0xc) + 0xc))(iVar14);
      param_3 = param_3 - iVar5;
      iVar14 = iVar14 + 1;
    } while (iVar14 < iVar12);
  }
  if (*(int *)(param_4 + 0x30) == 2) {
    iVar14 = *(int *)(param_4 + 0x34) + -1;
    if (iVar14 < iVar12) {
      iVar14 = iVar12;
    }
    iStack_40 = *(int *)(param_4 + 0x38);
    iVar12 = iVar14;
    if (iStack_40 < 1) {
      iStack_40 = iVar3 + -1;
    }
    else {
      if (iVar3 < iStack_40) {
        iStack_40 = iVar3;
      }
      iStack_40 = iStack_40 + -1;
    }
  }
  else {
    iStack_40 = iVar3 + -1;
  }
  FUN_004062a0();
  iVar14 = 0;
  uStack_4 = 0;
  FUN_004065a0(iVar12);
  iVar5 = iVar12;
  do {
    param_2 = iVar12;
    iVar12 = param_2;
    if (iStack_40 < param_2) {
      iVar3 = (uStack_10 >> 2) - 1;
      param_3 = iVar3;
      if (*(int *)(param_4 + 0x30) == 1) {
        uVar7 = *(int *)(param_4 + 0x34) - 1;
        uVar7 = uVar7 & ((int)uVar7 < 0) - 1;
        if ((0 < *(int *)(param_4 + 0x38)) &&
           (iVar4 = *(int *)(param_4 + 0x38) + -1, iVar4 <= iVar3)) {
          param_3 = iVar4;
        }
      }
      else {
        uVar7 = 0;
      }
      if ((int)uVar7 <= param_3) {
        iVar12 = 1 - uVar7;
        iVar4 = *(int *)(param_4 + 0x18) + uVar7;
        do {
          iVar14 = *(int *)(iStack_18 + uVar7 * 4);
          iVar5 = iStack_40;
          if ((int)uVar7 < iVar3) {
            iVar5 = *(int *)(iStack_18 + 4 + uVar7 * 4) + -1;
          }
          iVar6 = *(int *)(param_4 + 0x2c);
          if (((iVar6 == 0) || ((iVar6 == 1 && (((char)iVar12 + (char)uVar7 & 1U) != 0)))) ||
             ((iVar6 == 2 && ((iVar12 + uVar7 & 1) == 0)))) {
            iVar2 = param_5[1];
            iVar8 = *param_5;
            iVar6 = iVar2 + 1;
            if (iVar6 == 0) {
              if (iVar8 != 0) {
                FUN_00492f40(iVar8);
                *param_5 = 0;
              }
              param_5[2] = 0;
              param_5[1] = 0;
            }
            else if (iVar8 == 0) {
              iVar8 = FUN_00492f17(iVar6 * 0xc);
              *param_5 = iVar8;
              param_5[2] = iVar6;
              param_5[1] = iVar6;
            }
            else if (param_5[2] < iVar6) {
              iVar8 = param_5[3];
              if (iVar8 == 0) {
                iVar8 = (int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3;
                if (iVar8 < 4) {
                  iVar8 = 4;
                }
                else if (0x400 < iVar8) {
                  iVar8 = 0x400;
                }
              }
              iVar8 = iVar8 + param_5[2];
              if (iVar8 <= iVar6) {
                iVar8 = iVar6;
              }
              puVar9 = (undefined4 *)FUN_00492f17(iVar8 * 0xc);
              puVar13 = (undefined4 *)*param_5;
              puVar15 = puVar9;
              for (uVar10 = param_5[1] * 3 & 0x3fffffff; uVar10 != 0; uVar10 = uVar10 - 1) {
                *puVar15 = *puVar13;
                puVar13 = puVar13 + 1;
                puVar15 = puVar15 + 1;
              }
              for (iVar11 = 0; iVar11 != 0; iVar11 = iVar11 + -1) {
                *(undefined1 *)puVar15 = *(undefined1 *)puVar13;
                puVar13 = (undefined4 *)((int)puVar13 + 1);
                puVar15 = (undefined4 *)((int)puVar15 + 1);
              }
              FUN_00492f40(*param_5);
              param_5[2] = iVar8;
              *param_5 = (int)puVar9;
              param_5[1] = iVar6;
            }
            else {
              param_5[1] = iVar6;
            }
            piVar1 = (int *)(*param_5 + iVar2 * 0xc);
            *piVar1 = iVar4;
            piVar1[1] = iVar14;
            piVar1[2] = iVar5;
          }
          uVar7 = uVar7 + 1;
          iVar4 = iVar4 + 1;
        } while ((int)uVar7 <= param_3);
      }
      uStack_4 = 0xffffffff;
      FUN_004064a0();
      ExceptionList = local_c;
      return;
    }
    while( true ) {
      if (*(int *)(param_4 + 0x58) < 1) {
        iVar6 = (**(code **)(**(int **)(param_1 + 0xc) + 0xc))(iVar12);
        iVar14 = iVar14 + iVar6;
      }
      iVar6 = 0;
      if (iVar4 < 1) break;
      while (uVar7 = FUN_00427a40(iVar12,iVar6), (uVar7 & 0x200000) == 0) {
        iVar6 = iVar6 + 1;
        if (iVar4 <= iVar6) goto LAB_00428f31;
      }
      if (iVar4 <= iVar6) break;
      iVar12 = iVar12 + 1;
    }
LAB_00428f31:
    iVar12 = iVar12 + 1;
    if (*(int *)(param_4 + 0x58) < 1) {
      if (param_3 < iVar14) {
        iVar12 = (uStack_10 >> 2) - 1;
        if ((-1 < iVar12) && (*(int *)(iStack_18 + iVar12 * 4) == param_2)) {
          param_2 = param_2 + 1;
        }
        if (param_2 < iVar3) {
          FUN_004065a0(param_2);
        }
        iVar14 = 0;
        iVar12 = param_2;
      }
    }
    else if ((iVar12 < iVar3) && (*(int *)(param_4 + 0x58) <= iVar12 - iVar5)) {
      FUN_004065a0(iVar12);
      iVar5 = iVar12;
    }
  } while( true );
}

