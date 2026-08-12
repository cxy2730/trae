// Function: FUN_00415c70
// Entry:    00415c70
// Size:     243 bytes
// Conv:     unknown
// Signature: undefined FUN_00415c70(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_00415c70(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_3 != -1) {
    param_1[3] = param_3;
  }
  iVar1 = *param_1;
  if (param_2 == 0) {
    if (iVar1 != 0) {
      FUN_00492f40(iVar1);
      *param_1 = 0;
    }
    param_1[2] = 0;
    param_1[1] = 0;
    return;
  }
  if (iVar1 == 0) {
    iVar1 = FUN_00492f17(param_2 * 4);
    param_1[2] = param_2;
    param_1[1] = param_2;
    *param_1 = iVar1;
    return;
  }
  if (param_2 <= param_1[2]) {
    param_1[1] = param_2;
    return;
  }
  param_3 = param_1[3];
  if (param_3 == 0) {
    param_3 = (int)(param_1[1] + (param_1[1] >> 0x1f & 7U)) >> 3;
    if (param_3 < 4) {
      param_3 = 4;
    }
    else if (0x400 < param_3) {
      param_3 = 0x400;
    }
  }
  param_3 = param_3 + param_1[2];
  if (param_3 <= param_2) {
    param_3 = param_2;
  }
  puVar2 = (undefined4 *)FUN_00492f17(param_3 * 4);
  puVar4 = (undefined4 *)*param_1;
  puVar5 = puVar2;
  for (uVar3 = param_1[1] & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  FUN_00492f40(*param_1);
  param_1[1] = param_2;
  *param_1 = (int)puVar2;
  param_1[2] = param_3;
  return;
}

