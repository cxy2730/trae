// Function: FUN_00438440
// Entry:    00438440
// Size:     3159 bytes
// Conv:     unknown
// Signature: undefined FUN_00438440(void)
// Decompiled by Ghidra 12.1.2


HBITMAP __fastcall FUN_00438440(int param_1)

{
  LONG *pLVar1;
  byte bVar2;
  undefined1 uVar3;
  ushort *puVar4;
  byte *pbVar5;
  uint uVar6;
  ushort uVar7;
  ushort uVar8;
  int iVar9;
  BITMAPINFOHEADER *pbmi;
  BITMAPINFOHEADER *pBVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  HBITMAP pHVar15;
  byte bVar16;
  undefined2 *puVar17;
  uint uVar18;
  byte bVar19;
  byte bVar20;
  int iVar21;
  undefined1 *puVar22;
  undefined1 uVar23;
  int local_2c;
  uint local_24;
  uint local_1c;
  uint local_c;
  
  puVar4 = *(ushort **)(param_1 + 0xb4);
  *(uint *)(param_1 + 0x60) = (uint)*puVar4;
  *(ushort **)(param_1 + 0xb4) = puVar4 + 1;
  *(uint *)(param_1 + 0x5c) = (uint)puVar4[1];
  *(ushort **)(param_1 + 0xb4) = puVar4 + 2;
  uVar11 = (uint)puVar4[2];
  *(uint *)(param_1 + 0x54) = uVar11;
  *(ushort **)(param_1 + 0xb4) = puVar4 + 3;
  iVar9 = (uVar11 - 1 | 3) + 1;
  *(int *)(param_1 + 0x6c) = iVar9;
  *(uint *)(param_1 + 0x58) = (uint)puVar4[3];
  *(ushort **)(param_1 + 0xb4) = puVar4 + 4;
  uVar7 = puVar4[4];
  *(int *)(param_1 + 0xb4) = (int)puVar4 + 9;
  iVar9 = *(int *)(param_1 + 0x58) * iVar9;
  *(int *)(param_1 + 0x98) = iVar9;
  *(char *)(param_1 + 0x3d) = (char)uVar7;
  *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 9;
  pbmi = (BITMAPINFOHEADER *)FUN_00492f17(iVar9 + 0x6428);
  iVar9 = *(int *)(param_1 + 0x98);
  pLVar1 = &pbmi[0x1a].biXPelsPerMeter;
  *(LONG **)(param_1 + 0xac) = pLVar1;
  puVar17 = (undefined2 *)((int)pLVar1 + iVar9 + 2);
  iVar21 = 0x1000;
  do {
    puVar17[1] = 0;
    *puVar17 = 0;
    puVar17 = puVar17 + 3;
    iVar21 = iVar21 + -1;
  } while (iVar21 != 0);
  pbmi->biSize = 0x28;
  pbmi->biWidth = *(LONG *)(param_1 + 0x54);
  pbmi->biHeight = -*(int *)(param_1 + 0x58);
  pbmi->biPlanes = 1;
  pbmi->biBitCount = 8;
  pbmi->biCompression = 0;
  pbmi->biSizeImage = 0;
  pbmi->biXPelsPerMeter = 0;
  pbmi->biYPelsPerMeter = 0;
  pbmi->biClrUsed = 0x100;
  pbmi->biClrImportant = 0x100;
  if ((*(byte *)(param_1 + 0x3d) & 0x80) == 0) {
    puVar22 = *(undefined1 **)(param_1 + 0xa8);
    if (*(int *)(param_1 + 0x88) != 0) {
      *(uint *)(param_1 + 0xa0) = (uint)*(uint3 *)(puVar22 + *(int *)(param_1 + 0x8c) * 3);
    }
    iVar21 = 0;
    pBVar10 = pbmi + 1;
    if (0 < *(int *)(param_1 + 0x80)) {
      do {
        *(undefined1 *)((int)&pBVar10->biSize + 2) = *puVar22;
        *(undefined1 *)((int)&pBVar10->biSize + 1) = puVar22[1];
        uVar23 = puVar22[2];
        *(undefined1 *)((int)&pBVar10->biSize + 3) = 0;
        *(undefined1 *)&pBVar10->biSize = uVar23;
        puVar22 = puVar22 + 3;
        iVar21 = iVar21 + 1;
        pBVar10 = (BITMAPINFOHEADER *)&pBVar10->biWidth;
      } while (iVar21 < *(int *)(param_1 + 0x80));
    }
  }
  else {
    iVar21 = 1 << (*(byte *)(param_1 + 0x3d) & 7) + 1;
    if (*(int *)(param_1 + 0x88) != 0) {
      *(uint *)(param_1 + 0xa0) =
           (uint)*(uint3 *)(*(int *)(param_1 + 0x8c) * 3 + *(int *)(param_1 + 0xb4));
    }
    *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + iVar21 * 3;
    pBVar10 = pbmi + 1;
    for (; iVar21 != 0; iVar21 = iVar21 + -1) {
      *(undefined1 *)((int)&pBVar10->biSize + 2) = **(undefined1 **)(param_1 + 0xb4);
      puVar22 = (undefined1 *)(*(int *)(param_1 + 0xb4) + 1);
      *(undefined1 **)(param_1 + 0xb4) = puVar22;
      *(undefined1 *)((int)&pBVar10->biSize + 1) = *puVar22;
      puVar22 = (undefined1 *)(*(int *)(param_1 + 0xb4) + 1);
      *(undefined1 **)(param_1 + 0xb4) = puVar22;
      *(undefined1 *)&pBVar10->biSize = *puVar22;
      *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 1;
      *(undefined1 *)((int)&pBVar10->biSize + 3) = 0;
      pBVar10 = (BITMAPINFOHEADER *)&pBVar10->biWidth;
    }
  }
  bVar2 = **(byte **)(param_1 + 0xb4);
  uVar18 = (uint)bVar2;
  *(byte **)(param_1 + 0xb4) = *(byte **)(param_1 + 0xb4) + 1;
  *(uint *)(param_1 + 0x40) = uVar18;
  *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
  uVar11 = 1 << (bVar2 & 0x1f);
  *(uint *)(param_1 + 0x44) = uVar18;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 1;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  iVar21 = uVar11 + 2;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(uint *)(param_1 + 0x44) = uVar18 + 1;
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  *(undefined4 *)(param_1 + 100) = 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  local_2c = iVar21;
LAB_004386b4:
  do {
    uVar18 = *(uint *)(param_1 + 0x48);
    if (uVar18 < *(uint *)(param_1 + 0x40)) {
      uVar14 = *(uint *)(param_1 + 0x50);
      bVar2 = *(byte *)(param_1 + 0x3c);
      if (*(uint *)(param_1 + 0x4c) < uVar14) {
LAB_00438765:
        *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
        bVar19 = **(byte **)(param_1 + 0xb4);
        local_1c = (uint)bVar19;
        *(byte **)(param_1 + 0xb4) = *(byte **)(param_1 + 0xb4) + 1;
      }
      else {
        pbVar5 = *(byte **)(param_1 + 0xb4);
        bVar19 = *pbVar5;
        *(undefined4 *)(param_1 + 0x4c) = 0;
        *(uint *)(param_1 + 0x50) = (uint)bVar19;
        uVar14 = *(uint *)(param_1 + 0x50);
        *(byte **)(param_1 + 0xb4) = pbVar5 + 1;
        iVar12 = *(int *)(param_1 + 0x94) + uVar14 + 1;
        *(int *)(param_1 + 0x94) = iVar12;
        if (*(int *)(param_1 + 0x74) < iVar12) {
          bVar19 = 0xff;
          *(uint *)(param_1 + 0x94) = (iVar12 - uVar14) + -1;
          local_1c = 0xff;
        }
        else {
          if (uVar14 != 0) goto LAB_00438765;
          *(byte **)(param_1 + 0xb4) = pbVar5;
          bVar19 = 0xff;
          *(int *)(param_1 + 0x94) = iVar12 + -1;
          local_1c = 0xff;
        }
      }
      *(byte *)(param_1 + 0x3c) = bVar19;
      bVar16 = (byte)uVar18;
      if (*(int *)(param_1 + 0x40) - uVar18 < 9) {
        bVar20 = *(char *)(param_1 + 0x40) - *(char *)(param_1 + 0x48);
        local_c = (uint)bVar2 +
                  (((byte)(('\x01' << (bVar20 & 0x1f)) - 1) & local_1c) << (bVar16 & 0x1f));
        *(byte *)(param_1 + 0x3c) = bVar19 >> (bVar20 & 0x1f);
        iVar12 = (uVar18 - *(int *)(param_1 + 0x40)) + 8;
      }
      else {
        if (*(uint *)(param_1 + 0x4c) < uVar14) {
LAB_00438845:
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
          bVar19 = **(byte **)(param_1 + 0xb4);
          *(byte **)(param_1 + 0xb4) = *(byte **)(param_1 + 0xb4) + 1;
        }
        else {
          pbVar5 = *(byte **)(param_1 + 0xb4);
          uVar14 = (uint)*pbVar5;
          *(uint *)(param_1 + 0x50) = uVar14;
          *(byte **)(param_1 + 0xb4) = pbVar5 + 1;
          *(undefined4 *)(param_1 + 0x4c) = 0;
          iVar12 = *(int *)(param_1 + 0x94) + uVar14 + 1;
          *(int *)(param_1 + 0x94) = iVar12;
          if (*(int *)(param_1 + 0x74) < iVar12) {
            bVar19 = 0xff;
            *(uint *)(param_1 + 0x94) = (iVar12 - uVar14) + -1;
          }
          else {
            if (uVar14 != 0) goto LAB_00438845;
            *(byte **)(param_1 + 0xb4) = pbVar5;
            *(int *)(param_1 + 0x94) = iVar12 + -1;
            bVar19 = 0xff;
          }
        }
        bVar20 = (*(char *)(param_1 + 0x40) - *(char *)(param_1 + 0x48)) - 8;
        local_c = (uint)bVar2 + (local_1c << (bVar16 & 0x1f)) +
                  ((uint)(('\x01' << (bVar20 & 0x1f)) - 1U & bVar19) << (bVar16 + 8 & 0x1f));
        *(byte *)(param_1 + 0x3c) = bVar19 >> (bVar20 & 0x1f);
        iVar12 = (uVar18 - *(int *)(param_1 + 0x40)) + 0x10;
      }
    }
    else {
      local_c = (uint)(('\x01' << ((byte)*(uint *)(param_1 + 0x40) & 0x1f)) - 1U &
                      *(byte *)(param_1 + 0x3c));
      iVar12 = uVar18 - *(int *)(param_1 + 0x40);
      *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) >> (*(byte *)(param_1 + 0x40) & 0x1f);
    }
    *(int *)(param_1 + 0x48) = iVar12;
    uVar18 = local_c & 0xffff;
    if (uVar18 == uVar11 + 1) {
      if (*(int *)(param_1 + 0xe8) == 1) {
        *(int *)(param_1 + 0xf0) = *(int *)(param_1 + 0x98) + 0x6428;
        *(BITMAPINFOHEADER **)(param_1 + 0xec) = pbmi;
        return (HBITMAP)0x0;
      }
      pHVar15 = CreateDIBitmap(*(HDC *)(param_1 + 0xa4),pbmi,4,*(void **)(param_1 + 0xac),
                               (BITMAPINFO *)pbmi,0);
      *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 1;
      *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
      FUN_00492f40(pbmi);
      return pHVar15;
    }
    if (uVar18 == uVar11) {
      uVar18 = *(uint *)(param_1 + 0x44);
      uVar14 = *(uint *)(param_1 + 0x48);
      *(uint *)(param_1 + 0x40) = uVar18;
      if (uVar14 < uVar18) {
        bVar2 = *(byte *)(param_1 + 0x3c);
        if (*(uint *)(param_1 + 0x4c) < *(uint *)(param_1 + 0x50)) {
LAB_0043896e:
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
          bVar19 = **(byte **)(param_1 + 0xb4);
          *(byte **)(param_1 + 0xb4) = *(byte **)(param_1 + 0xb4) + 1;
        }
        else {
          pbVar5 = *(byte **)(param_1 + 0xb4);
          uVar18 = (uint)*pbVar5;
          *(uint *)(param_1 + 0x50) = uVar18;
          *(byte **)(param_1 + 0xb4) = pbVar5 + 1;
          *(undefined4 *)(param_1 + 0x4c) = 0;
          iVar12 = *(int *)(param_1 + 0x94) + uVar18 + 1;
          *(int *)(param_1 + 0x94) = iVar12;
          if (*(int *)(param_1 + 0x74) < iVar12) {
            *(uint *)(param_1 + 0x94) = (iVar12 - uVar18) + -1;
            bVar19 = 0xff;
          }
          else {
            if (uVar18 != 0) goto LAB_0043896e;
            *(int *)(param_1 + 0x94) = iVar12 + -1;
            bVar19 = 0xff;
            *(byte **)(param_1 + 0xb4) = pbVar5;
          }
        }
        *(byte *)(param_1 + 0x3c) = bVar19;
        if (*(int *)(param_1 + 0x40) - uVar14 < 9) {
          bVar16 = *(char *)(param_1 + 0x40) - *(char *)(param_1 + 0x48);
          local_24 = (uint)bVar2 +
                     ((uint)(('\x01' << (bVar16 & 0x1f)) - 1U & bVar19) << ((byte)uVar14 & 0x1f));
          *(byte *)(param_1 + 0x3c) = bVar19 >> (bVar16 & 0x1f);
          *(uint *)(param_1 + 0x48) = (uVar14 - *(int *)(param_1 + 0x40)) + 8;
        }
        else {
          bVar16 = FUN_00439220();
          bVar20 = (*(char *)(param_1 + 0x40) - *(char *)(param_1 + 0x48)) - 8;
          local_24 = (uint)bVar2 + ((uint)bVar19 << ((byte)uVar14 & 0x1f)) +
                     ((uint)(('\x01' << (bVar20 & 0x1f)) - 1U & bVar16) <<
                     ((char)*(int *)(param_1 + 0x48) + 8U & 0x1f));
          *(byte *)(param_1 + 0x3c) = bVar16 >> (bVar20 & 0x1f);
          *(int *)(param_1 + 0x48) = (*(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x40)) + 0x10;
        }
      }
      else {
        local_24 = (uint)(('\x01' << ((byte)uVar18 & 0x1f)) - 1U & *(byte *)(param_1 + 0x3c));
        *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) >> ((byte)uVar18 & 0x1f);
        *(uint *)(param_1 + 0x48) = uVar14 - uVar18;
      }
      if (iVar21 < (int)(local_24 & 0xffff)) {
        FUN_00492f40(pbmi);
        return (HBITMAP)0x0;
      }
      if ((*(byte *)(param_1 + 0x3d) & 0x40) == 0) {
        if (*(int *)(param_1 + 0x78) == *(int *)(param_1 + 0x54)) {
          *(undefined4 *)(param_1 + 0x78) = 0;
          *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
        }
        iVar12 = *(int *)(param_1 + 0x78);
        iVar13 = *(int *)(param_1 + 0x7c) * *(int *)(param_1 + 0x6c) + iVar12;
      }
      else {
        if (*(int *)(param_1 + 0x78) == *(int *)(param_1 + 0x54)) {
          iVar12 = *(int *)(param_1 + 100);
          *(undefined4 *)(param_1 + 0x78) = 0;
          if (iVar12 == 1) {
            *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 8;
          }
          if (iVar12 == 2) {
            *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 8;
          }
          if (iVar12 == 3) {
            *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 4;
          }
          if (iVar12 == 4) {
            *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 2;
          }
          if (*(int *)(param_1 + 0x58) <= *(int *)(param_1 + 0x68)) {
            *(int *)(param_1 + 100) = iVar12 + 1;
            *(int *)(param_1 + 0x68) = 0x10 >> ((byte)(iVar12 + 1) & 0x1f);
          }
        }
        iVar13 = *(int *)(param_1 + 0x6c) * *(int *)(param_1 + 0x68) + *(int *)(param_1 + 0x78);
        *(char *)(*(int *)(param_1 + 0xac) + iVar13) = (char)local_24;
        iVar12 = *(int *)(param_1 + 0x78);
      }
      *(int *)(param_1 + 0x78) = iVar12 + 1;
      local_2c = iVar21;
      if (iVar13 <= *(int *)(param_1 + 0x98)) {
        *(char *)(*(int *)(param_1 + 0xac) + iVar13) = (char)local_24;
      }
      goto LAB_004386b4;
    }
    if ((int)uVar18 < local_2c) {
      uVar14 = 0;
      uVar6 = local_c;
      while (uVar7 = (ushort)uVar14, iVar21 <= (int)uVar18) {
        iVar12 = (uVar6 & 0xffff) * 6 + iVar9;
        *(ushort *)((int)pLVar1 + iVar12 + 4) = uVar7;
        uVar7 = *(ushort *)((int)pLVar1 + iVar12 + 2);
        uVar18 = (uint)uVar7;
        uVar8 = (ushort)uVar6;
        uVar14 = uVar6;
        uVar6 = uVar18;
        if (uVar8 <= uVar7) {
          FUN_00492f40(pbmi);
          return (HBITMAP)0x0;
        }
      }
      uVar23 = (undefined1)uVar6;
      if ((*(byte *)(param_1 + 0x3d) & 0x40) == 0) {
        if (*(int *)(param_1 + 0x78) == *(int *)(param_1 + 0x54)) {
          *(undefined4 *)(param_1 + 0x78) = 0;
          *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
        }
        iVar12 = *(int *)(param_1 + 0x78);
        iVar13 = *(int *)(param_1 + 0x7c) * *(int *)(param_1 + 0x6c) + iVar12;
      }
      else {
        if (*(int *)(param_1 + 0x78) == *(int *)(param_1 + 0x54)) {
          iVar12 = *(int *)(param_1 + 100);
          *(undefined4 *)(param_1 + 0x78) = 0;
          if (iVar12 == 1) {
            *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 8;
          }
          if (iVar12 == 2) {
            *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 8;
          }
          if (iVar12 == 3) {
            *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 4;
          }
          if (iVar12 == 4) {
            *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 2;
          }
          if (*(int *)(param_1 + 0x58) <= *(int *)(param_1 + 0x68)) {
            *(int *)(param_1 + 100) = iVar12 + 1;
            *(int *)(param_1 + 0x68) = 0x10 >> ((byte)(iVar12 + 1) & 0x1f);
          }
        }
        iVar13 = *(int *)(param_1 + 0x6c) * *(int *)(param_1 + 0x68) + *(int *)(param_1 + 0x78);
        *(undefined1 *)(*(int *)(param_1 + 0xac) + iVar13) = uVar23;
        iVar12 = *(int *)(param_1 + 0x78);
      }
      *(int *)(param_1 + 0x78) = iVar12 + 1;
      if (iVar13 <= *(int *)(param_1 + 0x98)) {
        *(undefined1 *)(*(int *)(param_1 + 0xac) + iVar13) = uVar23;
      }
      while (uVar7 != 0) {
        uVar3 = *(undefined1 *)((int)pLVar1 + (uVar14 & 0xffff) * 6 + iVar9);
        if ((*(byte *)(param_1 + 0x3d) & 0x40) == 0) {
          if (*(int *)(param_1 + 0x78) == *(int *)(param_1 + 0x54)) {
            *(undefined4 *)(param_1 + 0x78) = 0;
            *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
          }
          iVar12 = *(int *)(param_1 + 0x78);
          iVar13 = *(int *)(param_1 + 0x7c) * *(int *)(param_1 + 0x6c) + iVar12;
        }
        else {
          if (*(int *)(param_1 + 0x78) == *(int *)(param_1 + 0x54)) {
            iVar12 = *(int *)(param_1 + 100);
            *(undefined4 *)(param_1 + 0x78) = 0;
            if (iVar12 == 1) {
              *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 8;
            }
            if (iVar12 == 2) {
              *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 8;
            }
            if (iVar12 == 3) {
              *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 4;
            }
            if (iVar12 == 4) {
              *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 2;
            }
            if (*(int *)(param_1 + 0x58) <= *(int *)(param_1 + 0x68)) {
              *(int *)(param_1 + 100) = iVar12 + 1;
              *(int *)(param_1 + 0x68) = 0x10 >> ((byte)(iVar12 + 1) & 0x1f);
            }
          }
          iVar13 = *(int *)(param_1 + 0x6c) * *(int *)(param_1 + 0x68) + *(int *)(param_1 + 0x78);
          *(undefined1 *)(*(int *)(param_1 + 0xac) + iVar13) = uVar3;
          iVar12 = *(int *)(param_1 + 0x78);
        }
        *(int *)(param_1 + 0x78) = iVar12 + 1;
        if (iVar13 <= *(int *)(param_1 + 0x98)) {
          *(undefined1 *)(*(int *)(param_1 + 0xac) + iVar13) = uVar3;
        }
        uVar7 = *(ushort *)((int)pLVar1 + (uVar14 & 0xffff) * 6 + iVar9 + 4);
        uVar14 = (uint)uVar7;
      }
      puVar22 = (undefined1 *)((int)pLVar1 + local_2c * 6 + iVar9);
      *puVar22 = uVar23;
      *(undefined2 *)(puVar22 + 2) = (undefined2)local_24;
      if (local_2c + 1 == 1 << ((byte)*(int *)(param_1 + 0x40) & 0x1f)) {
        *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
      }
      if (0xc < *(uint *)(param_1 + 0x40)) {
        *(undefined4 *)(param_1 + 0x40) = 0xc;
      }
LAB_00438d09:
      local_2c = local_2c + 1;
      local_24 = local_c;
    }
    else {
      uVar18 = local_24 & 0xffff;
      uVar14 = 0;
      uVar6 = local_24;
      while (uVar7 = (ushort)uVar14, iVar21 <= (int)uVar18) {
        iVar12 = uVar18 * 6 + iVar9;
        *(ushort *)((int)pLVar1 + iVar12 + 4) = uVar7;
        uVar7 = *(ushort *)((int)pLVar1 + iVar12 + 2);
        if ((ushort)uVar6 <= uVar7) {
          FUN_00492f40(pbmi);
          return (HBITMAP)0x0;
        }
        uVar14 = uVar6;
        uVar6 = (uint)uVar7;
        uVar18 = (uint)uVar7;
      }
      uVar23 = (undefined1)uVar6;
      if ((*(byte *)(param_1 + 0x3d) & 0x40) == 0) {
        if (*(int *)(param_1 + 0x78) == *(int *)(param_1 + 0x54)) {
          *(undefined4 *)(param_1 + 0x78) = 0;
          *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
        }
        iVar12 = *(int *)(param_1 + 0x7c) * *(int *)(param_1 + 0x6c) + *(int *)(param_1 + 0x78);
        *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
      }
      else {
        if (*(int *)(param_1 + 0x78) == *(int *)(param_1 + 0x54)) {
          iVar12 = *(int *)(param_1 + 100);
          *(undefined4 *)(param_1 + 0x78) = 0;
          if (iVar12 == 1) {
            *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 8;
          }
          if (iVar12 == 2) {
            *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 8;
          }
          if (iVar12 == 3) {
            *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 4;
          }
          if (iVar12 == 4) {
            *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 2;
          }
          if (*(int *)(param_1 + 0x58) <= *(int *)(param_1 + 0x68)) {
            *(int *)(param_1 + 100) = iVar12 + 1;
            *(int *)(param_1 + 0x68) = 0x10 >> ((byte)(iVar12 + 1) & 0x1f);
          }
        }
        iVar12 = *(int *)(param_1 + 0x6c) * *(int *)(param_1 + 0x68) + *(int *)(param_1 + 0x78);
        *(undefined1 *)(*(int *)(param_1 + 0xac) + iVar12) = uVar23;
        *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
      }
      if (iVar12 <= *(int *)(param_1 + 0x98)) {
        *(undefined1 *)(*(int *)(param_1 + 0xac) + iVar12) = uVar23;
      }
      while (uVar7 != 0) {
        uVar3 = *(undefined1 *)((int)pLVar1 + (uVar14 & 0xffff) * 6 + iVar9);
        if ((*(byte *)(param_1 + 0x3d) & 0x40) == 0) {
          if (*(int *)(param_1 + 0x78) == *(int *)(param_1 + 0x54)) {
            *(undefined4 *)(param_1 + 0x78) = 0;
            *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
          }
          iVar12 = *(int *)(param_1 + 0x78);
          iVar13 = *(int *)(param_1 + 0x7c) * *(int *)(param_1 + 0x6c) + iVar12;
        }
        else {
          if (*(int *)(param_1 + 0x78) == *(int *)(param_1 + 0x54)) {
            iVar12 = *(int *)(param_1 + 100);
            *(undefined4 *)(param_1 + 0x78) = 0;
            if (iVar12 == 1) {
              *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 8;
            }
            if (iVar12 == 2) {
              *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 8;
            }
            if (iVar12 == 3) {
              *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 4;
            }
            if (iVar12 == 4) {
              *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 2;
            }
            if (*(int *)(param_1 + 0x58) <= *(int *)(param_1 + 0x68)) {
              *(int *)(param_1 + 100) = iVar12 + 1;
              *(int *)(param_1 + 0x68) = 0x10 >> ((byte)(iVar12 + 1) & 0x1f);
            }
          }
          iVar13 = *(int *)(param_1 + 0x6c) * *(int *)(param_1 + 0x68) + *(int *)(param_1 + 0x78);
          *(undefined1 *)(*(int *)(param_1 + 0xac) + iVar13) = uVar3;
          iVar12 = *(int *)(param_1 + 0x78);
        }
        *(int *)(param_1 + 0x78) = iVar12 + 1;
        if (iVar13 <= *(int *)(param_1 + 0x98)) {
          *(undefined1 *)(*(int *)(param_1 + 0xac) + iVar13) = uVar3;
        }
        uVar7 = *(ushort *)((int)pLVar1 + (uVar14 & 0xffff) * 6 + iVar9 + 4);
        uVar14 = (uint)uVar7;
      }
      if ((*(byte *)(param_1 + 0x3d) & 0x40) == 0) {
        if (*(int *)(param_1 + 0x78) == *(int *)(param_1 + 0x54)) {
          *(undefined4 *)(param_1 + 0x78) = 0;
          *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
        }
        iVar12 = *(int *)(param_1 + 0x78);
        iVar13 = *(int *)(param_1 + 0x7c) * *(int *)(param_1 + 0x6c) + iVar12;
      }
      else {
        if (*(int *)(param_1 + 0x78) == *(int *)(param_1 + 0x54)) {
          iVar12 = *(int *)(param_1 + 100);
          *(undefined4 *)(param_1 + 0x78) = 0;
          if (iVar12 == 1) {
            *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 8;
          }
          if (iVar12 == 2) {
            *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 8;
          }
          if (iVar12 == 3) {
            *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 4;
          }
          if (iVar12 == 4) {
            *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 2;
          }
          if (*(int *)(param_1 + 0x58) <= *(int *)(param_1 + 0x68)) {
            *(int *)(param_1 + 100) = iVar12 + 1;
            *(int *)(param_1 + 0x68) = 0x10 >> ((byte)(iVar12 + 1) & 0x1f);
          }
        }
        iVar13 = *(int *)(param_1 + 0x6c) * *(int *)(param_1 + 0x68) + *(int *)(param_1 + 0x78);
        *(undefined1 *)(*(int *)(param_1 + 0xac) + iVar13) = uVar23;
        iVar12 = *(int *)(param_1 + 0x78);
      }
      *(int *)(param_1 + 0x78) = iVar12 + 1;
      if (iVar13 <= *(int *)(param_1 + 0x98)) {
        *(undefined1 *)(*(int *)(param_1 + 0xac) + iVar13) = uVar23;
      }
      puVar22 = (undefined1 *)((int)pLVar1 + local_2c * 6 + iVar9);
      *puVar22 = uVar23;
      *(undefined2 *)(puVar22 + 2) = (undefined2)local_24;
      if (local_2c + 1 == 1 << ((byte)*(int *)(param_1 + 0x40) & 0x1f)) {
        *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
      }
      if (*(uint *)(param_1 + 0x40) < 0xd) goto LAB_00438d09;
      *(undefined4 *)(param_1 + 0x40) = 0xc;
      local_24 = local_c;
      local_2c = local_2c + 1;
    }
  } while( true );
}

