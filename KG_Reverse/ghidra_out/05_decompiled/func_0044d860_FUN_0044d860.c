// Function: FUN_0044d860
// Entry:    0044d860
// Size:     607 bytes
// Conv:     unknown
// Signature: undefined FUN_0044d860(void)
// Decompiled by Ghidra 12.1.2


void FUN_0044d860(uint *param_1,int param_2,uint param_3,byte param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined1 uVar4;
  byte bVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  
  uVar1 = *param_1;
  uVar6 = param_3 >> 8;
  bVar5 = (byte)(param_3 >> 8);
  uVar4 = (undefined1)param_3;
  if ((char)param_1[2] == '\0') {
    if (*(char *)((int)param_1 + 9) == '\b') {
      puVar7 = (undefined1 *)(uVar1 + param_2);
      puVar8 = puVar7 + uVar1;
      uVar6 = uVar1;
      if ((param_4 & 0x80) == 0) {
        for (; uVar6 != 0; uVar6 = uVar6 - 1) {
          puVar9 = puVar7 + -1;
          puVar7 = puVar7 + -1;
          puVar8[-1] = *puVar9;
          puVar8 = puVar8 + -2;
          *puVar8 = uVar4;
        }
        *(undefined1 *)((int)param_1 + 10) = 2;
        *(undefined1 *)((int)param_1 + 0xb) = 0x10;
        param_1[1] = uVar1 * 2;
        return;
      }
      if (1 < uVar1) {
        iVar3 = uVar1 - 1;
        do {
          puVar7 = puVar7 + -1;
          puVar8[-1] = uVar4;
          puVar8 = puVar8 + -2;
          iVar3 = iVar3 + -1;
          *puVar8 = *puVar7;
        } while (iVar3 != 0);
      }
      puVar8[-1] = uVar4;
      *(undefined1 *)((int)param_1 + 10) = 2;
      *(undefined1 *)((int)param_1 + 0xb) = 0x10;
      param_1[1] = uVar1 * 2;
      return;
    }
    if (*(char *)((int)param_1 + 9) == '\x10') {
      puVar7 = (undefined1 *)(param_2 + uVar1 * 2);
      puVar8 = puVar7 + uVar1 * 2;
      uVar2 = uVar1;
      if ((param_4 & 0x80) == 0) {
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          puVar9 = puVar7 + -1;
          puVar7 = puVar7 + -2;
          puVar8[-1] = *puVar9;
          puVar8[-2] = *puVar7;
          puVar8[-3] = bVar5;
          puVar8 = puVar8 + -4;
          *puVar8 = uVar4;
        }
        *(undefined1 *)((int)param_1 + 10) = 2;
        *(undefined1 *)((int)param_1 + 0xb) = 0x20;
        param_1[1] = uVar1 << 2;
        return;
      }
      if (1 < uVar1) {
        iVar3 = uVar1 - 1;
        do {
          puVar8[-1] = (char)uVar6;
          puVar9 = puVar7 + -1;
          puVar8[-2] = uVar4;
          puVar7 = puVar7 + -2;
          puVar8[-3] = *puVar9;
          puVar8 = puVar8 + -4;
          iVar3 = iVar3 + -1;
          *puVar8 = *puVar7;
          uVar6 = (uint)bVar5;
        } while (iVar3 != 0);
      }
      puVar8[-1] = bVar5;
      puVar8[-2] = uVar4;
      *(undefined1 *)((int)param_1 + 10) = 2;
      *(undefined1 *)((int)param_1 + 0xb) = 0x20;
      param_1[1] = uVar1 << 2;
      return;
    }
  }
  else if ((char)param_1[2] == '\x02') {
    if (*(char *)((int)param_1 + 9) == '\b') {
      param_2 = param_2 + uVar1 * 2;
      if ((param_4 & 0x80) == 0) {
        puVar8 = (undefined1 *)(uVar1 + param_2);
        puVar7 = puVar8 + uVar1;
        for (uVar6 = uVar1; uVar6 != 0; uVar6 = uVar6 - 1) {
          puVar9 = puVar8 + -2;
          puVar7[-1] = puVar8[-1];
          puVar8 = puVar8 + -3;
          puVar7[-2] = *puVar9;
          puVar7[-3] = *puVar8;
          puVar7 = puVar7 + -4;
          *puVar7 = uVar4;
        }
        *(undefined1 *)((int)param_1 + 10) = 4;
        *(undefined1 *)((int)param_1 + 0xb) = 0x20;
        param_1[1] = uVar1 << 2;
        return;
      }
      puVar8 = (undefined1 *)(uVar1 + param_2);
      puVar7 = puVar8 + uVar1;
      if (1 < uVar1) {
        iVar3 = uVar1 - 1;
        do {
          puVar7[-1] = uVar4;
          puVar9 = puVar8 + -2;
          puVar7[-2] = puVar8[-1];
          puVar8 = puVar8 + -3;
          puVar7[-3] = *puVar9;
          puVar7 = puVar7 + -4;
          iVar3 = iVar3 + -1;
          *puVar7 = *puVar8;
        } while (iVar3 != 0);
      }
      puVar7[-1] = uVar4;
      *(undefined1 *)((int)param_1 + 10) = 4;
      *(undefined1 *)((int)param_1 + 0xb) = 0x20;
      param_1[1] = uVar1 << 2;
      return;
    }
    if (*(char *)((int)param_1 + 9) == '\x10') {
      puVar7 = (undefined1 *)(param_2 + uVar1 * 6);
      puVar8 = puVar7 + uVar1 * 2;
      uVar2 = uVar1;
      if ((param_4 & 0x80) != 0) {
        if (1 < uVar1) {
          iVar3 = uVar1 - 1;
          do {
            puVar8[-1] = (char)uVar6;
            puVar8[-2] = uVar4;
            puVar8[-3] = puVar7[-1];
            puVar8[-4] = puVar7[-2];
            puVar8[-5] = puVar7[-3];
            puVar9 = puVar7 + -5;
            puVar8[-6] = puVar7[-4];
            puVar7 = puVar7 + -6;
            puVar8[-7] = *puVar9;
            puVar8 = puVar8 + -8;
            iVar3 = iVar3 + -1;
            *puVar8 = *puVar7;
            uVar6 = (uint)bVar5;
          } while (iVar3 != 0);
        }
        puVar8[-1] = bVar5;
        puVar8[-2] = uVar4;
        *(undefined1 *)((int)param_1 + 10) = 4;
        *(undefined1 *)((int)param_1 + 0xb) = 0x40;
        param_1[1] = uVar1 << 3;
        return;
      }
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        puVar8[-1] = puVar7[-1];
        puVar8[-2] = puVar7[-2];
        puVar8[-3] = puVar7[-3];
        puVar9 = puVar7 + -5;
        puVar8[-4] = puVar7[-4];
        puVar7 = puVar7 + -6;
        puVar8[-5] = *puVar9;
        puVar8[-6] = *puVar7;
        puVar8[-7] = bVar5;
        puVar8 = puVar8 + -8;
        *puVar8 = uVar4;
      }
      *(undefined1 *)((int)param_1 + 10) = 4;
      *(undefined1 *)((int)param_1 + 0xb) = 0x40;
      param_1[1] = uVar1 << 3;
    }
  }
  return;
}

