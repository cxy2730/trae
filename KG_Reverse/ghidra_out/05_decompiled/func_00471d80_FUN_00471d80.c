// Function: FUN_00471d80
// Entry:    00471d80
// Size:     528 bytes
// Conv:     unknown
// Signature: undefined FUN_00471d80(void)
// Decompiled by Ghidra 12.1.2


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00471d80(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  int *piVar9;
  int *piVar10;
  undefined4 *local_24;
  int *local_20;
  undefined4 *local_1c;
  int local_18;
  int *local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar6 = 0;
  DAT_03008f44 = 0;
  local_8 = DAT_03008f48;
  local_c = 0;
  local_10 = 0;
  iVar5 = DAT_03008d74;
  uVar7 = DAT_03008b64;
  pbVar8 = DAT_03006cf0;
  do {
    iVar2 = *(int *)((int)&DAT_02fd2c7c + local_10);
    local_18 = 0;
    if (0 < iVar2) {
      local_1c = &DAT_03006cf8 + iVar6;
      piVar9 = &DAT_03008f8c + iVar6;
      local_14 = &DAT_03008f90 + iVar6;
      local_20 = &DAT_03008c78 + iVar6;
      local_24 = &DAT_03006cf4 + iVar6;
      piVar10 = &DAT_03008c74 + iVar6;
      do {
        iVar4 = DAT_02fd2c30;
        if (iVar5 < 4) {
          for (; iVar5 < 0x19; iVar5 = iVar5 + 8) {
            uVar7 = uVar7 << 8 | (uint)*pbVar8;
            pbVar8 = pbVar8 + 1;
            DAT_03006cf0 = pbVar8;
          }
        }
        iVar5 = iVar5 - *(int *)(&DAT_02fd2c94 + local_10);
        _DAT_03008ef8 = uVar7 >> ((byte)iVar5 & 0x1f);
        uVar7 = uVar7 - (_DAT_03008ef8 << ((byte)iVar5 & 0x1f));
        iVar3 = (&DAT_03006df4)[local_c + _DAT_03008ef8];
        DAT_03008b64 = uVar7;
        DAT_03008d74 = iVar5;
        *piVar9 = iVar3;
        *piVar10 = iVar3;
        if (iVar4 <= iVar6) {
          DAT_03008f44 = DAT_03008f44 + *(int *)(&DAT_02fd2c34 + iVar3 * 4);
        }
        uVar1 = *(undefined4 *)(&DAT_03008efc + iVar3 * 4);
        *local_24 = uVar1;
        local_8 = local_8 + -1;
        if (local_8 < 0) {
          piVar10 = piVar10 + 1;
          *local_20 = iVar3;
          *piVar9 = iVar3 + 0x12;
          *local_14 = iVar3 + 0x12;
          iVar6 = iVar6 + 1;
          *local_1c = uVar1;
          local_1c = local_1c + 1;
          local_24 = local_24 + 1;
          local_20 = local_20 + 1;
          local_18 = local_18 + 1;
          piVar9 = piVar9 + 1;
          local_14 = local_14 + 1;
        }
        local_24 = local_24 + 1;
        local_18 = local_18 + 1;
        local_20 = local_20 + 1;
        iVar6 = iVar6 + 1;
        local_14 = local_14 + 1;
        piVar10 = piVar10 + 1;
        local_1c = local_1c + 1;
        piVar9 = piVar9 + 1;
        pbVar8 = DAT_03006cf0;
      } while (local_18 < iVar2);
    }
    local_10 = local_10 + 4;
    local_c = local_c + 0x10;
  } while (local_10 < 0x10);
  (&DAT_03008f8c)[DAT_02fd2c30] = 0x25;
  (&DAT_03008f8c)[iVar6] = 0x24;
  return;
}

