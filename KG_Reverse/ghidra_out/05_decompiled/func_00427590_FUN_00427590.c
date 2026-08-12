// Function: FUN_00427590
// Entry:    00427590
// Size:     329 bytes
// Conv:     unknown
// Signature: undefined FUN_00427590(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_00427590(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int local_c;
  
  if (param_2 != 0) {
    iVar2 = FUN_00427720(param_2);
    if (iVar2 == -1) {
      iVar3 = *(int *)(param_1 + 0x10);
      iVar1 = *(int *)(param_1 + 0x14);
      iVar2 = iVar1 + 1;
      if (iVar2 == 0) {
        if (iVar3 != 0) {
          FUN_00492f40(iVar3);
          *(undefined4 *)(param_1 + 0x10) = 0;
        }
        *(undefined4 *)(param_1 + 0x18) = 0;
        *(undefined4 *)(param_1 + 0x14) = 0;
        *(int *)(*(int *)(param_1 + 0x10) + iVar1 * 4) = param_2;
        return;
      }
      if (iVar3 == 0) {
        iVar3 = FUN_00492f17(iVar2 * 4);
        *(int *)(param_1 + 0x10) = iVar3;
        *(int *)(param_1 + 0x18) = iVar2;
        *(int *)(param_1 + 0x14) = iVar2;
        *(int *)(iVar3 + iVar1 * 4) = param_2;
        return;
      }
      if (iVar2 <= *(int *)(param_1 + 0x18)) {
        *(int *)(param_1 + 0x14) = iVar2;
        *(int *)(*(int *)(param_1 + 0x10) + iVar1 * 4) = param_2;
        return;
      }
      local_c = *(int *)(param_1 + 0x1c);
      if (local_c == 0) {
        local_c = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
        if (local_c < 4) {
          local_c = 4;
        }
        else if (0x400 < local_c) {
          local_c = 0x400;
        }
      }
      local_c = local_c + *(int *)(param_1 + 0x18);
      if (local_c <= iVar2) {
        local_c = iVar2;
      }
      puVar4 = (undefined4 *)FUN_00492f17(local_c * 4);
      puVar6 = *(undefined4 **)(param_1 + 0x10);
      puVar7 = puVar4;
      for (uVar5 = *(uint *)(param_1 + 0x14) & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      FUN_00492f40(*(undefined4 *)(param_1 + 0x10));
      *(undefined4 **)(param_1 + 0x10) = puVar4;
      *(int *)(param_1 + 0x14) = iVar2;
      *(int *)(param_1 + 0x18) = local_c;
      puVar4[iVar1] = param_2;
    }
  }
  return;
}

