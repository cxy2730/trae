// Function: FUN_004867ee
// Entry:    004867ee
// Size:     389 bytes
// Conv:     unknown
// Signature: undefined FUN_004867ee(void)
// Decompiled by Ghidra 12.1.2


void FUN_004867ee(void)

{
  byte *pbVar1;
  BOOL BVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ushort *puVar7;
  undefined1 uVar8;
  BYTE *pBVar9;
  undefined4 *puVar10;
  ushort local_518 [256];
  undefined1 local_318 [256];
  undefined1 local_218 [256];
  undefined4 local_118 [64];
  _cpinfo local_18;
  
  BVar2 = GetCPInfo(DAT_03014fc4,&local_18);
  if (BVar2 == 1) {
    uVar3 = 0;
    do {
      *(char *)((int)local_118 + uVar3) = (char)uVar3;
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
    local_118[0]._0_1_ = 0x20;
    if (local_18.LeadByte[0] != 0) {
      pBVar9 = local_18.LeadByte + 1;
      do {
        uVar3 = (uint)local_18.LeadByte[0];
        if (uVar3 <= *pBVar9) {
          uVar5 = (*pBVar9 - uVar3) + 1;
          puVar10 = (undefined4 *)((int)local_118 + uVar3);
          for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar10 = 0x20202020;
            puVar10 = puVar10 + 1;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined1 *)puVar10 = 0x20;
            puVar10 = (undefined4 *)((int)puVar10 + 1);
          }
        }
        local_18.LeadByte[0] = pBVar9[1];
        pBVar9 = pBVar9 + 2;
      } while (local_18.LeadByte[0] != 0);
    }
    FUN_0048e230(1,local_118,0x100,local_518,DAT_03014fc4,DAT_030151e4,0);
    FUN_0048a954(DAT_030151e4,0x100,local_118,0x100,local_218,0x100,DAT_03014fc4,0);
    FUN_0048a954(DAT_030151e4,0x200,local_118,0x100,local_318,0x100,DAT_03014fc4,0);
    uVar3 = 0;
    puVar7 = local_518;
    do {
      if ((*puVar7 & 1) == 0) {
        if ((*puVar7 & 2) != 0) {
          pbVar1 = (byte *)((int)&DAT_030150e0 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          uVar8 = local_318[uVar3];
          goto LAB_004868fa;
        }
        (&DAT_03014fe0)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_030150e0 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        uVar8 = local_218[uVar3];
LAB_004868fa:
        (&DAT_03014fe0)[uVar3] = uVar8;
      }
      uVar3 = uVar3 + 1;
      puVar7 = puVar7 + 1;
    } while (uVar3 < 0x100);
  }
  else {
    uVar3 = 0;
    do {
      if ((uVar3 < 0x41) || (0x5a < uVar3)) {
        if ((0x60 < uVar3) && (uVar3 < 0x7b)) {
          pbVar1 = (byte *)((int)&DAT_030150e0 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          cVar4 = (char)uVar3 + -0x20;
          goto LAB_00486944;
        }
        (&DAT_03014fe0)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_030150e0 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        cVar4 = (char)uVar3 + ' ';
LAB_00486944:
        (&DAT_03014fe0)[uVar3] = cVar4;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
  }
  return;
}

