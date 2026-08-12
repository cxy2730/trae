// Function: FUN_004488b0
// Entry:    004488b0
// Size:     138 bytes
// Conv:     unknown
// Signature: undefined FUN_004488b0(void)
// Decompiled by Ghidra 12.1.2


int FUN_004488b0(int param_1,uint param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2b8);
  if (iVar1 != 0) {
    if (param_2 <= *(uint *)(param_1 + 700)) {
      return iVar1;
    }
    *(undefined4 *)(param_1 + 0x2b8) = 0;
    *(undefined4 *)(param_1 + 700) = 0;
    FUN_00446d20(param_1,iVar1);
  }
  iVar1 = FUN_00446b50(param_1,param_2);
  if (iVar1 == 0) {
    if (param_3 < 2) {
      if (param_3 != 0) {
        FUN_00446780();
        return 0;
      }
      FUN_00446680(param_1,s_insufficient_memory_to_read_chun_02fb26e4);
    }
    return 0;
  }
  *(int *)(param_1 + 0x2b8) = iVar1;
  *(uint *)(param_1 + 700) = param_2;
  return iVar1;
}

