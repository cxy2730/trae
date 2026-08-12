// Function: FUN_00470f10
// Entry:    00470f10
// Size:     525 bytes
// Conv:     unknown
// Signature: undefined FUN_00470f10(void)
// Decompiled by Ghidra 12.1.2


void FUN_00470f10(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  uint *local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  uint *local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  int local_8;
  
  local_8 = DAT_03003998;
  iVar6 = 0;
  DAT_03003994 = 0;
  if (0 < DAT_02fd2b60) {
    local_c = &DAT_03003588;
    local_10 = &DAT_02fff1a8;
    local_14 = &DAT_030039e0;
    puVar5 = &DAT_030039dc;
    puVar7 = &DAT_03003688;
    local_18 = &DAT_03003584;
    local_1c = &DAT_02fff1a4;
    local_20 = &DAT_03003684;
    iVar4 = DAT_03003784;
    do {
      if (iVar4 < 4) {
        for (; iVar4 < 0x19; iVar4 = iVar4 + 8) {
          DAT_03003474 = DAT_03003474 << 8 | (uint)*DAT_02fff1a0;
          DAT_02fff1a0 = DAT_02fff1a0 + 1;
        }
      }
      iVar4 = iVar4 + -4;
      uVar3 = DAT_03003474 >> ((byte)iVar4 & 0x1f);
      DAT_03003784 = iVar4;
      DAT_03003908 = uVar3;
      *puVar5 = uVar3;
      DAT_03003474 = DAT_03003474 - (uVar3 << ((byte)iVar4 & 0x1f));
      *local_20 = uVar3;
      if (DAT_02fd2794 <= iVar6) {
        DAT_03003994 = DAT_03003994 + *(int *)(&DAT_02fd2b64 + uVar3 * 4);
      }
      uVar1 = *(undefined4 *)(&DAT_0300399c + uVar3 * 4);
      *local_1c = uVar1;
      uVar2 = *(undefined4 *)(&DAT_0300390c + uVar3 * 4);
      *local_18 = uVar2;
      local_8 = local_8 + -1;
      if (local_8 < 0) {
        *puVar7 = uVar3;
        iVar6 = iVar6 + 1;
        *puVar5 = uVar3 + 0xf;
        *local_14 = uVar3 + 0xf;
        puVar7 = puVar7 + 1;
        puVar5 = puVar5 + 1;
        *local_10 = uVar1;
        *local_c = uVar2;
        local_20 = local_20 + 1;
        local_1c = local_1c + 1;
        local_18 = local_18 + 1;
        local_14 = local_14 + 1;
        local_10 = local_10 + 1;
        local_c = local_c + 1;
      }
      local_20 = local_20 + 1;
      local_1c = local_1c + 1;
      local_18 = local_18 + 1;
      local_14 = local_14 + 1;
      local_10 = local_10 + 1;
      iVar6 = iVar6 + 1;
      puVar7 = puVar7 + 1;
      puVar5 = puVar5 + 1;
      local_c = local_c + 1;
    } while (iVar6 < DAT_02fd2b60);
    (&DAT_030039dc)[DAT_02fd2794] = 0x1f;
    (&DAT_030039dc)[iVar6] = 0x1e;
    return;
  }
  (&DAT_030039dc)[DAT_02fd2794] = 0x1f;
  DAT_030039dc = 0x1e;
  return;
}

