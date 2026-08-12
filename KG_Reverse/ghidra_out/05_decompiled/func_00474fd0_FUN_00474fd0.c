// Function: FUN_00474fd0
// Entry:    00474fd0
// Size:     412 bytes
// Conv:     unknown
// Signature: undefined FUN_00474fd0(void)
// Decompiled by Ghidra 12.1.2


int FUN_00474fd0(undefined4 param_1,undefined4 param_2,byte *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  
  *param_4 = 0;
  iVar1 = FUN_00474d90(param_1,param_2,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_3 + 8) == 1) {
    if (*(int *)(param_3 + 0x10) < 1) {
      if (*(int *)(param_3 + 4) == 0) {
        if ((*param_3 & 1) == 0) {
          iVar2 = *(int *)(&DAT_02fd308c + *(int *)(param_3 + 0x14) * 4) * iVar1 * 500;
        }
        else {
          iVar2 = *(int *)(&DAT_02fd308c + *(int *)(param_3 + 0x14) * 4) * iVar1 * 1000;
        }
        iVar2 = iVar2 / 0x5a0 + (iVar2 >> 0x1f);
      }
      else {
        iVar2 = *(int *)(&DAT_02fd308c + (*(int *)(param_3 + 0x14) + *(int *)(param_3 + 4) * 4) * 4)
                * iVar1 * 1000;
        iVar2 = iVar2 / 0xb40 + (iVar2 >> 0x1f);
      }
      *param_4 = iVar2 - (iVar2 >> 0x1f);
    }
    else {
      *param_4 = *(int *)(&DAT_02fd312c +
                         (*(int *)(param_3 + 4) * 0x10 + *(int *)(param_3 + 0x10)) * 4) * 1000;
    }
  }
  if (*(int *)(param_3 + 8) == 2) {
    if (*(int *)(param_3 + 0x10) < 1) {
      iVar2 = (*(int *)(&DAT_02fd308c + (*(int *)(param_3 + 0x14) + *(int *)(param_3 + 4) * 4) * 4)
               * iVar1 * 1000) / 0xb40;
    }
    else {
      iVar2 = *(int *)(&DAT_02fd300c + (*(int *)(param_3 + 4) * 0x10 + *(int *)(param_3 + 0x10)) * 4
                      ) * 1000;
    }
    *param_4 = iVar2;
  }
  if (*(int *)(param_3 + 8) == 3) {
    if (0 < *(int *)(param_3 + 0x10)) {
      *param_4 = *(int *)(&DAT_02fd30ac +
                         (*(int *)(param_3 + 4) * 0x10 + *(int *)(param_3 + 0x10)) * 4) * 1000;
      return iVar1;
    }
    *param_4 = (*(int *)(&DAT_02fd308c + (*(int *)(param_3 + 0x14) + *(int *)(param_3 + 4) * 4) * 4)
                * iVar1 * 1000) / 0x3c0;
  }
  return iVar1;
}

