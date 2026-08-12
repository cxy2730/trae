// Function: FUN_00472050
// Entry:    00472050
// Size:     530 bytes
// Conv:     unknown
// Signature: undefined FUN_00472050(void)
// Decompiled by Ghidra 12.1.2


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00472050(void)

{
  float fVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  
  if (DAT_03008b6c < 5) {
    iVar5 = 0;
    uVar2 = DAT_03008b64;
    iVar4 = DAT_03008d74;
    pbVar7 = DAT_03006cf0;
    uVar8 = DAT_03008b6c;
    do {
      switch((&switchD_00472075::switchdataD_00472264)[uVar8]) {
      case (undefined *)0x47207c:
        if (iVar4 < 0x12) {
          for (; iVar4 < 0x19; iVar4 = iVar4 + 8) {
            uVar2 = uVar2 << 8 | (uint)*pbVar7;
            pbVar7 = pbVar7 + 1;
            DAT_03006cf0 = pbVar7;
          }
        }
        bVar3 = (char)iVar4 - 6;
        uVar8 = uVar2 >> (bVar3 & 0x1f);
        iVar4 = iVar4 + -0xc;
        uVar2 = uVar2 - (uVar8 << (bVar3 & 0x1f));
        *(float *)(&DAT_03007064 + iVar5) =
             (float)(&DAT_03006ef8)[uVar8] * *(float *)((int)&DAT_03006cf4 + iVar5);
        uVar8 = uVar2 >> ((byte)iVar4 & 0x1f);
        fVar1 = (float)(&DAT_03006ef8)[uVar8] * *(float *)((int)&DAT_03006cf4 + iVar5);
        uVar2 = uVar2 - (uVar8 << ((byte)iVar4 & 0x1f));
        break;
      case (undefined *)0x4720e5:
        if (iVar4 < 0xc) {
          for (; iVar4 < 0x19; iVar4 = iVar4 + 8) {
            uVar2 = uVar2 << 8 | (uint)*pbVar7;
            pbVar7 = pbVar7 + 1;
            DAT_03006cf0 = pbVar7;
          }
        }
        iVar4 = iVar4 + -6;
        uVar8 = uVar2 >> ((byte)iVar4 & 0x1f);
        fVar1 = (float)(&DAT_03006ef8)[uVar8] * *(float *)((int)&DAT_03006cf4 + iVar5);
        *(float *)(&DAT_03007064 + iVar5) = fVar1;
        uVar2 = uVar2 - (uVar8 << ((byte)iVar4 & 0x1f));
        break;
      case (undefined *)0x472168:
        if (iVar4 < 6) {
          for (; iVar4 < 0x19; iVar4 = iVar4 + 8) {
            uVar2 = uVar2 << 8 | (uint)*pbVar7;
            pbVar7 = pbVar7 + 1;
            DAT_03006cf0 = pbVar7;
          }
        }
        iVar4 = iVar4 + -6;
        _DAT_03008ef8 = uVar2 >> ((byte)iVar4 & 0x1f);
        fVar1 = (float)(&DAT_03006ef8)[_DAT_03008ef8] * *(float *)((int)&DAT_03006cf4 + iVar5);
        iVar6 = _DAT_03008ef8 << ((byte)iVar4 & 0x1f);
        DAT_03008d74 = iVar4;
        *(float *)(&DAT_03007064 + iVar5) = fVar1;
        uVar2 = uVar2 - iVar6;
        goto LAB_00472240;
      case (undefined *)0x4721c8:
        if (iVar4 < 0xc) {
          for (; iVar4 < 0x19; iVar4 = iVar4 + 8) {
            uVar2 = uVar2 << 8 | (uint)*pbVar7;
            pbVar7 = pbVar7 + 1;
            DAT_03006cf0 = pbVar7;
          }
        }
        bVar3 = (char)iVar4 - 6;
        uVar8 = uVar2 >> (bVar3 & 0x1f);
        iVar4 = iVar4 + -0xc;
        uVar2 = uVar2 - (uVar8 << (bVar3 & 0x1f));
        _DAT_03008ef8 = uVar2 >> ((byte)iVar4 & 0x1f);
        DAT_03008d74 = iVar4;
        *(float *)(&DAT_03007064 + iVar5) =
             (float)(&DAT_03006ef8)[uVar8] * *(float *)((int)&DAT_03006cf4 + iVar5);
        fVar1 = (float)(&DAT_03006ef8)[_DAT_03008ef8] * *(float *)((int)&DAT_03006cf4 + iVar5);
        uVar2 = uVar2 - (_DAT_03008ef8 << ((byte)iVar4 & 0x1f));
LAB_00472240:
        DAT_03008b64 = uVar2;
        *(float *)((int)&DAT_03007164 + iVar5) = fVar1;
        goto LAB_00472246;
      case (undefined *)0x47224c:
        goto switchD_00472075_caseD_47224c;
      }
      iVar4 = iVar4 + -6;
      _DAT_03008ef8 = uVar2 >> ((byte)iVar4 & 0x1f);
      *(float *)((int)&DAT_03007164 + iVar5) = fVar1;
      fVar1 = (float)(&DAT_03006ef8)[_DAT_03008ef8] * *(float *)((int)&DAT_03006cf4 + iVar5);
      uVar2 = uVar2 - (_DAT_03008ef8 << ((byte)iVar4 & 0x1f));
      DAT_03008b64 = uVar2;
      DAT_03008d74 = iVar4;
LAB_00472246:
      *(float *)(iVar5 + 0x3007264) = fVar1;
switchD_00472075_caseD_47224c:
      uVar8 = *(uint *)((int)&DAT_03008b70 + iVar5);
      iVar5 = iVar5 + 4;
    } while (uVar8 < 5);
  }
  return;
}

