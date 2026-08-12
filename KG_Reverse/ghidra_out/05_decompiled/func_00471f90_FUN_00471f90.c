// Function: FUN_00471f90
// Entry:    00471f90
// Size:     180 bytes
// Conv:     unknown
// Signature: undefined FUN_00471f90(void)
// Decompiled by Ghidra 12.1.2


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00471f90(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  
  iVar1 = DAT_03007058;
  iVar6 = 0;
  iVar2 = DAT_03008d74;
  uVar3 = DAT_03008b64;
  pbVar5 = DAT_03006cf0;
  if (0 < DAT_03007058) {
    do {
      if (iVar2 < 2) {
        while (iVar2 < 0x19) {
          uVar3 = uVar3 << 8 | (uint)*pbVar5;
          pbVar5 = pbVar5 + 1;
          iVar2 = iVar2 + 8;
          DAT_03006cf0 = pbVar5;
          DAT_03008b64 = uVar3;
          DAT_03008d74 = iVar2;
        }
      }
      if ((&DAT_03008c74)[iVar6] == 0) {
        (&DAT_03008b6c)[iVar6] = 4;
      }
      else {
        iVar2 = iVar2 + -2;
        _DAT_03008ef8 = uVar3 >> ((byte)iVar2 & 0x1f);
        iVar4 = _DAT_03008ef8 << ((byte)iVar2 & 0x1f);
        DAT_03008d74 = iVar2;
        (&DAT_03008b6c)[iVar6] = _DAT_03008ef8;
        uVar3 = uVar3 - iVar4;
        DAT_03008b64 = uVar3;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar1);
    (&DAT_03008b6c)[iVar6] = 5;
    return;
  }
  DAT_03008b6c = 5;
  return;
}

