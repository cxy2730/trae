// Function: FUN_0047a560
// Entry:    0047a560
// Size:     399 bytes
// Conv:     unknown
// Signature: undefined FUN_0047a560(void)
// Decompiled by Ghidra 12.1.2


void FUN_0047a560(int param_1,int param_2,undefined2 *param_3)

{
  int iVar1;
  undefined2 *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  uVar8 = param_2 + 0x34U & 0x7f;
  piVar3 = &DAT_0300cfbc;
  param_2 = 4;
  uVar6 = uVar8 - 8 & 0x7f;
  puVar2 = param_3;
  do {
    param_3 = puVar2;
    iVar7 = 3;
    iVar5 = -(*(int *)(param_1 + uVar6 * 4) * *piVar3);
    piVar3 = piVar3 + 1;
    do {
      piVar4 = piVar3;
      iVar1 = uVar8 * 4;
      uVar6 = uVar6 + 0x10 & 0x7f;
      uVar8 = uVar8 + 0x10 & 0x7f;
      iVar5 = (iVar5 + *(int *)(param_1 + iVar1) * *piVar4) -
              *(int *)(param_1 + uVar6 * 4) * piVar4[1];
      iVar7 = iVar7 + -1;
      piVar3 = piVar4 + 2;
    } while (iVar7 != 0);
    iVar5 = iVar5 >> 10;
    uVar8 = uVar8 - 0x2f & 0x7f;
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
    *param_3 = (short)iVar5;
    param_2 = param_2 + -1;
    puVar2 = param_3 + 2;
  } while (param_2 != 0);
  iVar7 = 3;
  uVar6 = uVar6 - 0x10 & 0x7f;
  iVar5 = *(int *)(param_1 + uVar6 * 4) * *piVar3;
  piVar3 = piVar4 + 0x18;
  do {
    uVar6 = uVar6 + 0x10 & 0x7f;
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
  param_2 = 3;
  param_3[2] = (short)iVar5;
  param_3 = param_3 + 4;
  uVar8 = uVar8 - 0x11;
  uVar6 = uVar6 - 0x1f;
  piVar3 = &DAT_0300d124;
  do {
    uVar6 = uVar6 & 0x7f;
    uVar8 = uVar8 & 0x7f;
    iVar7 = 3;
    iVar5 = *(int *)(param_1 + uVar8 * 4) * *piVar3;
    piVar4 = piVar3 + -1;
    do {
      piVar3 = piVar4;
      iVar1 = uVar6 * 4;
      uVar8 = uVar8 + 0x10 & 0x7f;
      uVar6 = uVar6 + 0x10 & 0x7f;
      iVar5 = iVar5 + *(int *)(param_1 + iVar1) * *piVar3 +
              *(int *)(param_1 + uVar8 * 4) * piVar3[-1];
      iVar7 = iVar7 + -1;
      piVar4 = piVar3 + -2;
    } while (iVar7 != 0);
    uVar8 = uVar8 - 0x31;
    uVar6 = uVar6 - 0x2f;
    iVar5 = iVar5 >> 10;
    piVar3 = piVar3 + -0x17;
    if (iVar5 < 0x8000) {
      if (iVar5 < -0x8000) {
        iVar5 = -0x8000;
      }
    }
    else {
      iVar5 = 0x7fff;
    }
    *param_3 = (short)iVar5;
    param_3 = param_3 + 2;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}

