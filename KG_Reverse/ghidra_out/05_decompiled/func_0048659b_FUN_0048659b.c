// Function: FUN_0048659b
// Entry:    0048659b
// Size:     429 bytes
// Conv:     unknown
// Signature: undefined FUN_0048659b(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_0048659b(undefined4 param_1)

{
  BYTE *pBVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  UINT CodePage;
  UINT *pUVar5;
  BOOL BVar6;
  uint uVar7;
  uint uVar8;
  BYTE *pBVar9;
  int iVar10;
  byte *pbVar11;
  int iVar12;
  byte *pbVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  _cpinfo local_1c;
  uint local_8;
  
  FUN_00489a54(0x19);
  CodePage = FUN_00486748(param_1);
  if (CodePage != DAT_03014fc4) {
    if (CodePage != 0) {
      iVar12 = 0;
      pUVar5 = &DAT_02fd9280;
LAB_004865d8:
      if (*pUVar5 != CodePage) goto code_r0x004865dc;
      local_8 = 0;
      puVar15 = &DAT_030150e0;
      for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      iVar12 = iVar12 * 0x30;
      *(undefined1 *)puVar15 = 0;
      pbVar13 = (byte *)(iVar12 + 0x2fd9290);
      do {
        bVar3 = *pbVar13;
        pbVar11 = pbVar13;
        while ((bVar3 != 0 && (bVar3 = pbVar11[1], bVar3 != 0))) {
          uVar8 = (uint)*pbVar11;
          if (uVar8 <= bVar3) {
            bVar4 = (&DAT_02fd9278)[local_8];
            do {
              pbVar2 = (byte *)((int)&DAT_030150e0 + uVar8 + 1);
              *pbVar2 = *pbVar2 | bVar4;
              uVar8 = uVar8 + 1;
            } while (uVar8 <= bVar3);
          }
          pbVar11 = pbVar11 + 2;
          bVar3 = *pbVar11;
        }
        local_8 = local_8 + 1;
        pbVar13 = pbVar13 + 8;
      } while (local_8 < 4);
      DAT_03014fdc = 1;
      DAT_03014fc4 = CodePage;
      DAT_030151e4 = FUN_00486792(CodePage);
      DAT_03014fd0 = *(undefined4 *)(iVar12 + 0x2fd9284);
      DAT_03014fd4 = *(undefined4 *)(iVar12 + 0x2fd9288);
      DAT_03014fd8 = *(undefined4 *)(iVar12 + 0x2fd928c);
      goto LAB_0048672c;
    }
    goto LAB_00486727;
  }
  goto LAB_004865c2;
code_r0x004865dc:
  pUVar5 = pUVar5 + 0xc;
  iVar12 = iVar12 + 1;
  if ((UINT *)0x2fd936f < pUVar5) goto code_r0x004865e7;
  goto LAB_004865d8;
code_r0x004865e7:
  BVar6 = GetCPInfo(CodePage,&local_1c);
  uVar8 = 1;
  if (BVar6 == 1) {
    DAT_030151e4 = 0;
    puVar15 = &DAT_030150e0;
    for (iVar12 = 0x40; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    *(undefined1 *)puVar15 = 0;
    if (local_1c.MaxCharSize < 2) {
      DAT_03014fdc = 0;
      DAT_03014fc4 = CodePage;
    }
    else {
      DAT_03014fc4 = CodePage;
      if (local_1c.LeadByte[0] != '\0') {
        pBVar9 = local_1c.LeadByte + 1;
        do {
          bVar3 = *pBVar9;
          if (bVar3 == 0) break;
          for (uVar7 = (uint)pBVar9[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
            pbVar13 = (byte *)((int)&DAT_030150e0 + uVar7 + 1);
            *pbVar13 = *pbVar13 | 4;
          }
          pBVar1 = pBVar9 + 1;
          pBVar9 = pBVar9 + 2;
        } while (*pBVar1 != 0);
      }
      do {
        pbVar13 = (byte *)((int)&DAT_030150e0 + uVar8 + 1);
        *pbVar13 = *pbVar13 | 8;
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0xff);
      DAT_030151e4 = FUN_00486792(CodePage);
      DAT_03014fdc = 1;
    }
    DAT_03014fd0 = 0;
    DAT_03014fd4 = 0;
    DAT_03014fd8 = 0;
  }
  else {
    if (DAT_03011000 == 0) {
      uVar14 = 0xffffffff;
      goto LAB_00486739;
    }
LAB_00486727:
    FUN_004867c5();
  }
LAB_0048672c:
  FUN_004867ee();
LAB_004865c2:
  uVar14 = 0;
LAB_00486739:
  FUN_00489ab5(0x19);
  return uVar14;
}

