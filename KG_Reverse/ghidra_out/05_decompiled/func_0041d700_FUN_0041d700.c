// Function: FUN_0041d700
// Entry:    0041d700
// Size:     505 bytes
// Conv:     unknown
// Signature: undefined FUN_0041d700(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_0041d700(int param_1,uint param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  uint unaff_EDI;
  undefined4 *puVar8;
  undefined4 local_130 [65];
  uint local_2c;
  undefined4 local_28 [8];
  uint local_8;
  
  if (param_5 == 0) {
    puVar6 = (undefined4 *)(param_1 + 0x137);
    puVar4 = (undefined4 *)(param_1 + 0x158);
  }
  else {
    puVar6 = (undefined4 *)(param_1 + 0x14);
    puVar4 = (undefined4 *)(param_1 + 0x35);
  }
  iVar2 = *(uint *)(param_1 + 0x10) - param_2;
  if (0 < iVar2) {
    param_3 = param_3 + iVar2;
    param_4 = param_4 - iVar2;
    param_2 = *(uint *)(param_1 + 0x10);
    if (param_4 < 1) {
      return;
    }
  }
  puVar8 = local_28;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  puVar6 = local_130;
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  uVar5 = (int)(param_2 + ((int)param_2 >> 0x1f & 0xfffU)) >> 0xc;
  *(undefined2 *)puVar6 = *(undefined2 *)puVar4;
  FUN_0046df40(uVar5 * 4,local_130);
  puVar7 = (uint *)&stack0xfffffec4;
  uVar1 = ((int)(param_4 + (param_4 >> 0x1f & 0xfffU)) >> 0xc) * 4 + 8;
  FUN_004835e0();
  puVar6 = (undefined4 *)&stack0xfffffec4;
  for (uVar3 = uVar1 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined1 *)puVar6 = 0;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  FUN_0041d680(&stack0xfffffec4,uVar1,local_130);
  param_2 = param_2 & 0x80000fff;
  if ((int)param_2 < 0) {
    param_2 = (param_2 - 1 | 0xfffff000) + 1;
  }
  if (0 < (int)param_2) {
    local_8 = unaff_EDI ^ uVar5;
    uVar5 = uVar5 + 1;
    puVar7 = (uint *)&stack0xfffffec8;
    FUN_0041d5c0(&local_2c,0x28,local_130);
    FUN_0046df40(param_2 + 0x24,local_130);
    iVar2 = 0x1000 - param_2;
    if (param_4 < (int)(0x1000 - param_2)) {
      iVar2 = param_4;
    }
    FUN_0041d680(param_3,iVar2,local_130);
    param_3 = param_3 + iVar2;
    param_4 = param_4 - iVar2;
    if (param_4 == 0) {
      return;
    }
  }
  while( true ) {
    local_2c = *puVar7;
    local_8 = *puVar7 ^ uVar5;
    uVar5 = uVar5 + 1;
    puVar7 = puVar7 + 1;
    FUN_0041d5c0(&local_2c,0x28,local_130);
    FUN_0046df40(0x24,local_130);
    if (param_4 < 0x1001) break;
    FUN_0041d680(param_3,0x1000,local_130);
    param_3 = param_3 + 0x1000;
    param_4 = param_4 + -0x1000;
  }
  FUN_0041d680(param_3,param_4,local_130);
  return;
}

