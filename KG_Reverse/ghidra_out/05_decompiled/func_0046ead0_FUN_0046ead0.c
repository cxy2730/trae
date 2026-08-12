// Function: FUN_0046ead0
// Entry:    0046ead0
// Size:     693 bytes
// Conv:     unknown
// Signature: undefined FUN_0046ead0(void)
// Decompiled by Ghidra 12.1.2


void FUN_0046ead0(void)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  if (DAT_0300347c < 5) {
    iVar6 = 0;
    iVar1 = DAT_03003784;
    uVar7 = DAT_0300347c;
    uVar4 = DAT_03003474;
    pbVar5 = DAT_02fff1a0;
    do {
      switch((&switchD_0046eaf6::switchdataD_0046ed88)[uVar7]) {
      case (undefined *)0x46eafd:
        if (iVar1 < 0x12) {
          for (; iVar1 < 0x19; iVar1 = iVar1 + 8) {
            uVar4 = uVar4 << 8 | (uint)*pbVar5;
            pbVar5 = pbVar5 + 1;
            DAT_02fff1a0 = pbVar5;
          }
        }
        bVar3 = (char)iVar1 - 6;
        bVar2 = (char)iVar1 - 0xc;
        uVar7 = uVar4 >> (bVar3 & 0x1f);
        uVar4 = uVar4 - (uVar7 << (bVar3 & 0x1f));
        iVar8 = *(int *)((int)&DAT_02fff1a4 + iVar6);
        iVar1 = iVar1 + -0x12;
        DAT_03003784 = iVar1;
        *(int *)((int)&DAT_02fff574 + iVar6) =
             (&DAT_02fff3c0)[uVar7] * iVar8 >>
             ((byte)*(undefined4 *)((int)&DAT_03003584 + iVar6) & 0x1f);
        uVar7 = uVar4 >> (bVar2 & 0x1f);
        uVar4 = uVar4 - (uVar7 << (bVar2 & 0x1f));
        *(int *)((int)&DAT_02fff674 + iVar6) =
             (&DAT_02fff3c0)[uVar7] * iVar8 >>
             ((byte)*(undefined4 *)((int)&DAT_03003584 + iVar6) & 0x1f);
        DAT_03003908 = uVar4 >> ((byte)iVar1 & 0x1f);
        uVar4 = uVar4 - (DAT_03003908 << ((byte)iVar1 & 0x1f));
        DAT_03003474 = uVar4;
        *(int *)(iVar6 + 0x2fff774) =
             (&DAT_02fff3c0)[DAT_03003908] * iVar8 >>
             ((byte)*(undefined4 *)((int)&DAT_03003584 + iVar6) & 0x1f);
        break;
      case (undefined *)0x46ebc9:
        if (iVar1 < 0xc) {
          for (; iVar1 < 0x19; iVar1 = iVar1 + 8) {
            uVar4 = uVar4 << 8 | (uint)*pbVar5;
            pbVar5 = pbVar5 + 1;
            DAT_02fff1a0 = pbVar5;
          }
        }
        bVar3 = (char)iVar1 - 6;
        iVar1 = iVar1 + -0xc;
        uVar7 = uVar4 >> (bVar3 & 0x1f);
        uVar4 = uVar4 - (uVar7 << (bVar3 & 0x1f));
        iVar8 = (&DAT_02fff3c0)[uVar7] * *(int *)((int)&DAT_02fff1a4 + iVar6) >>
                ((byte)*(undefined4 *)((int)&DAT_03003584 + iVar6) & 0x1f);
        DAT_03003784 = iVar1;
        *(int *)((int)&DAT_02fff574 + iVar6) = iVar8;
        *(int *)((int)&DAT_02fff674 + iVar6) = iVar8;
        DAT_03003908 = uVar4 >> ((byte)iVar1 & 0x1f);
        uVar4 = uVar4 - (DAT_03003908 << ((byte)iVar1 & 0x1f));
        iVar8 = (&DAT_02fff3c0)[DAT_03003908] * *(int *)((int)&DAT_02fff1a4 + iVar6) >>
                ((byte)*(undefined4 *)((int)&DAT_03003584 + iVar6) & 0x1f);
        DAT_03003474 = uVar4;
        goto LAB_0046ed68;
      case (undefined *)0x46ec64:
        if (iVar1 < 6) {
          for (; iVar1 < 0x19; iVar1 = iVar1 + 8) {
            uVar4 = uVar4 << 8 | (uint)*pbVar5;
            pbVar5 = pbVar5 + 1;
            DAT_02fff1a0 = pbVar5;
          }
        }
        iVar1 = iVar1 + -6;
        DAT_03003908 = uVar4 >> ((byte)iVar1 & 0x1f);
        uVar4 = uVar4 - (DAT_03003908 << ((byte)iVar1 & 0x1f));
        iVar8 = (&DAT_02fff3c0)[DAT_03003908] * *(int *)((int)&DAT_02fff1a4 + iVar6) >>
                ((byte)*(undefined4 *)((int)&DAT_03003584 + iVar6) & 0x1f);
        DAT_03003474 = uVar4;
        DAT_03003784 = iVar1;
        *(int *)((int)&DAT_02fff574 + iVar6) = iVar8;
        goto LAB_0046ed62;
      case (undefined *)0x46ecd2:
        if (iVar1 < 0xc) {
          for (; iVar1 < 0x19; iVar1 = iVar1 + 8) {
            uVar4 = uVar4 << 8 | (uint)*pbVar5;
            pbVar5 = pbVar5 + 1;
            DAT_02fff1a0 = pbVar5;
          }
        }
        bVar3 = (char)iVar1 - 6;
        iVar1 = iVar1 + -0xc;
        uVar7 = uVar4 >> (bVar3 & 0x1f);
        uVar4 = uVar4 - (uVar7 << (bVar3 & 0x1f));
        DAT_03003784 = iVar1;
        *(int *)((int)&DAT_02fff574 + iVar6) =
             (&DAT_02fff3c0)[uVar7] * *(int *)((int)&DAT_02fff1a4 + iVar6) >>
             ((byte)*(undefined4 *)((int)&DAT_03003584 + iVar6) & 0x1f);
        DAT_03003908 = uVar4 >> ((byte)iVar1 & 0x1f);
        uVar4 = uVar4 - (DAT_03003908 << ((byte)iVar1 & 0x1f));
        iVar8 = (&DAT_02fff3c0)[DAT_03003908] * *(int *)((int)&DAT_02fff1a4 + iVar6) >>
                ((byte)*(undefined4 *)((int)&DAT_03003584 + iVar6) & 0x1f);
        DAT_03003474 = uVar4;
LAB_0046ed62:
        *(int *)((int)&DAT_02fff674 + iVar6) = iVar8;
LAB_0046ed68:
        *(int *)(iVar6 + 0x2fff774) = iVar8;
      }
      uVar7 = *(uint *)((int)&DAT_03003480 + iVar6);
      iVar6 = iVar6 + 4;
    } while (uVar7 < 5);
  }
  return;
}

