// Function: FUN_004711e0
// Entry:    004711e0
// Size:     1332 bytes
// Conv:     unknown
// Signature: undefined FUN_004711e0(void)
// Decompiled by Ghidra 12.1.2


void FUN_004711e0(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  puVar5 = &DAT_03001074;
  iVar3 = 0xc;
  do {
    if (DAT_030039dc < 0x20) {
      iVar4 = 0;
      uVar1 = DAT_030039dc;
      do {
        switch((&switchD_00471200::switchdataD_00471714)[uVar1]) {
        case (undefined *)0x471207:
          *(undefined4 *)(iVar4 + (int)puVar5) = 0;
          break;
        case (undefined *)0x47120f:
          iVar2 = FUN_0046e720(2);
          *(int *)(iVar4 + (int)puVar5) = (iVar2 + -1) * *(int *)(PTR_DAT_02fd2ba4 + iVar4) >> 1;
          break;
        case (undefined *)0x47122e:
          iVar2 = FUN_0046e720(3);
          *(int *)(iVar4 + (int)puVar5) = (iVar2 + -3) * *(int *)(PTR_DAT_02fd2ba4 + iVar4) >> 2;
          break;
        case (undefined *)0x471250:
          iVar2 = FUN_0046e720(4);
          *(int *)(iVar4 + (int)puVar5) = (iVar2 + -7) * *(int *)(PTR_DAT_02fd2ba4 + iVar4) >> 3;
          break;
        case (undefined *)0x471272:
          iVar2 = FUN_0046e720(5);
          *(int *)(iVar4 + (int)puVar5) = (iVar2 + -0xf) * *(int *)(PTR_DAT_02fd2ba4 + iVar4) >> 4;
          break;
        case (undefined *)0x471294:
          iVar2 = FUN_0046e720(6);
          *(int *)(iVar4 + (int)puVar5) = (iVar2 + -0x1f) * *(int *)(PTR_DAT_02fd2ba4 + iVar4) >> 5;
          break;
        case (undefined *)0x4712b6:
          iVar2 = FUN_0046e720(7);
          *(int *)(iVar4 + (int)puVar5) = (iVar2 + -0x3f) * *(int *)(PTR_DAT_02fd2ba4 + iVar4) >> 6;
          break;
        case (undefined *)0x4712d8:
          iVar2 = FUN_0046e720(8);
          *(int *)(iVar4 + (int)puVar5) = (iVar2 + -0x7f) * *(int *)(PTR_DAT_02fd2ba4 + iVar4) >> 7;
          break;
        case (undefined *)0x4712fa:
          iVar2 = FUN_0046e720(9);
          *(int *)(iVar4 + (int)puVar5) = (iVar2 + -0xff) * *(int *)(PTR_DAT_02fd2ba4 + iVar4) >> 8;
          break;
        case (undefined *)0x47131e:
          iVar2 = FUN_0046e720(10);
          *(int *)(iVar4 + (int)puVar5) = (iVar2 + -0x1ff) * *(int *)(PTR_DAT_02fd2ba4 + iVar4) >> 9
          ;
          break;
        case (undefined *)0x471342:
          iVar2 = FUN_0046e720(0xb);
          *(int *)(iVar4 + (int)puVar5) =
               (iVar2 + -0x3ff) * *(int *)(PTR_DAT_02fd2ba4 + iVar4) >> 10;
          break;
        case (undefined *)0x471366:
          iVar2 = FUN_0046e720(0xc);
          *(int *)(iVar4 + (int)puVar5) =
               (iVar2 + -0x7ff) * *(int *)(PTR_DAT_02fd2ba4 + iVar4) >> 0xb;
          break;
        case (undefined *)0x47138a:
          iVar2 = FUN_0046e720(0xd);
          *(int *)(iVar4 + (int)puVar5) =
               (iVar2 + -0xfff) * *(int *)(PTR_DAT_02fd2ba4 + iVar4) >> 0xc;
          break;
        case (undefined *)0x4713ae:
          iVar2 = FUN_0046e720(0xe);
          *(int *)(iVar4 + (int)puVar5) =
               (iVar2 + -0x1fff) * *(int *)(PTR_DAT_02fd2ba4 + iVar4) >> 0xd;
          break;
        case (undefined *)0x4713d2:
          iVar2 = FUN_0046e720(0xf);
          *(int *)(iVar4 + (int)puVar5) =
               (iVar2 + -0x3fff) * *(int *)(PTR_DAT_02fd2ba4 + iVar4) >> 0xe;
          break;
        case (undefined *)0x4713f6:
          *(undefined4 *)(iVar4 + (int)puVar5) = 0;
          *(undefined4 *)(iVar4 + 4 + (int)puVar5) = 0;
          goto LAB_004716dd;
        case (undefined *)0x471402:
          iVar2 = FUN_0046e720(2);
          *(int *)(iVar4 + (int)puVar5) = *(int *)(PTR_DAT_02fd2ba4 + iVar4) * (iVar2 + -1) >> 1;
          iVar2 = *(int *)(PTR_DAT_02fd2ba4 + iVar4 + 4) * (iVar2 + -1) >> 1;
          goto LAB_004716d9;
        case (undefined *)0x471432:
          iVar2 = FUN_0046e720(3);
          *(int *)(iVar4 + (int)puVar5) = *(int *)(PTR_DAT_02fd2ba4 + iVar4) * (iVar2 + -3) >> 2;
          iVar2 = *(int *)(PTR_DAT_02fd2ba4 + iVar4 + 4) * (iVar2 + -3) >> 2;
          goto LAB_004716d9;
        case (undefined *)0x471466:
          iVar2 = FUN_0046e720(4);
          *(int *)(iVar4 + (int)puVar5) = *(int *)(PTR_DAT_02fd2ba4 + iVar4) * (iVar2 + -7) >> 3;
          iVar2 = *(int *)(PTR_DAT_02fd2ba4 + iVar4 + 4) * (iVar2 + -7) >> 3;
          goto LAB_004716d9;
        case (undefined *)0x47149a:
          iVar2 = FUN_0046e720(5);
          *(int *)(iVar4 + (int)puVar5) = *(int *)(PTR_DAT_02fd2ba4 + iVar4) * (iVar2 + -0xf) >> 4;
          iVar2 = *(int *)(PTR_DAT_02fd2ba4 + iVar4 + 4) * (iVar2 + -0xf) >> 4;
          goto LAB_004716d9;
        case (undefined *)0x4714ce:
          iVar2 = FUN_0046e720(6);
          *(int *)(iVar4 + (int)puVar5) = *(int *)(PTR_DAT_02fd2ba4 + iVar4) * (iVar2 + -0x1f) >> 5;
          iVar2 = *(int *)(PTR_DAT_02fd2ba4 + iVar4 + 4) * (iVar2 + -0x1f) >> 5;
          goto LAB_004716d9;
        case (undefined *)0x471502:
          iVar2 = FUN_0046e720(7);
          *(int *)(iVar4 + (int)puVar5) = *(int *)(PTR_DAT_02fd2ba4 + iVar4) * (iVar2 + -0x3f) >> 6;
          iVar2 = *(int *)(PTR_DAT_02fd2ba4 + iVar4 + 4) * (iVar2 + -0x3f) >> 6;
          goto LAB_004716d9;
        case (undefined *)0x471536:
          iVar2 = FUN_0046e720(8);
          *(int *)(iVar4 + (int)puVar5) = *(int *)(PTR_DAT_02fd2ba4 + iVar4) * (iVar2 + -0x7f) >> 7;
          iVar2 = *(int *)(PTR_DAT_02fd2ba4 + iVar4 + 4) * (iVar2 + -0x7f) >> 7;
          goto LAB_004716d9;
        case (undefined *)0x47156a:
          iVar2 = FUN_0046e720(9);
          *(int *)(iVar4 + (int)puVar5) = *(int *)(PTR_DAT_02fd2ba4 + iVar4) * (iVar2 + -0xff) >> 8;
          iVar2 = *(int *)(PTR_DAT_02fd2ba4 + iVar4 + 4) * (iVar2 + -0xff) >> 8;
          goto LAB_004716d9;
        case (undefined *)0x4715a0:
          iVar2 = FUN_0046e720(10);
          *(int *)(iVar4 + (int)puVar5) = *(int *)(PTR_DAT_02fd2ba4 + iVar4) * (iVar2 + -0x1ff) >> 9
          ;
          iVar2 = *(int *)(PTR_DAT_02fd2ba4 + iVar4 + 4) * (iVar2 + -0x1ff) >> 9;
          goto LAB_004716d9;
        case (undefined *)0x4715d6:
          iVar2 = FUN_0046e720(0xb);
          *(int *)(iVar4 + (int)puVar5) =
               *(int *)(PTR_DAT_02fd2ba4 + iVar4) * (iVar2 + -0x3ff) >> 10;
          iVar2 = *(int *)(PTR_DAT_02fd2ba4 + iVar4 + 4) * (iVar2 + -0x3ff) >> 10;
          goto LAB_004716d9;
        case (undefined *)0x47160c:
          iVar2 = FUN_0046e720(0xc);
          *(int *)(iVar4 + (int)puVar5) =
               *(int *)(PTR_DAT_02fd2ba4 + iVar4) * (iVar2 + -0x7ff) >> 0xb;
          iVar2 = *(int *)(PTR_DAT_02fd2ba4 + iVar4 + 4) * (iVar2 + -0x7ff) >> 0xb;
          goto LAB_004716d9;
        case (undefined *)0x471642:
          iVar2 = FUN_0046e720(0xd);
          *(int *)(iVar4 + (int)puVar5) =
               *(int *)(PTR_DAT_02fd2ba4 + iVar4) * (iVar2 + -0xfff) >> 0xc;
          iVar2 = *(int *)(PTR_DAT_02fd2ba4 + iVar4 + 4) * (iVar2 + -0xfff) >> 0xc;
          goto LAB_004716d9;
        case (undefined *)0x471675:
          iVar2 = FUN_0046e720(0xe);
          *(int *)(iVar4 + (int)puVar5) =
               *(int *)(PTR_DAT_02fd2ba4 + iVar4) * (iVar2 + -0x1fff) >> 0xd;
          iVar2 = *(int *)(PTR_DAT_02fd2ba4 + iVar4 + 4) * (iVar2 + -0x1fff) >> 0xd;
          goto LAB_004716d9;
        case (undefined *)0x4716a8:
          iVar2 = FUN_0046e720(0xf);
          *(int *)(iVar4 + (int)puVar5) =
               *(int *)(PTR_DAT_02fd2ba4 + iVar4) * (iVar2 + -0x3fff) >> 0xe;
          iVar2 = *(int *)(PTR_DAT_02fd2ba4 + iVar4 + 4) * (iVar2 + -0x3fff) >> 0xe;
LAB_004716d9:
          *(int *)(iVar4 + 4 + (int)puVar5) = iVar2;
LAB_004716dd:
          iVar4 = iVar4 + 4;
          break;
        case (undefined *)0x4716f4:
          FUN_004707c0(DAT_03003994);
        case (undefined *)0x471702:
          puVar5 = puVar5 + 0x40;
          goto LAB_00471708;
        }
        uVar1 = *(uint *)((int)&DAT_030039e0 + iVar4);
        iVar4 = iVar4 + 4;
      } while (uVar1 < 0x20);
    }
LAB_00471708:
    iVar3 = iVar3 + -1;
    if (iVar3 == 0) {
      return;
    }
  } while( true );
}

