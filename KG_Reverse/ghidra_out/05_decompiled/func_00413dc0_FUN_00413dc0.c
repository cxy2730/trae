// Function: FUN_00413dc0
// Entry:    00413dc0
// Size:     220 bytes
// Conv:     unknown
// Signature: undefined FUN_00413dc0(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00413dc0(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  
  uVar3 = 0;
  switch(param_1) {
  case 1:
    DAT_02fe8204 = param_2;
    return 0;
  case 2:
    uVar3 = (**(code **)(*param_2 + 0x90))(param_3);
    return uVar3;
  default:
    uVar3 = 0xffffffff;
    break;
  case 10:
    iVar1 = FUN_00492f17(0x25c);
    if (iVar1 != 0) {
      uVar3 = FUN_0041d350(param_2,param_3);
      return uVar3;
    }
    return 0;
  case 0xb:
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))(1);
      return 0;
    }
    break;
  case 0xc:
    uVar2 = 0xffffffff;
    piVar4 = param_2;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      iVar1 = *piVar4;
      piVar4 = (int *)((int)piVar4 + 1);
    } while ((char)iVar1 != '\0');
    FUN_0041d900(param_2,~uVar2 - 1,param_3);
    return 0;
  case 0xd:
    if ((param_2 != (int *)0x0) &&
       (iVar1 = FUN_00411400(*param_2,param_2[1],param_2[2]), iVar1 == 1)) {
      return 1;
    }
  }
  return uVar3;
}

