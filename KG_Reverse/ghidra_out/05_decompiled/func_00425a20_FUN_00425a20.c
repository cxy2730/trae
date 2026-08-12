// Function: FUN_00425a20
// Entry:    00425a20
// Size:     578 bytes
// Conv:     unknown
// Signature: undefined FUN_00425a20(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall FUN_00425a20(int param_1,int *param_2,int *param_3)

{
  byte bVar1;
  undefined1 *puVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  
  piVar4 = (int *)(param_3[0x10] + param_3[0x12] + *param_3);
  if (param_3[0x12] == 0) {
    param_3[0x13] = *(int *)(param_1 + 0x28);
  }
  if (*(uint *)(param_1 + 0x2c) < (uint)(*(int *)(param_1 + 0x28) - param_3[0x13])) {
    if (param_3[0x14] != 0) {
      param_3[0x14] = 0;
      return 0xffffff98;
    }
    param_3[0x14] = 1;
  }
  iVar6 = *param_2 - *(int *)(param_1 + 0x28);
  *(int *)(param_1 + 0x28) = *param_2;
  piVar5 = piVar4;
  if (*(int *)(param_1 + 0x38) != 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    if ((uint)(param_3[0x11] - param_3[0x12]) < 0xc) {
      return 0xffffff98;
    }
    if (*(int *)(param_1 + 0x30) != 0) {
      *piVar4 = 0;
      piVar4[1] = 0;
      piVar5 = piVar4 + 0x30;
      piVar4[2] = (uint)(*(int *)(param_1 + 0x30) * 100) / *(uint *)(param_1 + 0x34) | 0x1000000;
      param_3[0x12] = param_3[0x12] + 0xc;
    }
  }
  bVar1 = *(byte *)(param_2 + 1);
  if (bVar1 < 0xf0) {
    if ((uint)(param_3[0x11] - param_3[0x12]) < 0xc) {
      return 0xffffff98;
    }
    piVar5[1] = 0;
    *piVar5 = iVar6;
    piVar5[2] = (uint)*(uint3 *)(param_2 + 1);
    if (((*(byte *)(param_2 + 1) & 0xf0) == 0xb0) && (*(char *)((int)param_2 + 5) == '\a')) {
      piVar5[2] = piVar5[2] | 0x40000000;
    }
    param_3[0x12] = param_3[0x12] + 0xc;
    return 0;
  }
  if ((bVar1 == 0xf0) || (bVar1 == 0xf7)) {
    if (*(int *)(param_1 + 0x9c) != 0) {
      FUN_00492f40(param_2[3]);
      *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + -1;
    }
    return 0;
  }
  if (*(char *)((int)param_2 + 5) != 'Q') {
    if (*(int *)(param_1 + 0x9c) != 0) {
      FUN_00492f40(param_2[3]);
      *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + -1;
    }
    return 0xffffff97;
  }
  if ((uint)(param_3[0x11] - param_3[0x12]) < 0xc) {
    if (*(int *)(param_1 + 0x9c) != 0) {
      FUN_00492f40(param_2[3]);
      *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + -1;
    }
    return 0xffffff98;
  }
  *piVar5 = iVar6;
  piVar5[1] = 0;
  puVar2 = (undefined1 *)param_2[3];
  uVar3 = (uint)CONCAT21(CONCAT11(*puVar2,puVar2[1]),puVar2[2]);
  piVar5[2] = uVar3;
  *(uint *)(param_1 + 0x30) = uVar3;
  piVar5[2] = (uint)(piVar5[2] * 100) / *(uint *)(param_1 + 0x34) | 0x1000000;
  *(uint *)(param_1 + 0x2c) = (uint)(*(int *)(param_1 + 0x14) * 60000) / *(uint *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0x9c) != 0) {
    FUN_00492f40(param_2[3]);
    *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + -1;
  }
  param_3[0x12] = param_3[0x12] + 0xc;
  return 0;
}

