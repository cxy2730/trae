// Function: FUN_0044d3e0
// Entry:    0044d3e0
// Size:     449 bytes
// Conv:     unknown
// Signature: undefined FUN_0044d3e0(void)
// Decompiled by Ghidra 12.1.2


void FUN_0044d3e0(int param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  int local_10 [4];
  
  bVar2 = *(byte *)(param_1 + 8);
  if (bVar2 != 3) {
    uVar4 = (uint)*(byte *)(param_1 + 9);
    if ((bVar2 & 2) == 0) {
      iVar8 = 1;
      iVar7 = uVar4 - param_3[3];
      local_10[0] = iVar7;
    }
    else {
      iVar7 = uVar4 - *param_3;
      local_10[0] = iVar7;
      local_10[1] = uVar4 - param_3[1];
      local_10[2] = uVar4 - param_3[2];
      iVar8 = 3;
    }
    if ((bVar2 & 4) != 0) {
      local_10[iVar8] = uVar4 - param_3[4];
      iVar8 = iVar8 + 1;
    }
    bVar3 = false;
    if (iVar8 != 0) {
      piVar5 = local_10;
      iVar6 = iVar8;
      local_10[0] = iVar7;
      do {
        if ((*piVar5 < 1) || ((int)uVar4 <= *piVar5)) {
          *piVar5 = 0;
          iVar7 = local_10[0];
        }
        else {
          bVar3 = true;
        }
        piVar5 = piVar5 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      if (bVar3) {
        switch(uVar4) {
        case 2:
          pbVar9 = param_2 + *(int *)(param_1 + 4);
          if (param_2 < pbVar9) {
            do {
              *param_2 = *param_2 >> 1 & 0x55;
              param_2 = param_2 + 1;
            } while (param_2 < pbVar9);
            return;
          }
          break;
        case 4:
          iVar8 = 0xf >> ((byte)iVar7 & 0x1f);
          pbVar9 = param_2 + *(int *)(param_1 + 4);
          if (param_2 < pbVar9) {
            do {
              *param_2 = *param_2 >> ((byte)iVar7 & 0x1f) & ((byte)iVar8 | (byte)(iVar8 << 4));
              param_2 = param_2 + 1;
              iVar7 = local_10[0];
            } while (param_2 < pbVar9);
            return;
          }
          break;
        case 8:
          pbVar9 = param_2 + *(int *)(param_1 + 4);
          iVar7 = 0;
          if (param_2 < pbVar9) {
            do {
              pbVar1 = (byte *)(local_10 + iVar7);
              iVar7 = iVar7 + 1;
              if (iVar8 <= iVar7) {
                iVar7 = 0;
              }
              *param_2 = *param_2 >> (*pbVar1 & 0x1f);
              param_2 = param_2 + 1;
            } while (param_2 < pbVar9);
            return;
          }
          break;
        case 0x10:
          pbVar9 = param_2 + *(int *)(param_1 + 4);
          iVar7 = 0;
          for (; param_2 < pbVar9; param_2 = param_2 + 2) {
            iVar6 = (int)((uint)*param_2 * 0x100 + (uint)param_2[1]) >>
                    ((byte)local_10[iVar7] & 0x1f);
            iVar7 = iVar7 + 1;
            if (iVar8 <= iVar7) {
              iVar7 = 0;
            }
            *param_2 = (byte)((uint)iVar6 >> 8);
            param_2[1] = (byte)iVar6;
          }
        }
      }
    }
  }
  return;
}

