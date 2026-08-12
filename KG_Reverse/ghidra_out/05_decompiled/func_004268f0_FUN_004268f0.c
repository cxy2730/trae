// Function: FUN_004268f0
// Entry:    004268f0
// Size:     784 bytes
// Conv:     unknown
// Signature: undefined FUN_004268f0(void)
// Decompiled by Ghidra 12.1.2


undefined4 * __thiscall
FUN_004268f0(int param_1,undefined4 *param_2,uint param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  puVar2 = *(undefined4 **)(param_1 + 8);
  if ((uint)((*(int *)(param_1 + 0xc) - (int)puVar2) / 0x54) < param_3) {
    iVar6 = *(int *)(param_1 + 4);
    if ((iVar6 == 0) || (uVar4 = ((int)puVar2 - iVar6) / 0x54, uVar4 <= param_3)) {
      uVar4 = param_3;
    }
    if (iVar6 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = ((int)puVar2 - iVar6) / 0x54;
    }
    iVar6 = uVar4 + iVar6;
    iVar5 = iVar6;
    if (iVar6 < 0) {
      iVar5 = 0;
    }
    puVar1 = (undefined4 *)FUN_00492f17(iVar5 * 0x54);
    puVar3 = puVar1;
    for (puVar2 = *(undefined4 **)(param_1 + 4); uVar4 = param_3, puVar7 = puVar3, puVar2 != param_2
        ; puVar2 = puVar2 + 0x15) {
      if (puVar3 != (undefined4 *)0x0) {
        puVar7 = puVar2;
        puVar8 = puVar3;
        for (iVar5 = 0x15; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
      }
      puVar3 = puVar3 + 0x15;
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      if (puVar7 != (undefined4 *)0x0) {
        puVar2 = param_4;
        puVar8 = puVar7;
        for (iVar5 = 0x15; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar8 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar8 = puVar8 + 1;
        }
      }
      puVar7 = puVar7 + 0x15;
    }
    puVar7 = *(undefined4 **)(param_1 + 8);
    puVar2 = puVar3 + param_3 * 0x15;
    if (param_2 != puVar7) {
      param_2 = (undefined4 *)((int)puVar2 + (param_3 * -0x54 - (int)puVar3) + (int)param_2);
      do {
        if (puVar2 != (undefined4 *)0x0) {
          puVar3 = param_2;
          puVar8 = puVar2;
          for (iVar5 = 0x15; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar8 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar8 = puVar8 + 1;
          }
        }
        param_2 = param_2 + 0x15;
        puVar2 = puVar2 + 0x15;
      } while (param_2 != puVar7);
    }
    FUN_00492f40(*(undefined4 *)(param_1 + 4));
    *(undefined4 **)(param_1 + 0xc) = puVar1 + iVar6 * 0x15;
    if (*(int *)(param_1 + 4) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x54;
    }
    *(undefined4 **)(param_1 + 4) = puVar1;
    *(undefined4 **)(param_1 + 8) = puVar1 + (param_3 + iVar6) * 0x15;
    return puVar1 + (param_3 + iVar6) * 0x15;
  }
  puVar3 = (undefined4 *)(((int)puVar2 - (int)param_2) * 0x30c30c31);
  if ((uint)(((int)puVar2 - (int)param_2) / 0x54) < param_3) {
    puVar3 = param_2 + param_3 * 0x15;
    if (param_2 != puVar2) {
      puVar1 = puVar3 + param_3 * -0x15;
      do {
        if (puVar3 != (undefined4 *)0x0) {
          puVar7 = puVar1;
          puVar8 = puVar3;
          for (iVar6 = 0x15; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
        }
        puVar1 = puVar1 + 0x15;
        puVar3 = puVar3 + 0x15;
      } while (puVar1 != puVar2);
    }
    puVar2 = *(undefined4 **)(param_1 + 8);
    for (iVar6 = param_3 - ((int)puVar2 - (int)param_2) / 0x54; iVar6 != 0; iVar6 = iVar6 + -1) {
      if (puVar2 != (undefined4 *)0x0) {
        puVar3 = param_4;
        puVar1 = puVar2;
        for (iVar5 = 0x15; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar1 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar1 = puVar1 + 1;
        }
      }
      puVar2 = puVar2 + 0x15;
    }
    puVar2 = *(undefined4 **)(param_1 + 8);
    while (param_2 != puVar2) {
      puVar7 = param_2 + 0x15;
      puVar3 = param_4;
      puVar1 = param_2;
      for (iVar6 = 0x15; param_2 = puVar7, iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar1 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar1 = puVar1 + 1;
      }
    }
    puVar2 = (undefined4 *)(*(int *)(param_1 + 8) + param_3 * 0x54);
    *(undefined4 **)(param_1 + 8) = puVar2;
    return puVar2;
  }
  if (param_3 != 0) {
    puVar3 = puVar2;
    for (puVar1 = puVar2 + param_3 * -0x15; puVar1 != puVar2; puVar1 = puVar1 + 0x15) {
      if (puVar3 != (undefined4 *)0x0) {
        puVar7 = puVar1;
        puVar8 = puVar3;
        for (iVar6 = 0x15; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
      }
      puVar3 = puVar3 + 0x15;
    }
    puVar2 = *(undefined4 **)(param_1 + 8);
    puVar3 = puVar2 + param_3 * -0x15;
    while (param_2 != puVar3) {
      puVar3 = puVar3 + -0x15;
      puVar2 = puVar2 + -0x15;
      puVar1 = puVar3;
      puVar7 = puVar2;
      for (iVar6 = 0x15; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar7 = *puVar1;
        puVar1 = puVar1 + 1;
        puVar7 = puVar7 + 1;
      }
    }
    puVar3 = param_2;
    while (puVar3 != param_2 + param_3 * 0x15) {
      puVar7 = puVar3 + 0x15;
      puVar2 = param_4;
      puVar1 = puVar3;
      for (iVar6 = 0x15; puVar3 = puVar7, iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar1 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar1 = puVar1 + 1;
      }
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x54;
  }
  return puVar3;
}

