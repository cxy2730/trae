// Function: FUN_00474d90
// Entry:    00474d90
// Size:     473 bytes
// Conv:     unknown
// Signature: undefined FUN_00474d90(void)
// Decompiled by Ghidra 12.1.2


int FUN_00474d90(char *param_1,uint param_2,undefined4 *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  if (10000 < param_2) {
    param_2 = 10000;
  }
  *param_3 = 0;
  if (*param_1 == -1) {
    if ((param_1[1] & 0xf0U) == 0xf0) {
      bVar1 = false;
    }
    else {
      if ((param_1[1] & 0xf0U) != 0xe0) {
        return 0;
      }
      bVar1 = true;
    }
    *param_3 = 1;
    if (bVar1) {
      *param_3 = 2;
    }
    param_3[1] = ((byte)param_1[1] & 8) >> 3;
    param_3[2] = (byte)param_1[1] >> 1 & 3;
    iVar3 = param_3[2];
    param_3[3] = (byte)param_1[1] & 1;
    param_3[4] = (uint)((byte)param_1[2] >> 4);
    param_3[5] = ((byte)param_1[2] & 0xc) >> 2;
    param_3[6] = (byte)param_1[2] >> 1 & 1;
    param_3[7] = (byte)param_1[2] & 1;
    param_3[8] = (uint)((byte)param_1[3] >> 6);
    param_3[9] = ((byte)param_1[3] & 0x30) >> 4;
    param_3[10] = ((byte)param_1[3] & 8) >> 3;
    param_3[0xb] = ((byte)param_1[3] & 4) >> 2;
    param_3[0xc] = (byte)param_1[3] & 3;
    if ((0 < iVar3) && (iVar3 < 4)) {
      iVar2 = param_3[4];
      if (iVar2 < 1) {
        iVar3 = FUN_00475170(param_1,param_2);
        return iVar3;
      }
      if (iVar3 == 3) {
        return (*(int *)(&DAT_02fd30ac + (param_3[1] * 0x10 + iVar2) * 4) * 0xf0) /
               *(int *)(&DAT_02fd308c + (param_3[5] + param_3[1] * 4) * 4) << 2;
      }
      if (iVar3 == 2) {
        iVar3 = param_3[1];
        iVar2 = *(int *)(&DAT_02fd300c + (iVar3 * 0x10 + iVar2) * 4);
      }
      else {
        if (iVar3 != 1) {
          return 0;
        }
        iVar3 = param_3[1];
        if (iVar3 == 0) {
          if (bVar1) {
            return (*(int *)(&DAT_02fd312c + iVar2 * 4) * 0xb40) /
                   *(int *)(&DAT_02fd308c + param_3[5] * 4);
          }
          return (*(int *)(&DAT_02fd312c + iVar2 * 4) * 0x5a0) /
                 *(int *)(&DAT_02fd308c + param_3[5] * 4);
        }
        iVar2 = *(int *)(&DAT_02fd312c + (iVar3 * 0x10 + iVar2) * 4);
      }
      return (iVar2 * 0xb40) / *(int *)(&DAT_02fd308c + (param_3[5] + iVar3 * 4) * 4);
    }
  }
  return 0;
}

