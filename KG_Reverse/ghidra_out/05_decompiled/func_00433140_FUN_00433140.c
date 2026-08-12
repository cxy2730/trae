// Function: FUN_00433140
// Entry:    00433140
// Size:     343 bytes
// Conv:     unknown
// Signature: undefined FUN_00433140(void)
// Decompiled by Ghidra 12.1.2


void __thiscall
FUN_00433140(int param_1,undefined4 *param_2,undefined2 *param_3,int param_4,undefined4 *param_5,
            undefined4 param_6,undefined4 *param_7)

{
  short sVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  
  sVar1 = param_3[1];
  puVar2 = (undefined4 *)FUN_00432b10(param_3,param_4);
  iVar5 = *(int *)(*(int *)(param_1 + 4) + 0xc);
  iVar3 = (sVar1 - param_4) * (iVar5 + 4);
  if (0 < iVar3) {
    FUN_00483180((undefined1 *)(iVar5 + 4 + (int)puVar2),puVar2,iVar3);
  }
  *puVar2 = param_6;
  uVar7 = *(uint *)(*(int *)(param_1 + 4) + 0xc);
  for (uVar6 = uVar7 >> 2; puVar2 = puVar2 + 1, uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar2 = *param_5;
    param_5 = param_5 + 1;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined1 *)puVar2 = *(undefined1 *)param_5;
    param_5 = (undefined4 *)((int)param_5 + 1);
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  puVar4 = (undefined4 *)FUN_00432b10(param_3,*(undefined4 *)(*(int *)(param_1 + 4) + 0x14));
  uVar6 = (((int)sVar1 - *(int *)(*(int *)(param_1 + 4) + 0x14)) + 1) *
          (*(int *)(*(int *)(param_1 + 4) + 0xc) + 4);
  puVar8 = puVar4;
  puVar2 = param_7;
  for (uVar7 = uVar6 >> 2; puVar2 = puVar2 + 1, uVar7 != 0; uVar7 = uVar7 - 1) {
    *puVar2 = *puVar8;
    puVar8 = puVar8 + 1;
  }
  for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined1 *)puVar2 = *(undefined1 *)puVar8;
    puVar8 = (undefined4 *)((int)puVar8 + 1);
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  FUN_00406ca0(puVar4,uVar6);
  iVar5 = (*(int *)(*(int *)(param_1 + 4) + 8) - uVar6) + -4;
  if (0 < iVar5) {
    FUN_00406ca0((int)param_7 + uVar6 + 4,iVar5);
  }
  *param_3 = 0;
  param_3[1] = *(undefined2 *)(*(int *)(param_1 + 4) + 0x14);
  *(undefined2 *)param_7 = 0;
  *(short *)((int)param_7 + 2) = (sVar1 - *(short *)(*(int *)(param_1 + 4) + 0x14)) + 1;
  uVar7 = *(uint *)(*(int *)(param_1 + 4) + 0xc);
  puVar2 = (undefined4 *)FUN_00432b30(param_3,(short)param_3[1] + -1);
  puVar8 = param_2 + 2;
  for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar8 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar8 = puVar8 + 1;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined1 *)puVar8 = *(undefined1 *)puVar2;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  iVar5 = FUN_00431e20(*param_2,param_3);
  if (iVar5 == 0) {
    FUN_00431e20(param_2[1],param_7);
  }
  return;
}

