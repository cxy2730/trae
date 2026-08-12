// Function: FUN_0048fc92
// Entry:    0048fc92
// Size:     124 bytes
// Conv:     unknown
// Signature: undefined FUN_0048fc92(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_0048fc92(uint param_1,HANDLE param_2)

{
  undefined4 *puVar1;
  int iVar2;
  DWORD nStdHandle;
  
  if (param_1 < DAT_03014fc0) {
    iVar2 = (param_1 & 0x1f) * 0x24;
    if (*(int *)((&DAT_03014ec0)[(int)param_1 >> 5] + iVar2) == -1) {
      if (DAT_02fd8974 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_0048fceb;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,param_2);
      }
LAB_0048fceb:
      *(HANDLE *)((&DAT_03014ec0)[(int)param_1 >> 5] + iVar2) = param_2;
      return 0;
    }
  }
  puVar1 = (undefined4 *)FUN_004843ad();
  *puVar1 = 9;
  puVar1 = (undefined4 *)FUN_004843b6();
  *puVar1 = 0;
  return 0xffffffff;
}

