// Function: FUN_0049ab73
// Entry:    0049ab73
// Size:     167 bytes
// Conv:     unknown
// Signature: undefined FUN_0049ab73(void)
// Decompiled by Ghidra 12.1.2


int __thiscall FUN_0049ab73(int *param_1,int param_2,int param_3,int *param_4,int *param_5)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 == 3) {
    iVar1 = 1;
  }
  else if (param_2 == 2) {
    param_1[5] = param_1[5] + param_3;
    if ((uint)param_1[7] < (uint)param_1[5]) {
      param_1[7] = param_1[5];
    }
    iVar1 = 0;
  }
  else {
    if ((param_2 == 1) && ((uint)param_1[6] < (uint)(param_1[5] + param_3))) {
      (**(code **)(*param_1 + 100))(param_1[5] + param_3);
    }
    *param_4 = param_1[5] + param_1[8];
    if (param_2 == 1) {
      uVar2 = param_1[5] + param_3;
      if ((uint)param_1[6] < (uint)(param_1[5] + param_3)) {
        uVar2 = param_1[6];
      }
      *param_5 = uVar2 + param_1[8];
    }
    else {
      if (param_3 == -1) {
        param_3 = param_1[6] - param_1[5];
      }
      uVar2 = param_1[5] + param_3;
      if ((uint)param_1[7] < (uint)(param_1[5] + param_3)) {
        uVar2 = param_1[7];
      }
      iVar1 = param_1[8];
      *param_5 = uVar2 + iVar1;
      param_1[5] = param_1[5] + ((uVar2 + iVar1) - *param_4);
    }
    iVar1 = *param_5 - *param_4;
  }
  return iVar1;
}

