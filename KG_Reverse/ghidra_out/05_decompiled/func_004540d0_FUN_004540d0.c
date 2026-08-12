// Function: FUN_004540d0
// Entry:    004540d0
// Size:     513 bytes
// Conv:     unknown
// Signature: undefined FUN_004540d0(void)
// Decompiled by Ghidra 12.1.2


void FUN_004540d0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  
  puVar3 = param_1;
  if (param_1[4] != 0xca) {
    (**(code **)*param_1)(param_1);
  }
  iVar8 = param_1[0xb];
  uVar2 = param_1[0xc];
  if ((uint)(iVar8 * 8) < uVar2 || iVar8 * 8 - uVar2 == 0) {
    uVar4 = FUN_00456360(param_1[6],8);
    param_1[0x1c] = uVar4;
    uVar4 = FUN_00456360(param_1[7],8);
    param_1[0x1d] = uVar4;
    param_1[0x4e] = 1;
  }
  else if ((uint)(iVar8 * 4) < uVar2 || iVar8 * 4 - uVar2 == 0) {
    uVar4 = FUN_00456360(param_1[6],4);
    param_1[0x1c] = uVar4;
    uVar4 = FUN_00456360(param_1[7],4);
    param_1[0x1d] = uVar4;
    param_1[0x4e] = 2;
  }
  else if (uVar2 < (uint)(iVar8 * 2)) {
    param_1[0x1c] = param_1[6];
    param_1[0x1d] = param_1[7];
    param_1[0x4e] = 8;
  }
  else {
    uVar4 = FUN_00456360(param_1[6],2);
    param_1[0x1c] = uVar4;
    uVar4 = FUN_00456360(param_1[7],2);
    param_1[0x1d] = uVar4;
    param_1[0x4e] = 4;
  }
  piVar6 = param_1 + 8;
  piVar1 = param_1 + 0x36;
  param_1 = (undefined4 *)0x0;
  if (0 < *piVar6) {
    piVar6 = (int *)(*piVar1 + 0xc);
    do {
      iVar8 = puVar3[0x4e];
      iVar5 = iVar8;
      if (iVar8 < 8) {
        do {
          iVar7 = piVar6[-1] * iVar5 * 2;
          if ((iVar7 - puVar3[0x4c] * iVar8 != 0 && puVar3[0x4c] * iVar8 <= iVar7) ||
             (iVar7 = *piVar6 * iVar5 * 2,
             iVar7 - puVar3[0x4d] * iVar8 != 0 && puVar3[0x4d] * iVar8 <= iVar7)) break;
          iVar5 = iVar5 * 2;
        } while (iVar5 < 8);
      }
      piVar6[6] = iVar5;
      param_1 = (undefined4 *)((int)param_1 + 1);
      piVar6 = piVar6 + 0x15;
    } while ((int)param_1 < (int)puVar3[8]);
  }
  iVar8 = 0;
  if (0 < (int)puVar3[8]) {
    piVar6 = (int *)(puVar3[0x36] + 0x24);
    do {
      iVar5 = FUN_00456360(piVar6[-7] * *piVar6 * puVar3[6],puVar3[0x4c] << 3);
      piVar6[1] = iVar5;
      iVar5 = FUN_00456360(piVar6[-6] * *piVar6 * puVar3[7],puVar3[0x4d] << 3);
      piVar6[2] = iVar5;
      iVar8 = iVar8 + 1;
      piVar6 = piVar6 + 0x15;
    } while (iVar8 < (int)puVar3[8]);
  }
  switch(puVar3[10]) {
  case 1:
    puVar3[0x1e] = 1;
    break;
  case 2:
  case 3:
    puVar3[0x1e] = 3;
    break;
  case 4:
  case 5:
    puVar3[0x1e] = 4;
    break;
  default:
    puVar3[0x1e] = puVar3[8];
  }
  uVar4 = 1;
  if (puVar3[0x15] == 0) {
    uVar4 = puVar3[0x1e];
  }
  puVar3[0x1f] = uVar4;
  iVar8 = FUN_004542f0(puVar3);
  if (iVar8 == 0) {
    puVar3[0x20] = 1;
    return;
  }
  puVar3[0x20] = puVar3[0x4d];
  return;
}

