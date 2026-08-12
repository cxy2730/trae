// Function: FUN_00452440
// Entry:    00452440
// Size:     474 bytes
// Conv:     unknown
// Signature: undefined FUN_00452440(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00452440(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
LAB_00452448:
  if (param_1[0x67] == 0) {
    if (*(int *)(param_1[0x6d] + 0x50) == 0) {
      iVar1 = FUN_00453380();
    }
    else {
      iVar1 = FUN_00451ef0(param_1);
    }
    if (iVar1 == 0) {
      return 0;
    }
  }
  switch(param_1[0x67]) {
  case 1:
  case 0xd0:
  case 0xd1:
  case 0xd2:
  case 0xd3:
  case 0xd4:
  case 0xd5:
  case 0xd6:
  case 0xd7:
    (**(code **)(*param_1 + 4))(param_1,1);
    param_1[0x67] = 0;
    goto LAB_00452448;
  default:
    (**(code **)*param_1)(param_1);
    param_1[0x67] = 0;
    goto LAB_00452448;
  case 0xc0:
  case 0xc1:
    uVar3 = 0;
    uVar2 = 0;
    break;
  case 0xc2:
    uVar3 = 0;
    goto LAB_004524bb;
  case 0xc3:
  case 0xc5:
  case 0xc6:
  case 199:
  case 200:
  case 0xcb:
  case 0xcd:
  case 0xce:
  case 0xcf:
    (**(code **)*param_1)(param_1);
    param_1[0x67] = 0;
    goto LAB_00452448;
  case 0xc4:
    iVar1 = FUN_00452e80(param_1);
    if (iVar1 == 0) {
      return 0;
    }
    param_1[0x67] = 0;
    goto LAB_00452448;
  case 0xc9:
    uVar3 = 1;
    uVar2 = 0;
    break;
  case 0xca:
    uVar3 = 1;
LAB_004524bb:
    uVar2 = 1;
    break;
  case 0xcc:
    iVar1 = FUN_00452d30(param_1);
    if (iVar1 == 0) {
      return 0;
    }
    param_1[0x67] = 0;
    goto LAB_00452448;
  case 0xd8:
    iVar1 = FUN_00452760(param_1);
    goto LAB_004524c6;
  case 0xd9:
    (**(code **)(*param_1 + 4))(param_1,1);
    param_1[0x67] = 0;
    return 2;
  case 0xda:
    iVar1 = FUN_00452ad0(param_1);
    if (iVar1 == 0) {
      return 0;
    }
    param_1[0x67] = 0;
    return 1;
  case 0xdb:
    iVar1 = FUN_004530b0(param_1);
    if (iVar1 == 0) {
      return 0;
    }
    param_1[0x67] = 0;
    goto LAB_00452448;
  case 0xdc:
    iVar1 = FUN_004523b0(param_1);
    if (iVar1 == 0) {
      return 0;
    }
    param_1[0x67] = 0;
    goto LAB_00452448;
  case 0xdd:
    iVar1 = FUN_004532a0(param_1);
    if (iVar1 == 0) {
      return 0;
    }
    param_1[0x67] = 0;
    goto LAB_00452448;
  case 0xe0:
  case 0xe1:
  case 0xe2:
  case 0xe3:
  case 0xe4:
  case 0xe5:
  case 0xe6:
  case 0xe7:
  case 0xe8:
  case 0xe9:
  case 0xea:
  case 0xeb:
  case 0xec:
  case 0xed:
  case 0xee:
  case 0xef:
    iVar1 = (**(code **)(param_1[0x6d] + -0x370 + param_1[0x67] * 4))(param_1);
    if (iVar1 == 0) {
      return 0;
    }
    param_1[0x67] = 0;
    goto LAB_00452448;
  case 0xfe:
    goto switchD_0045249b_caseD_fe;
  }
  iVar1 = FUN_00452800(param_1,uVar2,uVar3);
LAB_004524c6:
  if (iVar1 == 0) {
    return 0;
  }
  param_1[0x67] = 0;
  goto LAB_00452448;
switchD_0045249b_caseD_fe:
  iVar1 = (**(code **)(param_1[0x6d] + 0xc))(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  param_1[0x67] = 0;
  goto LAB_00452448;
}

