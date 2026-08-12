// Function: FUN_0047b470
// Entry:    0047b470
// Size:     426 bytes
// Conv:     unknown
// Signature: undefined FUN_0047b470(void)
// Decompiled by Ghidra 12.1.2


void FUN_0047b470(int param_1,int param_2,byte *param_3)

{
  int iVar1;
  byte *pbVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  uVar7 = param_2 + 0x34U & 0x7f;
  piVar3 = &DAT_0300cfbc;
  param_2 = 4;
  uVar6 = uVar7 - 8 & 0x7f;
  pbVar2 = param_3;
  do {
    param_3 = pbVar2;
    iVar8 = 3;
    iVar5 = -(*(int *)(param_1 + uVar6 * 4) * *piVar3);
    piVar3 = piVar3 + 1;
    do {
      piVar4 = piVar3;
      iVar1 = uVar7 * 4;
      uVar6 = uVar6 + 0x10 & 0x7f;
      uVar7 = uVar7 + 0x10 & 0x7f;
      iVar5 = (iVar5 + *(int *)(param_1 + iVar1) * *piVar4) -
              *(int *)(param_1 + uVar6 * 4) * piVar4[1];
      iVar8 = iVar8 + -1;
      piVar3 = piVar4 + 2;
    } while (iVar8 != 0);
    iVar5 = iVar5 >> 10;
    uVar7 = uVar7 - 0x2f & 0x7f;
    uVar6 = uVar6 - 0x31 & 0x7f;
    piVar3 = piVar4 + 0x17;
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
  iVar8 = 3;
  uVar6 = uVar6 - 0x10 & 0x7f;
  iVar5 = *(int *)(param_1 + uVar6 * 4) * *piVar3;
  piVar3 = piVar4 + 0x18;
  do {
    uVar6 = uVar6 + 0x10 & 0x7f;
    iVar5 = iVar5 + *(int *)(param_1 + uVar6 * 4) * *piVar3;
    iVar8 = iVar8 + -1;
    piVar3 = piVar3 + 1;
  } while (iVar8 != 0);
  iVar5 = iVar5 >> 10;
  if (iVar5 < 0x8000) {
    if (iVar5 < -0x8000) {
      iVar5 = -0x8000;
    }
  }
  else {
    iVar5 = 0x7fff;
  }
  uVar6 = uVar6 - 0x1f;
  param_2 = 3;
  param_3[1] = (byte)((uint)iVar5 >> 8) ^ 0x80;
  param_3 = param_3 + 2;
  uVar7 = uVar7 - 0x11;
  piVar3 = &DAT_0300d124;
  do {
    uVar6 = uVar6 & 0x7f;
    uVar7 = uVar7 & 0x7f;
    iVar5 = 3;
    iVar8 = *(int *)(param_1 + uVar7 * 4) * *piVar3;
    piVar4 = piVar3 + -1;
    do {
      piVar3 = piVar4;
      iVar1 = uVar6 * 4;
      uVar7 = uVar7 + 0x10 & 0x7f;
      uVar6 = uVar6 + 0x10 & 0x7f;
      iVar8 = iVar8 + *(int *)(param_1 + iVar1) * *piVar3 +
              *(int *)(param_1 + uVar7 * 4) * piVar3[-1];
      iVar5 = iVar5 + -1;
      piVar4 = piVar3 + -2;
    } while (iVar5 != 0);
    uVar7 = uVar7 - 0x31;
    uVar6 = uVar6 - 0x2f;
    iVar8 = iVar8 >> 10;
    piVar3 = piVar3 + -0x17;
    if (iVar8 < 0x8000) {
      if (iVar8 < -0x8000) {
        iVar8 = -0x8000;
      }
    }
    else {
      iVar8 = 0x7fff;
    }
    *param_3 = (byte)((uint)iVar8 >> 8) ^ 0x80;
    param_3 = param_3 + 1;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}

