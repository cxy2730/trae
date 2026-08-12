// Function: FUN_004543c0
// Entry:    004543c0
// Size:     458 bytes
// Conv:     unknown
// Signature: undefined FUN_004543c0(void)
// Decompiled by Ghidra 12.1.2


void FUN_004543c0(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = param_1[0x68];
  FUN_004540d0(param_1);
  FUN_00454590(param_1);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  uVar2 = FUN_004542f0(param_1);
  *(undefined4 *)(iVar1 + 0x10) = uVar2;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  if ((param_1[0x15] == 0) || (param_1[0x10] == 0)) {
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
  }
  if (param_1[0x15] != 0) {
    if (param_1[0x11] != 0) {
      (**(code **)*param_1)(param_1);
    }
    if (param_1[0x1e] == 3) {
      if (param_1[0x22] == 0) {
        if (param_1[0x17] == 0) {
          param_1[0x19] = 1;
        }
        else {
          param_1[0x1b] = 1;
        }
      }
      else {
        param_1[0x1a] = 1;
      }
    }
    else {
      param_1[0x19] = 1;
      param_1[0x1a] = 0;
      param_1[0x1b] = 0;
      param_1[0x22] = 0;
    }
    if (param_1[0x19] != 0) {
      FUN_0045bfb0(param_1);
      *(undefined4 *)(iVar1 + 0x14) = param_1[0x72];
    }
    if ((param_1[0x1b] != 0) || (param_1[0x1a] != 0)) {
      FUN_0045abd0(param_1);
      *(undefined4 *)(iVar1 + 0x18) = param_1[0x72];
    }
  }
  if (param_1[0x11] == 0) {
    if (*(int *)(iVar1 + 0x10) == 0) {
      FUN_0045a020(param_1);
      FUN_004598b0(param_1);
    }
    else {
      FUN_0045a5e0();
    }
    FUN_00459560(param_1,param_1[0x1b]);
  }
  FUN_004592d0(param_1);
  if (param_1[0x38] == 0) {
    if (param_1[0x37] == 0) {
      FUN_00457f00(param_1);
    }
    else {
      FUN_00458530();
    }
  }
  else {
    (**(code **)*param_1)(param_1);
  }
  if ((*(int *)(param_1[0x6c] + 0x10) == 0) && (param_1[0x10] == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  FUN_00456b70(param_1,uVar2);
  if (param_1[0x11] == 0) {
    FUN_00456480(param_1,0);
  }
  (**(code **)(param_1[1] + 0x18))(param_1);
  (**(code **)(param_1[0x6c] + 8))(param_1);
  if (((param_1[2] != 0) && (param_1[0x10] == 0)) && (*(int *)(param_1[0x6c] + 0x10) != 0)) {
    iVar3 = param_1[8];
    if (param_1[0x37] != 0) {
      iVar3 = iVar3 * 3 + 2;
    }
    *(undefined4 *)(param_1[2] + 4) = 0;
    *(int *)(param_1[2] + 8) = param_1[0x4f] * iVar3;
    *(undefined4 *)(param_1[2] + 0xc) = 0;
    *(uint *)(param_1[2] + 0x10) = (param_1[0x1b] != 0) + 2;
    *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
  }
  return;
}

