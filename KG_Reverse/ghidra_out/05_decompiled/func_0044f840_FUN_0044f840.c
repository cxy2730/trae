// Function: FUN_0044f840
// Entry:    0044f840
// Size:     1037 bytes
// Conv:     unknown
// Signature: undefined FUN_0044f840(void)
// Decompiled by Ghidra 12.1.2


void FUN_0044f840(int *param_1,int param_2,int param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  byte *pbVar12;
  char *pcVar13;
  byte *pbVar14;
  undefined1 *puVar15;
  
  iVar7 = *param_1;
  if ((char)param_1[2] == '\0') {
    if (param_3 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = (uint)*(ushort *)(param_3 + 8);
    }
    bVar8 = *(byte *)((int)param_1 + 9);
    if (bVar8 < 8) {
      if (bVar8 == 1) {
        pcVar13 = (char *)(iVar7 + -1 + param_2);
        uVar9 = (uVar9 & 1) * 0xff;
        pbVar12 = (byte *)((iVar7 - 1U >> 3) + param_2);
        iVar11 = 7 - (iVar7 - 1U & 7);
        for (iVar10 = iVar7; iVar10 != 0; iVar10 = iVar10 + -1) {
          *pcVar13 = -((*pbVar12 >> ((byte)iVar11 & 0x1f) & 1) != 0);
          if (iVar11 == 7) {
            iVar11 = 0;
            pbVar12 = pbVar12 + -1;
          }
          else {
            iVar11 = iVar11 + 1;
          }
          pcVar13 = pcVar13 + -1;
        }
      }
      else if (bVar8 == 2) {
        pbVar12 = (byte *)(iVar7 + -1 + param_2);
        uVar9 = (uVar9 & 3) * 0x55;
        pbVar14 = (byte *)((iVar7 - 1U >> 2) + param_2);
        iVar11 = (3 - (iVar7 - 1U & 3)) * 2;
        for (iVar10 = iVar7; iVar10 != 0; iVar10 = iVar10 + -1) {
          bVar8 = *pbVar14 >> ((byte)iVar11 & 0x1f) & 3;
          *pbVar12 = ((bVar8 << 2 | bVar8) << 2 | bVar8) << 2 | bVar8;
          if (iVar11 == 6) {
            iVar11 = 0;
            pbVar14 = pbVar14 + -1;
          }
          else {
            iVar11 = iVar11 + 2;
          }
          pbVar12 = pbVar12 + -1;
        }
      }
      else if (bVar8 == 4) {
        uVar9 = (uVar9 & 0xf) * 0x11;
        pbVar14 = (byte *)((iVar7 - 1U >> 1) + param_2);
        iVar11 = (iVar7 - 1U & 1) * -4 + 4;
        pbVar12 = (byte *)(iVar7 + -1 + param_2);
        for (iVar10 = iVar7; iVar10 != 0; iVar10 = iVar10 + -1) {
          bVar8 = *pbVar14 >> ((byte)iVar11 & 0x1f);
          *pbVar12 = bVar8 << 4 | bVar8 & 0xf;
          if (iVar11 == 4) {
            iVar11 = 0;
            pbVar14 = pbVar14 + -1;
          }
          else {
            iVar11 = 4;
          }
          pbVar12 = pbVar12 + -1;
        }
      }
      *(undefined1 *)((int)param_1 + 9) = 8;
      *(undefined1 *)((int)param_1 + 0xb) = 8;
      param_1[1] = iVar7;
    }
    if (param_3 == 0) {
      return;
    }
    if (*(char *)((int)param_1 + 9) == '\b') {
      pbVar12 = (byte *)(iVar7 + -1 + param_2);
      puVar15 = (undefined1 *)(param_2 + -1 + iVar7 * 2);
      iVar10 = iVar7;
      if (iVar7 != 0) {
        do {
          if ((uint)*pbVar12 == (uVar9 & 0xff)) {
            *puVar15 = 0;
          }
          else {
            *puVar15 = 0xff;
          }
          puVar15[-1] = *pbVar12;
          puVar15 = puVar15 + -2;
          pbVar12 = pbVar12 + -1;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
        *(undefined1 *)(param_1 + 2) = 4;
        *(undefined1 *)((int)param_1 + 10) = 2;
        bVar8 = *(char *)((int)param_1 + 9) << 1;
        goto LAB_0044fc14;
      }
    }
    else if (*(char *)((int)param_1 + 9) == '\x10') {
      pbVar12 = (byte *)(param_1[1] + -1 + param_2);
      puVar15 = (undefined1 *)(param_2 + -1 + param_1[1] * 2);
      for (iVar10 = iVar7; iVar10 != 0; iVar10 = iVar10 + -1) {
        if (((uint)pbVar12[-1] == uVar9 >> 8) && ((uint)*pbVar12 == (uVar9 & 0xff))) {
          *puVar15 = 0;
          puVar15[-1] = 0;
        }
        else {
          *puVar15 = 0xff;
          puVar15[-1] = 0xff;
        }
        puVar15[-2] = *pbVar12;
        puVar15[-3] = pbVar12[-1];
        puVar15 = puVar15 + -4;
        pbVar12 = pbVar12 + -2;
      }
    }
    *(undefined1 *)(param_1 + 2) = 4;
    *(undefined1 *)((int)param_1 + 10) = 2;
    bVar8 = *(char *)((int)param_1 + 9) << 1;
  }
  else {
    if ((char)param_1[2] != '\x02') {
      return;
    }
    if (param_3 == 0) {
      return;
    }
    if (*(char *)((int)param_1 + 9) == '\b') {
      cVar1 = *(char *)(param_3 + 2);
      cVar2 = *(char *)(param_3 + 4);
      cVar3 = *(char *)(param_3 + 6);
      pcVar13 = (char *)(param_1[1] + -1 + param_2);
      puVar15 = (undefined1 *)(param_2 + -1 + iVar7 * 4);
      for (iVar10 = iVar7; iVar10 != 0; iVar10 = iVar10 + -1) {
        if (((pcVar13[-2] == cVar1) && (pcVar13[-1] == cVar2)) && (*pcVar13 == cVar3)) {
          *puVar15 = 0;
        }
        else {
          *puVar15 = 0xff;
        }
        puVar15[-1] = *pcVar13;
        puVar15[-2] = pcVar13[-1];
        puVar15[-3] = pcVar13[-2];
        puVar15 = puVar15 + -4;
        pcVar13 = pcVar13 + -3;
      }
    }
    else if (*(char *)((int)param_1 + 9) == '\x10') {
      cVar1 = *(char *)(param_3 + 5);
      cVar2 = *(char *)(param_3 + 3);
      cVar3 = *(char *)(param_3 + 7);
      cVar4 = *(char *)(param_3 + 2);
      cVar5 = *(char *)(param_3 + 4);
      cVar6 = *(char *)(param_3 + 6);
      pcVar13 = (char *)(param_1[1] + -1 + param_2);
      puVar15 = (undefined1 *)(param_2 + -1 + iVar7 * 8);
      for (iVar10 = iVar7; iVar10 != 0; iVar10 = iVar10 + -1) {
        if (((((pcVar13[-5] == cVar2) && (pcVar13[-4] == cVar4)) && (pcVar13[-3] == cVar1)) &&
            ((pcVar13[-2] == cVar5 && (pcVar13[-1] == cVar3)))) && (*pcVar13 == cVar6)) {
          *puVar15 = 0;
          puVar15[-1] = 0;
        }
        else {
          *puVar15 = 0xff;
          puVar15[-1] = 0xff;
        }
        puVar15[-2] = *pcVar13;
        puVar15[-3] = pcVar13[-1];
        puVar15[-4] = pcVar13[-2];
        puVar15[-5] = pcVar13[-3];
        puVar15[-6] = pcVar13[-4];
        puVar15[-7] = pcVar13[-5];
        puVar15 = puVar15 + -8;
        pcVar13 = pcVar13 + -6;
      }
    }
    *(undefined1 *)(param_1 + 2) = 6;
    *(undefined1 *)((int)param_1 + 10) = 4;
    bVar8 = *(char *)((int)param_1 + 9) << 2;
  }
LAB_0044fc14:
  *(byte *)((int)param_1 + 0xb) = bVar8;
  if (bVar8 < 8) {
    param_1[1] = (uint)bVar8 * iVar7 + 7 >> 3;
    return;
  }
  param_1[1] = (uint)(bVar8 >> 3) * iVar7;
  return;
}

