// Function: FUN_00424b10
// Entry:    00424b10
// Size:     229 bytes
// Conv:     unknown
// Signature: undefined FUN_00424b10(void)
// Decompiled by Ghidra 12.1.2


int FUN_00424b10(undefined4 param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_60 [4];
  undefined4 local_50;
  
  *param_4 = 0;
  *param_3 = 0;
  if (7 < param_2) {
    piVar3 = local_60;
    for (iVar2 = 0x18; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar3 = 0;
      piVar3 = piVar3 + 1;
    }
    local_60[1] = 1;
    iVar2 = FUN_0043f980(local_60,param_1,param_2);
    if (iVar2 != 0) {
      iVar2 = local_60[2] * local_60[3] * 4;
      local_50 = 0x13;
      if (iVar2 == local_60[2] * local_60[3] * 4) {
        iVar2 = FUN_00492f17(iVar2);
        if (iVar2 != 0) {
          iVar1 = FUN_0043fa80(local_60,0,iVar2,0,0);
          if (iVar1 != 0) {
            *param_3 = local_60[2];
            *param_4 = local_60[3];
            FUN_0043edc0(local_60);
            return iVar2;
          }
          FUN_00492f40(iVar2);
        }
      }
      FUN_0043edc0(local_60);
    }
  }
  return 0;
}

