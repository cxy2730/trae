// Function: FUN_00472280
// Entry:    00472280
// Size:     6323 bytes
// Conv:     unknown
// Signature: undefined FUN_00472280(void)
// Decompiled by Ghidra 12.1.2


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00472280(void)

{
  float *pfVar1;
  uint *puVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int local_8;
  
  puVar10 = &DAT_03012a80;
  iVar6 = 0;
  do {
    local_8 = 0;
    do {
      iVar9 = 0;
      uVar4 = DAT_03008f8c;
      while (uVar4 < 0x26) {
        switch((&switchD_004722a6::switchdataD_00473b34)[uVar4]) {
        case (undefined *)0x4722ad:
          puVar10[iVar9] = 0;
          puVar10[iVar9 + 0x40] = 0;
          puVar10[iVar9 + 0x80] = 0;
          break;
        case (undefined *)0x4722c5:
          if (DAT_03008d74 < 5) {
            for (; DAT_03008d74 < 0x19; DAT_03008d74 = DAT_03008d74 + 8) {
              DAT_03008b64 = DAT_03008b64 << 8 | (uint)*DAT_03006cf0;
              DAT_03006cf0 = DAT_03006cf0 + 1;
            }
          }
          DAT_03008d74 = DAT_03008d74 + -5;
          _DAT_03008ef8 = DAT_03008b64 >> ((byte)DAT_03008d74 & 0x1f);
          iVar5 = _DAT_03008ef8 * 3;
          DAT_03008b64 = DAT_03008b64 - (_DAT_03008ef8 << ((byte)DAT_03008d74 & 0x1f));
          pfVar1 = (float *)(&DAT_03007064 + (iVar6 * 0x40 + iVar9) * 4);
          puVar10[iVar9] = (float)(int)(char)(&DAT_03006ff8)[iVar5] * *pfVar1;
          puVar10[iVar9 + 0x40] = (float)(int)(char)(&DAT_03006ff9)[iVar5] * *pfVar1;
          puVar10[iVar9 + 0x80] = (float)(int)(char)(&DAT_03006ffa)[iVar5] * *pfVar1;
          break;
        case (undefined *)0x472386:
          if (DAT_03008d74 < 7) {
            for (; DAT_03008d74 < 0x19; DAT_03008d74 = DAT_03008d74 + 8) {
              DAT_03008b64 = DAT_03008b64 << 8 | (uint)*DAT_03006cf0;
              DAT_03006cf0 = DAT_03006cf0 + 1;
            }
          }
          DAT_03008d74 = DAT_03008d74 + -7;
          _DAT_03008ef8 = DAT_03008b64 >> ((byte)DAT_03008d74 & 0x1f);
          iVar5 = _DAT_03008ef8 * 3;
          DAT_03008b64 = DAT_03008b64 - (_DAT_03008ef8 << ((byte)DAT_03008d74 & 0x1f));
          pfVar1 = (float *)(&DAT_03007064 + (iVar6 * 0x40 + iVar9) * 4);
          puVar10[iVar9] = (float)(int)(char)(&DAT_03008d78)[iVar5] * *pfVar1;
          puVar10[iVar9 + 0x40] = (float)(int)(char)(&DAT_03008d79)[iVar5] * *pfVar1;
          puVar10[iVar9 + 0x80] = (float)(int)(char)(&DAT_03008d7a)[iVar5] * *pfVar1;
          break;
        case (undefined *)0x472447:
          if (DAT_03008d74 < 9) {
            for (; DAT_03008d74 < 0x19; DAT_03008d74 = DAT_03008d74 + 8) {
              DAT_03008b64 = DAT_03008b64 << 8 | (uint)*DAT_03006cf0;
              DAT_03006cf0 = DAT_03006cf0 + 1;
            }
          }
          DAT_03008d74 = DAT_03008d74 + -3;
          uVar4 = DAT_03008b64 >> ((byte)DAT_03008d74 & 0x1f);
          DAT_03008b64 = DAT_03008b64 - (uVar4 << ((byte)DAT_03008d74 & 0x1f));
          iVar5 = iVar6 * 0x40 + iVar9;
          puVar10[iVar9] = (float)(int)(uVar4 - 3) * *(float *)(&DAT_03007064 + iVar5 * 4);
          DAT_03008d74 = DAT_03008d74 + -3;
          uVar4 = DAT_03008b64 >> ((byte)DAT_03008d74 & 0x1f);
          DAT_03008b64 = DAT_03008b64 - (uVar4 << ((byte)DAT_03008d74 & 0x1f));
          puVar10[iVar9 + 0x40] = (float)(int)(uVar4 - 3) * *(float *)(&DAT_03007064 + iVar5 * 4);
          DAT_03008d74 = DAT_03008d74 + -3;
          _DAT_03008ef8 = DAT_03008b64 >> ((byte)DAT_03008d74 & 0x1f);
          DAT_03008b64 = DAT_03008b64 - (_DAT_03008ef8 << ((byte)DAT_03008d74 & 0x1f));
          puVar10[iVar9 + 0x80] =
               (float)(int)(_DAT_03008ef8 - 3) * *(float *)(&DAT_03007064 + iVar5 * 4);
          break;
        case (undefined *)0x47254e:
          if (DAT_03008d74 < 10) {
            for (; DAT_03008d74 < 0x19; DAT_03008d74 = DAT_03008d74 + 8) {
              DAT_03008b64 = DAT_03008b64 << 8 | (uint)*DAT_03006cf0;
              DAT_03006cf0 = DAT_03006cf0 + 1;
            }
          }
          DAT_03008d74 = DAT_03008d74 + -10;
          uVar4 = DAT_03008b64 >> ((byte)DAT_03008d74 & 0x1f);
          DAT_03008b64 = DAT_03008b64 - (uVar4 << ((byte)DAT_03008d74 & 0x1f));
          pfVar1 = (float *)(&DAT_03007064 + (iVar6 * 0x40 + iVar9) * 4);
          _DAT_03008ef8 = uVar4;
          puVar10[iVar9] = (float)(int)(short)(&DAT_03007364)[uVar4 * 3] * *pfVar1;
          puVar10[iVar9 + 0x40] = (float)(int)(short)(&DAT_03007366)[uVar4 * 3] * *pfVar1;
          puVar10[iVar9 + 0x80] = (float)(int)(short)(&DAT_03007368)[uVar4 * 3] * *pfVar1;
          break;
        case (undefined *)0x472611:
          if (DAT_03008d74 < 0xc) {
            for (; DAT_03008d74 < 0x19; DAT_03008d74 = DAT_03008d74 + 8) {
              DAT_03008b64 = DAT_03008b64 << 8 | (uint)*DAT_03006cf0;
              DAT_03006cf0 = DAT_03006cf0 + 1;
            }
          }
          DAT_03008d74 = DAT_03008d74 + -4;
          uVar4 = DAT_03008b64 >> ((byte)DAT_03008d74 & 0x1f);
          DAT_03008b64 = DAT_03008b64 - (uVar4 << ((byte)DAT_03008d74 & 0x1f));
          iVar5 = iVar6 * 0x40 + iVar9;
          puVar10[iVar9] = (float)(int)(uVar4 - 7) * *(float *)(&DAT_03007064 + iVar5 * 4);
          DAT_03008d74 = DAT_03008d74 + -4;
          uVar4 = DAT_03008b64 >> ((byte)DAT_03008d74 & 0x1f);
          DAT_03008b64 = DAT_03008b64 - (uVar4 << ((byte)DAT_03008d74 & 0x1f));
          puVar10[iVar9 + 0x40] = (float)(int)(uVar4 - 7) * *(float *)(&DAT_03007064 + iVar5 * 4);
          DAT_03008d74 = DAT_03008d74 + -4;
          _DAT_03008ef8 = DAT_03008b64 >> ((byte)DAT_03008d74 & 0x1f);
          DAT_03008b64 = DAT_03008b64 - (_DAT_03008ef8 << ((byte)DAT_03008d74 & 0x1f));
          puVar10[iVar9 + 0x80] =
               (float)(int)(_DAT_03008ef8 - 7) * *(float *)(&DAT_03007064 + iVar5 * 4);
          break;
        case (undefined *)0x472718:
          if (DAT_03008d74 < 0xf) {
            for (; DAT_03008d74 < 0x19; DAT_03008d74 = DAT_03008d74 + 8) {
              DAT_03008b64 = DAT_03008b64 << 8 | (uint)*DAT_03006cf0;
              DAT_03006cf0 = DAT_03006cf0 + 1;
            }
          }
          DAT_03008d74 = DAT_03008d74 + -5;
          uVar4 = DAT_03008b64 >> ((byte)DAT_03008d74 & 0x1f);
          DAT_03008b64 = DAT_03008b64 - (uVar4 << ((byte)DAT_03008d74 & 0x1f));
          iVar5 = iVar6 * 0x40 + iVar9;
          puVar10[iVar9] = (float)(int)(uVar4 - 0xf) * *(float *)(&DAT_03007064 + iVar5 * 4);
          DAT_03008d74 = DAT_03008d74 + -5;
          uVar4 = DAT_03008b64 >> ((byte)DAT_03008d74 & 0x1f);
          DAT_03008b64 = DAT_03008b64 - (uVar4 << ((byte)DAT_03008d74 & 0x1f));
          puVar10[iVar9 + 0x40] = (float)(int)(uVar4 - 0xf) * *(float *)(&DAT_03007064 + iVar5 * 4);
          DAT_03008d74 = DAT_03008d74 + -5;
          _DAT_03008ef8 = DAT_03008b64 >> ((byte)DAT_03008d74 & 0x1f);
          DAT_03008b64 = DAT_03008b64 - (_DAT_03008ef8 << ((byte)DAT_03008d74 & 0x1f));
          puVar10[iVar9 + 0x80] =
               (float)(int)(_DAT_03008ef8 - 0xf) * *(float *)(&DAT_03007064 + iVar5 * 4);
          break;
        case (undefined *)0x47281f:
          if (DAT_03008d74 < 0x12) {
            for (; DAT_03008d74 < 0x19; DAT_03008d74 = DAT_03008d74 + 8) {
              DAT_03008b64 = DAT_03008b64 << 8 | (uint)*DAT_03006cf0;
              DAT_03006cf0 = DAT_03006cf0 + 1;
            }
          }
          DAT_03008d74 = DAT_03008d74 + -6;
          uVar4 = DAT_03008b64 >> ((byte)DAT_03008d74 & 0x1f);
          DAT_03008b64 = DAT_03008b64 - (uVar4 << ((byte)DAT_03008d74 & 0x1f));
          iVar5 = iVar6 * 0x40 + iVar9;
          puVar10[iVar9] = (float)(int)(uVar4 - 0x1f) * *(float *)(&DAT_03007064 + iVar5 * 4);
          DAT_03008d74 = DAT_03008d74 + -6;
          uVar4 = DAT_03008b64 >> ((byte)DAT_03008d74 & 0x1f);
          DAT_03008b64 = DAT_03008b64 - (uVar4 << ((byte)DAT_03008d74 & 0x1f));
          puVar10[iVar9 + 0x40] = (float)(int)(uVar4 - 0x1f) * *(float *)(&DAT_03007064 + iVar5 * 4)
          ;
          DAT_03008d74 = DAT_03008d74 + -6;
          _DAT_03008ef8 = DAT_03008b64 >> ((byte)DAT_03008d74 & 0x1f);
          DAT_03008b64 = DAT_03008b64 - (_DAT_03008ef8 << ((byte)DAT_03008d74 & 0x1f));
          puVar10[iVar9 + 0x80] =
               (float)(int)(_DAT_03008ef8 - 0x1f) * *(float *)(&DAT_03007064 + iVar5 * 4);
          break;
        case (undefined *)0x472926:
          if (DAT_03008d74 < 0x15) {
            for (; DAT_03008d74 < 0x19; DAT_03008d74 = DAT_03008d74 + 8) {
              DAT_03008b64 = DAT_03008b64 << 8 | (uint)*DAT_03006cf0;
              DAT_03006cf0 = DAT_03006cf0 + 1;
            }
          }
          DAT_03008d74 = DAT_03008d74 + -7;
          uVar4 = DAT_03008b64 >> ((byte)DAT_03008d74 & 0x1f);
          DAT_03008b64 = DAT_03008b64 - (uVar4 << ((byte)DAT_03008d74 & 0x1f));
          iVar5 = iVar6 * 0x40 + iVar9;
          puVar10[iVar9] = (float)(int)(uVar4 - 0x3f) * *(float *)(&DAT_03007064 + iVar5 * 4);
          DAT_03008d74 = DAT_03008d74 + -7;
          uVar4 = DAT_03008b64 >> ((byte)DAT_03008d74 & 0x1f);
          DAT_03008b64 = DAT_03008b64 - (uVar4 << ((byte)DAT_03008d74 & 0x1f));
          puVar10[iVar9 + 0x40] = (float)(int)(uVar4 - 0x3f) * *(float *)(&DAT_03007064 + iVar5 * 4)
          ;
          DAT_03008d74 = DAT_03008d74 + -7;
          _DAT_03008ef8 = DAT_03008b64 >> ((byte)DAT_03008d74 & 0x1f);
          DAT_03008b64 = DAT_03008b64 - (_DAT_03008ef8 << ((byte)DAT_03008d74 & 0x1f));
          puVar10[iVar9 + 0x80] =
               (float)(int)(_DAT_03008ef8 - 0x3f) * *(float *)(&DAT_03007064 + iVar5 * 4);
          break;
        case (undefined *)0x472a2d:
          if (DAT_03008d74 < 0x18) {
            do {
              DAT_03008d74 = DAT_03008d74 + 8;
              DAT_03008b64 = DAT_03008b64 << 8 | (uint)*DAT_03006cf0;
              DAT_03006cf0 = DAT_03006cf0 + 1;
            } while (DAT_03008d74 < 0x19);
          }
          DAT_03008d74 = DAT_03008d74 + -8;
          uVar4 = DAT_03008b64 >> ((byte)DAT_03008d74 & 0x1f);
          DAT_03008b64 = DAT_03008b64 - (uVar4 << ((byte)DAT_03008d74 & 0x1f));
          iVar5 = iVar6 * 0x40 + iVar9;
          puVar10[iVar9] = (float)(int)(uVar4 - 0x7f) * *(float *)(&DAT_03007064 + iVar5 * 4);
          DAT_03008d74 = DAT_03008d74 + -8;
          uVar4 = DAT_03008b64 >> ((byte)DAT_03008d74 & 0x1f);
          DAT_03008b64 = DAT_03008b64 - (uVar4 << ((byte)DAT_03008d74 & 0x1f));
          puVar10[iVar9 + 0x40] = (float)(int)(uVar4 - 0x7f) * *(float *)(&DAT_03007064 + iVar5 * 4)
          ;
          DAT_03008d74 = DAT_03008d74 + -8;
          _DAT_03008ef8 = DAT_03008b64 >> ((byte)DAT_03008d74 & 0x1f);
          DAT_03008b64 = DAT_03008b64 - (_DAT_03008ef8 << ((byte)DAT_03008d74 & 0x1f));
          puVar10[iVar9 + 0x80] =
               (float)(int)(_DAT_03008ef8 - 0x7f) * *(float *)(&DAT_03007064 + iVar5 * 4);
          break;
        case (undefined *)0x472b27:
          if (DAT_03008d74 < 0x12) {
            for (; DAT_03008d74 < 0x19; DAT_03008d74 = DAT_03008d74 + 8) {
              DAT_03008b64 = DAT_03008b64 << 8 | (uint)*DAT_03006cf0;
              DAT_03006cf0 = DAT_03006cf0 + 1;
            }
          }
          DAT_03008d74 = DAT_03008d74 + -9;
          uVar4 = DAT_03008b64 >> ((byte)DAT_03008d74 & 0x1f);
          DAT_03008b64 = DAT_03008b64 - (uVar4 << ((byte)DAT_03008d74 & 0x1f));
          iVar5 = iVar6 * 0x40 + iVar9;
          puVar10[iVar9] = (float)(int)(uVar4 - 0xff) * *(float *)(&DAT_03007064 + iVar5 * 4);
          DAT_03008d74 = DAT_03008d74 + -9;
          uVar4 = DAT_03008b64 >> ((byte)DAT_03008d74 & 0x1f);
          DAT_03008b64 = DAT_03008b64 - (uVar4 << ((byte)DAT_03008d74 & 0x1f));
          puVar10[iVar9 + 0x40] = (float)(int)(uVar4 - 0xff) * *(float *)(&DAT_03007064 + iVar5 * 4)
          ;
          if (DAT_03008d74 < 9) {
            for (; DAT_03008d74 < 0x19; DAT_03008d74 = DAT_03008d74 + 8) {
              DAT_03008b64 = DAT_03008b64 << 8 | (uint)*DAT_03006cf0;
              DAT_03006cf0 = DAT_03006cf0 + 1;
            }
          }
          DAT_03008d74 = DAT_03008d74 + -9;
          _DAT_03008ef8 = DAT_03008b64 >> ((byte)DAT_03008d74 & 0x1f);
          DAT_03008b64 = DAT_03008b64 - (_DAT_03008ef8 << ((byte)DAT_03008d74 & 0x1f));
          puVar10[iVar9 + 0x80] =
               (float)(int)(_DAT_03008ef8 - 0xff) * *(float *)(&DAT_03007064 + iVar5 * 4);
          break;
        case (undefined *)0x472c7c:
          if (DAT_03008d74 < 0x14) {
            for (; DAT_03008d74 < 0x19; DAT_03008d74 = DAT_03008d74 + 8) {
              DAT_03008b64 = DAT_03008b64 << 8 | (uint)*DAT_03006cf0;
              DAT_03006cf0 = DAT_03006cf0 + 1;
            }
          }
          DAT_03008d74 = DAT_03008d74 + -10;
          uVar4 = DAT_03008b64 >> ((byte)DAT_03008d74 & 0x1f);
          DAT_03008b64 = DAT_03008b64 - (uVar4 << ((byte)DAT_03008d74 & 0x1f));
          iVar5 = iVar6 * 0x40 + iVar9;
          puVar10[iVar9] = (float)(int)(uVar4 - 0x1ff) * *(float *)(&DAT_03007064 + iVar5 * 4);
          DAT_03008d74 = DAT_03008d74 + -10;
          uVar4 = DAT_03008b64 >> ((byte)DAT_03008d74 & 0x1f);
          DAT_03008b64 = DAT_03008b64 - (uVar4 << ((byte)DAT_03008d74 & 0x1f));
          puVar10[iVar9 + 0x40] =
               (float)(int)(uVar4 - 0x1ff) * *(float *)(&DAT_03007064 + iVar5 * 4);
          if (DAT_03008d74 < 10) {
            for (; DAT_03008d74 < 0x19; DAT_03008d74 = DAT_03008d74 + 8) {
              DAT_03008b64 = DAT_03008b64 << 8 | (uint)*DAT_03006cf0;
              DAT_03006cf0 = DAT_03006cf0 + 1;
            }
          }
          DAT_03008d74 = DAT_03008d74 + -10;
          _DAT_03008ef8 = DAT_03008b64 >> ((byte)DAT_03008d74 & 0x1f);
          DAT_03008b64 = DAT_03008b64 - (_DAT_03008ef8 << ((byte)DAT_03008d74 & 0x1f));
          puVar10[iVar9 + 0x80] =
               (float)(int)(_DAT_03008ef8 - 0x1ff) * *(float *)(&DAT_03007064 + iVar5 * 4);
          break;
        case (undefined *)0x472dd1:
          if (DAT_03008d74 < 0x16) {
            for (; DAT_03008d74 < 0x19; DAT_03008d74 = DAT_03008d74 + 8) {
              DAT_03008b64 = DAT_03008b64 << 8 | (uint)*DAT_03006cf0;
              DAT_03006cf0 = DAT_03006cf0 + 1;
            }
          }
          DAT_03008d74 = DAT_03008d74 + -0xb;
          uVar4 = DAT_03008b64 >> ((byte)DAT_03008d74 & 0x1f);
          DAT_03008b64 = DAT_03008b64 - (uVar4 << ((byte)DAT_03008d74 & 0x1f));
          iVar5 = iVar6 * 0x40 + iVar9;
          puVar10[iVar9] = (float)(int)(uVar4 - 0x3ff) * *(float *)(&DAT_03007064 + iVar5 * 4);
          DAT_03008d74 = DAT_03008d74 + -0xb;
          uVar4 = DAT_03008b64 >> ((byte)DAT_03008d74 & 0x1f);
          DAT_03008b64 = DAT_03008b64 - (uVar4 << ((byte)DAT_03008d74 & 0x1f));
          puVar10[iVar9 + 0x40] =
               (float)(int)(uVar4 - 0x3ff) * *(float *)(&DAT_03007064 + iVar5 * 4);
          if (DAT_03008d74 < 0xb) {
            for (; DAT_03008d74 < 0x19; DAT_03008d74 = DAT_03008d74 + 8) {
              DAT_03008b64 = DAT_03008b64 << 8 | (uint)*DAT_03006cf0;
              DAT_03006cf0 = DAT_03006cf0 + 1;
            }
          }
          DAT_03008d74 = DAT_03008d74 + -0xb;
          _DAT_03008ef8 = DAT_03008b64 >> ((byte)DAT_03008d74 & 0x1f);
          DAT_03008b64 = DAT_03008b64 - (_DAT_03008ef8 << ((byte)DAT_03008d74 & 0x1f));
          puVar10[iVar9 + 0x80] =
               (float)(int)(_DAT_03008ef8 - 0x3ff) * *(float *)(&DAT_03007064 + iVar5 * 4);
          break;
        case (undefined *)0x472f26:
          if (DAT_03008d74 < 0x18) {
            do {
              DAT_03008d74 = DAT_03008d74 + 8;
              DAT_03008b64 = DAT_03008b64 << 8 | (uint)*DAT_03006cf0;
              DAT_03006cf0 = DAT_03006cf0 + 1;
            } while (DAT_03008d74 < 0x19);
          }
          DAT_03008d74 = DAT_03008d74 + -0xc;
          uVar4 = DAT_03008b64 >> ((byte)DAT_03008d74 & 0x1f);
          DAT_03008b64 = DAT_03008b64 - (uVar4 << ((byte)DAT_03008d74 & 0x1f));
          iVar5 = iVar6 * 0x40 + iVar9;
          puVar10[iVar9] = (float)(int)(uVar4 - 0x7ff) * *(float *)(&DAT_03007064 + iVar5 * 4);
          DAT_03008d74 = DAT_03008d74 + -0xc;
          uVar4 = DAT_03008b64 >> ((byte)DAT_03008d74 & 0x1f);
          DAT_03008b64 = DAT_03008b64 - (uVar4 << ((byte)DAT_03008d74 & 0x1f));
          puVar10[iVar9 + 0x40] =
               (float)(int)(uVar4 - 0x7ff) * *(float *)(&DAT_03007064 + iVar5 * 4);
          if (DAT_03008d74 < 0xc) {
            for (; DAT_03008d74 < 0x19; DAT_03008d74 = DAT_03008d74 + 8) {
              DAT_03008b64 = DAT_03008b64 << 8 | (uint)*DAT_03006cf0;
              DAT_03006cf0 = DAT_03006cf0 + 1;
            }
          }
          DAT_03008d74 = DAT_03008d74 + -0xc;
          _DAT_03008ef8 = DAT_03008b64 >> ((byte)DAT_03008d74 & 0x1f);
          DAT_03008b64 = DAT_03008b64 - (_DAT_03008ef8 << ((byte)DAT_03008d74 & 0x1f));
          puVar10[iVar9 + 0x80] =
               (float)(int)(_DAT_03008ef8 - 0x7ff) * *(float *)(&DAT_03007064 + iVar5 * 4);
          break;
        case (undefined *)0x47306e:
          pfVar1 = (float *)(&DAT_03007064 + (iVar6 * 0x40 + iVar9) * 4);
          iVar5 = FUN_00471d10(0xd);
          puVar10[iVar9] = (float)(iVar5 + -0xfff) * *pfVar1;
          iVar5 = FUN_00471d10(0xd);
          puVar10[iVar9 + 0x40] = (float)(iVar5 + -0xfff) * *pfVar1;
          iVar5 = FUN_00471d10(0xd);
          puVar10[iVar9 + 0x80] = (float)(iVar5 + -0xfff) * *pfVar1;
          break;
        case (undefined *)0x4730da:
          pfVar1 = (float *)(&DAT_03007064 + (iVar6 * 0x40 + iVar9) * 4);
          iVar5 = FUN_00471d10(0xe);
          puVar10[iVar9] = (float)(iVar5 + -0x1fff) * *pfVar1;
          iVar5 = FUN_00471d10(0xe);
          puVar10[iVar9 + 0x40] = (float)(iVar5 + -0x1fff) * *pfVar1;
          iVar5 = FUN_00471d10(0xe);
          puVar10[iVar9 + 0x80] = (float)(iVar5 + -0x1fff) * *pfVar1;
          break;
        case (undefined *)0x473146:
          pfVar1 = (float *)(&DAT_03007064 + (iVar6 * 0x40 + iVar9) * 4);
          iVar5 = FUN_00471d10(0xf);
          puVar10[iVar9] = (float)(iVar5 + -0x3fff) * *pfVar1;
          iVar5 = FUN_00471d10(0xf);
          puVar10[iVar9 + 0x40] = (float)(iVar5 + -0x3fff) * *pfVar1;
          iVar5 = FUN_00471d10(0xf);
          puVar10[iVar9 + 0x80] = (float)(iVar5 + -0x3fff) * *pfVar1;
          break;
        case (undefined *)0x4731b2:
          pfVar1 = (float *)(&DAT_03007064 + (iVar6 * 0x40 + iVar9) * 4);
          iVar5 = FUN_00471d10(0x10);
          puVar10[iVar9] = (float)(iVar5 + -0x7fff) * *pfVar1;
          iVar5 = FUN_00471d10(0x10);
          puVar10[iVar9 + 0x40] = (float)(iVar5 + -0x7fff) * *pfVar1;
          iVar5 = FUN_00471d10(0x10);
          puVar10[iVar9 + 0x80] = (float)(iVar5 + -0x7fff) * *pfVar1;
          break;
        case (undefined *)0x47321e:
          puVar10[iVar9] = 0;
          puVar10[iVar9 + 1] = 0;
          puVar10[iVar9 + 0x40] = 0;
          puVar10[iVar9 + 0x41] = 0;
          puVar10[iVar9 + 0x80] = 0;
          puVar10[iVar9 + 0x81] = 0;
          goto LAB_00473ae6;
        case (undefined *)0x473248:
          iVar5 = FUN_00471d10(5);
          iVar7 = iVar6 * 0x40 + iVar9;
          iVar8 = iVar7 * 4;
          puVar10[iVar9] =
               (float)(int)(char)(&DAT_03006ff8)[iVar5 * 3] * *(float *)(&DAT_03007064 + iVar8);
          puVar10[iVar9 + 1] =
               (float)(int)(char)(&DAT_03006ff8)[iVar5 * 3] * (float)(&DAT_03007068)[iVar7];
          puVar10[iVar9 + 0x40] =
               (float)(int)(char)(&DAT_03006ff9)[iVar5 * 3] * *(float *)(&DAT_03007064 + iVar8);
          puVar10[iVar9 + 0x41] =
               (float)(int)(char)(&DAT_03006ff9)[iVar5 * 3] * (float)(&DAT_03007068)[iVar7];
          puVar10[iVar9 + 0x80] =
               (float)(int)(char)(&DAT_03006ffa)[iVar5 * 3] * *(float *)(&DAT_03007064 + iVar8);
          fVar3 = (float)(int)(char)(&DAT_03006ffa)[iVar5 * 3] * (float)(&DAT_03007068)[iVar7];
          goto LAB_00473adf;
        case (undefined *)0x4732fe:
          iVar5 = FUN_00471d10(7);
          iVar7 = iVar6 * 0x40 + iVar9;
          iVar8 = iVar7 * 4;
          puVar10[iVar9] =
               (float)(int)(char)(&DAT_03008d78)[iVar5 * 3] * *(float *)(&DAT_03007064 + iVar8);
          puVar10[iVar9 + 1] =
               (float)(int)(char)(&DAT_03008d78)[iVar5 * 3] * (float)(&DAT_03007068)[iVar7];
          puVar10[iVar9 + 0x40] =
               (float)(int)(char)(&DAT_03008d79)[iVar5 * 3] * *(float *)(&DAT_03007064 + iVar8);
          puVar10[iVar9 + 0x41] =
               (float)(int)(char)(&DAT_03008d79)[iVar5 * 3] * (float)(&DAT_03007068)[iVar7];
          puVar10[iVar9 + 0x80] =
               (float)(int)(char)(&DAT_03008d7a)[iVar5 * 3] * *(float *)(&DAT_03007064 + iVar8);
          fVar3 = (float)(int)(char)(&DAT_03008d7a)[iVar5 * 3] * (float)(&DAT_03007068)[iVar7];
          goto LAB_00473adf;
        case (undefined *)0x4733b4:
          iVar5 = FUN_00471d10(3);
          iVar7 = iVar6 * 0x40 + iVar9;
          iVar8 = iVar7 * 4;
          puVar10[iVar9] = (float)(iVar5 + -3) * *(float *)(&DAT_03007064 + iVar8);
          puVar10[iVar9 + 1] = (float)(iVar5 + -3) * (float)(&DAT_03007068)[iVar7];
          iVar5 = FUN_00471d10(3);
          puVar10[iVar9 + 0x40] = (float)(iVar5 + -3) * *(float *)(&DAT_03007064 + iVar8);
          puVar10[iVar9 + 0x41] = (float)(iVar5 + -3) * (float)(&DAT_03007068)[iVar7];
          iVar5 = FUN_00471d10(3);
          iVar5 = iVar5 + -3;
          goto LAB_00473ac2;
        case (undefined *)0x473425:
          iVar5 = FUN_00471d10(10);
          iVar7 = iVar6 * 0x40 + iVar9;
          iVar8 = iVar7 * 4;
          puVar10[iVar9] =
               (float)(int)(short)(&DAT_03007364)[iVar5 * 3] * *(float *)(&DAT_03007064 + iVar8);
          puVar10[iVar9 + 1] =
               (float)(int)(short)(&DAT_03007364)[iVar5 * 3] * (float)(&DAT_03007068)[iVar7];
          puVar10[iVar9 + 0x40] =
               (float)(int)(short)(&DAT_03007366)[iVar5 * 3] * *(float *)(&DAT_03007064 + iVar8);
          puVar10[iVar9 + 0x41] =
               (float)(int)(short)(&DAT_03007366)[iVar5 * 3] * (float)(&DAT_03007068)[iVar7];
          puVar10[iVar9 + 0x80] =
               (float)(int)(short)(&DAT_03007368)[iVar5 * 3] * *(float *)(&DAT_03007064 + iVar8);
          fVar3 = (float)(int)(short)(&DAT_03007368)[iVar5 * 3] * (float)(&DAT_03007068)[iVar7];
          goto LAB_00473adf;
        case (undefined *)0x4734dd:
          iVar5 = FUN_00471d10(4);
          iVar7 = iVar6 * 0x40 + iVar9;
          iVar8 = iVar7 * 4;
          puVar10[iVar9] = (float)(iVar5 + -7) * *(float *)(&DAT_03007064 + iVar8);
          puVar10[iVar9 + 1] = (float)(iVar5 + -7) * (float)(&DAT_03007068)[iVar7];
          iVar5 = FUN_00471d10(4);
          puVar10[iVar9 + 0x40] = (float)(iVar5 + -7) * *(float *)(&DAT_03007064 + iVar8);
          puVar10[iVar9 + 0x41] = (float)(iVar5 + -7) * (float)(&DAT_03007068)[iVar7];
          iVar5 = FUN_00471d10(4);
          iVar5 = iVar5 + -7;
          goto LAB_00473ac2;
        case (undefined *)0x47354e:
          iVar5 = FUN_00471d10(5);
          iVar7 = iVar6 * 0x40 + iVar9;
          iVar8 = iVar7 * 4;
          puVar10[iVar9] = (float)(iVar5 + -0xf) * *(float *)(&DAT_03007064 + iVar8);
          puVar10[iVar9 + 1] = (float)(iVar5 + -0xf) * (float)(&DAT_03007068)[iVar7];
          iVar5 = FUN_00471d10(5);
          puVar10[iVar9 + 0x40] = (float)(iVar5 + -0xf) * *(float *)(&DAT_03007064 + iVar8);
          puVar10[iVar9 + 0x41] = (float)(iVar5 + -0xf) * (float)(&DAT_03007068)[iVar7];
          iVar5 = FUN_00471d10(5);
          iVar5 = iVar5 + -0xf;
          goto LAB_00473ac2;
        case (undefined *)0x4735bf:
          iVar5 = FUN_00471d10(6);
          iVar7 = iVar6 * 0x40 + iVar9;
          iVar8 = iVar7 * 4;
          puVar10[iVar9] = (float)(iVar5 + -0x1f) * *(float *)(&DAT_03007064 + iVar8);
          puVar10[iVar9 + 1] = (float)(iVar5 + -0x1f) * (float)(&DAT_03007068)[iVar7];
          iVar5 = FUN_00471d10(6);
          puVar10[iVar9 + 0x40] = (float)(iVar5 + -0x1f) * *(float *)(&DAT_03007064 + iVar8);
          puVar10[iVar9 + 0x41] = (float)(iVar5 + -0x1f) * (float)(&DAT_03007068)[iVar7];
          iVar5 = FUN_00471d10(6);
          iVar5 = iVar5 + -0x1f;
          goto LAB_00473ac2;
        case (undefined *)0x473630:
          iVar5 = FUN_00471d10(7);
          iVar7 = iVar6 * 0x40 + iVar9;
          iVar8 = iVar7 * 4;
          puVar10[iVar9] = (float)(iVar5 + -0x3f) * *(float *)(&DAT_03007064 + iVar8);
          puVar10[iVar9 + 1] = (float)(iVar5 + -0x3f) * (float)(&DAT_03007068)[iVar7];
          iVar5 = FUN_00471d10(7);
          puVar10[iVar9 + 0x40] = (float)(iVar5 + -0x3f) * *(float *)(&DAT_03007064 + iVar8);
          puVar10[iVar9 + 0x41] = (float)(iVar5 + -0x3f) * (float)(&DAT_03007068)[iVar7];
          iVar5 = FUN_00471d10(7);
          iVar5 = iVar5 + -0x3f;
          goto LAB_00473ac2;
        case (undefined *)0x4736a1:
          iVar5 = FUN_00471d10(8);
          iVar7 = iVar6 * 0x40 + iVar9;
          iVar8 = iVar7 * 4;
          puVar10[iVar9] = (float)(iVar5 + -0x7f) * *(float *)(&DAT_03007064 + iVar8);
          puVar10[iVar9 + 1] = (float)(iVar5 + -0x7f) * (float)(&DAT_03007068)[iVar7];
          iVar5 = FUN_00471d10(8);
          puVar10[iVar9 + 0x40] = (float)(iVar5 + -0x7f) * *(float *)(&DAT_03007064 + iVar8);
          puVar10[iVar9 + 0x41] = (float)(iVar5 + -0x7f) * (float)(&DAT_03007068)[iVar7];
          iVar5 = FUN_00471d10(8);
          iVar5 = iVar5 + -0x7f;
          goto LAB_00473ac2;
        case (undefined *)0x473712:
          iVar5 = FUN_00471d10(9);
          iVar7 = iVar6 * 0x40 + iVar9;
          iVar8 = iVar7 * 4;
          puVar10[iVar9] = (float)(iVar5 + -0xff) * *(float *)(&DAT_03007064 + iVar8);
          puVar10[iVar9 + 1] = (float)(iVar5 + -0xff) * (float)(&DAT_03007068)[iVar7];
          iVar5 = FUN_00471d10(9);
          puVar10[iVar9 + 0x40] = (float)(iVar5 + -0xff) * *(float *)(&DAT_03007064 + iVar8);
          puVar10[iVar9 + 0x41] = (float)(iVar5 + -0xff) * (float)(&DAT_03007068)[iVar7];
          iVar5 = FUN_00471d10(9);
          iVar5 = iVar5 + -0xff;
          goto LAB_00473ac2;
        case (undefined *)0x473789:
          iVar5 = FUN_00471d10(10);
          iVar7 = iVar6 * 0x40 + iVar9;
          iVar8 = iVar7 * 4;
          puVar10[iVar9] = (float)(iVar5 + -0x1ff) * *(float *)(&DAT_03007064 + iVar8);
          puVar10[iVar9 + 1] = (float)(iVar5 + -0x1ff) * (float)(&DAT_03007068)[iVar7];
          iVar5 = FUN_00471d10(10);
          puVar10[iVar9 + 0x40] = (float)(iVar5 + -0x1ff) * *(float *)(&DAT_03007064 + iVar8);
          puVar10[iVar9 + 0x41] = (float)(iVar5 + -0x1ff) * (float)(&DAT_03007068)[iVar7];
          iVar5 = FUN_00471d10(10);
          iVar5 = iVar5 + -0x1ff;
          goto LAB_00473ac2;
        case (undefined *)0x473800:
          iVar5 = FUN_00471d10(0xb);
          iVar7 = iVar6 * 0x40 + iVar9;
          iVar8 = iVar7 * 4;
          puVar10[iVar9] = (float)(iVar5 + -0x3ff) * *(float *)(&DAT_03007064 + iVar8);
          puVar10[iVar9 + 1] = (float)(iVar5 + -0x3ff) * (float)(&DAT_03007068)[iVar7];
          iVar5 = FUN_00471d10(0xb);
          puVar10[iVar9 + 0x40] = (float)(iVar5 + -0x3ff) * *(float *)(&DAT_03007064 + iVar8);
          puVar10[iVar9 + 0x41] = (float)(iVar5 + -0x3ff) * (float)(&DAT_03007068)[iVar7];
          iVar5 = FUN_00471d10(0xb);
          iVar5 = iVar5 + -0x3ff;
          goto LAB_00473ac2;
        case (undefined *)0x473877:
          iVar5 = FUN_00471d10(0xc);
          iVar7 = iVar6 * 0x40 + iVar9;
          iVar8 = iVar7 * 4;
          puVar10[iVar9] = (float)(iVar5 + -0x7ff) * *(float *)(&DAT_03007064 + iVar8);
          puVar10[iVar9 + 1] = (float)(iVar5 + -0x7ff) * (float)(&DAT_03007068)[iVar7];
          iVar5 = FUN_00471d10(0xc);
          puVar10[iVar9 + 0x40] = (float)(iVar5 + -0x7ff) * *(float *)(&DAT_03007064 + iVar8);
          puVar10[iVar9 + 0x41] = (float)(iVar5 + -0x7ff) * (float)(&DAT_03007068)[iVar7];
          iVar5 = FUN_00471d10(0xc);
          iVar5 = iVar5 + -0x7ff;
          goto LAB_00473ac2;
        case (undefined *)0x4738ee:
          iVar5 = FUN_00471d10(0xd);
          iVar7 = iVar6 * 0x40 + iVar9;
          iVar8 = iVar7 * 4;
          puVar10[iVar9] = (float)(iVar5 + -0xfff) * *(float *)(&DAT_03007064 + iVar8);
          puVar10[iVar9 + 1] = (float)(iVar5 + -0xfff) * (float)(&DAT_03007068)[iVar7];
          iVar5 = FUN_00471d10(0xd);
          puVar10[iVar9 + 0x40] = (float)(iVar5 + -0xfff) * *(float *)(&DAT_03007064 + iVar8);
          puVar10[iVar9 + 0x41] = (float)(iVar5 + -0xfff) * (float)(&DAT_03007068)[iVar7];
          iVar5 = FUN_00471d10(0xd);
          iVar5 = iVar5 + -0xfff;
          goto LAB_00473ac2;
        case (undefined *)0x473965:
          iVar5 = FUN_00471d10(0xe);
          iVar7 = iVar6 * 0x40 + iVar9;
          iVar8 = iVar7 * 4;
          puVar10[iVar9] = (float)(iVar5 + -0x1fff) * *(float *)(&DAT_03007064 + iVar8);
          puVar10[iVar9 + 1] = (float)(iVar5 + -0x1fff) * (float)(&DAT_03007068)[iVar7];
          iVar5 = FUN_00471d10(0xe);
          puVar10[iVar9 + 0x40] = (float)(iVar5 + -0x1fff) * *(float *)(&DAT_03007064 + iVar8);
          puVar10[iVar9 + 0x41] = (float)(iVar5 + -0x1fff) * (float)(&DAT_03007068)[iVar7];
          iVar5 = FUN_00471d10(0xe);
          iVar5 = iVar5 + -0x1fff;
          goto LAB_00473ac2;
        case (undefined *)0x4739dc:
          iVar5 = FUN_00471d10(0xf);
          iVar7 = iVar6 * 0x40 + iVar9;
          iVar8 = iVar7 * 4;
          puVar10[iVar9] = (float)(iVar5 + -0x3fff) * *(float *)(&DAT_03007064 + iVar8);
          puVar10[iVar9 + 1] = (float)(iVar5 + -0x3fff) * (float)(&DAT_03007068)[iVar7];
          iVar5 = FUN_00471d10(0xf);
          puVar10[iVar9 + 0x40] = (float)(iVar5 + -0x3fff) * *(float *)(&DAT_03007064 + iVar8);
          puVar10[iVar9 + 0x41] = (float)(iVar5 + -0x3fff) * (float)(&DAT_03007068)[iVar7];
          iVar5 = FUN_00471d10(0xf);
          iVar5 = iVar5 + -0x3fff;
          goto LAB_00473ac2;
        case (undefined *)0x473a50:
          iVar5 = FUN_00471d10(0x10);
          iVar7 = iVar6 * 0x40 + iVar9;
          iVar8 = iVar7 * 4;
          puVar10[iVar9] = (float)(iVar5 + -0x7fff) * *(float *)(&DAT_03007064 + iVar8);
          puVar10[iVar9 + 1] = (float)(iVar5 + -0x7fff) * (float)(&DAT_03007068)[iVar7];
          iVar5 = FUN_00471d10(0x10);
          puVar10[iVar9 + 0x40] = (float)(iVar5 + -0x7fff) * *(float *)(&DAT_03007064 + iVar8);
          puVar10[iVar9 + 0x41] = (float)(iVar5 + -0x7fff) * (float)(&DAT_03007068)[iVar7];
          iVar5 = FUN_00471d10(0x10);
          iVar5 = iVar5 + -0x7fff;
LAB_00473ac2:
          puVar10[iVar9 + 0x80] = (float)iVar5 * *(float *)(&DAT_03007064 + iVar8);
          fVar3 = (float)iVar5 * *(float *)((int)&DAT_03007068 + iVar8);
LAB_00473adf:
          puVar10[iVar9 + 0x81] = fVar3;
LAB_00473ae6:
          iVar9 = iVar9 + 1;
          break;
        case (undefined *)0x473afa:
          FUN_00473bd0(DAT_03008f44);
        case (undefined *)0x473b09:
          puVar10 = puVar10 + 0xc0;
          goto LAB_00473b0f;
        }
        puVar2 = &DAT_03008f90 + iVar9;
        iVar9 = iVar9 + 1;
        uVar4 = *puVar2;
      }
LAB_00473b0f:
      local_8 = local_8 + 1;
    } while (local_8 < 4);
    iVar6 = iVar6 + 1;
    if (2 < iVar6) {
      return;
    }
  } while( true );
}

