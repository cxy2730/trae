// Function: FUN_00426370
// Entry:    00426370
// Size:     758 bytes
// Conv:     unknown
// Signature: undefined FUN_00426370(void)
// Decompiled by Ghidra 12.1.2


undefined4 * __thiscall
FUN_00426370(int param_1,undefined4 *param_2,uint param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  puVar3 = *(undefined4 **)(param_1 + 8);
  if (param_3 <= (uint)((*(int *)(param_1 + 0xc) - (int)puVar3) / 0x18)) {
    puVar4 = (undefined4 *)(((int)puVar3 - (int)param_2) * 0x2aaaaaab);
    if ((uint)(((int)puVar3 - (int)param_2) / 0x18) < param_3) {
      puVar4 = param_2 + param_3 * 6;
      if (param_2 != puVar3) {
        puVar2 = puVar4 + param_3 * -6;
        do {
          if (puVar4 != (undefined4 *)0x0) {
            puVar7 = puVar2;
            puVar8 = puVar4;
            for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
              *puVar8 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar8 = puVar8 + 1;
            }
          }
          puVar2 = puVar2 + 6;
          puVar4 = puVar4 + 6;
        } while (puVar2 != puVar3);
      }
      puVar3 = *(undefined4 **)(param_1 + 8);
      for (iVar6 = param_3 - ((int)puVar3 - (int)param_2) / 0x18; iVar6 != 0; iVar6 = iVar6 + -1) {
        if (puVar3 != (undefined4 *)0x0) {
          puVar4 = param_4;
          puVar2 = puVar3;
          for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar2 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar2 = puVar2 + 1;
          }
        }
        puVar3 = puVar3 + 6;
      }
      puVar3 = *(undefined4 **)(param_1 + 8);
      while (param_2 != puVar3) {
        puVar7 = param_2 + 6;
        puVar4 = param_4;
        puVar2 = param_2;
        for (iVar6 = 6; param_2 = puVar7, iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar2 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar2 = puVar2 + 1;
        }
      }
      puVar3 = (undefined4 *)(*(int *)(param_1 + 8) + param_3 * 0x18);
      *(undefined4 **)(param_1 + 8) = puVar3;
      return puVar3;
    }
    if (param_3 != 0) {
      puVar4 = puVar3;
      for (puVar2 = puVar3 + param_3 * -6; puVar2 != puVar3; puVar2 = puVar2 + 6) {
        if (puVar4 != (undefined4 *)0x0) {
          puVar7 = puVar2;
          puVar8 = puVar4;
          for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
        }
        puVar4 = puVar4 + 6;
      }
      puVar3 = *(undefined4 **)(param_1 + 8);
      puVar4 = puVar3 + param_3 * -6;
      while (param_2 != puVar4) {
        puVar4 = puVar4 + -6;
        puVar3 = puVar3 + -6;
        puVar2 = puVar4;
        puVar7 = puVar3;
        for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar7 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar7 = puVar7 + 1;
        }
      }
      puVar4 = param_2;
      while (puVar4 != param_2 + param_3 * 6) {
        puVar7 = puVar4 + 6;
        puVar3 = param_4;
        puVar2 = puVar4;
        for (iVar6 = 6; puVar4 = puVar7, iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar2 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar2 = puVar2 + 1;
        }
      }
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x18;
    }
    return puVar4;
  }
  iVar6 = *(int *)(param_1 + 4);
  if ((iVar6 == 0) || (uVar5 = ((int)puVar3 - iVar6) / 0x18, uVar5 <= param_3)) {
    uVar5 = param_3;
  }
  if (iVar6 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = ((int)puVar3 - iVar6) / 0x18;
  }
  iVar6 = iVar6 + uVar5;
  iVar1 = iVar6;
  if (iVar6 < 0) {
    iVar1 = 0;
  }
  puVar2 = (undefined4 *)FUN_00492f17(iVar1 * 0x18);
  puVar4 = puVar2;
  for (puVar3 = *(undefined4 **)(param_1 + 4); uVar5 = param_3, puVar7 = puVar4, puVar3 != param_2;
      puVar3 = puVar3 + 6) {
    if (puVar4 != (undefined4 *)0x0) {
      puVar7 = puVar3;
      puVar8 = puVar4;
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
    }
    puVar4 = puVar4 + 6;
  }
  for (; uVar5 != 0; uVar5 = uVar5 - 1) {
    if (puVar7 != (undefined4 *)0x0) {
      puVar3 = param_4;
      puVar8 = puVar7;
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar8 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar8 = puVar8 + 1;
      }
    }
    puVar7 = puVar7 + 6;
  }
  puVar7 = *(undefined4 **)(param_1 + 8);
  puVar3 = puVar4 + param_3 * 6;
  if (param_2 != puVar7) {
    param_2 = (undefined4 *)((int)puVar3 + (param_3 * -0x18 - (int)puVar4) + (int)param_2);
    do {
      if (puVar3 != (undefined4 *)0x0) {
        puVar4 = param_2;
        puVar8 = puVar3;
        for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar8 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar8 = puVar8 + 1;
        }
      }
      param_2 = param_2 + 6;
      puVar3 = puVar3 + 6;
    } while (param_2 != puVar7);
  }
  FUN_00492f40(*(undefined4 *)(param_1 + 4));
  *(undefined4 **)(param_1 + 0xc) = puVar2 + iVar6 * 6;
  iVar6 = *(int *)(param_1 + 4);
  if (iVar6 == 0) {
    *(undefined4 **)(param_1 + 4) = puVar2;
    *(undefined4 **)(param_1 + 8) = puVar2 + param_3 * 6;
    return puVar2 + param_3 * 6;
  }
  iVar1 = *(int *)(param_1 + 8);
  *(undefined4 **)(param_1 + 4) = puVar2;
  *(undefined4 **)(param_1 + 8) = puVar2 + (param_3 + (iVar1 - iVar6) / 0x18) * 6;
  return puVar2 + (param_3 + (iVar1 - iVar6) / 0x18) * 6;
}

