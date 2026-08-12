// Function: FUN_00425720
// Entry:    00425720
// Size:     673 bytes
// Conv:     unknown
// Signature: undefined FUN_00425720(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall FUN_00425720(int param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  byte bVar2;
  byte *pbVar3;
  uint *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  
  puVar4 = param_3;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  if ((*param_2 & 1) != 0) {
    return 0;
  }
  pbVar3 = (byte *)param_2[3];
  if ((int)pbVar3 - param_2[2] == param_2[1]) {
    return 0;
  }
  bVar2 = *pbVar3;
  param_2[3] = (uint)(pbVar3 + 1);
  if ((bVar2 & 0x80) == 0) {
    bVar8 = (byte)param_2[5];
    if (bVar8 == 0) {
      return 0;
    }
    *(byte *)((int)param_3 + 5) = bVar2;
    *(byte *)(param_3 + 1) = bVar8;
    param_3[2] = 2;
    if (((bVar8 & 0xf0) != 0xc0) && ((bVar8 & 0xf0) != 0xd0)) {
      if ((int)param_2[3] - param_2[2] == param_2[1]) {
        return 0;
      }
      *(undefined1 *)((int)param_3 + 6) = *(undefined1 *)param_2[3];
      param_2[3] = param_2[3] + 1;
      param_3[2] = param_3[2] + 1;
    }
  }
  else {
    bVar8 = bVar2 & 0xf0;
    if (bVar8 == 0xf0) {
      if ((bVar2 == 0xf0) || (bVar2 == 0xf7)) {
        puVar1 = param_3 + 2;
        *(byte *)(param_3 + 1) = bVar2;
        iVar7 = FUN_004259d0(param_2,puVar1);
        if (iVar7 == 0) {
          return 0;
        }
        uVar6 = FUN_00492f17(*puVar1);
        puVar4[3] = uVar6;
        if (uVar6 == 0) {
          return 0;
        }
        uVar6 = 0;
        *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
        if (*puVar1 != 0) {
          do {
            if ((int)param_2[3] - param_2[2] == param_2[1]) {
              return 0;
            }
            *(undefined1 *)(uVar6 + puVar4[3]) = *(undefined1 *)param_2[3];
            uVar6 = uVar6 + 1;
            param_2[3] = param_2[3] + 1;
          } while (uVar6 < *puVar1);
        }
      }
      else {
        if (bVar2 != 0xff) {
          return 0;
        }
        *(undefined1 *)(param_3 + 1) = 0xff;
        if ((int)param_2[3] - param_2[2] == param_2[1]) {
          return 0;
        }
        puVar1 = param_3 + 2;
        *(undefined1 *)((int)param_3 + 5) = *(undefined1 *)param_2[3];
        param_2[3] = param_2[3] + 1;
        iVar7 = FUN_004259d0(param_2,puVar1);
        if (iVar7 == 0) {
          return 0;
        }
        if (*puVar1 != 0) {
          uVar6 = FUN_00492f17(*puVar1);
          puVar4[3] = uVar6;
          if (uVar6 == 0) {
            return 0;
          }
          uVar6 = 0;
          *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
          if (*puVar1 != 0) {
            do {
              if ((int)param_2[3] - param_2[2] == param_2[1]) {
                return 0;
              }
              *(undefined1 *)(uVar6 + puVar4[3]) = *(undefined1 *)param_2[3];
              uVar6 = uVar6 + 1;
              param_2[3] = param_2[3] + 1;
            } while (uVar6 < *puVar1);
          }
        }
        if (*(char *)((int)puVar4 + 5) == '/') {
          *param_2 = *param_2 | 1;
        }
      }
    }
    else {
      *(byte *)(param_3 + 1) = bVar2;
      *(byte *)(param_2 + 5) = bVar2;
      if ((bVar8 == 0xc0) || (iVar7 = 2, bVar8 == 0xd0)) {
        iVar7 = 1;
      }
      param_3[2] = iVar7 + 1;
      if ((int)param_2[3] - param_2[2] == param_2[1]) {
        return 0;
      }
      *(undefined1 *)((int)param_3 + 5) = *(undefined1 *)param_2[3];
      puVar5 = (undefined1 *)(param_2[3] + 1);
      param_2[3] = (uint)puVar5;
      if (iVar7 == 2) {
        if ((int)puVar5 - param_2[2] == param_2[1]) {
          return 0;
        }
        *(undefined1 *)((int)param_3 + 6) = *puVar5;
        param_2[3] = param_2[3] + 1;
      }
    }
  }
  *puVar4 = param_2[4];
  if ((*param_2 & 1) == 0) {
    iVar7 = FUN_004259d0(param_2,&param_3);
    if (iVar7 == 0) {
      return 0;
    }
    param_2[4] = param_2[4] + (int)param_3;
  }
  return 1;
}

