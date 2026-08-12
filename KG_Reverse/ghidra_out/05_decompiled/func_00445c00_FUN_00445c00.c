// Function: FUN_00445c00
// Entry:    00445c00
// Size:     158 bytes
// Conv:     unknown
// Signature: undefined FUN_00445c00(void)
// Decompiled by Ghidra 12.1.2


void FUN_00445c00(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  param_1[1] = 0;
  if (param_2 != 0x3d) {
    (**(code **)*param_1)(param_1);
  }
  if (param_3 != 0x1d0) {
    (**(code **)*param_1)(param_1);
  }
  uVar1 = *param_1;
  puVar2 = param_1;
  for (iVar3 = 0x74; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *param_1 = uVar1;
  param_1[3] = 1;
  FUN_004534d0(param_1);
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[0x29] = 0;
  puVar2 = param_1 + 0x31;
  param_1[0x2a] = 0;
  iVar3 = 4;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  do {
    puVar2[-4] = 0;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_00452000(param_1);
  FUN_00451880(param_1);
  param_1[4] = 200;
  return;
}

