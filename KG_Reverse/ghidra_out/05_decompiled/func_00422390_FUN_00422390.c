// Function: FUN_00422390
// Entry:    00422390
// Size:     264 bytes
// Conv:     unknown
// Signature: undefined FUN_00422390(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00422390(undefined4 *param_1,uint param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  puVar1 = (undefined4 *)FUN_00492f17(param_2);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_00492f17(param_2);
    if (puVar2 != (undefined4 *)0x0) {
      uVar6 = 0;
      uVar3 = param_3 + 1U >> 1;
      puVar7 = param_1;
      if (uVar3 != 0) {
        do {
          puVar8 = puVar7;
          puVar4 = puVar1;
          for (uVar5 = param_2 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar4 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar4 = puVar4 + 1;
          }
          for (uVar5 = param_2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined1 *)puVar4 = *(undefined1 *)puVar8;
            puVar8 = (undefined4 *)((int)puVar8 + 1);
            puVar4 = (undefined4 *)((int)puVar4 + 1);
          }
          puVar4 = (undefined4 *)(((param_3 - uVar6) + -1) * param_2 + (int)param_1);
          puVar8 = puVar4;
          puVar9 = puVar2;
          for (uVar5 = param_2 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar9 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar9 = puVar9 + 1;
          }
          for (uVar5 = param_2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
            puVar8 = (undefined4 *)((int)puVar8 + 1);
            puVar9 = (undefined4 *)((int)puVar9 + 1);
          }
          puVar8 = puVar2;
          puVar9 = puVar7;
          for (uVar5 = param_2 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar9 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar9 = puVar9 + 1;
          }
          for (uVar5 = param_2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
            puVar8 = (undefined4 *)((int)puVar8 + 1);
            puVar9 = (undefined4 *)((int)puVar9 + 1);
          }
          puVar8 = puVar1;
          for (uVar5 = param_2 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar4 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar4 = puVar4 + 1;
          }
          uVar6 = uVar6 + 1;
          for (uVar5 = param_2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined1 *)puVar4 = *(undefined1 *)puVar8;
            puVar8 = (undefined4 *)((int)puVar8 + 1);
            puVar4 = (undefined4 *)((int)puVar4 + 1);
          }
          puVar7 = (undefined4 *)((int)puVar7 + param_2);
        } while (uVar6 < uVar3);
      }
      FUN_00492f40(puVar1);
      FUN_00492f40(puVar2);
      return 1;
    }
    FUN_00492f40(puVar1);
    return 0;
  }
  return 0;
}

