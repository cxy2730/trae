// Function: FUN_004558e0
// Entry:    004558e0
// Size:     290 bytes
// Conv:     unknown
// Signature: undefined FUN_004558e0(void)
// Decompiled by Ghidra 12.1.2


void FUN_004558e0(int *param_1)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  ushort *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  uVar1 = param_1[9];
  do {
    uVar5 = param_1[0x19];
    uVar6 = (param_1[0xd] - uVar5) - param_1[0x1b];
    if (uVar6 == 0) {
      if ((uVar5 != 0) || (uVar7 = uVar1, param_1[0x1b] != 0)) {
LAB_00455915:
        uVar7 = uVar6;
        if (param_1[9] + -0x106 + uVar1 <= uVar5) {
          puVar8 = (undefined4 *)(param_1[0xc] + uVar1);
          puVar9 = (undefined4 *)param_1[0xc];
          for (uVar5 = uVar1 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar9 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar9 = puVar9 + 1;
          }
          for (uVar5 = uVar1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
            puVar8 = (undefined4 *)((int)puVar8 + 1);
            puVar9 = (undefined4 *)((int)puVar9 + 1);
          }
          param_1[0x1a] = param_1[0x1a] - uVar1;
          iVar3 = param_1[0x11];
          param_1[0x19] = param_1[0x19] - uVar1;
          param_1[0x15] = param_1[0x15] - uVar1;
          puVar4 = (ushort *)(param_1[0xf] + iVar3 * 2);
          do {
            puVar4 = puVar4 + -1;
            if (*puVar4 < uVar1) {
              uVar2 = 0;
            }
            else {
              uVar2 = *puVar4 - (short)uVar1;
            }
            iVar3 = iVar3 + -1;
            *puVar4 = uVar2;
          } while (iVar3 != 0);
          puVar4 = (ushort *)(param_1[0xe] + uVar1 * 2);
          uVar5 = uVar1;
          do {
            puVar4 = puVar4 + -1;
            if (*puVar4 < uVar1) {
              uVar2 = 0;
            }
            else {
              uVar2 = *puVar4 - (short)uVar1;
            }
            uVar5 = uVar5 - 1;
            *puVar4 = uVar2;
          } while (uVar5 != 0);
          uVar7 = uVar6 + uVar1;
        }
      }
    }
    else {
      if (uVar6 != 0xffffffff) goto LAB_00455915;
      uVar7 = 0xfffffffe;
    }
    if (*(int *)(*param_1 + 4) == 0) {
      return;
    }
    iVar3 = FUN_00455a10(*param_1,param_1[0x1b] + param_1[0x19] + param_1[0xc],uVar7);
    uVar5 = param_1[0x1b] + iVar3;
    param_1[0x1b] = uVar5;
    if (2 < uVar5) {
      uVar6 = (uint)*(byte *)(param_1[0x19] + param_1[0xc]);
      param_1[0x10] = uVar6;
      param_1[0x10] =
           (uVar6 << ((byte)param_1[0x14] & 0x1f) ^
           (uint)((byte *)(param_1[0x19] + param_1[0xc]))[1]) & param_1[0x13];
    }
    if (0x105 < uVar5) {
      return;
    }
    if (*(int *)(*param_1 + 4) == 0) {
      return;
    }
  } while( true );
}

