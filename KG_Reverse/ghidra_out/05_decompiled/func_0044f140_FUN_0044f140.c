// Function: FUN_0044f140
// Entry:    0044f140
// Size:     985 bytes
// Conv:     unknown
// Signature: undefined FUN_0044f140(void)
// Decompiled by Ghidra 12.1.2


void FUN_0044f140(int *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  undefined2 uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint local_10;
  
  bVar4 = (byte)*(undefined4 *)(param_3 + 0x188);
  iVar5 = *(int *)(param_3 + 0x194);
  iVar9 = *param_1;
  iVar6 = *(int *)(param_3 + 400);
  bVar1 = *(byte *)((int)param_1 + 9);
  if (((bVar1 < 9) && (iVar6 != 0)) || ((bVar1 == 0x10 && (iVar5 != 0)))) {
    switch((char)param_1[2]) {
    case '\0':
      if ((bVar1 == 2) && (iVar9 != 0)) {
        local_10 = iVar9 + 3U >> 2;
        pbVar8 = param_2;
        do {
          uVar10 = (uint)*pbVar8;
          uVar11 = uVar10 & 0xc;
          uVar7 = uVar10 & 3;
          uVar12 = uVar10 & 0x30;
          uVar10 = uVar10 & 0xc0;
          *pbVar8 = (byte)((byte)(*(byte *)(((uVar11 * 4 | uVar11) << 2 | (int)uVar11 >> 2 | uVar11)
                                           + iVar6) & 0xcf |
                                 *(byte *)((((uVar7 * 4 | uVar7) << 2 | uVar7) << 2 | uVar7) + iVar6
                                          ) >> 2) >> 2 |
                          *(byte *)(((int)((int)uVar12 >> 2 | uVar12) >> 2 | uVar12 * 4 | uVar12) +
                                   iVar6) & 0xc3) >> 2 |
                    *(byte *)(((int)((int)((int)uVar10 >> 2 | uVar10) >> 2 | uVar10) >> 2 | uVar10)
                             + iVar6) & 0xc0;
          pbVar8 = pbVar8 + 1;
          local_10 = local_10 - 1;
        } while (local_10 != 0);
      }
      cVar2 = *(char *)((int)param_1 + 9);
      if (cVar2 == '\x04') {
        if (iVar9 != 0) {
          uVar7 = iVar9 + 1U >> 1;
          do {
            uVar10 = *param_2 & 0xf;
            uVar11 = *param_2 & 0xf0;
            *param_2 = *(byte *)(((int)uVar11 >> 4 | uVar11) + iVar6) & 0xf0 |
                       *(byte *)((uVar10 << 4 | uVar10) + iVar6) >> 4;
            param_2 = param_2 + 1;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
          return;
        }
      }
      else if (cVar2 == '\b') {
        if (iVar9 != 0) {
          do {
            iVar9 = iVar9 + -1;
            *param_2 = *(byte *)((uint)*param_2 + iVar6);
            param_2 = param_2 + 1;
          } while (iVar9 != 0);
          return;
        }
      }
      else if (cVar2 == '\x10') {
        for (; iVar9 != 0; iVar9 = iVar9 + -1) {
          uVar3 = *(undefined2 *)
                   (*(int *)(iVar5 + (uint)(param_2[1] >> (bVar4 & 0x1f)) * 4) + (uint)*param_2 * 2)
          ;
          param_2[1] = (byte)uVar3;
          *param_2 = (byte)((ushort)uVar3 >> 8);
          param_2 = param_2 + 2;
        }
      }
      break;
    case '\x02':
      if (bVar1 == 8) {
        if (iVar9 != 0) {
          do {
            *param_2 = *(byte *)((uint)*param_2 + iVar6);
            param_2[1] = *(byte *)((uint)param_2[1] + iVar6);
            iVar9 = iVar9 + -1;
            param_2[2] = *(byte *)((uint)param_2[2] + iVar6);
            param_2 = param_2 + 3;
          } while (iVar9 != 0);
          return;
        }
      }
      else if (iVar9 != 0) {
        do {
          uVar3 = *(undefined2 *)
                   (*(int *)(iVar5 + (uint)(param_2[1] >> (bVar4 & 0x1f)) * 4) + (uint)*param_2 * 2)
          ;
          param_2[1] = (byte)uVar3;
          *param_2 = (byte)((ushort)uVar3 >> 8);
          uVar3 = *(undefined2 *)
                   (*(int *)(iVar5 + (uint)(param_2[3] >> (bVar4 & 0x1f)) * 4) +
                   (uint)param_2[2] * 2);
          param_2[3] = (byte)uVar3;
          param_2[2] = (byte)((ushort)uVar3 >> 8);
          uVar3 = *(undefined2 *)
                   (*(int *)(iVar5 + (uint)(param_2[5] >> (bVar4 & 0x1f)) * 4) +
                   (uint)param_2[4] * 2);
          param_2[5] = (byte)uVar3;
          param_2[4] = (byte)((ushort)uVar3 >> 8);
          iVar9 = iVar9 + -1;
          param_2 = param_2 + 6;
        } while (iVar9 != 0);
        return;
      }
      break;
    case '\x04':
      if (bVar1 == 8) {
        if (iVar9 != 0) {
          do {
            iVar9 = iVar9 + -1;
            *param_2 = *(byte *)((uint)*param_2 + iVar6);
            param_2 = param_2 + 2;
          } while (iVar9 != 0);
          return;
        }
      }
      else if (iVar9 != 0) {
        do {
          uVar3 = *(undefined2 *)
                   (*(int *)(iVar5 + (uint)(param_2[1] >> (bVar4 & 0x1f)) * 4) + (uint)*param_2 * 2)
          ;
          param_2[1] = (byte)uVar3;
          *param_2 = (byte)((ushort)uVar3 >> 8);
          iVar9 = iVar9 + -1;
          param_2 = param_2 + 4;
        } while (iVar9 != 0);
        return;
      }
      break;
    case '\x06':
      if (bVar1 == 8) {
        if (iVar9 != 0) {
          do {
            *param_2 = *(byte *)((uint)*param_2 + iVar6);
            param_2[1] = *(byte *)((uint)param_2[1] + iVar6);
            iVar9 = iVar9 + -1;
            param_2[2] = *(byte *)((uint)param_2[2] + iVar6);
            param_2 = param_2 + 4;
          } while (iVar9 != 0);
          return;
        }
      }
      else if (iVar9 != 0) {
        do {
          uVar3 = *(undefined2 *)
                   (*(int *)(iVar5 + (uint)(param_2[1] >> (bVar4 & 0x1f)) * 4) + (uint)*param_2 * 2)
          ;
          param_2[1] = (byte)uVar3;
          *param_2 = (byte)((ushort)uVar3 >> 8);
          uVar3 = *(undefined2 *)
                   (*(int *)(iVar5 + (uint)(param_2[3] >> (bVar4 & 0x1f)) * 4) +
                   (uint)param_2[2] * 2);
          param_2[3] = (byte)uVar3;
          param_2[2] = (byte)((ushort)uVar3 >> 8);
          uVar3 = *(undefined2 *)
                   (*(int *)(iVar5 + (uint)(param_2[5] >> (bVar4 & 0x1f)) * 4) +
                   (uint)param_2[4] * 2);
          param_2[5] = (byte)uVar3;
          param_2[4] = (byte)((ushort)uVar3 >> 8);
          iVar9 = iVar9 + -1;
          param_2 = param_2 + 8;
        } while (iVar9 != 0);
        return;
      }
    }
  }
  return;
}

