// Function: FUN_0040eeb0
// Entry:    0040eeb0
// Size:     839 bytes
// Conv:     unknown
// Signature: undefined FUN_0040eeb0(void)
// Decompiled by Ghidra 12.1.2


void FUN_0040eeb0(int param_1,int param_2,uint param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  BOOL BVar4;
  HWND pHVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  int local_18;
  int local_14;
  tagRECT local_10;
  
  if (param_1 != 0) {
    iVar2 = FUN_00406cf0(param_1 + 0x18);
    iVar2 = param_1 + 0x18 + iVar2;
    iVar3 = FUN_00406cf0(iVar2);
    piVar13 = (int *)(iVar3 + iVar2);
    iVar2 = *piVar13;
    if ((iVar2 != 0) && (BVar4 = IsWindow(*(HWND *)(iVar2 + 0x1c)), BVar4 != 0)) {
      pHVar5 = GetParent(*(HWND *)(iVar2 + 0x1c));
      iVar3 = FUN_00494bb2(pHVar5);
      uVar6 = param_3;
      if (param_3 == 0x7fffffff) {
        uVar6 = SendMessageA(*(HWND *)(iVar2 + 0x1c),0x130b,0,0);
      }
      uVar6 = ((int)uVar6 < 0) - 1 & uVar6;
      piVar14 = piVar13 + 8;
      for (param_1 = piVar13[7]; (0 < (int)uVar6 && (0 < param_1)); param_1 = param_1 + -1) {
        iVar2 = *piVar14;
        for (; (iVar2 != 0 && (0 < param_1)); param_1 = param_1 + -1) {
          iVar2 = FUN_0040e7b0(iVar2,0,0);
          iVar7 = FUN_00406cf0(iVar2 + 0x18);
          iVar7 = iVar2 + 0x18 + iVar7;
          iVar2 = FUN_00406cf0(iVar7);
          iVar2 = *(int *)(iVar7 + iVar2);
          uVar8 = FUN_00497418();
          if ((uVar8 & 0x10000000) != 0) {
            if (param_3 != 0x7fffffff) {
              GetWindowRect(*(HWND *)(iVar2 + 0x1c),&local_10);
              FUN_004999e3(&local_10);
              InvalidateRect(*(HWND *)(iVar3 + 0x1c),&local_10,1);
            }
            FUN_00497580(0);
          }
          iVar2 = piVar14[1];
          piVar14 = piVar14 + 1;
        }
        piVar14 = piVar14 + 1;
        uVar6 = uVar6 - 1;
      }
      local_14 = 0;
      local_18 = 0x7fffffff;
      if (0 < param_1) {
        do {
          if (*piVar14 == 0) {
            if (0 < param_1) {
              do {
                if (*piVar14 != 0) {
                  iVar2 = FUN_0040e7b0(*piVar14,0,0);
                  iVar7 = FUN_00406cf0(iVar2 + 0x18);
                  iVar7 = iVar2 + 0x18 + iVar7;
                  iVar2 = FUN_00406cf0(iVar7);
                  iVar2 = *(int *)(iVar7 + iVar2);
                  uVar6 = FUN_00497418();
                  if ((uVar6 & 0x10000000) != 0) {
                    if (param_3 != 0x7fffffff) {
                      GetWindowRect(*(HWND *)(iVar2 + 0x1c),&local_10);
                      FUN_004999e3(&local_10);
                      InvalidateRect(*(HWND *)(iVar3 + 0x1c),&local_10,1);
                    }
                    FUN_00497580(0);
                  }
                }
                piVar14 = piVar14 + 1;
                param_1 = param_1 + -1;
              } while (param_1 != 0);
            }
            break;
          }
          puVar9 = (undefined4 *)FUN_0040e7b0(*piVar14,0,0);
          puVar1 = puVar9 + 6;
          iVar2 = FUN_00406cf0(puVar1);
          iVar7 = FUN_00406cf0((int)puVar1 + iVar2);
          iVar2 = *(int *)((int)puVar1 + iVar2 + iVar7);
          iVar7 = FUN_00413d70(0x3ea,*puVar9,0);
          if (iVar7 != 0) {
            if (param_2 == 0) {
LAB_0040f0be:
              FUN_00497580(8);
            }
            else {
              if ((*(uint *)(iVar7 + 0x14) & 0x8000) != 0) goto LAB_0040f12c;
              iVar10 = FUN_00406cf0(puVar1);
              iVar10 = (int)puVar1 + iVar10;
              iVar11 = FUN_00406cf0(iVar10);
              iVar12 = *(int *)(iVar11 + 0x1c + iVar10);
              iVar10 = iVar11 + 0x1c + iVar10;
              iVar10 = *(int *)(iVar10 + 4 + iVar12 * 4) + iVar10 + 8 + iVar12 * 4;
              iVar12 = FUN_00406cf0(iVar10);
              if ((*(byte *)(iVar12 + 4 + iVar10) & 1) != 0) goto LAB_0040f0be;
            }
            if (((param_2 == 1) && (iVar10 = FUN_004975a7(), iVar10 == 1)) &&
               ((*(uint *)(iVar7 + 0x14) & 0x10000) == 0)) {
              iVar12 = FUN_00406cf0(puVar1);
              iVar12 = (int)puVar1 + iVar12;
              iVar7 = FUN_00406cf0(iVar12);
              iVar10 = *(int *)(iVar12 + 0x1c + iVar7);
              iVar7 = iVar12 + 0x1c + iVar7;
              iVar7 = *(int *)(iVar7 + 4 + iVar10 * 4) + iVar7 + 8 + iVar10 * 4;
              iVar10 = FUN_00406cf0(iVar7);
              iVar7 = *(int *)(iVar10 + 8 + iVar7);
              if (iVar7 < local_18) {
                local_18 = iVar7;
                local_14 = iVar2;
              }
            }
          }
LAB_0040f12c:
          piVar14 = piVar14 + 1;
          param_1 = param_1 + -1;
        } while (0 < param_1);
        if ((local_14 != 0) && (param_3 == 0x7fffffff)) {
          FUN_004975e9();
        }
      }
    }
  }
  return;
}

