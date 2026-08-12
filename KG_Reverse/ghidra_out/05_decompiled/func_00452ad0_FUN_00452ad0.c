// Function: FUN_00452ad0
// Entry:    00452ad0
// Size:     595 bytes
// Conv:     unknown
// Signature: undefined FUN_00452ad0(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00452ad0(int *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint *puVar11;
  int iStack_14;
  
  piVar5 = param_1;
  puVar4 = (undefined4 *)param_1[5];
  pbVar9 = (byte *)*puVar4;
  iVar6 = puVar4[1];
  if (*(int *)(param_1[0x6d] + 0x54) == 0) {
    (**(code **)*param_1)(param_1);
  }
  if (iVar6 == 0) {
    iVar6 = (*(code *)puVar4[3])(param_1);
    if (iVar6 == 0) {
      return 0;
    }
    pbVar9 = (byte *)*puVar4;
    iVar6 = puVar4[1];
  }
  iVar6 = iVar6 + -1;
  bVar1 = *pbVar9;
  pbVar9 = pbVar9 + 1;
  if (iVar6 == 0) {
    iVar6 = (*(code *)puVar4[3])(param_1);
    if (iVar6 == 0) {
      return 0;
    }
    pbVar9 = (byte *)*puVar4;
    iVar6 = puVar4[1];
  }
  bVar2 = *pbVar9;
  iVar6 = iVar6 + -1;
  pbVar9 = pbVar9 + 1;
  if (iVar6 == 0) {
    iVar6 = (*(code *)puVar4[3])(param_1);
    if (iVar6 == 0) {
      return 0;
    }
    pbVar9 = (byte *)*puVar4;
    iVar6 = puVar4[1];
  }
  bVar3 = *pbVar9;
  uVar7 = (uint)bVar3;
  iVar6 = iVar6 + -1;
  pbVar9 = pbVar9 + 1;
  if ((((uint)bVar1 * 0x100 + (uint)bVar2 != uVar7 * 2 + 6) || (bVar3 == 0)) || (4 < bVar3)) {
    (**(code **)*param_1)(param_1);
  }
  (**(code **)(*param_1 + 4))(param_1,1);
  param_1[0x51] = uVar7;
  iStack_14 = 0;
  if (uVar7 != 0) {
    param_1 = param_1 + 0x52;
    do {
      if (iVar6 == 0) {
        iVar6 = (*(code *)puVar4[3])(piVar5);
        if (iVar6 == 0) {
          return 0;
        }
        pbVar9 = (byte *)*puVar4;
        iVar6 = puVar4[1];
      }
      iVar6 = iVar6 + -1;
      bVar1 = *pbVar9;
      pbVar9 = pbVar9 + 1;
      if (iVar6 == 0) {
        iVar6 = (*(code *)puVar4[3])(piVar5);
        if (iVar6 == 0) {
          return 0;
        }
        pbVar9 = (byte *)*puVar4;
        iVar6 = puVar4[1];
      }
      puVar11 = (uint *)piVar5[0x36];
      iVar6 = iVar6 + -1;
      bVar2 = *pbVar9;
      pbVar9 = pbVar9 + 1;
      iVar8 = 0;
      if (0 < piVar5[8]) {
        do {
          if ((uint)bVar1 == *puVar11) goto LAB_00452c27;
          iVar8 = iVar8 + 1;
          puVar11 = puVar11 + 0x15;
        } while (iVar8 < piVar5[8]);
      }
      (**(code **)*piVar5)(piVar5);
LAB_00452c27:
      *param_1 = (int)puVar11;
      puVar11[5] = (int)(uint)bVar2 >> 4;
      puVar11[6] = bVar2 & 0xf;
      (**(code **)(*piVar5 + 4))(piVar5,1);
      iStack_14 = iStack_14 + 1;
      param_1 = param_1 + 1;
    } while (iStack_14 < (int)uVar7);
  }
  if (iVar6 == 0) {
    iVar6 = (*(code *)puVar4[3])(piVar5);
    if (iVar6 == 0) {
      return 0;
    }
    pbVar9 = (byte *)*puVar4;
    iVar6 = puVar4[1];
  }
  iVar6 = iVar6 + -1;
  pbVar10 = pbVar9 + 1;
  piVar5[99] = (uint)*pbVar9;
  if (iVar6 == 0) {
    iVar6 = (*(code *)puVar4[3])(piVar5);
    if (iVar6 == 0) {
      return 0;
    }
    pbVar10 = (byte *)*puVar4;
    iVar6 = puVar4[1];
  }
  iVar6 = iVar6 + -1;
  pbVar9 = pbVar10 + 1;
  piVar5[100] = (uint)*pbVar10;
  if (iVar6 == 0) {
    iVar6 = (*(code *)puVar4[3])(piVar5);
    if (iVar6 == 0) {
      return 0;
    }
    pbVar9 = (byte *)*puVar4;
    iVar6 = puVar4[1];
  }
  bVar1 = *pbVar9;
  piVar5[0x65] = (int)(uint)bVar1 >> 4;
  piVar5[0x66] = bVar1 & 0xf;
  (**(code **)(*piVar5 + 4))(piVar5,1);
  *(undefined4 *)(piVar5[0x6d] + 0x58) = 0;
  piVar5[0x24] = piVar5[0x24] + 1;
  *puVar4 = pbVar9 + 1;
  puVar4[1] = iVar6 + -1;
  return 1;
}

