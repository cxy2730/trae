// Function: FUN_00406d30
// Entry:    00406d30
// Size:     74 bytes
// Conv:     unknown
// Signature: undefined FUN_00406d30(void)
// Decompiled by Ghidra 12.1.2


int FUN_00406d30(char *param_1,int param_2,char param_3)

{
  int iVar1;
  bool bVar2;
  int local_8;
  
  local_8 = -1;
  if (0 < param_2) {
    if (*param_1 == param_3) {
      return 0;
    }
    bVar2 = false;
    iVar1 = param_2;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar2 = param_3 == *param_1;
      param_1 = param_1 + 1;
    } while (!bVar2);
    if (bVar2) {
      local_8 = param_2 - (iVar1 + 1);
    }
  }
  return local_8;
}

