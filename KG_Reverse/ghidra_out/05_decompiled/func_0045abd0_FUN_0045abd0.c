// Function: FUN_0045abd0
// Entry:    0045abd0
// Size:     257 bytes
// Conv:     unknown
// Signature: undefined FUN_0045abd0(void)
// Decompiled by Ghidra 12.1.2


void FUN_0045abd0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x2c);
  param_1[0x72] = puVar1;
  *puVar1 = &LAB_0045ad80;
  puVar1[3] = &LAB_0045bf90;
  puVar1[8] = 0;
  puVar1[10] = 0;
  if (param_1[0x1e] != 3) {
    (**(code **)*param_1)(param_1);
  }
  uVar2 = (**(code **)param_1[1])(param_1,1,0x80);
  puVar1[6] = uVar2;
  iVar3 = 0;
  do {
    uVar2 = (**(code **)(param_1[1] + 4))(param_1,1,0x1000);
    iVar3 = iVar3 + 4;
    *(undefined4 *)(puVar1[6] + -4 + iVar3) = uVar2;
  } while (iVar3 < 0x80);
  puVar1[7] = 1;
  if (param_1[0x1b] == 0) {
    puVar1[4] = 0;
  }
  else {
    iVar3 = param_1[0x18];
    if (iVar3 < 8) {
      (**(code **)*param_1)(param_1);
    }
    if (0x100 < iVar3) {
      (**(code **)*param_1)(param_1);
    }
    uVar2 = (**(code **)(param_1[1] + 8))(param_1,1,iVar3,3);
    puVar1[4] = uVar2;
    puVar1[5] = iVar3;
  }
  if (param_1[0x16] != 0) {
    param_1[0x16] = 2;
  }
  if (param_1[0x16] == 2) {
    uVar2 = (**(code **)(param_1[1] + 4))(param_1,1,(param_1[0x1c] + 2) * 6);
    puVar1[8] = uVar2;
    FUN_0045ace0(param_1);
  }
  return;
}

