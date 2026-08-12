// Function: FUN_00401c61
// Entry:    00401c61
// Size:     172 bytes
// Conv:     unknown
// Signature: undefined FUN_00401c61(void)
// Decompiled by Ghidra 12.1.2


int FUN_00401c61(uint *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  uint *puVar7;
  uint *puVar8;
  bool bVar9;
  
  if (param_3 != 0) {
    if ((((uint)param_1 | (uint)param_2) & 3) == 0) {
      uVar3 = param_3 & 3;
      param_3 = param_3 >> 2;
      bVar9 = false;
      puVar7 = param_1;
      puVar8 = param_2;
      if (param_3 != 0) {
        do {
          param_1 = puVar7;
          param_2 = puVar8;
          if (param_3 == 0) break;
          param_3 = param_3 - 1;
          param_2 = puVar8 + 1;
          param_1 = puVar7 + 1;
          bVar9 = *puVar7 == *puVar8;
          puVar7 = param_1;
          puVar8 = param_2;
        } while (bVar9);
        if (!bVar9) {
          uVar3 = param_1[-1];
          uVar1 = param_2[-1];
          bVar9 = (byte)uVar3 < (byte)uVar1;
          if ((((byte)uVar3 == (byte)uVar1) &&
              (bVar6 = (byte)(uVar1 >> 8), bVar5 = (byte)(uVar3 >> 8), bVar9 = bVar5 < bVar6,
              bVar5 == bVar6)) &&
             (bVar6 = (byte)(uVar1 >> 0x10), bVar5 = (byte)(uVar3 >> 0x10), bVar9 = bVar5 < bVar6,
             bVar5 == bVar6)) {
            bVar9 = (byte)(uVar3 >> 0x18) < (byte)(uVar1 >> 0x18);
          }
          goto LAB_00401cdb;
        }
      }
      if (uVar3 != 0) {
        uVar1 = *param_1;
        uVar2 = *param_2;
        bVar9 = (byte)uVar1 < (byte)uVar2;
        if ((byte)uVar1 != (byte)uVar2) {
LAB_00401cdb:
          return (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        }
        iVar4 = 0;
        if (uVar3 != 1) {
          bVar5 = (byte)(uVar2 >> 8);
          bVar6 = (byte)(uVar1 >> 8);
          bVar9 = bVar6 < bVar5;
          if (bVar6 != bVar5) goto LAB_00401cdb;
          iVar4 = 0;
          if (uVar3 != 2) {
            bVar9 = (uVar1 & 0xff0000) < (uVar2 & 0xff0000);
            if ((uVar1 & 0xff0000) != (uVar2 & 0xff0000)) goto LAB_00401cdb;
            iVar4 = uVar3 - 3;
          }
        }
        return iVar4;
      }
    }
    else {
      if ((param_3 & 1) == 0) goto LAB_00401c8e;
      bVar9 = (byte)*param_1 < (byte)*param_2;
      if ((byte)*param_1 != (byte)*param_2) goto LAB_00401cdb;
      param_1 = (uint *)((int)param_1 + 1);
      param_2 = (uint *)((int)param_2 + 1);
      for (param_3 = param_3 - 1; param_3 != 0; param_3 = param_3 - 2) {
LAB_00401c8e:
        bVar9 = (byte)*param_1 < (byte)*param_2;
        if (((byte)*param_1 != (byte)*param_2) ||
           (bVar9 = *(byte *)((int)param_1 + 1) < *(byte *)((int)param_2 + 1),
           *(byte *)((int)param_1 + 1) != *(byte *)((int)param_2 + 1))) goto LAB_00401cdb;
        param_2 = (uint *)((int)param_2 + 2);
        param_1 = (uint *)((int)param_1 + 2);
      }
    }
  }
  return 0;
}

