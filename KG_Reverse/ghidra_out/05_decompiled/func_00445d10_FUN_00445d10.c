// Function: FUN_00445d10
// Entry:    00445d10
// Size:     139 bytes
// Conv:     unknown
// Signature: undefined FUN_00445d10(void)
// Decompiled by Ghidra 12.1.2


int FUN_00445d10(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  switch(param_1[4]) {
  case 200:
    (**(code **)(param_1[0x6c] + 4))(param_1);
    (**(code **)(param_1[5] + 8))(param_1);
    param_1[4] = 0xc9;
  case 0xc9:
    iVar1 = (**(code **)param_1[0x6c])(param_1);
    if (iVar1 == 1) {
      FUN_00445dc0(param_1);
      param_1[4] = 0xca;
      return 1;
    }
    break;
  case 0xca:
    return 1;
  case 0xcb:
  case 0xcc:
  case 0xcd:
  case 0xce:
  case 0xcf:
  case 0xd0:
  case 0xd2:
    iVar1 = (**(code **)param_1[0x6c])(param_1);
    return iVar1;
  default:
    (**(code **)*param_1)(param_1);
  }
  return iVar1;
}

