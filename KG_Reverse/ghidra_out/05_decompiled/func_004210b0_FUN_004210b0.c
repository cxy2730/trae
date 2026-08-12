// Function: FUN_004210b0
// Entry:    004210b0
// Size:     1658 bytes
// Conv:     unknown
// Signature: undefined FUN_004210b0(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall
FUN_004210b0(int param_1,undefined4 *param_2,int param_3,int param_4,int param_5,int param_6,
            RECT *param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  
  if ((((0 < (int)param_2) && ((int)param_2 < 9)) && (1 < param_6)) &&
     ((FUN_00420c70(), 0 < param_3 || (0 < param_4)))) {
    iVar3 = param_4;
    iVar6 = param_3;
    if (param_7 != (RECT *)0x0) {
      if (param_7->left < 0) {
        param_7->left = 0;
      }
      if (param_7->top < 0) {
        param_7->top = 0;
      }
      if (param_3 < param_7->right) {
        param_7->right = param_3;
      }
      if (param_4 < param_7->bottom) {
        param_7->bottom = param_4;
      }
      iVar6 = param_7->right - param_7->left;
      iVar3 = param_7->bottom - param_7->top;
      if (iVar6 < 1) {
        return 0;
      }
      if (iVar3 < 1) {
        return 0;
      }
    }
    iVar7 = iVar6 * 4;
    iVar1 = FUN_004062c0(iVar7 * iVar3);
    if (iVar1 != 0) {
      if (*(int *)(param_1 + 0x68) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(param_1 + 0x60);
      }
      FUN_00406ca0(uVar4,*(undefined4 *)(param_1 + 0x68));
      *(int *)(param_1 + 0x8c) = param_6;
      iVar1 = FUN_004062c0(param_6 << 2);
      if (iVar1 != 0) {
        *(int *)(param_1 + 0x70) = param_3;
        *(undefined4 **)(param_1 + 0x6c) = param_2;
        *(int *)(param_1 + 0x74) = param_4;
        if (*(int *)(param_1 + 0x88) == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(undefined4 *)(param_1 + 0x80);
        }
        FUN_00406c40(uVar4,param_5,param_6 << 2);
        if (param_7 == (RECT *)0x0) {
          SetRect((LPRECT)(param_1 + 0x90),0,0,*(int *)(param_1 + 0x70),*(int *)(param_1 + 0x74));
        }
        else {
          CopyRect((LPRECT)(param_1 + 0x90),param_7);
        }
        if (*(int *)(param_1 + 0x68) == 0) {
          param_2 = (undefined4 *)0x0;
        }
        else {
          param_2 = *(undefined4 **)(param_1 + 0x60);
        }
        iVar1 = *(int *)(param_1 + 0x98);
        iVar2 = param_3 - iVar1;
        param_4 = param_4 - *(int *)(param_1 + 0x9c);
        param_3 = iVar3;
        switch(*(undefined4 *)(param_1 + 0x6c)) {
        case 1:
          param_6 = 0;
          if (0 < iVar3) {
            param_2 = (undefined4 *)((iVar3 + -1) * iVar6 * 4 + (int)param_2);
            do {
              FUN_00421750(*(int *)(param_1 + 0x94) + param_6,*(undefined4 *)(param_1 + 0x74),
                           (int)param_2 + 2,(int)param_2 + 1,param_2);
              uVar4 = *param_2;
              iVar7 = iVar6;
              puVar5 = param_2;
              if (0 < iVar6) {
                for (; iVar7 != 0; iVar7 = iVar7 + -1) {
                  *puVar5 = uVar4;
                  puVar5 = puVar5 + 1;
                }
              }
              param_6 = param_6 + 1;
              param_2 = param_2 + -iVar6;
            } while (param_6 < iVar3);
            return 1;
          }
          break;
        case 2:
          param_6 = 0;
          if (0 < iVar6) {
            param_2 = (undefined4 *)((iVar3 + -1) * iVar6 * 4 + (int)param_2);
            do {
              FUN_00421750(*(int *)(param_1 + 0x90) + param_6,*(undefined4 *)(param_1 + 0x70),
                           (int)param_2 + 2,(int)param_2 + 1,param_2);
              uVar4 = *param_2;
              iVar7 = iVar3;
              puVar5 = param_2;
              if (0 < iVar3) {
                do {
                  *puVar5 = uVar4;
                  puVar5 = puVar5 + -iVar6;
                  iVar7 = iVar7 + -1;
                } while (iVar7 != 0);
              }
              param_2 = param_2 + 1;
              param_6 = param_6 + 1;
            } while (param_6 < iVar6);
            return 1;
          }
          break;
        case 3:
          uVar4 = __ftol();
          param_5 = *(int *)(param_1 + 0x94);
          if (-1 < iVar3 + -1) {
            param_2 = (undefined4 *)((iVar3 + -1) * iVar7 + (int)param_2);
            param_7 = (RECT *)iVar3;
            do {
              iVar3 = 0;
              if (0 < iVar6) {
                iVar7 = (int)param_2 + 2;
                puVar5 = param_2;
                do {
                  FUN_00421750(*(int *)(param_1 + 0x90) + param_5 + iVar3,uVar4,iVar7,iVar7 + -1,
                               puVar5);
                  iVar3 = iVar3 + 1;
                  puVar5 = puVar5 + 1;
                  iVar7 = iVar7 + 4;
                } while (iVar3 < iVar6);
              }
              param_2 = param_2 + -iVar6;
              param_5 = param_5 + 1;
              param_7 = (RECT *)((int)param_7 + -1);
            } while (param_7 != (RECT *)0x0);
            return 1;
          }
          break;
        case 4:
          iVar7 = *(int *)(param_1 + 0x70);
          uVar4 = __ftol();
          if (-1 < iVar3 + -1) {
            param_7 = (RECT *)((iVar7 - iVar1) + *(int *)(param_1 + 0x94));
            param_2 = (undefined4 *)((iVar3 + -1) * iVar6 * 4 + iVar6 * 4 + -3 + (int)param_2);
            do {
              iVar3 = (int)param_7;
              iVar7 = (int)param_2;
              param_5 = iVar6;
              if (0 < iVar6) {
                do {
                  FUN_00421750(iVar3,uVar4,iVar7 + 1,iVar7,iVar7 + -1);
                  param_5 = param_5 + -1;
                  iVar3 = iVar3 + 1;
                  iVar7 = iVar7 + -4;
                } while (param_5 != 0);
              }
              param_2 = (undefined4 *)((int)param_2 + iVar6 * -4);
              param_7 = (RECT *)((int)param_7 + 1);
              param_3 = param_3 + -1;
            } while (param_3 != 0);
            return 1;
          }
          break;
        case 5:
          param_6 = 0;
          if (0 < iVar3) {
            do {
              FUN_00421750(param_6 + param_4,*(undefined4 *)(param_1 + 0x74),(int)param_2 + 2,
                           (int)param_2 + 1,param_2);
              uVar4 = *param_2;
              iVar7 = iVar6;
              puVar5 = param_2;
              if (0 < iVar6) {
                for (; iVar7 != 0; iVar7 = iVar7 + -1) {
                  *puVar5 = uVar4;
                  puVar5 = puVar5 + 1;
                }
              }
              param_6 = param_6 + 1;
              param_2 = param_2 + iVar6;
            } while (param_6 < iVar3);
            return 1;
          }
          break;
        case 6:
          param_6 = 0;
          if (0 < iVar6) {
            param_2 = (undefined4 *)(iVar7 * iVar3 + -4 + (int)param_2);
            do {
              FUN_00421750(param_6 + iVar2,*(undefined4 *)(param_1 + 0x70),(int)param_2 + 2,
                           (int)param_2 + 1,param_2);
              uVar4 = *param_2;
              iVar7 = iVar3;
              puVar5 = param_2;
              if (0 < iVar3) {
                do {
                  *puVar5 = uVar4;
                  iVar7 = iVar7 + -1;
                  puVar5 = puVar5 + -iVar6;
                } while (iVar7 != 0);
              }
              param_2 = param_2 + -1;
              param_6 = param_6 + 1;
            } while (param_6 < iVar6);
            return 1;
          }
          break;
        case 7:
          uVar4 = __ftol();
          if (0 < iVar3) {
            param_7 = (RECT *)(param_4 + iVar2);
            param_2 = (undefined4 *)((int)param_2 + iVar7 + -3);
            do {
              iVar3 = (int)param_7;
              iVar7 = (int)param_2;
              param_5 = iVar6;
              if (0 < iVar6) {
                do {
                  FUN_00421750(iVar3,uVar4,iVar7 + 1,iVar7,iVar7 + -1);
                  param_5 = param_5 + -1;
                  iVar3 = iVar3 + 1;
                  iVar7 = iVar7 + -4;
                } while (param_5 != 0);
              }
              param_2 = (undefined4 *)((int)param_2 + iVar6 * 4);
              param_7 = (RECT *)((int)param_7 + 1);
              param_3 = param_3 + -1;
            } while (param_3 != 0);
            return 1;
          }
          break;
        case 8:
          uVar4 = __ftol();
          if (0 < iVar3) {
            param_7 = (RECT *)(*(int *)(param_1 + 0x90) + param_4);
            do {
              if (0 < iVar6) {
                iVar7 = (int)param_2 + 2;
                iVar3 = (int)param_7;
                puVar5 = param_2;
                param_5 = iVar6;
                do {
                  FUN_00421750(iVar3,uVar4,iVar7,iVar7 + -1,puVar5);
                  iVar3 = iVar3 + 1;
                  puVar5 = puVar5 + 1;
                  iVar7 = iVar7 + 4;
                  param_5 = param_5 + -1;
                } while (param_5 != 0);
              }
              param_2 = param_2 + iVar6;
              param_7 = (RECT *)((int)param_7 + 1);
              param_3 = param_3 + -1;
            } while (param_3 != 0);
          }
        }
        return 1;
      }
    }
  }
  return 0;
}

