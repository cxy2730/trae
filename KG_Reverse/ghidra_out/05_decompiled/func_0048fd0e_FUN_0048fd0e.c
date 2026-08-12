// Function: FUN_0048fd0e
// Entry:    0048fd0e
// Size:     127 bytes
// Conv:     unknown
// Signature: undefined FUN_0048fd0e(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_0048fd0e(uint param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if (param_1 < DAT_03014fc0) {
    iVar3 = (param_1 & 0x1f) * 0x24;
    piVar1 = (int *)((&DAT_03014ec0)[(int)param_1 >> 5] + iVar3);
    if (((*(byte *)(piVar1 + 1) & 1) != 0) && (*piVar1 != -1)) {
      if (DAT_02fd8974 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_0048fd6a;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_0048fd6a:
      *(undefined4 *)((&DAT_03014ec0)[(int)param_1 >> 5] + iVar3) = 0xffffffff;
      return 0;
    }
  }
  puVar2 = (undefined4 *)FUN_004843ad();
  *puVar2 = 9;
  puVar2 = (undefined4 *)FUN_004843b6();
  *puVar2 = 0;
  return 0xffffffff;
}

