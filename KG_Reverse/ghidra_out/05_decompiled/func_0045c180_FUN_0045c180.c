// Function: FUN_0045c180
// Entry:    0045c180
// Size:     219 bytes
// Conv:     unknown
// Signature: undefined FUN_0045c180(void)
// Decompiled by Ghidra 12.1.2


int FUN_0045c180(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piStack_10;
  
  iVar2 = param_1[0x1e];
  iVar3 = param_1[0x18];
  iVar7 = 1;
  do {
    iVar8 = iVar7;
    iVar7 = iVar8 + 1;
    iVar5 = iVar7;
    if (1 < iVar2) {
      iVar6 = iVar2 + -1;
      do {
        iVar5 = iVar5 * iVar7;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  } while (iVar5 <= iVar3);
  if (iVar8 < 2) {
    (**(code **)*param_1)(param_1);
  }
  iVar5 = 1;
  iVar7 = iVar2;
  piVar9 = param_2;
  if (0 < iVar2) {
    for (; iVar6 = iVar2, iVar7 != 0; iVar7 = iVar7 + -1) {
      *piVar9 = iVar8;
      piVar9 = piVar9 + 1;
    }
    do {
      iVar5 = iVar5 * iVar8;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  do {
    iVar7 = 0;
    bVar4 = false;
    if (iVar2 < 1) {
      return iVar5;
    }
    piStack_10 = &DAT_02f99170;
    iVar8 = iVar5;
    do {
      iVar6 = iVar7;
      if (param_1[10] == 2) {
        iVar6 = *piStack_10;
      }
      iVar1 = param_2[iVar6] + 1;
      iVar5 = (iVar8 / param_2[iVar6]) * iVar1;
      if (iVar5 - iVar3 != 0 && iVar3 <= iVar5) {
        iVar5 = iVar8;
        if (!bVar4) {
          return iVar8;
        }
        break;
      }
      iVar7 = iVar7 + 1;
      param_2[iVar6] = iVar1;
      piStack_10 = piStack_10 + 1;
      bVar4 = true;
      iVar8 = iVar5;
    } while (iVar7 < iVar2);
  } while( true );
}

