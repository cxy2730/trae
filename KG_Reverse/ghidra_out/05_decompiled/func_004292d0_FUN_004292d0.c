// Function: FUN_004292d0
// Entry:    004292d0
// Size:     237 bytes
// Conv:     unknown
// Signature: undefined FUN_004292d0(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_004292d0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
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
    iVar1 = FUN_00492f17(param_2 * 0xc);
    param_1[2] = param_2;
    param_1[1] = param_2;
    *param_1 = iVar1;
    return;
  }
  if (param_2 <= param_1[2]) {
    param_1[1] = param_2;
    return;
  }
  iVar1 = param_1[3];
  if (iVar1 == 0) {
    iVar1 = (int)(param_1[1] + (param_1[1] >> 0x1f & 7U)) >> 3;
    if (iVar1 < 4) {
      iVar1 = 4;
    }
    else if (0x400 < iVar1) {
      iVar1 = 0x400;
    }
  }
  iVar1 = iVar1 + param_1[2];
  if (iVar1 <= param_2) {
    iVar1 = param_2;
  }
  puVar2 = (undefined4 *)FUN_00492f17(iVar1 * 0xc);
  puVar5 = (undefined4 *)*param_1;
  puVar6 = puVar2;
  for (uVar3 = param_1[1] * 3 & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  FUN_00492f40(*param_1);
  param_1[2] = iVar1;
  *param_1 = (int)puVar2;
  param_1[1] = param_2;
  return;
}

