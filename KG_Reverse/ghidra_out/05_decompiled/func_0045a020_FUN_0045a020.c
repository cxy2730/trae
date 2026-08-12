// Function: FUN_0045a020
// Entry:    0045a020
// Size:     369 bytes
// Conv:     unknown
// Signature: undefined FUN_0045a020(void)
// Decompiled by Ghidra 12.1.2


void FUN_0045a020(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x18);
  param_1[0x71] = puVar1;
  *puVar1 = &DAT_0045a5d0;
  switch(param_1[9]) {
  case 1:
    if (param_1[8] != 1) {
LAB_0045a079:
      (**(code **)*param_1)(param_1);
    }
    break;
  case 2:
  case 3:
    if (param_1[8] != 3) {
      (**(code **)*param_1)(param_1);
    }
    break;
  case 4:
  case 5:
    if (param_1[8] != 4) {
      (**(code **)*param_1)(param_1);
    }
    break;
  default:
    if ((int)param_1[8] < 1) goto LAB_0045a079;
  }
  iVar2 = param_1[10];
  if (iVar2 == 1) {
    param_1[0x1e] = 1;
    if ((param_1[9] == 1) || (param_1[9] == 3)) {
      puVar1[1] = &LAB_0045a430;
      iVar2 = 1;
      if (1 < (int)param_1[8]) {
        iVar3 = 0x54;
        do {
          iVar2 = iVar2 + 1;
          *(undefined4 *)(iVar3 + 0x30 + param_1[0x36]) = 0;
          iVar3 = iVar3 + 0x54;
        } while (iVar2 < (int)param_1[8]);
      }
      goto LAB_0045a177;
    }
  }
  else {
    if (iVar2 == 2) {
      param_1[0x1e] = 3;
      if (param_1[9] == 3) {
        puVar1[1] = &LAB_0045a270;
        FUN_0045a1b0(param_1);
      }
      else if (param_1[9] == 2) {
        puVar1[1] = FUN_0045a3a0;
      }
      else {
        (**(code **)*param_1)(param_1);
      }
      goto LAB_0045a177;
    }
    if (iVar2 == 4) {
      param_1[0x1e] = 4;
      if (param_1[9] == 5) {
        puVar1[1] = &LAB_0045a460;
        FUN_0045a1b0(param_1);
      }
      else if (param_1[9] == 4) {
        puVar1[1] = FUN_0045a3a0;
      }
      else {
        (**(code **)*param_1)(param_1);
      }
      goto LAB_0045a177;
    }
    if (iVar2 == param_1[9]) {
      param_1[0x1e] = param_1[8];
      puVar1[1] = FUN_0045a3a0;
      goto LAB_0045a177;
    }
  }
  (**(code **)*param_1)(param_1);
LAB_0045a177:
  if (param_1[0x15] == 0) {
    param_1[0x1f] = param_1[0x1e];
    return;
  }
  param_1[0x1f] = 1;
  return;
}

