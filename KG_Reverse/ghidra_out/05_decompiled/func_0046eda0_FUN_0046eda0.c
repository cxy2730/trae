// Function: FUN_0046eda0
// Entry:    0046eda0
// Size:     6527 bytes
// Conv:     unknown
// Signature: undefined FUN_0046eda0(void)
// Decompiled by Ghidra 12.1.2


void FUN_0046eda0(void)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int local_4;
  
  puVar8 = &DAT_03001074;
  iVar5 = 0;
  do {
    local_4 = 0;
    do {
      iVar7 = 0;
      uVar3 = DAT_030039dc;
      while (uVar3 < 0x26) {
        switch((&switchD_0046edc6::switchdataD_00470720)[uVar3]) {
        case (undefined *)0x46edcd:
          puVar8[iVar7] = 0;
          puVar8[iVar7 + 0x40] = 0;
          puVar8[iVar7 + 0x80] = 0;
          break;
        case (undefined *)0x46ede5:
          if (DAT_03003784 < 5) {
            for (; DAT_03003784 < 0x19; DAT_03003784 = DAT_03003784 + 8) {
              DAT_03003474 = DAT_03003474 << 8 | (uint)*DAT_02fff1a0;
              DAT_02fff1a0 = DAT_02fff1a0 + 1;
            }
          }
          DAT_03003784 = DAT_03003784 + -5;
          DAT_03003908 = DAT_03003474 >> ((byte)DAT_03003784 & 0x1f);
          iVar4 = DAT_03003908 * 3;
          DAT_03003474 = DAT_03003474 - (DAT_03003908 << ((byte)DAT_03003784 & 0x1f));
          piVar1 = &DAT_02fff574 + iVar5 * 0x40 + iVar7;
          puVar8[iVar7] = (int)(char)(&DAT_02fff4c0)[iVar4] * *piVar1 >> 1;
          puVar8[iVar7 + 0x40] = (int)(char)(&DAT_02fff4c1)[iVar4] * *piVar1 >> 1;
          puVar8[iVar7 + 0x80] = (int)(char)(&DAT_02fff4c2)[iVar4] * *piVar1 >> 1;
          break;
        case (undefined *)0x46ee97:
          if (DAT_03003784 < 7) {
            for (; DAT_03003784 < 0x19; DAT_03003784 = DAT_03003784 + 8) {
              DAT_03003474 = DAT_03003474 << 8 | (uint)*DAT_02fff1a0;
              DAT_02fff1a0 = DAT_02fff1a0 + 1;
            }
          }
          DAT_03003784 = DAT_03003784 + -7;
          DAT_03003908 = DAT_03003474 >> ((byte)DAT_03003784 & 0x1f);
          iVar4 = DAT_03003908 * 3;
          DAT_03003474 = DAT_03003474 - (DAT_03003908 << ((byte)DAT_03003784 & 0x1f));
          piVar1 = &DAT_02fff574 + iVar5 * 0x40 + iVar7;
          puVar8[iVar7] = (int)(char)(&DAT_03003788)[iVar4] * *piVar1 >> 2;
          puVar8[iVar7 + 0x40] = (int)(char)(&DAT_03003789)[iVar4] * *piVar1 >> 2;
          puVar8[iVar7 + 0x80] = (int)(char)(&DAT_0300378a)[iVar4] * *piVar1 >> 2;
          break;
        case (undefined *)0x46ef4c:
          if (DAT_03003784 < 9) {
            for (; DAT_03003784 < 0x19; DAT_03003784 = DAT_03003784 + 8) {
              DAT_03003474 = DAT_03003474 << 8 | (uint)*DAT_02fff1a0;
              DAT_02fff1a0 = DAT_02fff1a0 + 1;
            }
          }
          DAT_03003784 = DAT_03003784 + -3;
          uVar3 = DAT_03003474 >> ((byte)DAT_03003784 & 0x1f);
          iVar4 = iVar5 * 0x40 + iVar7;
          DAT_03003474 = DAT_03003474 - (uVar3 << ((byte)DAT_03003784 & 0x1f));
          puVar8[iVar7] = (int)((uVar3 - 3) * (&DAT_02fff574)[iVar4]) >> 2;
          DAT_03003784 = DAT_03003784 + -3;
          uVar3 = DAT_03003474 >> ((byte)DAT_03003784 & 0x1f);
          DAT_03003474 = DAT_03003474 - (uVar3 << ((byte)DAT_03003784 & 0x1f));
          puVar8[iVar7 + 0x40] = (int)((uVar3 - 3) * (&DAT_02fff574)[iVar4]) >> 2;
          DAT_03003784 = DAT_03003784 + -3;
          DAT_03003908 = DAT_03003474 >> ((byte)DAT_03003784 & 0x1f);
          DAT_03003474 = DAT_03003474 - (DAT_03003908 << ((byte)DAT_03003784 & 0x1f));
          puVar8[iVar7 + 0x80] = (int)((DAT_03003908 - 3) * (&DAT_02fff574)[iVar4]) >> 2;
          break;
        case (undefined *)0x46f047:
          if (DAT_03003784 < 10) {
            for (; DAT_03003784 < 0x19; DAT_03003784 = DAT_03003784 + 8) {
              DAT_03003474 = DAT_03003474 << 8 | (uint)*DAT_02fff1a0;
              DAT_02fff1a0 = DAT_02fff1a0 + 1;
            }
          }
          DAT_03003784 = DAT_03003784 + -10;
          uVar3 = DAT_03003474 >> ((byte)DAT_03003784 & 0x1f);
          DAT_03003474 = DAT_03003474 - (uVar3 << ((byte)DAT_03003784 & 0x1f));
          iVar4 = iVar5 * 0x40 + iVar7;
          DAT_03003908 = uVar3;
          puVar8[iVar7] = (int)(short)(&DAT_02fff874)[uVar3 * 3] * (&DAT_02fff574)[iVar4] >> 3;
          puVar8[iVar7 + 0x40] =
               (int)(short)(&DAT_02fff876)[uVar3 * 3] * (&DAT_02fff574)[iVar4] >> 3;
          puVar8[iVar7 + 0x80] =
               (int)(short)(&DAT_02fff878)[uVar3 * 3] * (&DAT_02fff574)[iVar4] >> 3;
          break;
        case (undefined *)0x46f103:
          if (DAT_03003784 < 0xc) {
            for (; DAT_03003784 < 0x19; DAT_03003784 = DAT_03003784 + 8) {
              DAT_03003474 = DAT_03003474 << 8 | (uint)*DAT_02fff1a0;
              DAT_02fff1a0 = DAT_02fff1a0 + 1;
            }
          }
          DAT_03003784 = DAT_03003784 + -4;
          uVar3 = DAT_03003474 >> ((byte)DAT_03003784 & 0x1f);
          iVar4 = iVar5 * 0x40 + iVar7;
          DAT_03003474 = DAT_03003474 - (uVar3 << ((byte)DAT_03003784 & 0x1f));
          puVar8[iVar7] = (int)((uVar3 - 7) * (&DAT_02fff574)[iVar4]) >> 3;
          DAT_03003784 = DAT_03003784 + -4;
          uVar3 = DAT_03003474 >> ((byte)DAT_03003784 & 0x1f);
          DAT_03003474 = DAT_03003474 - (uVar3 << ((byte)DAT_03003784 & 0x1f));
          puVar8[iVar7 + 0x40] = (int)((uVar3 - 7) * (&DAT_02fff574)[iVar4]) >> 3;
          DAT_03003784 = DAT_03003784 + -4;
          DAT_03003908 = DAT_03003474 >> ((byte)DAT_03003784 & 0x1f);
          DAT_03003474 = DAT_03003474 - (DAT_03003908 << ((byte)DAT_03003784 & 0x1f));
          puVar8[iVar7 + 0x80] = (int)((DAT_03003908 - 7) * (&DAT_02fff574)[iVar4]) >> 3;
          break;
        case (undefined *)0x46f1fe:
          if (DAT_03003784 < 0xf) {
            for (; DAT_03003784 < 0x19; DAT_03003784 = DAT_03003784 + 8) {
              DAT_03003474 = DAT_03003474 << 8 | (uint)*DAT_02fff1a0;
              DAT_02fff1a0 = DAT_02fff1a0 + 1;
            }
          }
          DAT_03003784 = DAT_03003784 + -5;
          uVar3 = DAT_03003474 >> ((byte)DAT_03003784 & 0x1f);
          iVar4 = iVar5 * 0x40 + iVar7;
          DAT_03003474 = DAT_03003474 - (uVar3 << ((byte)DAT_03003784 & 0x1f));
          puVar8[iVar7] = (int)((uVar3 - 0xf) * (&DAT_02fff574)[iVar4]) >> 4;
          DAT_03003784 = DAT_03003784 + -5;
          uVar3 = DAT_03003474 >> ((byte)DAT_03003784 & 0x1f);
          DAT_03003474 = DAT_03003474 - (uVar3 << ((byte)DAT_03003784 & 0x1f));
          puVar8[iVar7 + 0x40] = (int)((uVar3 - 0xf) * (&DAT_02fff574)[iVar4]) >> 4;
          DAT_03003784 = DAT_03003784 + -5;
          DAT_03003908 = DAT_03003474 >> ((byte)DAT_03003784 & 0x1f);
          DAT_03003474 = DAT_03003474 - (DAT_03003908 << ((byte)DAT_03003784 & 0x1f));
          puVar8[iVar7 + 0x80] = (int)((DAT_03003908 - 0xf) * (&DAT_02fff574)[iVar4]) >> 4;
          break;
        case (undefined *)0x46f2f9:
          if (DAT_03003784 < 0x12) {
            for (; DAT_03003784 < 0x19; DAT_03003784 = DAT_03003784 + 8) {
              DAT_03003474 = DAT_03003474 << 8 | (uint)*DAT_02fff1a0;
              DAT_02fff1a0 = DAT_02fff1a0 + 1;
            }
          }
          DAT_03003784 = DAT_03003784 + -6;
          uVar3 = DAT_03003474 >> ((byte)DAT_03003784 & 0x1f);
          iVar4 = iVar5 * 0x40 + iVar7;
          DAT_03003474 = DAT_03003474 - (uVar3 << ((byte)DAT_03003784 & 0x1f));
          puVar8[iVar7] = (int)((uVar3 - 0x1f) * (&DAT_02fff574)[iVar4]) >> 5;
          DAT_03003784 = DAT_03003784 + -6;
          uVar3 = DAT_03003474 >> ((byte)DAT_03003784 & 0x1f);
          DAT_03003474 = DAT_03003474 - (uVar3 << ((byte)DAT_03003784 & 0x1f));
          puVar8[iVar7 + 0x40] = (int)((uVar3 - 0x1f) * (&DAT_02fff574)[iVar4]) >> 5;
          DAT_03003784 = DAT_03003784 + -6;
          DAT_03003908 = DAT_03003474 >> ((byte)DAT_03003784 & 0x1f);
          DAT_03003474 = DAT_03003474 - (DAT_03003908 << ((byte)DAT_03003784 & 0x1f));
          puVar8[iVar7 + 0x80] = (int)((DAT_03003908 - 0x1f) * (&DAT_02fff574)[iVar4]) >> 5;
          break;
        case (undefined *)0x46f3f4:
          if (DAT_03003784 < 0x15) {
            for (; DAT_03003784 < 0x19; DAT_03003784 = DAT_03003784 + 8) {
              DAT_03003474 = DAT_03003474 << 8 | (uint)*DAT_02fff1a0;
              DAT_02fff1a0 = DAT_02fff1a0 + 1;
            }
          }
          DAT_03003784 = DAT_03003784 + -7;
          uVar3 = DAT_03003474 >> ((byte)DAT_03003784 & 0x1f);
          iVar4 = iVar5 * 0x40 + iVar7;
          DAT_03003474 = DAT_03003474 - (uVar3 << ((byte)DAT_03003784 & 0x1f));
          puVar8[iVar7] = (int)((uVar3 - 0x3f) * (&DAT_02fff574)[iVar4]) >> 6;
          DAT_03003784 = DAT_03003784 + -7;
          uVar3 = DAT_03003474 >> ((byte)DAT_03003784 & 0x1f);
          DAT_03003474 = DAT_03003474 - (uVar3 << ((byte)DAT_03003784 & 0x1f));
          puVar8[iVar7 + 0x40] = (int)((uVar3 - 0x3f) * (&DAT_02fff574)[iVar4]) >> 6;
          DAT_03003784 = DAT_03003784 + -7;
          DAT_03003908 = DAT_03003474 >> ((byte)DAT_03003784 & 0x1f);
          DAT_03003474 = DAT_03003474 - (DAT_03003908 << ((byte)DAT_03003784 & 0x1f));
          puVar8[iVar7 + 0x80] = (int)((DAT_03003908 - 0x3f) * (&DAT_02fff574)[iVar4]) >> 6;
          break;
        case (undefined *)0x46f4ef:
          if (DAT_03003784 < 0x18) {
            do {
              DAT_03003784 = DAT_03003784 + 8;
              DAT_03003474 = DAT_03003474 << 8 | (uint)*DAT_02fff1a0;
              DAT_02fff1a0 = DAT_02fff1a0 + 1;
            } while (DAT_03003784 < 0x19);
          }
          DAT_03003784 = DAT_03003784 + -8;
          uVar3 = DAT_03003474 >> ((byte)DAT_03003784 & 0x1f);
          iVar4 = iVar5 * 0x40 + iVar7;
          DAT_03003474 = DAT_03003474 - (uVar3 << ((byte)DAT_03003784 & 0x1f));
          puVar8[iVar7] = (int)((uVar3 - 0x7f) * (&DAT_02fff574)[iVar4]) >> 7;
          DAT_03003784 = DAT_03003784 + -8;
          uVar3 = DAT_03003474 >> ((byte)DAT_03003784 & 0x1f);
          DAT_03003474 = DAT_03003474 - (uVar3 << ((byte)DAT_03003784 & 0x1f));
          puVar8[iVar7 + 0x40] = (int)((uVar3 - 0x7f) * (&DAT_02fff574)[iVar4]) >> 7;
          DAT_03003784 = DAT_03003784 + -8;
          DAT_03003908 = DAT_03003474 >> ((byte)DAT_03003784 & 0x1f);
          DAT_03003474 = DAT_03003474 - (DAT_03003908 << ((byte)DAT_03003784 & 0x1f));
          puVar8[iVar7 + 0x80] = (int)((DAT_03003908 - 0x7f) * (&DAT_02fff574)[iVar4]) >> 7;
          break;
        case (undefined *)0x46f5dd:
          if (DAT_03003784 < 0x12) {
            for (; DAT_03003784 < 0x19; DAT_03003784 = DAT_03003784 + 8) {
              DAT_03003474 = DAT_03003474 << 8 | (uint)*DAT_02fff1a0;
              DAT_02fff1a0 = DAT_02fff1a0 + 1;
            }
          }
          DAT_03003784 = DAT_03003784 + -9;
          uVar3 = DAT_03003474 >> ((byte)DAT_03003784 & 0x1f);
          iVar4 = iVar5 * 0x40 + iVar7;
          DAT_03003474 = DAT_03003474 - (uVar3 << ((byte)DAT_03003784 & 0x1f));
          puVar8[iVar7] = (int)((uVar3 - 0xff) * (&DAT_02fff574)[iVar4]) >> 8;
          DAT_03003784 = DAT_03003784 + -9;
          uVar3 = DAT_03003474 >> ((byte)DAT_03003784 & 0x1f);
          DAT_03003474 = DAT_03003474 - (uVar3 << ((byte)DAT_03003784 & 0x1f));
          puVar8[iVar7 + 0x40] = (int)((uVar3 - 0xff) * (&DAT_02fff574)[iVar4]) >> 8;
          if (DAT_03003784 < 9) {
            for (; DAT_03003784 < 0x19; DAT_03003784 = DAT_03003784 + 8) {
              DAT_03003474 = DAT_03003474 << 8 | (uint)*DAT_02fff1a0;
              DAT_02fff1a0 = DAT_02fff1a0 + 1;
            }
          }
          DAT_03003784 = DAT_03003784 + -9;
          DAT_03003908 = DAT_03003474 >> ((byte)DAT_03003784 & 0x1f);
          DAT_03003474 = DAT_03003474 - (DAT_03003908 << ((byte)DAT_03003784 & 0x1f));
          puVar8[iVar7 + 0x80] = (int)((DAT_03003908 - 0xff) * (&DAT_02fff574)[iVar4]) >> 8;
          break;
        case (undefined *)0x46f726:
          if (DAT_03003784 < 0x14) {
            for (; DAT_03003784 < 0x19; DAT_03003784 = DAT_03003784 + 8) {
              DAT_03003474 = DAT_03003474 << 8 | (uint)*DAT_02fff1a0;
              DAT_02fff1a0 = DAT_02fff1a0 + 1;
            }
          }
          DAT_03003784 = DAT_03003784 + -10;
          uVar3 = DAT_03003474 >> ((byte)DAT_03003784 & 0x1f);
          iVar4 = iVar5 * 0x40 + iVar7;
          DAT_03003474 = DAT_03003474 - (uVar3 << ((byte)DAT_03003784 & 0x1f));
          puVar8[iVar7] = (int)((uVar3 - 0x1ff) * (&DAT_02fff574)[iVar4]) >> 9;
          DAT_03003784 = DAT_03003784 + -10;
          uVar3 = DAT_03003474 >> ((byte)DAT_03003784 & 0x1f);
          DAT_03003474 = DAT_03003474 - (uVar3 << ((byte)DAT_03003784 & 0x1f));
          puVar8[iVar7 + 0x40] = (int)((uVar3 - 0x1ff) * (&DAT_02fff574)[iVar4]) >> 9;
          if (DAT_03003784 < 10) {
            for (; DAT_03003784 < 0x19; DAT_03003784 = DAT_03003784 + 8) {
              DAT_03003474 = DAT_03003474 << 8 | (uint)*DAT_02fff1a0;
              DAT_02fff1a0 = DAT_02fff1a0 + 1;
            }
          }
          DAT_03003784 = DAT_03003784 + -10;
          DAT_03003908 = DAT_03003474 >> ((byte)DAT_03003784 & 0x1f);
          DAT_03003474 = DAT_03003474 - (DAT_03003908 << ((byte)DAT_03003784 & 0x1f));
          puVar8[iVar7 + 0x80] = (int)((DAT_03003908 - 0x1ff) * (&DAT_02fff574)[iVar4]) >> 9;
          break;
        case (undefined *)0x46f86f:
          if (DAT_03003784 < 0x16) {
            for (; DAT_03003784 < 0x19; DAT_03003784 = DAT_03003784 + 8) {
              DAT_03003474 = DAT_03003474 << 8 | (uint)*DAT_02fff1a0;
              DAT_02fff1a0 = DAT_02fff1a0 + 1;
            }
          }
          DAT_03003784 = DAT_03003784 + -0xb;
          uVar3 = DAT_03003474 >> ((byte)DAT_03003784 & 0x1f);
          iVar4 = iVar5 * 0x40 + iVar7;
          DAT_03003474 = DAT_03003474 - (uVar3 << ((byte)DAT_03003784 & 0x1f));
          puVar8[iVar7] = (int)((uVar3 - 0x3ff) * (&DAT_02fff574)[iVar4]) >> 10;
          DAT_03003784 = DAT_03003784 + -0xb;
          uVar3 = DAT_03003474 >> ((byte)DAT_03003784 & 0x1f);
          DAT_03003474 = DAT_03003474 - (uVar3 << ((byte)DAT_03003784 & 0x1f));
          puVar8[iVar7 + 0x40] = (int)((uVar3 - 0x3ff) * (&DAT_02fff574)[iVar4]) >> 10;
          if (DAT_03003784 < 0xb) {
            for (; DAT_03003784 < 0x19; DAT_03003784 = DAT_03003784 + 8) {
              DAT_03003474 = DAT_03003474 << 8 | (uint)*DAT_02fff1a0;
              DAT_02fff1a0 = DAT_02fff1a0 + 1;
            }
          }
          DAT_03003784 = DAT_03003784 + -0xb;
          DAT_03003908 = DAT_03003474 >> ((byte)DAT_03003784 & 0x1f);
          DAT_03003474 = DAT_03003474 - (DAT_03003908 << ((byte)DAT_03003784 & 0x1f));
          puVar8[iVar7 + 0x80] = (int)((DAT_03003908 - 0x3ff) * (&DAT_02fff574)[iVar4]) >> 10;
          break;
        case (undefined *)0x46f9b8:
          if (DAT_03003784 < 0x18) {
            do {
              DAT_03003784 = DAT_03003784 + 8;
              DAT_03003474 = DAT_03003474 << 8 | (uint)*DAT_02fff1a0;
              DAT_02fff1a0 = DAT_02fff1a0 + 1;
            } while (DAT_03003784 < 0x19);
          }
          DAT_03003784 = DAT_03003784 + -0xc;
          uVar3 = DAT_03003474 >> ((byte)DAT_03003784 & 0x1f);
          iVar4 = iVar5 * 0x40 + iVar7;
          DAT_03003474 = DAT_03003474 - (uVar3 << ((byte)DAT_03003784 & 0x1f));
          puVar8[iVar7] = (int)((uVar3 - 0x7ff) * (&DAT_02fff574)[iVar4]) >> 0xb;
          DAT_03003784 = DAT_03003784 + -0xc;
          uVar3 = DAT_03003474 >> ((byte)DAT_03003784 & 0x1f);
          DAT_03003474 = DAT_03003474 - (uVar3 << ((byte)DAT_03003784 & 0x1f));
          puVar8[iVar7 + 0x40] = (int)((uVar3 - 0x7ff) * (&DAT_02fff574)[iVar4]) >> 0xb;
          if (DAT_03003784 < 0xc) {
            for (; DAT_03003784 < 0x19; DAT_03003784 = DAT_03003784 + 8) {
              DAT_03003474 = DAT_03003474 << 8 | (uint)*DAT_02fff1a0;
              DAT_02fff1a0 = DAT_02fff1a0 + 1;
            }
          }
          DAT_03003784 = DAT_03003784 + -0xc;
          DAT_03003908 = DAT_03003474 >> ((byte)DAT_03003784 & 0x1f);
          DAT_03003474 = DAT_03003474 - (DAT_03003908 << ((byte)DAT_03003784 & 0x1f));
          puVar8[iVar7 + 0x80] = (int)((DAT_03003908 - 0x7ff) * (&DAT_02fff574)[iVar4]) >> 0xb;
          break;
        case (undefined *)0x46faf4:
          piVar1 = &DAT_02fff574 + iVar5 * 0x40 + iVar7;
          iVar4 = FUN_0046e720(0xd);
          puVar8[iVar7] = (iVar4 + -0xfff) * *piVar1 >> 0xc;
          iVar4 = FUN_0046e720(0xd);
          puVar8[iVar7 + 0x40] = (iVar4 + -0xfff) * *piVar1 >> 0xc;
          iVar4 = FUN_0046e720(0xd);
          puVar8[iVar7 + 0x80] = (iVar4 + -0xfff) * *piVar1 >> 0xc;
          break;
        case (undefined *)0x46fb54:
          piVar1 = &DAT_02fff574 + iVar5 * 0x40 + iVar7;
          iVar4 = FUN_0046e720(0xe);
          puVar8[iVar7] = (iVar4 + -0x1fff) * *piVar1 >> 0xd;
          iVar4 = FUN_0046e720(0xe);
          puVar8[iVar7 + 0x40] = (iVar4 + -0x1fff) * *piVar1 >> 0xd;
          iVar4 = FUN_0046e720(0xe);
          puVar8[iVar7 + 0x80] = (iVar4 + -0x1fff) * *piVar1 >> 0xd;
          break;
        case (undefined *)0x46fbb4:
          piVar1 = &DAT_02fff574 + iVar5 * 0x40 + iVar7;
          iVar4 = FUN_0046e720(0xf);
          puVar8[iVar7] = (iVar4 + -0x3fff) * *piVar1 >> 0xe;
          iVar4 = FUN_0046e720(0xf);
          puVar8[iVar7 + 0x40] = (iVar4 + -0x3fff) * *piVar1 >> 0xe;
          iVar4 = FUN_0046e720(0xf);
          puVar8[iVar7 + 0x80] = (iVar4 + -0x3fff) * *piVar1 >> 0xe;
          break;
        case (undefined *)0x46fc14:
          piVar1 = &DAT_02fff574 + iVar5 * 0x40 + iVar7;
          iVar4 = FUN_0046e720(0x10);
          puVar8[iVar7] = (iVar4 + -0x7fff) * *piVar1 >> 0xf;
          iVar4 = FUN_0046e720(0x10);
          puVar8[iVar7 + 0x40] = (iVar4 + -0x7fff) * *piVar1 >> 0xf;
          iVar4 = FUN_0046e720(0x10);
          puVar8[iVar7 + 0x80] = (iVar4 + -0x7fff) * *piVar1 >> 0xf;
          break;
        case (undefined *)0x46fc74:
          puVar8[iVar7] = 0;
          puVar8[iVar7 + 1] = 0;
          puVar8[iVar7 + 0x40] = 0;
          puVar8[iVar7 + 0x41] = 0;
          puVar8[iVar7 + 0x80] = 0;
          puVar8[iVar7 + 0x81] = 0;
          goto LAB_004706d3;
        case (undefined *)0x46fc9e:
          iVar4 = FUN_0046e720(5);
          iVar6 = iVar5 * 0x40 + iVar7;
          puVar8[iVar7] = (int)(char)(&DAT_02fff4c0)[iVar4 * 3] * (&DAT_02fff574)[iVar6] >> 1;
          puVar8[iVar7 + 1] = (int)(char)(&DAT_02fff4c0)[iVar4 * 3] * (&DAT_02fff578)[iVar6] >> 1;
          puVar8[iVar7 + 0x40] = (int)(char)(&DAT_02fff4c1)[iVar4 * 3] * (&DAT_02fff574)[iVar6] >> 1
          ;
          puVar8[iVar7 + 0x41] = (int)(char)(&DAT_02fff4c1)[iVar4 * 3] * (&DAT_02fff578)[iVar6] >> 1
          ;
          puVar8[iVar7 + 0x80] = (int)(char)(&DAT_02fff4c2)[iVar4 * 3] * (&DAT_02fff574)[iVar6] >> 1
          ;
          puVar8[iVar7 + 0x81] = (int)(char)(&DAT_02fff4c2)[iVar4 * 3] * (&DAT_02fff578)[iVar6] >> 1
          ;
          goto LAB_004706d3;
        case (undefined *)0x46fd3d:
          iVar4 = FUN_0046e720(7);
          iVar6 = iVar5 * 0x40 + iVar7;
          puVar8[iVar7] = (int)(char)(&DAT_03003788)[iVar4 * 3] * (&DAT_02fff574)[iVar6] >> 2;
          puVar8[iVar7 + 1] = (int)(char)(&DAT_03003788)[iVar4 * 3] * (&DAT_02fff578)[iVar6] >> 2;
          puVar8[iVar7 + 0x40] = (int)(char)(&DAT_03003789)[iVar4 * 3] * (&DAT_02fff574)[iVar6] >> 2
          ;
          puVar8[iVar7 + 0x41] = (int)(char)(&DAT_03003789)[iVar4 * 3] * (&DAT_02fff578)[iVar6] >> 2
          ;
          puVar8[iVar7 + 0x80] = (int)(char)(&DAT_0300378a)[iVar4 * 3] * (&DAT_02fff574)[iVar6] >> 2
          ;
          puVar8[iVar7 + 0x81] = (int)(char)(&DAT_0300378a)[iVar4 * 3] * (&DAT_02fff578)[iVar6] >> 2
          ;
          goto LAB_004706d3;
        case (undefined *)0x46fde2:
          iVar4 = FUN_0046e720(3);
          iVar6 = iVar5 * 0x40 + iVar7;
          puVar8[iVar7] = (&DAT_02fff574)[iVar6] * (iVar4 + -3) >> 2;
          puVar8[iVar7 + 1] = (&DAT_02fff578)[iVar6] * (iVar4 + -3) >> 2;
          iVar4 = FUN_0046e720(3);
          puVar8[iVar7 + 0x40] = (&DAT_02fff574)[iVar6] * (iVar4 + -3) >> 2;
          puVar8[iVar7 + 0x41] = (&DAT_02fff578)[iVar6] * (iVar4 + -3) >> 2;
          iVar4 = FUN_0046e720(3);
          puVar8[iVar7 + 0x80] = (&DAT_02fff574)[iVar6] * (iVar4 + -3) >> 2;
          iVar4 = (&DAT_02fff578)[iVar6] * (iVar4 + -3) >> 2;
          goto LAB_004706cc;
        case (undefined *)0x46fe76:
          iVar4 = FUN_0046e720(10);
          iVar6 = iVar5 * 0x40 + iVar7;
          puVar8[iVar7] = (int)(short)(&DAT_02fff874)[iVar4 * 3] * (&DAT_02fff574)[iVar6] >> 3;
          puVar8[iVar7 + 1] = (int)(short)(&DAT_02fff874)[iVar4 * 3] * (&DAT_02fff578)[iVar6] >> 3;
          puVar8[iVar7 + 0x40] =
               (int)(short)(&DAT_02fff876)[iVar4 * 3] * (&DAT_02fff574)[iVar6] >> 3;
          puVar8[iVar7 + 0x41] =
               (int)(short)(&DAT_02fff876)[iVar4 * 3] * (&DAT_02fff578)[iVar6] >> 3;
          puVar8[iVar7 + 0x80] =
               (int)(short)(&DAT_02fff878)[iVar4 * 3] * (&DAT_02fff574)[iVar6] >> 3;
          puVar8[iVar7 + 0x81] =
               (int)(short)(&DAT_02fff878)[iVar4 * 3] * (&DAT_02fff578)[iVar6] >> 3;
          goto LAB_004706d3;
        case (undefined *)0x46ff1d:
          iVar4 = FUN_0046e720(4);
          iVar6 = iVar5 * 0x40 + iVar7;
          puVar8[iVar7] = (&DAT_02fff574)[iVar6] * (iVar4 + -7) >> 3;
          puVar8[iVar7 + 1] = (&DAT_02fff578)[iVar6] * (iVar4 + -7) >> 3;
          iVar4 = FUN_0046e720(4);
          puVar8[iVar7 + 0x40] = (&DAT_02fff574)[iVar6] * (iVar4 + -7) >> 3;
          puVar8[iVar7 + 0x41] = (&DAT_02fff578)[iVar6] * (iVar4 + -7) >> 3;
          iVar4 = FUN_0046e720(4);
          puVar8[iVar7 + 0x80] = (&DAT_02fff574)[iVar6] * (iVar4 + -7) >> 3;
          iVar4 = (&DAT_02fff578)[iVar6] * (iVar4 + -7) >> 3;
          goto LAB_004706cc;
        case (undefined *)0x46ffb1:
          iVar4 = FUN_0046e720(5);
          iVar6 = iVar5 * 0x40 + iVar7;
          puVar8[iVar7] = (&DAT_02fff574)[iVar6] * (iVar4 + -0xf) >> 4;
          puVar8[iVar7 + 1] = (&DAT_02fff578)[iVar6] * (iVar4 + -0xf) >> 4;
          iVar4 = FUN_0046e720(5);
          puVar8[iVar7 + 0x40] = (&DAT_02fff574)[iVar6] * (iVar4 + -0xf) >> 4;
          puVar8[iVar7 + 0x41] = (&DAT_02fff578)[iVar6] * (iVar4 + -0xf) >> 4;
          iVar4 = FUN_0046e720(5);
          puVar8[iVar7 + 0x80] = (&DAT_02fff574)[iVar6] * (iVar4 + -0xf) >> 4;
          iVar4 = (&DAT_02fff578)[iVar6] * (iVar4 + -0xf) >> 4;
          goto LAB_004706cc;
        case (undefined *)0x470045:
          iVar4 = FUN_0046e720(6);
          iVar6 = iVar5 * 0x40 + iVar7;
          puVar8[iVar7] = (&DAT_02fff574)[iVar6] * (iVar4 + -0x1f) >> 5;
          puVar8[iVar7 + 1] = (&DAT_02fff578)[iVar6] * (iVar4 + -0x1f) >> 5;
          iVar4 = FUN_0046e720(6);
          puVar8[iVar7 + 0x40] = (&DAT_02fff574)[iVar6] * (iVar4 + -0x1f) >> 5;
          puVar8[iVar7 + 0x41] = (&DAT_02fff578)[iVar6] * (iVar4 + -0x1f) >> 5;
          iVar4 = FUN_0046e720(6);
          puVar8[iVar7 + 0x80] = (&DAT_02fff574)[iVar6] * (iVar4 + -0x1f) >> 5;
          iVar4 = (&DAT_02fff578)[iVar6] * (iVar4 + -0x1f) >> 5;
          goto LAB_004706cc;
        case (undefined *)0x4700d9:
          iVar4 = FUN_0046e720(7);
          iVar6 = iVar5 * 0x40 + iVar7;
          puVar8[iVar7] = (&DAT_02fff574)[iVar6] * (iVar4 + -0x3f) >> 6;
          puVar8[iVar7 + 1] = (&DAT_02fff578)[iVar6] * (iVar4 + -0x3f) >> 6;
          iVar4 = FUN_0046e720(7);
          puVar8[iVar7 + 0x40] = (&DAT_02fff574)[iVar6] * (iVar4 + -0x3f) >> 6;
          puVar8[iVar7 + 0x41] = (&DAT_02fff578)[iVar6] * (iVar4 + -0x3f) >> 6;
          iVar4 = FUN_0046e720(7);
          puVar8[iVar7 + 0x80] = (&DAT_02fff574)[iVar6] * (iVar4 + -0x3f) >> 6;
          iVar4 = (&DAT_02fff578)[iVar6] * (iVar4 + -0x3f) >> 6;
          goto LAB_004706cc;
        case (undefined *)0x47016d:
          iVar4 = FUN_0046e720(8);
          iVar6 = iVar5 * 0x40 + iVar7;
          puVar8[iVar7] = (&DAT_02fff574)[iVar6] * (iVar4 + -0x7f) >> 7;
          puVar8[iVar7 + 1] = (&DAT_02fff578)[iVar6] * (iVar4 + -0x7f) >> 7;
          iVar4 = FUN_0046e720(8);
          puVar8[iVar7 + 0x40] = (&DAT_02fff574)[iVar6] * (iVar4 + -0x7f) >> 7;
          puVar8[iVar7 + 0x41] = (&DAT_02fff578)[iVar6] * (iVar4 + -0x7f) >> 7;
          iVar4 = FUN_0046e720(8);
          puVar8[iVar7 + 0x80] = (&DAT_02fff574)[iVar6] * (iVar4 + -0x7f) >> 7;
          iVar4 = (&DAT_02fff578)[iVar6] * (iVar4 + -0x7f) >> 7;
          goto LAB_004706cc;
        case (undefined *)0x470201:
          iVar4 = FUN_0046e720(9);
          iVar6 = iVar5 * 0x40 + iVar7;
          puVar8[iVar7] = (&DAT_02fff574)[iVar6] * (iVar4 + -0xff) >> 8;
          puVar8[iVar7 + 1] = (&DAT_02fff578)[iVar6] * (iVar4 + -0xff) >> 8;
          iVar4 = FUN_0046e720(9);
          puVar8[iVar7 + 0x40] = (&DAT_02fff574)[iVar6] * (iVar4 + -0xff) >> 8;
          puVar8[iVar7 + 0x41] = (&DAT_02fff578)[iVar6] * (iVar4 + -0xff) >> 8;
          iVar4 = FUN_0046e720(9);
          puVar8[iVar7 + 0x80] = (&DAT_02fff574)[iVar6] * (iVar4 + -0xff) >> 8;
          iVar4 = (&DAT_02fff578)[iVar6] * (iVar4 + -0xff) >> 8;
          goto LAB_004706cc;
        case (undefined *)0x47029b:
          iVar4 = FUN_0046e720(10);
          iVar6 = iVar5 * 0x40 + iVar7;
          puVar8[iVar7] = (&DAT_02fff574)[iVar6] * (iVar4 + -0x1ff) >> 9;
          puVar8[iVar7 + 1] = (&DAT_02fff578)[iVar6] * (iVar4 + -0x1ff) >> 9;
          iVar4 = FUN_0046e720(10);
          puVar8[iVar7 + 0x40] = (&DAT_02fff574)[iVar6] * (iVar4 + -0x1ff) >> 9;
          puVar8[iVar7 + 0x41] = (&DAT_02fff578)[iVar6] * (iVar4 + -0x1ff) >> 9;
          iVar4 = FUN_0046e720(10);
          puVar8[iVar7 + 0x80] = (&DAT_02fff574)[iVar6] * (iVar4 + -0x1ff) >> 9;
          iVar4 = (&DAT_02fff578)[iVar6] * (iVar4 + -0x1ff) >> 9;
          goto LAB_004706cc;
        case (undefined *)0x470335:
          iVar4 = FUN_0046e720(0xb);
          iVar6 = iVar5 * 0x40 + iVar7;
          puVar8[iVar7] = (&DAT_02fff574)[iVar6] * (iVar4 + -0x3ff) >> 10;
          puVar8[iVar7 + 1] = (&DAT_02fff578)[iVar6] * (iVar4 + -0x3ff) >> 10;
          iVar4 = FUN_0046e720(0xb);
          puVar8[iVar7 + 0x40] = (&DAT_02fff574)[iVar6] * (iVar4 + -0x3ff) >> 10;
          puVar8[iVar7 + 0x41] = (&DAT_02fff578)[iVar6] * (iVar4 + -0x3ff) >> 10;
          iVar4 = FUN_0046e720(0xb);
          puVar8[iVar7 + 0x80] = (&DAT_02fff574)[iVar6] * (iVar4 + -0x3ff) >> 10;
          iVar4 = (&DAT_02fff578)[iVar6] * (iVar4 + -0x3ff) >> 10;
          goto LAB_004706cc;
        case (undefined *)0x4703cf:
          iVar4 = FUN_0046e720(0xc);
          iVar6 = iVar5 * 0x40 + iVar7;
          puVar8[iVar7] = (&DAT_02fff574)[iVar6] * (iVar4 + -0x7ff) >> 0xb;
          puVar8[iVar7 + 1] = (&DAT_02fff578)[iVar6] * (iVar4 + -0x7ff) >> 0xb;
          iVar4 = FUN_0046e720(0xc);
          puVar8[iVar7 + 0x40] = (&DAT_02fff574)[iVar6] * (iVar4 + -0x7ff) >> 0xb;
          puVar8[iVar7 + 0x41] = (&DAT_02fff578)[iVar6] * (iVar4 + -0x7ff) >> 0xb;
          iVar4 = FUN_0046e720(0xc);
          puVar8[iVar7 + 0x80] = (&DAT_02fff574)[iVar6] * (iVar4 + -0x7ff) >> 0xb;
          iVar4 = (&DAT_02fff578)[iVar6] * (iVar4 + -0x7ff) >> 0xb;
          goto LAB_004706cc;
        case (undefined *)0x470469:
          iVar4 = FUN_0046e720(0xd);
          iVar6 = iVar5 * 0x40 + iVar7;
          puVar8[iVar7] = (&DAT_02fff574)[iVar6] * (iVar4 + -0xfff) >> 0xc;
          puVar8[iVar7 + 1] = (&DAT_02fff578)[iVar6] * (iVar4 + -0xfff) >> 0xc;
          iVar4 = FUN_0046e720(0xd);
          puVar8[iVar7 + 0x40] = (&DAT_02fff574)[iVar6] * (iVar4 + -0xfff) >> 0xc;
          puVar8[iVar7 + 0x41] = (&DAT_02fff578)[iVar6] * (iVar4 + -0xfff) >> 0xc;
          iVar4 = FUN_0046e720(0xd);
          puVar8[iVar7 + 0x80] = (&DAT_02fff574)[iVar6] * (iVar4 + -0xfff) >> 0xc;
          iVar4 = (&DAT_02fff578)[iVar6] * (iVar4 + -0xfff) >> 0xc;
          goto LAB_004706cc;
        case (undefined *)0x470503:
          iVar4 = FUN_0046e720(0xe);
          iVar6 = iVar5 * 0x40 + iVar7;
          puVar8[iVar7] = (&DAT_02fff574)[iVar6] * (iVar4 + -0x1fff) >> 0xd;
          puVar8[iVar7 + 1] = (&DAT_02fff578)[iVar6] * (iVar4 + -0x1fff) >> 0xd;
          iVar4 = FUN_0046e720(0xe);
          puVar8[iVar7 + 0x40] = (&DAT_02fff574)[iVar6] * (iVar4 + -0x1fff) >> 0xd;
          puVar8[iVar7 + 0x41] = (&DAT_02fff578)[iVar6] * (iVar4 + -0x1fff) >> 0xd;
          iVar4 = FUN_0046e720(0xe);
          puVar8[iVar7 + 0x80] = (&DAT_02fff574)[iVar6] * (iVar4 + -0x1fff) >> 0xd;
          iVar4 = (&DAT_02fff578)[iVar6] * (iVar4 + -0x1fff) >> 0xd;
          goto LAB_004706cc;
        case (undefined *)0x47059d:
          iVar4 = FUN_0046e720(0xf);
          iVar6 = iVar5 * 0x40 + iVar7;
          puVar8[iVar7] = (&DAT_02fff574)[iVar6] * (iVar4 + -0x3fff) >> 0xe;
          puVar8[iVar7 + 1] = (&DAT_02fff578)[iVar6] * (iVar4 + -0x3fff) >> 0xe;
          iVar4 = FUN_0046e720(0xf);
          puVar8[iVar7 + 0x40] = (&DAT_02fff574)[iVar6] * (iVar4 + -0x3fff) >> 0xe;
          puVar8[iVar7 + 0x41] = (&DAT_02fff578)[iVar6] * (iVar4 + -0x3fff) >> 0xe;
          iVar4 = FUN_0046e720(0xf);
          puVar8[iVar7 + 0x80] = (&DAT_02fff574)[iVar6] * (iVar4 + -0x3fff) >> 0xe;
          iVar4 = (&DAT_02fff578)[iVar6] * (iVar4 + -0x3fff) >> 0xe;
          goto LAB_004706cc;
        case (undefined *)0x470637:
          iVar4 = FUN_0046e720(0x10);
          iVar6 = iVar5 * 0x40 + iVar7;
          puVar8[iVar7] = (&DAT_02fff574)[iVar6] * (iVar4 + -0x7fff) >> 0xf;
          puVar8[iVar7 + 1] = (&DAT_02fff578)[iVar6] * (iVar4 + -0x7fff) >> 0xf;
          iVar4 = FUN_0046e720(0x10);
          puVar8[iVar7 + 0x40] = (&DAT_02fff574)[iVar6] * (iVar4 + -0x7fff) >> 0xf;
          puVar8[iVar7 + 0x41] = (&DAT_02fff578)[iVar6] * (iVar4 + -0x7fff) >> 0xf;
          iVar4 = FUN_0046e720(0x10);
          puVar8[iVar7 + 0x80] = (&DAT_02fff574)[iVar6] * (iVar4 + -0x7fff) >> 0xf;
          iVar4 = (&DAT_02fff578)[iVar6] * (iVar4 + -0x7fff) >> 0xf;
LAB_004706cc:
          puVar8[iVar7 + 0x81] = iVar4;
LAB_004706d3:
          iVar7 = iVar7 + 1;
          break;
        case (undefined *)0x4706e7:
          FUN_004707c0(DAT_03003994);
        case (undefined *)0x4706f5:
          puVar8 = puVar8 + 0xc0;
          goto LAB_004706fb;
        }
        puVar2 = &DAT_030039e0 + iVar7;
        iVar7 = iVar7 + 1;
        uVar3 = *puVar2;
      }
LAB_004706fb:
      local_4 = local_4 + 1;
    } while (local_4 < 4);
    iVar5 = iVar5 + 1;
    if (2 < iVar5) {
      return;
    }
  } while( true );
}

