// Function: FUN_0044e0c0
// Entry:    0044e0c0
// Size:     4145 bytes
// Conv:     unknown
// Signature: undefined FUN_0044e0c0(void)
// Decompiled by Ghidra 12.1.2


void FUN_0044e0c0(int *param_1,byte *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  ushort uVar7;
  undefined2 uVar8;
  byte *pbVar9;
  int iVar10;
  int iVar11;
  byte bVar12;
  ushort uVar13;
  byte bVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  short sVar18;
  uint uVar19;
  
  iVar5 = param_3;
  iVar11 = *(int *)(param_3 + 400);
  iVar17 = *(int *)(param_3 + 0x198);
  iVar1 = *(int *)(param_3 + 0x19c);
  iVar2 = *(int *)(param_3 + 0x1a0);
  iVar3 = *(int *)(param_3 + 0x194);
  iVar4 = *(int *)(param_3 + 0x1a4);
  uVar15 = *(uint *)(param_3 + 0x78) >> 0xd & 1;
  iVar10 = *param_1;
  bVar14 = (byte)*(undefined4 *)(param_3 + 0x188);
  switch((char)param_1[2]) {
  case '\0':
    switch(*(undefined1 *)((int)param_1 + 9)) {
    case 1:
      iVar11 = 7;
      if (iVar10 != 0) {
        do {
          bVar14 = (byte)iVar11;
          if ((*param_2 >> (bVar14 & 0x1f) & 0xff01) == *(ushort *)(param_3 + 0x1c0)) {
            *param_2 = (byte)(0x7f7f >> (7 - bVar14 & 0x1f)) & *param_2 |
                       *(char *)(param_3 + 0x170) << (bVar14 & 0x1f);
          }
          if (iVar11 == 0) {
            iVar11 = 7;
            param_2 = param_2 + 1;
          }
          else {
            iVar11 = iVar11 + -1;
          }
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
        return;
      }
      break;
    case 2:
      if (iVar11 == 0) {
        iVar11 = 6;
        if (iVar10 != 0) {
          do {
            bVar14 = (byte)iVar11;
            if ((*param_2 >> (bVar14 & 0x1f) & 0xff03) == *(ushort *)(param_3 + 0x1c0)) {
              *param_2 = (byte)(0x3f3f >> (6 - bVar14 & 0x1f)) & *param_2 |
                         *(char *)(param_3 + 0x170) << (bVar14 & 0x1f);
            }
            if (iVar11 == 0) {
              iVar11 = 6;
              param_2 = param_2 + 1;
            }
            else {
              iVar11 = iVar11 + -2;
            }
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
          return;
        }
      }
      else {
        iVar17 = 6;
        pbVar9 = param_2;
        param_2 = (byte *)iVar10;
        if (iVar10 != 0) {
          do {
            bVar14 = *pbVar9;
            bVar12 = (byte)iVar17;
            if ((bVar14 >> (bVar12 & 0x1f) & 0xff03) == *(ushort *)(param_3 + 0x1c0)) {
              bVar14 = (byte)(0x3f3f >> (6 - bVar12 & 0x1f)) & bVar14;
              bVar6 = *(byte *)(param_3 + 0x170);
            }
            else {
              uVar15 = bVar14 >> (bVar12 & 0x1f) & 3;
              bVar14 = (byte)(0x3f3f >> (6 - bVar12 & 0x1f)) & *pbVar9;
              bVar6 = *(byte *)((((uVar15 * 4 | uVar15) << 2 | uVar15) << 2 | uVar15) + iVar11) >> 6
              ;
            }
            *pbVar9 = bVar14 | bVar6 << (bVar12 & 0x1f);
            if (iVar17 == 0) {
              iVar17 = 6;
              pbVar9 = pbVar9 + 1;
            }
            else {
              iVar17 = iVar17 + -2;
            }
            param_2 = (byte *)((int)param_2 + -1);
          } while (param_2 != (byte *)0x0);
          return;
        }
      }
      break;
    case 4:
      if (iVar11 == 0) {
        iVar11 = 4;
        if (iVar10 != 0) {
          do {
            bVar14 = (byte)iVar11;
            if ((*param_2 >> (bVar14 & 0x1f) & 0xff0f) == *(ushort *)(param_3 + 0x1c0)) {
              *param_2 = (byte)(0xf0f >> (4 - bVar14 & 0x1f)) & *param_2 |
                         *(char *)(param_3 + 0x170) << (bVar14 & 0x1f);
            }
            if (iVar11 == 0) {
              iVar11 = 4;
              param_2 = param_2 + 1;
            }
            else {
              iVar11 = iVar11 + -4;
            }
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
          return;
        }
      }
      else {
        iVar17 = 4;
        pbVar9 = param_2;
        param_2 = (byte *)iVar10;
        if (iVar10 != 0) {
          do {
            bVar14 = *pbVar9;
            bVar12 = (byte)iVar17;
            if ((bVar14 >> (bVar12 & 0x1f) & 0xff0f) == *(ushort *)(param_3 + 0x1c0)) {
              bVar14 = (byte)(0xf0f >> (4 - bVar12 & 0x1f)) & bVar14;
              bVar6 = *(byte *)(param_3 + 0x170);
            }
            else {
              uVar15 = bVar14 >> (bVar12 & 0x1f) & 0xf;
              bVar14 = (byte)(0xf0f >> (4 - bVar12 & 0x1f)) & *pbVar9;
              bVar6 = *(byte *)((uVar15 << 4 | uVar15) + iVar11) >> 4;
            }
            *pbVar9 = bVar14 | bVar6 << (bVar12 & 0x1f);
            if (iVar17 == 0) {
              iVar17 = 4;
              pbVar9 = pbVar9 + 1;
            }
            else {
              iVar17 = iVar17 + -4;
            }
            param_2 = (byte *)((int)param_2 + -1);
          } while (param_2 != (byte *)0x0);
          return;
        }
      }
      break;
    case 8:
      if (iVar11 == 0) {
        if (iVar10 != 0) {
          do {
            if ((ushort)*param_2 == *(ushort *)(param_3 + 0x1c0)) {
              *param_2 = *(byte *)(param_3 + 0x170);
            }
            param_2 = param_2 + 1;
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
          return;
        }
      }
      else if (iVar10 != 0) {
        do {
          if ((ushort)*param_2 == *(ushort *)(param_3 + 0x1c0)) {
            bVar14 = *(byte *)(param_3 + 0x170);
          }
          else {
            bVar14 = *(byte *)((uint)*param_2 + iVar11);
          }
          *param_2 = bVar14;
          param_2 = param_2 + 1;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
        return;
      }
      break;
    case 0x10:
      if (iVar3 == 0) {
        if (iVar10 != 0) {
          do {
            if ((ushort)((ushort)*param_2 * 0x100 + (ushort)param_2[1]) ==
                *(short *)(param_3 + 0x1c0)) {
              *param_2 = *(byte *)(param_3 + 0x171);
              param_2[1] = *(byte *)(param_3 + 0x170);
            }
            param_2 = param_2 + 2;
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
          return;
        }
      }
      else if (iVar10 != 0) {
        do {
          if ((ushort)((ushort)*param_2 * 0x100 + (ushort)param_2[1]) == *(short *)(param_3 + 0x1c0)
             ) {
            *param_2 = *(byte *)(param_3 + 0x171);
            param_2[1] = *(byte *)(param_3 + 0x170);
          }
          else {
            uVar8 = *(undefined2 *)
                     (*(int *)(iVar3 + (uint)(param_2[1] >> (bVar14 & 0x1f)) * 4) +
                     (uint)*param_2 * 2);
            param_2[1] = (byte)uVar8;
            *param_2 = (byte)((ushort)uVar8 >> 8);
          }
          param_2 = param_2 + 2;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
        return;
      }
    }
    break;
  case '\x02':
    if (*(char *)((int)param_1 + 9) == '\b') {
      if (iVar11 == 0) {
        if (iVar10 != 0) {
          param_2 = param_2 + 2;
          do {
            if ((((ushort)param_2[-2] == *(ushort *)(param_3 + 0x1ba)) &&
                ((ushort)param_2[-1] == *(ushort *)(param_3 + 0x1bc))) &&
               ((ushort)*param_2 == *(ushort *)(param_3 + 0x1be))) {
              param_2[-2] = *(byte *)(param_3 + 0x16a);
              param_2[-1] = *(byte *)(param_3 + 0x16c);
              *param_2 = *(byte *)(param_3 + 0x16e);
            }
            param_2 = param_2 + 3;
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
          return;
        }
      }
      else if (iVar10 != 0) {
        param_2 = param_2 + 2;
        do {
          if ((((ushort)param_2[-2] == *(ushort *)(param_3 + 0x1ba)) &&
              ((ushort)param_2[-1] == *(ushort *)(param_3 + 0x1bc))) &&
             ((ushort)*param_2 == *(ushort *)(param_3 + 0x1be))) {
            param_2[-2] = *(byte *)(param_3 + 0x16a);
            param_2[-1] = *(byte *)(param_3 + 0x16c);
            bVar14 = *(byte *)(param_3 + 0x16e);
          }
          else {
            param_2[-2] = *(byte *)((uint)param_2[-2] + iVar11);
            param_2[-1] = *(byte *)((uint)param_2[-1] + iVar11);
            bVar14 = *(byte *)((uint)*param_2 + iVar11);
          }
          *param_2 = bVar14;
          param_2 = param_2 + 3;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
        return;
      }
    }
    else if (iVar3 == 0) {
      if (iVar10 != 0) {
        param_2 = param_2 + 2;
        do {
          if ((((ushort)((ushort)param_2[-2] * 0x100 + (ushort)param_2[-1]) ==
                *(short *)(param_3 + 0x1ba)) &&
              ((ushort)((ushort)*param_2 * 0x100 + (ushort)param_2[1]) ==
               *(short *)(param_3 + 0x1bc))) &&
             ((ushort)((ushort)param_2[2] * 0x100 + (ushort)param_2[3]) ==
              *(short *)(param_3 + 0x1be))) {
            param_2[-2] = *(byte *)(param_3 + 0x16b);
            param_2[-1] = *(byte *)(param_3 + 0x16a);
            *param_2 = *(byte *)(param_3 + 0x16d);
            param_2[1] = *(byte *)(param_3 + 0x16c);
            param_2[2] = *(byte *)(param_3 + 0x16f);
            param_2[3] = *(byte *)(param_3 + 0x16e);
          }
          param_2 = param_2 + 6;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
        return;
      }
    }
    else if (iVar10 != 0) {
      param_2 = param_2 + 2;
      do {
        if ((((ushort)((ushort)param_2[-2] * 0x100 + (ushort)param_2[-1]) ==
              *(short *)(param_3 + 0x1ba)) &&
            ((ushort)((ushort)*param_2 * 0x100 + (ushort)param_2[1]) == *(short *)(param_3 + 0x1bc))
            ) && ((ushort)((ushort)param_2[2] * 0x100 + (ushort)param_2[3]) ==
                  *(short *)(param_3 + 0x1be))) {
          param_2[-2] = *(byte *)(param_3 + 0x16b);
          param_2[-1] = *(byte *)(param_3 + 0x16a);
          *param_2 = *(byte *)(param_3 + 0x16d);
          param_2[1] = *(byte *)(param_3 + 0x16c);
          param_2[2] = *(byte *)(param_3 + 0x16f);
          param_2[3] = *(byte *)(param_3 + 0x16e);
        }
        else {
          uVar8 = *(undefined2 *)
                   (*(int *)(iVar3 + (uint)(param_2[-1] >> (bVar14 & 0x1f)) * 4) +
                   (uint)param_2[-2] * 2);
          param_2[-1] = (byte)uVar8;
          param_2[-2] = (byte)((ushort)uVar8 >> 8);
          uVar8 = *(undefined2 *)
                   (*(int *)(iVar3 + (uint)(param_2[1] >> (bVar14 & 0x1f)) * 4) + (uint)*param_2 * 2
                   );
          param_2[1] = (byte)uVar8;
          *param_2 = (byte)((ushort)uVar8 >> 8);
          uVar8 = *(undefined2 *)
                   (*(int *)(iVar3 + (uint)(param_2[3] >> (bVar14 & 0x1f)) * 4) +
                   (uint)param_2[2] * 2);
          param_2[3] = (byte)uVar8;
          param_2[2] = (byte)((ushort)uVar8 >> 8);
        }
        param_2 = param_2 + 6;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
      return;
    }
    break;
  case '\x04':
    if (*(char *)((int)param_1 + 9) == '\b') {
      if (((iVar1 == 0) || (iVar17 == 0)) || (iVar11 == 0)) {
        if (iVar10 != 0) {
          do {
            bVar14 = param_2[1];
            if (bVar14 == 0) {
              *param_2 = *(byte *)(param_3 + 0x170);
            }
            else if (bVar14 != 0xff) {
              uVar15 = (ushort)((0xff - (ushort)bVar14) * *(short *)(param_3 + 0x170)) + 0x80 +
                       (uint)*param_2 * (uint)bVar14 & 0xffff;
              *param_2 = (byte)((uVar15 >> 8) + uVar15 >> 8);
            }
            param_2 = param_2 + 2;
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
          return;
        }
      }
      else {
        pbVar9 = param_2;
        param_2 = (byte *)iVar10;
        if (iVar10 != 0) {
          do {
            uVar7 = (ushort)pbVar9[1];
            if (uVar7 == 0xff) {
              *pbVar9 = *(byte *)((uint)*pbVar9 + iVar11);
            }
            else {
              if (pbVar9[1] == 0) {
                bVar14 = *(byte *)(param_3 + 0x170);
              }
              else {
                uVar16 = (ushort)((0xff - uVar7) * *(short *)(param_3 + 0x17a)) + 0x80 +
                         (uint)*(byte *)((uint)*pbVar9 + iVar1) * (uint)uVar7 & 0xffff;
                bVar14 = (byte)((uVar16 >> 8) + uVar16 >> 8);
                param_1 = (int *)(uint)bVar14;
                if (uVar15 == 0) {
                  bVar14 = *(byte *)((int)param_1 + iVar17);
                }
              }
              *pbVar9 = bVar14;
            }
            param_2 = (byte *)((int)param_2 + -1);
            pbVar9 = pbVar9 + 2;
          } while (param_2 != (byte *)0x0);
          return;
        }
      }
    }
    else if (((iVar3 == 0) || (iVar2 == 0)) || (iVar4 == 0)) {
      if (iVar10 != 0) {
        param_2 = param_2 + 1;
        do {
          uVar7 = (ushort)param_2[1] * 0x100 + (ushort)param_2[2];
          if (uVar7 == 0) {
            param_2[-1] = *(byte *)(param_3 + 0x171);
            *param_2 = *(byte *)(param_3 + 0x170);
          }
          else if (uVar7 != 0xffff) {
            uVar15 = (uint)*(ushort *)(param_3 + 0x170) * (0xffff - (uint)uVar7) + 0x8000 +
                     ((uint)param_2[-1] * 0x100 + (uint)*param_2) * (uint)uVar7;
            iVar11 = (uVar15 >> 0x10) + uVar15;
            *param_2 = (byte)((uint)iVar11 >> 0x10);
            param_2[-1] = (byte)((uint)iVar11 >> 0x18);
          }
          param_2 = param_2 + 4;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
        return;
      }
    }
    else if (iVar10 != 0) {
      pbVar9 = param_2 + 1;
      param_2 = (byte *)iVar10;
      do {
        uVar7 = (ushort)pbVar9[1] * 0x100 + (ushort)pbVar9[2];
        if (uVar7 == 0xffff) {
          uVar8 = *(undefined2 *)
                   (*(int *)(iVar3 + (uint)(*pbVar9 >> (bVar14 & 0x1f)) * 4) + (uint)pbVar9[-1] * 2)
          ;
LAB_0044e9d5:
          pbVar9[-1] = (byte)((ushort)uVar8 >> 8);
          *pbVar9 = (byte)uVar8;
        }
        else {
          if (uVar7 != 0) {
            uVar16 = (uint)*(ushort *)
                            (*(int *)(iVar4 + (uint)(*pbVar9 >> (bVar14 & 0x1f)) * 4) +
                            (uint)pbVar9[-1] * 2) * (uint)uVar7 + 0x8000 +
                     (uint)*(ushort *)(param_3 + 0x17a) * (0xffff - (uint)uVar7);
            uVar16 = (uVar16 >> 0x10) + uVar16;
            uVar8 = (undefined2)(uVar16 >> 0x10);
            if (uVar15 == 0) {
              uVar8 = *(undefined2 *)
                       (*(int *)(iVar2 + ((uVar16 >> 0x10 & 0xff) >> (bVar14 & 0x1f)) * 4) +
                       (uVar16 >> 0x18) * 2);
            }
            goto LAB_0044e9d5;
          }
          pbVar9[-1] = *(byte *)(param_3 + 0x171);
          *pbVar9 = *(byte *)(param_3 + 0x170);
        }
        pbVar9 = pbVar9 + 4;
        param_2 = (byte *)((int)param_2 + -1);
        if (param_2 == (byte *)0x0) {
          return;
        }
      } while( true );
    }
    break;
  case '\x06':
    if (*(char *)((int)param_1 + 9) == '\b') {
      if (((iVar1 == 0) || (iVar17 == 0)) || (iVar11 == 0)) {
        if (iVar10 != 0) {
          param_2 = param_2 + 1;
          do {
            bVar14 = param_2[2];
            if (bVar14 == 0) {
              param_2[-1] = *(byte *)(param_3 + 0x16a);
              *param_2 = *(byte *)(param_3 + 0x16c);
              param_2[1] = *(byte *)(param_3 + 0x16e);
            }
            else if (bVar14 != 0xff) {
              uVar15 = (uint)bVar14;
              sVar18 = 0xff - (ushort)bVar14;
              uVar16 = param_2[-1] * uVar15 + 0x80 +
                       (uint)(ushort)(*(short *)(param_3 + 0x16a) * sVar18) & 0xffff;
              param_2[-1] = (byte)((uVar16 >> 8) + uVar16 >> 8);
              uVar16 = (ushort)(*(short *)(param_3 + 0x16c) * sVar18) + 0x80 + *param_2 * uVar15 &
                       0xffff;
              *param_2 = (byte)((uVar16 >> 8) + uVar16 >> 8);
              uVar15 = (ushort)(*(short *)(param_3 + 0x16e) * sVar18) + 0x80 + param_2[1] * uVar15 &
                       0xffff;
              param_2[1] = (byte)((uVar15 >> 8) + uVar15 >> 8);
            }
            param_2 = param_2 + 4;
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
          return;
        }
      }
      else if (iVar10 != 0) {
        pbVar9 = param_2 + 1;
        param_1 = (int *)iVar10;
        do {
          bVar14 = pbVar9[2];
          if (bVar14 == 0xff) {
            pbVar9[-1] = *(byte *)((uint)pbVar9[-1] + iVar11);
            *pbVar9 = *(byte *)((uint)*pbVar9 + iVar11);
            pbVar9[1] = *(byte *)((uint)pbVar9[1] + iVar11);
          }
          else if (bVar14 == 0) {
            pbVar9[-1] = *(byte *)(param_3 + 0x16a);
            *pbVar9 = *(byte *)(param_3 + 0x16c);
            pbVar9[1] = *(byte *)(param_3 + 0x16e);
          }
          else {
            uVar13 = (ushort)bVar14;
            sVar18 = 0xff - uVar13;
            uVar7 = *(byte *)((uint)pbVar9[-1] + iVar1) * uVar13 + 0x80 +
                    *(short *)(param_3 + 0x174) * sVar18;
            bVar14 = (byte)((uint)(uVar7 >> 8) + (uint)uVar7 >> 8);
            param_2 = (byte *)(uint)bVar14;
            if (uVar15 == 0) {
              bVar14 = *(byte *)((int)param_2 + iVar17);
            }
            pbVar9[-1] = bVar14;
            uVar7 = *(byte *)((uint)*pbVar9 + iVar1) * uVar13 + 0x80 +
                    *(short *)(param_3 + 0x176) * sVar18;
            bVar14 = (byte)((uint)(uVar7 >> 8) + (uint)uVar7 >> 8);
            param_2 = (byte *)(uint)bVar14;
            if (uVar15 == 0) {
              bVar14 = *(byte *)((int)param_2 + iVar17);
            }
            *pbVar9 = bVar14;
            uVar7 = *(byte *)((uint)pbVar9[1] + iVar1) * uVar13 + 0x80 +
                    *(short *)(param_3 + 0x178) * sVar18;
            bVar14 = (byte)((uint)(uVar7 >> 8) + (uint)uVar7 >> 8);
            param_2 = (byte *)(uint)bVar14;
            if (uVar15 == 0) {
              bVar14 = *(byte *)((int)param_2 + iVar17);
            }
            pbVar9[1] = bVar14;
          }
          pbVar9 = pbVar9 + 4;
          param_1 = (int *)((int)param_1 + -1);
        } while (param_1 != (int *)0x0);
        return;
      }
    }
    else if (((iVar3 == 0) || (iVar2 == 0)) || (iVar4 == 0)) {
      if (iVar10 != 0) {
        param_2 = param_2 + 1;
        do {
          uVar7 = (ushort)param_2[5] * 0x100 + (ushort)param_2[6];
          if (uVar7 == 0) {
            param_2[-1] = *(byte *)(param_3 + 0x16b);
            *param_2 = *(byte *)(param_3 + 0x16a);
            param_2[1] = *(byte *)(param_3 + 0x16d);
            param_2[2] = *(byte *)(param_3 + 0x16c);
            param_2[3] = *(byte *)(param_3 + 0x16f);
            bVar14 = *(byte *)(param_3 + 0x16e);
LAB_0044f0dc:
            param_2[4] = bVar14;
          }
          else if (uVar7 != 0xffff) {
            uVar16 = (uint)uVar7;
            iVar17 = 0xffff - uVar16;
            uVar15 = ((uint)param_2[-1] * 0x100 + (uint)*param_2) * uVar16 + 0x8000 +
                     (uint)*(ushort *)(param_3 + 0x16a) * iVar17;
            iVar11 = (uVar15 >> 0x10) + uVar15;
            *param_2 = (byte)((uint)iVar11 >> 0x10);
            param_2[-1] = (byte)((uint)iVar11 >> 0x18);
            uVar15 = ((uint)param_2[1] * 0x100 + (uint)param_2[2]) * uVar16 + 0x8000 +
                     (uint)*(ushort *)(param_3 + 0x16c) * iVar17;
            iVar11 = (uVar15 >> 0x10) + uVar15;
            param_2[2] = (byte)((uint)iVar11 >> 0x10);
            param_2[1] = (byte)((uint)iVar11 >> 0x18);
            uVar15 = ((uint)param_2[3] * 0x100 + (uint)param_2[4]) * uVar16 + 0x8000 +
                     (uint)*(ushort *)(param_3 + 0x16e) * iVar17;
            iVar11 = (uVar15 >> 0x10) + uVar15;
            bVar14 = (byte)((uint)iVar11 >> 0x10);
            param_2[3] = (byte)((uint)iVar11 >> 0x18);
            goto LAB_0044f0dc;
          }
          param_2 = param_2 + 8;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
    }
    else if (iVar10 != 0) {
      param_2 = param_2 + 1;
      param_3 = iVar10;
      do {
        uVar7 = (ushort)param_2[5] * 0x100 + (ushort)param_2[6];
        if (uVar7 == 0xffff) {
          uVar8 = *(undefined2 *)
                   (*(int *)(iVar3 + (uint)(*param_2 >> (bVar14 & 0x1f)) * 4) +
                   (uint)param_2[-1] * 2);
          *param_2 = (byte)uVar8;
          param_2[-1] = (byte)((ushort)uVar8 >> 8);
          uVar8 = *(undefined2 *)
                   (*(int *)(iVar3 + (uint)(param_2[2] >> (bVar14 & 0x1f)) * 4) +
                   (uint)param_2[1] * 2);
          param_2[2] = (byte)uVar8;
          param_2[1] = (byte)((ushort)uVar8 >> 8);
          uVar8 = *(undefined2 *)
                   (*(int *)(iVar3 + (uint)(param_2[4] >> (bVar14 & 0x1f)) * 4) +
                   (uint)param_2[3] * 2);
          param_2[4] = (byte)uVar8;
          param_2[3] = (byte)((ushort)uVar8 >> 8);
        }
        else if (uVar7 == 0) {
          param_2[-1] = *(byte *)(iVar5 + 0x16b);
          *param_2 = *(byte *)(iVar5 + 0x16a);
          param_2[1] = *(byte *)(iVar5 + 0x16d);
          param_2[2] = *(byte *)(iVar5 + 0x16c);
          param_2[3] = *(byte *)(iVar5 + 0x16f);
          param_2[4] = *(byte *)(iVar5 + 0x16e);
        }
        else {
          uVar19 = (uint)uVar7;
          iVar11 = 0xffff - uVar19;
          uVar16 = (uint)*(ushort *)(iVar5 + 0x174) * iVar11 + 0x8000 +
                   *(ushort *)
                    (*(int *)(iVar4 + (uint)(*param_2 >> (bVar14 & 0x1f)) * 4) +
                    (uint)param_2[-1] * 2) * uVar19;
          uVar16 = (uVar16 >> 0x10) + uVar16;
          uVar8 = (undefined2)(uVar16 >> 0x10);
          if (uVar15 == 0) {
            uVar8 = *(undefined2 *)
                     (*(int *)(iVar2 + ((uVar16 >> 0x10 & 0xff) >> (bVar14 & 0x1f)) * 4) +
                     (uVar16 >> 0x18) * 2);
          }
          *param_2 = (byte)uVar8;
          param_2[-1] = (byte)((ushort)uVar8 >> 8);
          uVar16 = (uint)*(ushort *)(iVar5 + 0x176) * iVar11 + 0x8000 +
                   *(ushort *)
                    (*(int *)(iVar4 + (uint)(param_2[2] >> (bVar14 & 0x1f)) * 4) +
                    (uint)param_2[1] * 2) * uVar19;
          uVar16 = (uVar16 >> 0x10) + uVar16;
          uVar8 = (undefined2)(uVar16 >> 0x10);
          if (uVar15 == 0) {
            uVar8 = *(undefined2 *)
                     (*(int *)(iVar2 + ((uVar16 >> 0x10 & 0xff) >> (bVar14 & 0x1f)) * 4) +
                     (uVar16 >> 0x18) * 2);
          }
          param_2[2] = (byte)uVar8;
          param_2[1] = (byte)((ushort)uVar8 >> 8);
          uVar16 = *(ushort *)
                    (*(int *)(iVar4 + (uint)(param_2[4] >> (bVar14 & 0x1f)) * 4) +
                    (uint)param_2[3] * 2) * uVar19 + 0x8000 +
                   (uint)*(ushort *)(iVar5 + 0x178) * iVar11;
          uVar16 = (uVar16 >> 0x10) + uVar16;
          uVar8 = (undefined2)(uVar16 >> 0x10);
          if (uVar15 == 0) {
            uVar8 = *(undefined2 *)
                     (*(int *)(iVar2 + ((uVar16 >> 0x10 & 0xff) >> (bVar14 & 0x1f)) * 4) +
                     (uVar16 >> 0x18) * 2);
          }
          param_2[4] = (byte)uVar8;
          param_2[3] = (byte)((ushort)uVar8 >> 8);
        }
        param_2 = param_2 + 8;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      return;
    }
  }
  return;
}

