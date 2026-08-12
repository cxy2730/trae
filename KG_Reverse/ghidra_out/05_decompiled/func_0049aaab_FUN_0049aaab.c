// Function: FUN_0049aaab
// Entry:    0049aaab
// Size:     66 bytes
// Conv:     unknown
// Signature: undefined FUN_0049aaab(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_0049aaab(int *param_1,undefined4 param_2,int param_3)

{
  if (param_3 != 0) {
    if ((uint)param_1[6] < (uint)(param_1[5] + param_3)) {
      (**(code **)(*param_1 + 100))(param_1[5] + param_3);
    }
    (**(code **)(*param_1 + 0x5c))(param_1[8] + param_1[5],param_2,param_3);
    param_1[5] = param_1[5] + param_3;
    if ((uint)param_1[7] < (uint)param_1[5]) {
      param_1[7] = param_1[5];
    }
  }
  return;
}

