// Function: FUN_004224a0
// Entry:    004224a0
// Size:     145 bytes
// Conv:     unknown
// Signature: undefined FUN_004224a0(void)
// Decompiled by Ghidra 12.1.2


undefined4 * FUN_004224a0(undefined4 *param_1,int param_2,int param_3,int *param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  puVar4 = param_1;
  if (param_1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  uVar5 = param_2 * 0x18 + 0x1fU >> 5;
  iVar6 = uVar5 * 4;
  puVar2 = (undefined4 *)FUN_00492f17(iVar6 * param_3);
  if (puVar2 != (undefined4 *)0x0) {
    uVar1 = param_2 * 3;
    if (param_3 != 0) {
      param_1 = (undefined4 *)param_3;
      puVar7 = puVar2;
      do {
        puVar8 = puVar4;
        puVar9 = puVar7;
        for (uVar3 = uVar1 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        for (uVar3 = uVar1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
        puVar4 = (undefined4 *)((int)puVar4 + uVar1);
        param_1 = (undefined4 *)((int)param_1 + -1);
        puVar7 = puVar7 + uVar5;
      } while (param_1 != (undefined4 *)0x0);
    }
    if (param_4 != (int *)0x0) {
      *param_4 = iVar6;
    }
    return puVar2;
  }
  return (undefined4 *)0x0;
}

