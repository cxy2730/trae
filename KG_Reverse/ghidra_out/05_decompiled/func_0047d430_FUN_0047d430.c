// Function: FUN_0047d430
// Entry:    0047d430
// Size:     1082 bytes
// Conv:     unknown
// Signature: undefined FUN_0047d430(void)
// Decompiled by Ghidra 12.1.2


void FUN_0047d430(uint *param_1,int param_2,int param_3)

{
  byte *pbVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  
  if (0 < param_2) {
    param_2 = param_2 >> 1;
    pbVar1 = (&PTR_DAT_02fd7ab0)[param_3 * 3];
    uVar2 = *(undefined4 *)(&DAT_02fd7ab4 + param_3 * 0xc);
    iVar3 = *(int *)(&DAT_02fd7ab8 + param_3 * 0xc);
    if (iVar3 == 1) {
      param_3 = 0;
      if (0 < param_2) {
        do {
          if (DAT_03012984 < 0xb) {
            for (; DAT_03012984 < 0x19; DAT_03012984 = DAT_03012984 + 8) {
              DAT_03012980 = DAT_03012980 << 8 | (uint)*DAT_03012988;
              DAT_03012988 = DAT_03012988 + 1;
            }
          }
          uVar7 = DAT_03012980 >> ((char)DAT_03012984 - *pbVar1 & 0x1f);
          DAT_03012984 = DAT_03012984 - (uint)pbVar1[uVar7 * 4 + 7];
          DAT_03012980 = DAT_03012980 -
                         ((DAT_03012980 >> ((byte)DAT_03012984 & 0x1f)) <<
                         ((byte)DAT_03012984 & 0x1f));
          uVar8 = (uint)pbVar1[uVar7 * 4 + 5];
          uVar7 = (uint)pbVar1[uVar7 * 4 + 6];
          if (uVar8 != 0) {
            DAT_03012984 = DAT_03012984 + -1;
            uVar4 = DAT_03012980 >> ((byte)DAT_03012984 & 0x1f);
            DAT_03012980 = DAT_03012980 - (uVar4 << ((byte)DAT_03012984 & 0x1f));
            if (uVar4 != 0) {
              uVar8 = -uVar8;
            }
          }
          if (uVar7 != 0) {
            DAT_03012984 = DAT_03012984 + -1;
            uVar4 = DAT_03012980 >> ((byte)DAT_03012984 & 0x1f);
            DAT_03012980 = DAT_03012980 - (uVar4 << ((byte)DAT_03012984 & 0x1f));
            if (uVar4 != 0) {
              uVar7 = -uVar7;
            }
          }
          *param_1 = uVar8;
          param_1[1] = uVar7;
          if (DAT_03012990 < DAT_03012988) {
            return;
          }
          param_1 = param_1 + 2;
          param_3 = param_3 + 1;
        } while (param_3 < param_2);
      }
    }
    else if (iVar3 == 2) {
      param_3 = 0;
      pbVar6 = DAT_03012988;
      pbVar9 = pbVar1;
      if (0 < param_2) {
        while( true ) {
          while( true ) {
            iVar3 = DAT_03012984;
            if (DAT_03012984 < 0xb) {
              for (; iVar3 < 0x19; iVar3 = iVar3 + 8) {
                DAT_03012980 = DAT_03012980 << 8 | (uint)*pbVar6;
                pbVar6 = pbVar6 + 1;
                DAT_03012988 = pbVar6;
              }
            }
            DAT_03012984 = iVar3 - (uint)*pbVar9;
            bVar5 = (byte)DAT_03012984;
            uVar8 = DAT_03012980 >> (bVar5 & 0x1f);
            if (pbVar9[uVar8 * 4 + 7] != 0) break;
            DAT_03012980 = DAT_03012980 - ((DAT_03012980 >> (bVar5 & 0x1f)) << (bVar5 & 0x1f));
            pbVar9 = pbVar9 + *(int *)(pbVar9 + uVar8 * 4 + 4) * 4;
          }
          DAT_03012984 = iVar3 - (uint)pbVar9[uVar8 * 4 + 7];
          DAT_03012980 = DAT_03012980 -
                         ((DAT_03012980 >> ((byte)DAT_03012984 & 0x1f)) <<
                         ((byte)DAT_03012984 & 0x1f));
          uVar7 = (uint)pbVar9[uVar8 * 4 + 5];
          uVar8 = (uint)pbVar9[uVar8 * 4 + 6];
          if (uVar7 != 0) {
            DAT_03012984 = DAT_03012984 + -1;
            uVar4 = DAT_03012980 >> ((byte)DAT_03012984 & 0x1f);
            DAT_03012980 = DAT_03012980 - (uVar4 << ((byte)DAT_03012984 & 0x1f));
            if (uVar4 != 0) {
              uVar7 = -uVar7;
            }
          }
          if (uVar8 != 0) {
            DAT_03012984 = DAT_03012984 + -1;
            uVar4 = DAT_03012980 >> ((byte)DAT_03012984 & 0x1f);
            DAT_03012980 = DAT_03012980 - (uVar4 << ((byte)DAT_03012984 & 0x1f));
            if (uVar4 != 0) {
              uVar8 = -uVar8;
            }
          }
          *param_1 = uVar7;
          param_1[1] = uVar8;
          if (DAT_03012990 < DAT_03012988) break;
          param_1 = param_1 + 2;
          param_3 = param_3 + 1;
          pbVar6 = DAT_03012988;
          pbVar9 = pbVar1;
          if (param_2 <= param_3) {
            return;
          }
        }
      }
    }
    else if (iVar3 == 3) {
      param_3 = 0;
      if (0 < param_2) {
        while( true ) {
          uVar8 = (uint)*pbVar1;
          iVar3 = FUN_0047d8e0(uVar8);
          bVar5 = pbVar1[iVar3 * 4 + 7];
          pbVar6 = pbVar1;
          while (bVar5 == 0) {
            DAT_03012984 = DAT_03012984 - uVar8;
            pbVar6 = pbVar6 + *(int *)(pbVar6 + iVar3 * 4 + 4) * 4;
            DAT_03012980 = DAT_03012980 -
                           ((DAT_03012980 >> ((byte)DAT_03012984 & 0x1f)) <<
                           ((byte)DAT_03012984 & 0x1f));
            uVar8 = (uint)*pbVar6;
            iVar3 = FUN_0047d8e0(uVar8);
            bVar5 = pbVar6[iVar3 * 4 + 7];
          }
          DAT_03012984 = DAT_03012984 - (uint)pbVar6[iVar3 * 4 + 7];
          DAT_03012980 = DAT_03012980 -
                         ((DAT_03012980 >> ((byte)DAT_03012984 & 0x1f)) <<
                         ((byte)DAT_03012984 & 0x1f));
          uVar8 = (uint)pbVar6[iVar3 * 4 + 5];
          uVar7 = (uint)pbVar6[iVar3 * 4 + 6];
          if (uVar8 == 0xf) {
            iVar3 = FUN_0047d870(uVar2);
            uVar8 = iVar3 + 0xf;
          }
          if (uVar8 != 0) {
            DAT_03012984 = DAT_03012984 + -1;
            uVar4 = DAT_03012980 >> ((byte)DAT_03012984 & 0x1f);
            DAT_03012980 = DAT_03012980 - (uVar4 << ((byte)DAT_03012984 & 0x1f));
            if (uVar4 != 0) {
              uVar8 = -uVar8;
            }
          }
          if (uVar7 == 0xf) {
            iVar3 = FUN_0047d870(uVar2);
            uVar7 = iVar3 + 0xf;
          }
          if (uVar7 != 0) {
            DAT_03012984 = DAT_03012984 + -1;
            uVar4 = DAT_03012980 >> ((byte)DAT_03012984 & 0x1f);
            DAT_03012980 = DAT_03012980 - (uVar4 << ((byte)DAT_03012984 & 0x1f));
            if (uVar4 != 0) {
              uVar7 = -uVar7;
            }
          }
          *param_1 = uVar8;
          param_1[1] = uVar7;
          if (DAT_03012990 < DAT_03012988) break;
          param_1 = param_1 + 2;
          param_3 = param_3 + 1;
          if (param_2 <= param_3) {
            return;
          }
        }
      }
    }
    else if (0 < param_2) {
      do {
        *param_1 = 0;
        param_1[1] = 0;
        param_1 = param_1 + 2;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      return;
    }
  }
  return;
}

