// Function: FUN_004598b0
// Entry:    004598b0
// Size:     482 bytes
// Conv:     unknown
// Signature: undefined FUN_004598b0(void)
// Decompiled by Ghidra 12.1.2


void FUN_004598b0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int *piVar9;
  int iStack_c;
  
  puVar4 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0xa0);
  param_1[0x70] = puVar4;
  *puVar4 = &LAB_00459aa0;
  puVar4[1] = &LAB_00459ac0;
  puVar4[2] = 0;
  if (param_1[0x4b] != 0) {
    (**(code **)*param_1)(param_1);
  }
  if ((param_1[0x13] == 0) || (bVar3 = true, (int)param_1[0x4e] < 2)) {
    bVar3 = false;
  }
  iStack_c = 0;
  if (0 < (int)param_1[8]) {
    piVar9 = (int *)(param_1[0x36] + 0x24);
    puVar8 = puVar4 + 0xd;
    do {
      iVar5 = (piVar9[-7] * *piVar9) / (int)param_1[0x4e];
      iVar6 = (piVar9[-6] * *piVar9) / (int)param_1[0x4e];
      iVar1 = param_1[0x4d];
      iVar2 = param_1[0x4c];
      puVar8[0xc] = iVar6;
      if (piVar9[3] == 0) {
        *puVar8 = &LAB_00459bd0;
      }
      else if ((iVar5 == iVar2) && (iVar6 == iVar1)) {
        *puVar8 = &LAB_00459bc0;
      }
      else {
        if (iVar5 * 2 == iVar2) {
          if (iVar6 == iVar1) {
            if ((bVar3) && (2 < (uint)piVar9[1])) {
              *puVar8 = &LAB_00459df0;
            }
            else {
              *puVar8 = &LAB_00459d00;
            }
          }
          else {
            if ((iVar5 * 2 != iVar2) || (iVar6 * 2 != iVar1)) goto LAB_004599f8;
            if ((bVar3) && (2 < (uint)piVar9[1])) {
              *puVar8 = &LAB_00459ec0;
              puVar4[2] = 1;
            }
            else {
              *puVar8 = &LAB_00459d60;
            }
          }
        }
        else {
LAB_004599f8:
          if ((iVar2 % iVar5 == 0) && (iVar1 % iVar6 == 0)) {
            *puVar8 = &LAB_00459be0;
            *(char *)(iStack_c + 0x8c + (int)puVar4) = (char)(iVar2 / iVar5);
            *(char *)(iStack_c + 0x96 + (int)puVar4) = (char)(iVar1 / iVar6);
          }
          else {
            (**(code **)*param_1)(param_1);
          }
        }
        iVar1 = param_1[1];
        uVar7 = FUN_00456370(param_1[0x1c],param_1[0x4c],param_1[0x4d]);
        uVar7 = (**(code **)(iVar1 + 8))(param_1,1,uVar7);
        puVar8[-10] = uVar7;
      }
      iStack_c = iStack_c + 1;
      puVar8 = puVar8 + 1;
      piVar9 = piVar9 + 0x15;
    } while (iStack_c < (int)param_1[8]);
  }
  return;
}

