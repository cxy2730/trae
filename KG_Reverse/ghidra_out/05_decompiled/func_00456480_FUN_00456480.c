// Function: FUN_00456480
// Entry:    00456480
// Size:     197 bytes
// Conv:     unknown
// Signature: undefined FUN_00456480(void)
// Decompiled by Ghidra 12.1.2


void FUN_00456480(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  
  puVar1 = param_1;
  puVar2 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x50);
  param_1[0x69] = puVar2;
  *puVar2 = &LAB_00456600;
  if (param_2 != 0) {
    (**(code **)*param_1)(param_1);
  }
  if (*(int *)(param_1[0x70] + 8) == 0) {
    param_1 = (undefined4 *)param_1[0x4e];
  }
  else {
    if ((int)param_1[0x4e] < 2) {
      (**(code **)*param_1)(param_1);
    }
    FUN_00456550(param_1);
    param_1 = (undefined4 *)(param_1[0x4e] + 2);
  }
  iVar4 = 0;
  if (0 < (int)puVar1[8]) {
    piVar5 = (int *)(puVar1[0x36] + 0x24);
    puVar2 = puVar2 + 2;
    do {
      uVar3 = (**(code **)(puVar1[1] + 8))
                        (puVar1,1,piVar5[-2] * *piVar5,
                         ((piVar5[-6] * *piVar5) / (int)puVar1[0x4e]) * (int)param_1);
      *puVar2 = uVar3;
      iVar4 = iVar4 + 1;
      puVar2 = puVar2 + 1;
      piVar5 = piVar5 + 0x15;
    } while (iVar4 < (int)puVar1[8]);
  }
  return;
}

