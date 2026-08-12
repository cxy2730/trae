// Function: FUN_0046e030
// Entry:    0046e030
// Size:     560 bytes
// Conv:     unknown
// Signature: undefined FUN_0046e030(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_0046e030(int param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint local_12c;
  undefined4 local_128 [8];
  uint local_108;
  undefined4 local_104 [65];
  
  if (0 < (int)-param_2) {
    param_4 = param_4 + param_2;
    param_3 = param_3 + -param_2;
    if (param_4 < 1) {
      return;
    }
    param_2 = 0;
  }
  puVar6 = (undefined4 *)(param_1 + 0x24);
  puVar8 = local_128;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  puVar6 = (undefined4 *)(param_1 + 0x45);
  puVar8 = local_104;
  for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  *(undefined2 *)puVar8 = *(undefined2 *)puVar6;
  uVar7 = (int)(param_2 + ((int)param_2 >> 0x1f & 0xfffU)) >> 0xc;
  FUN_0046df40(uVar7 * 4,local_104);
  uVar1 = ((int)(param_4 + (param_4 >> 0x1f & 0xfffU)) >> 0xc) * 4 + 8;
  puVar2 = (uint *)FUN_00492f17(uVar1);
  puVar5 = puVar2;
  for (uVar4 = uVar1 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined1 *)puVar5 = 0;
    puVar5 = (uint *)((int)puVar5 + 1);
  }
  FUN_0046dfb0(puVar2,uVar1,local_104);
  param_2 = param_2 & 0x80000fff;
  if ((int)param_2 < 0) {
    param_2 = (param_2 - 1 | 0xfffff000) + 1;
  }
  puVar5 = puVar2;
  if (0 < (int)param_2) {
    local_12c = *puVar2;
    local_108 = *puVar2 ^ uVar7;
    uVar7 = uVar7 + 1;
    FUN_0046de80(&local_12c,0x28,local_104);
    FUN_0046df40(param_2 + 0x24,local_104);
    iVar3 = 0x1000 - param_2;
    if (param_4 < (int)(0x1000 - param_2)) {
      iVar3 = param_4;
    }
    FUN_0046dfb0(param_3,iVar3,local_104);
    param_3 = param_3 + iVar3;
    param_4 = param_4 - iVar3;
    puVar5 = puVar2 + 1;
    if (param_4 == 0) {
      FUN_00492f40(puVar2);
      return;
    }
  }
  while( true ) {
    local_12c = *puVar5;
    local_108 = *puVar5 ^ uVar7;
    uVar7 = uVar7 + 1;
    FUN_0046de80(&local_12c,0x28,local_104);
    FUN_0046df40(0x24,local_104);
    if (param_4 < 0x1001) break;
    FUN_0046dfb0(param_3,0x1000,local_104);
    param_3 = param_3 + 0x1000;
    param_4 = param_4 + -0x1000;
    puVar5 = puVar5 + 1;
  }
  FUN_0046dfb0(param_3,param_4,local_104);
  FUN_00492f40(puVar2);
  return;
}

