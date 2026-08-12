// Function: FUN_00463ce0
// Entry:    00463ce0
// Size:     278 bytes
// Conv:     unknown
// Signature: undefined FUN_00463ce0(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00463ce0(int param_1,undefined4 param_2,int param_3,int *param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int local_4;
  
  iVar3 = *param_4;
  iVar2 = param_4[1];
  local_4 = 0;
  puVar1 = (uint *)((uint)*(ushort *)(iVar3 + 0x14) + iVar3);
  if (*(short *)(iVar3 + 6) != 0) {
    do {
      puVar7 = puVar1 + 10;
      if (*puVar7 == 0) {
        uVar5 = *(uint *)(param_3 + 0x38);
        if (0 < (int)uVar5) {
          iVar3 = (*(code *)param_4[7])(iVar2 + puVar1[9],uVar5,0x1000,4,param_4[0xd]);
          if (iVar3 == 0) {
            return 0;
          }
          puVar1[8] = iVar2 + puVar1[9];
          puVar8 = (undefined4 *)(iVar2 + puVar1[9]);
          for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar8 = 0;
            puVar8 = puVar8 + 1;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined1 *)puVar8 = 0;
            puVar8 = (undefined4 *)((int)puVar8 + 1);
          }
        }
      }
      else {
        iVar3 = FUN_00463cc0(param_2,puVar1[0xb] + *puVar7);
        if ((iVar3 == 0) ||
           (iVar3 = (*(code *)param_4[7])(iVar2 + puVar1[9],*puVar7,0x1000,4,param_4[0xd]),
           iVar3 == 0)) {
          return 0;
        }
        uVar5 = puVar1[9];
        uVar4 = *puVar7;
        puVar8 = (undefined4 *)(puVar1[0xb] + param_1);
        puVar9 = (undefined4 *)(iVar2 + uVar5);
        for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
        puVar1[8] = iVar2 + uVar5;
      }
      local_4 = local_4 + 1;
      puVar1 = puVar7;
    } while (local_4 < (int)(uint)*(ushort *)(*param_4 + 6));
  }
  return 1;
}

