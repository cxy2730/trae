// Function: FUN_0047a880
// Entry:    0047a880
// Size:     470 bytes
// Conv:     unknown
// Signature: undefined FUN_0047a880(void)
// Decompiled by Ghidra 12.1.2


void FUN_0047a880(int param_1,int param_2,byte *param_3)

{
  int iVar1;
  byte *pbVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  uVar8 = param_2 + 0xd0U & 0x1ff;
  piVar3 = &DAT_0300cfbc;
  param_2 = 0x10;
  uVar6 = uVar8 - 0x20 & 0x1ff;
  pbVar2 = param_3;
  do {
    param_3 = pbVar2;
    iVar7 = 3;
    iVar5 = -(*(int *)(param_1 + uVar6 * 4) * *piVar3);
    piVar3 = piVar3 + 1;
    do {
      piVar4 = piVar3;
      iVar1 = uVar8 * 4;
      uVar6 = uVar6 + 0x40 & 0x1ff;
      uVar8 = uVar8 + 0x40 & 0x1ff;
      iVar5 = (iVar5 + *(int *)(param_1 + iVar1) * *piVar4) -
              *(int *)(param_1 + uVar6 * 4) * piVar4[1];
      piVar3 = piVar4 + 2;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    iVar5 = iVar5 >> 10;
    uVar8 = uVar8 - 0xbf & 0x1ff;
    uVar6 = uVar6 - 0xc1 & 0x1ff;
    if (iVar5 < 0x8000) {
      if (iVar5 < -0x8000) {
        iVar5 = -0x8000;
      }
    }
    else {
      iVar5 = 0x7fff;
    }
    *param_3 = (byte)((uint)iVar5 >> 8) ^ 0x80;
    param_2 = param_2 + -1;
    pbVar2 = param_3 + 1;
  } while (param_2 != 0);
  iVar7 = 3;
  uVar6 = uVar6 - 0x40 & 0x1ff;
  iVar5 = *(int *)(param_1 + uVar6 * 4) * *piVar3;
  piVar3 = piVar4 + 3;
  do {
    uVar6 = uVar6 + 0x40 & 0x1ff;
    iVar5 = iVar5 + *(int *)(param_1 + uVar6 * 4) * *piVar3;
    iVar7 = iVar7 + -1;
    piVar3 = piVar3 + 1;
  } while (iVar7 != 0);
  iVar5 = iVar5 >> 10;
  if (iVar5 < 0x8000) {
    if (iVar5 < -0x8000) {
      iVar5 = -0x8000;
    }
  }
  else {
    iVar5 = 0x7fff;
  }
  uVar6 = uVar6 - 0x7f;
  param_2 = 0xf;
  param_3[1] = (byte)((uint)iVar5 >> 8) ^ 0x80;
  param_3 = param_3 + 2;
  uVar8 = uVar8 - 0x41;
  piVar3 = &DAT_0300d178;
  do {
    uVar6 = uVar6 & 0x1ff;
    uVar8 = uVar8 & 0x1ff;
    iVar5 = 3;
    iVar7 = *(int *)(param_1 + uVar8 * 4) * *piVar3;
    piVar3 = piVar3 + -1;
    do {
      iVar1 = uVar6 * 4;
      uVar8 = uVar8 + 0x40 & 0x1ff;
      uVar6 = uVar6 + 0x40 & 0x1ff;
      iVar7 = iVar7 + *(int *)(param_1 + iVar1) * *piVar3 +
              *(int *)(param_1 + uVar8 * 4) * piVar3[-1];
      piVar3 = piVar3 + -2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    uVar8 = uVar8 - 0xc1;
    uVar6 = uVar6 - 0xbf;
    iVar7 = iVar7 >> 10;
    if (iVar7 < 0x8000) {
      if (iVar7 < -0x8000) {
        iVar7 = -0x8000;
      }
    }
    else {
      iVar7 = 0x7fff;
    }
    *param_3 = (byte)((uint)iVar7 >> 8) ^ 0x80;
    param_3 = param_3 + 1;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}

