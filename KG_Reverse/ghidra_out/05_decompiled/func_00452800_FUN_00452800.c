// Function: FUN_00452800
// Entry:    00452800
// Size:     709 bytes
// Conv:     unknown
// Signature: undefined FUN_00452800(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00452800(int *param_1,uint param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  
  puVar3 = (undefined4 *)param_1[5];
  iVar4 = puVar3[1];
  pbVar7 = (byte *)*puVar3;
  param_1[0x37] = param_2;
  param_1[0x38] = param_3;
  if (iVar4 == 0) {
    iVar4 = (*(code *)puVar3[3])(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    pbVar7 = (byte *)*puVar3;
    iVar4 = puVar3[1];
  }
  iVar4 = iVar4 + -1;
  bVar1 = *pbVar7;
  pbVar7 = pbVar7 + 1;
  if (iVar4 == 0) {
    iVar4 = (*(code *)puVar3[3])(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    pbVar7 = (byte *)*puVar3;
    iVar4 = puVar3[1];
  }
  bVar2 = *pbVar7;
  iVar4 = iVar4 + -1;
  pbVar7 = pbVar7 + 1;
  if (iVar4 == 0) {
    iVar4 = (*(code *)puVar3[3])(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    pbVar7 = (byte *)*puVar3;
    iVar4 = puVar3[1];
  }
  iVar4 = iVar4 + -1;
  pbVar8 = pbVar7 + 1;
  param_1[0x35] = (uint)*pbVar7;
  if (iVar4 == 0) {
    iVar4 = (*(code *)puVar3[3])(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    pbVar8 = (byte *)*puVar3;
    iVar4 = puVar3[1];
  }
  iVar4 = iVar4 + -1;
  pbVar7 = pbVar8 + 1;
  param_1[7] = (uint)*pbVar8 << 8;
  if (iVar4 == 0) {
    iVar4 = (*(code *)puVar3[3])(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    pbVar7 = (byte *)*puVar3;
    iVar4 = puVar3[1];
  }
  iVar4 = iVar4 + -1;
  pbVar8 = pbVar7 + 1;
  param_1[7] = param_1[7] + (uint)*pbVar7;
  if (iVar4 == 0) {
    iVar4 = (*(code *)puVar3[3])(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    pbVar8 = (byte *)*puVar3;
    iVar4 = puVar3[1];
  }
  iVar4 = iVar4 + -1;
  pbVar7 = pbVar8 + 1;
  param_1[6] = (uint)*pbVar8 << 8;
  if (iVar4 == 0) {
    iVar4 = (*(code *)puVar3[3])(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    pbVar7 = (byte *)*puVar3;
    iVar4 = puVar3[1];
  }
  iVar4 = iVar4 + -1;
  pbVar8 = pbVar7 + 1;
  param_1[6] = param_1[6] + (uint)*pbVar7;
  if (iVar4 == 0) {
    iVar4 = (*(code *)puVar3[3])(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    pbVar8 = (byte *)*puVar3;
    iVar4 = puVar3[1];
  }
  iVar4 = iVar4 + -1;
  param_1[8] = (uint)*pbVar8;
  pbVar8 = pbVar8 + 1;
  (**(code **)(*param_1 + 4))(param_1,1);
  if (*(int *)(param_1[0x6d] + 0x54) != 0) {
    (**(code **)*param_1)(param_1);
  }
  if (((param_1[7] == 0) || (param_1[6] == 0)) || (param_1[8] < 1)) {
    (**(code **)*param_1)(param_1);
  }
  if ((uint)bVar1 * 0x100 + (uint)bVar2 + -8 != param_1[8] * 3) {
    (**(code **)*param_1)(param_1);
  }
  if (param_1[0x36] == 0) {
    iVar5 = (**(code **)param_1[1])(param_1,1,param_1[8] * 0x54);
    param_1[0x36] = iVar5;
  }
  puVar6 = (uint *)param_1[0x36];
  param_2 = 0;
  if (0 < param_1[8]) {
    do {
      puVar6[1] = param_2;
      if (iVar4 == 0) {
        iVar4 = (*(code *)puVar3[3])(param_1);
        if (iVar4 == 0) {
          return 0;
        }
        pbVar8 = (byte *)*puVar3;
        iVar4 = puVar3[1];
      }
      iVar4 = iVar4 + -1;
      pbVar7 = pbVar8 + 1;
      *puVar6 = (uint)*pbVar8;
      if (iVar4 == 0) {
        iVar4 = (*(code *)puVar3[3])(param_1);
        if (iVar4 == 0) {
          return 0;
        }
        pbVar7 = (byte *)*puVar3;
        iVar4 = puVar3[1];
      }
      iVar4 = iVar4 + -1;
      bVar1 = *pbVar7;
      pbVar7 = pbVar7 + 1;
      puVar6[3] = bVar1 & 0xf;
      puVar6[2] = (int)(uint)bVar1 >> 4;
      if (iVar4 == 0) {
        iVar4 = (*(code *)puVar3[3])(param_1);
        if (iVar4 == 0) {
          return 0;
        }
        pbVar7 = (byte *)*puVar3;
        iVar4 = puVar3[1];
      }
      iVar4 = iVar4 + -1;
      puVar6[4] = (uint)*pbVar7;
      pbVar8 = pbVar7 + 1;
      (**(code **)(*param_1 + 4))(param_1,1);
      param_2 = param_2 + 1;
      puVar6 = puVar6 + 0x15;
    } while ((int)param_2 < param_1[8]);
  }
  *(undefined4 *)(param_1[0x6d] + 0x54) = 1;
  *puVar3 = pbVar8;
  puVar3[1] = iVar4;
  return 1;
}

