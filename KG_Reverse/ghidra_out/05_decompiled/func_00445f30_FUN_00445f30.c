// Function: FUN_00445f30
// Entry:    00445f30
// Size:     166 bytes
// Conv:     unknown
// Signature: undefined FUN_00445f30(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00445f30(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = param_1[4];
  if (((iVar2 == 0xcd) || (iVar2 == 0xce)) && (param_1[0x10] == 0)) {
    if ((uint)param_1[0x23] < (uint)param_1[0x1d]) {
      (**(code **)*param_1)(param_1);
    }
    (**(code **)(param_1[0x68] + 4))(param_1);
    param_1[4] = 0xd2;
  }
  else if (iVar2 == 0xcf) {
    param_1[4] = 0xd2;
  }
  else if (iVar2 != 0xd2) {
    (**(code **)*param_1)(param_1);
  }
  puVar1 = (undefined4 *)param_1[0x6c];
  iVar2 = puVar1[5];
  while( true ) {
    if (iVar2 != 0) {
      (**(code **)(param_1[5] + 0x18))(param_1);
      FUN_00454040(param_1);
      return 1;
    }
    iVar2 = (*(code *)*puVar1)(param_1);
    if (iVar2 == 0) break;
    puVar1 = (undefined4 *)param_1[0x6c];
    iVar2 = puVar1[5];
  }
  return 0;
}

