// Function: FUN_004863b7
// Entry:    004863b7
// Size:     484 bytes
// Conv:     unknown
// Signature: undefined FUN_004863b7(void)
// Decompiled by Ghidra 12.1.2


int FUN_004863b7(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  piVar6 = param_1;
  uVar3 = param_1[5];
  if ((0x44 < (int)uVar3) && ((int)uVar3 < 0x8c)) {
    iVar5 = param_1[4];
    if ((iVar5 < 0) || (0xb < iVar5)) {
      uVar3 = uVar3 + iVar5 / 0xc;
      iVar5 = iVar5 % 0xc;
      param_1[4] = iVar5;
      if (iVar5 < 0) {
        uVar3 = uVar3 - 1;
        param_1[4] = iVar5 + 0xc;
      }
      if ((int)uVar3 < 0x45) {
        return -1;
      }
      if (0x8b < (int)uVar3) {
        return -1;
      }
    }
    iVar5 = *(int *)(&DAT_02fdbcf8 + param_1[4] * 4);
    if (((uVar3 & 3) == 0) && (1 < param_1[4])) {
      iVar5 = iVar5 + 1;
    }
    iVar4 = uVar3 * 0x16d + -0x63df + iVar5 + ((int)(uVar3 - 1) >> 2);
    iVar1 = param_1[3];
    iVar5 = iVar4 + iVar1;
    if (iVar4 < 0) {
      if ((iVar1 < 0) && (-1 < iVar5)) {
        return -1;
      }
    }
    else if ((-1 < iVar1) && (iVar5 < 0)) {
      return -1;
    }
    iVar4 = iVar5 * 0x18;
    if (iVar5 == 0 || iVar4 / iVar5 == 0x18) {
      iVar1 = param_1[2];
      iVar5 = iVar1 + iVar4;
      if (iVar4 < 0) {
        if ((iVar1 < 0) && (-1 < iVar5)) {
          return -1;
        }
      }
      else if ((-1 < iVar1) && (iVar5 < 0)) {
        return -1;
      }
      iVar4 = iVar5 * 0x3c;
      if (iVar5 == 0 || iVar4 / iVar5 == 0x3c) {
        iVar1 = param_1[1];
        iVar5 = iVar1 + iVar4;
        if (iVar4 < 0) {
          if ((iVar1 < 0) && (-1 < iVar5)) {
            return -1;
          }
        }
        else if ((-1 < iVar1) && (iVar5 < 0)) {
          return -1;
        }
        iVar4 = iVar5 * 0x3c;
        if (iVar5 == 0 || iVar4 / iVar5 == 0x3c) {
          iVar5 = *param_1;
          param_1 = (int *)(iVar5 + iVar4);
          if (iVar4 < 0) {
            if ((iVar5 < 0) && (-1 < (int)param_1)) {
              return -1;
            }
          }
          else if ((-1 < iVar5) && ((int)param_1 < 0)) {
            return -1;
          }
          if (param_2 == 0) {
            piVar2 = (int *)FUN_0048441a(&param_1);
            if (piVar2 != (int *)0x0) goto LAB_00486588;
          }
          else {
            FUN_0048e45e();
            param_1 = (int *)((int)param_1 + DAT_02fdbd40);
            piVar2 = (int *)FUN_00485cb0(&param_1);
            if (piVar2 != (int *)0x0) {
              iVar5 = piVar6[8];
              if ((0 < iVar5) || ((iVar5 < 0 && (0 < piVar2[8])))) {
                param_1 = (int *)((int)param_1 + DAT_02fdbd48);
                piVar2 = (int *)FUN_00485cb0(&param_1);
              }
LAB_00486588:
              for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
                *piVar6 = *piVar2;
                piVar2 = piVar2 + 1;
                piVar6 = piVar6 + 1;
              }
              return (int)param_1;
            }
          }
        }
      }
    }
  }
  return -1;
}

