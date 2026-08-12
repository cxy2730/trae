// Function: FUN_0046ea10
// Entry:    0046ea10
// Size:     180 bytes
// Conv:     unknown
// Signature: undefined FUN_0046ea10(void)
// Decompiled by Ghidra 12.1.2


void FUN_0046ea10(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  
  iVar1 = DAT_02fff520;
  iVar6 = 0;
  iVar2 = DAT_03003784;
  uVar3 = DAT_03003474;
  pbVar5 = DAT_02fff1a0;
  if (0 < DAT_02fff520) {
    do {
      if (iVar2 < 2) {
        while (iVar2 < 0x19) {
          uVar3 = uVar3 << 8 | (uint)*pbVar5;
          pbVar5 = pbVar5 + 1;
          iVar2 = iVar2 + 8;
          DAT_02fff1a0 = pbVar5;
          DAT_03003474 = uVar3;
          DAT_03003784 = iVar2;
        }
      }
      if ((&DAT_03003684)[iVar6] == 0) {
        (&DAT_0300347c)[iVar6] = 4;
      }
      else {
        iVar2 = iVar2 + -2;
        DAT_03003908 = uVar3 >> ((byte)iVar2 & 0x1f);
        iVar4 = DAT_03003908 << ((byte)iVar2 & 0x1f);
        DAT_03003784 = iVar2;
        (&DAT_0300347c)[iVar6] = DAT_03003908;
        uVar3 = uVar3 - iVar4;
        DAT_03003474 = uVar3;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar1);
    (&DAT_0300347c)[iVar6] = 5;
    return;
  }
  DAT_0300347c = 5;
  return;
}

