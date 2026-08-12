// Function: FUN_00451c10
// Entry:    00451c10
// Size:     430 bytes
// Conv:     unknown
// Signature: undefined FUN_00451c10(void)
// Decompiled by Ghidra 12.1.2


void FUN_00451c10(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  if ((0xffdc < (int)param_1[7]) || (0xffdc < (int)param_1[6])) {
    (**(code **)*param_1)(param_1);
  }
  if (param_1[0x35] != 8) {
    (**(code **)*param_1)(param_1);
  }
  if (10 < (int)param_1[8]) {
    (**(code **)*param_1)(param_1);
  }
  iVar3 = 0;
  param_1[0x4c] = 1;
  param_1[0x4d] = 1;
  if (0 < (int)param_1[8]) {
    piVar4 = (int *)(param_1[0x36] + 0xc);
    do {
      if ((((piVar4[-1] < 1) || (4 < piVar4[-1])) || (*piVar4 < 1)) || (4 < *piVar4)) {
        (**(code **)*param_1)(param_1);
      }
      iVar1 = param_1[0x4c];
      if ((int)param_1[0x4c] <= piVar4[-1]) {
        iVar1 = piVar4[-1];
      }
      param_1[0x4c] = iVar1;
      iVar1 = param_1[0x4d];
      if ((int)param_1[0x4d] <= *piVar4) {
        iVar1 = *piVar4;
      }
      param_1[0x4d] = iVar1;
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 0x15;
    } while (iVar3 < (int)param_1[8]);
  }
  iVar3 = 0;
  param_1[0x4e] = 8;
  if (0 < (int)param_1[8]) {
    puVar5 = (undefined4 *)(param_1[0x36] + 0x1c);
    do {
      puVar5[2] = 8;
      uVar2 = FUN_00456360(puVar5[-5] * param_1[6],param_1[0x4c] << 3);
      *puVar5 = uVar2;
      uVar2 = FUN_00456360(puVar5[-4] * param_1[7],param_1[0x4d] << 3);
      puVar5[1] = uVar2;
      uVar2 = FUN_00456360(puVar5[-5] * param_1[6],param_1[0x4c]);
      puVar5[3] = uVar2;
      uVar2 = FUN_00456360(puVar5[-4] * param_1[7],param_1[0x4d]);
      puVar5[4] = uVar2;
      puVar5[5] = 1;
      puVar5[0xc] = 0;
      iVar3 = iVar3 + 1;
      puVar5 = puVar5 + 0x15;
    } while (iVar3 < (int)param_1[8]);
  }
  uVar2 = FUN_00456360(param_1[7],param_1[0x4d] << 3);
  param_1[0x4f] = uVar2;
  if (((int)param_1[8] <= (int)param_1[0x51]) && (param_1[0x37] == 0)) {
    *(undefined4 *)(param_1[0x6c] + 0x10) = 0;
    return;
  }
  *(undefined4 *)(param_1[0x6c] + 0x10) = 1;
  return;
}

