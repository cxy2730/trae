// Function: FUN_004515a0
// Entry:    004515a0
// Size:     68 bytes
// Conv:     unknown
// Signature: undefined FUN_004515a0(void)
// Decompiled by Ghidra 12.1.2


uint FUN_004515a0(int *param_1,uint param_2,int *param_3,int param_4)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != 0) {
    do {
      if (*param_1 == *param_3) {
        *(undefined1 *)(param_1 + 1) = (undefined1)param_4;
        return param_2;
      }
      uVar1 = uVar1 + 1;
      param_1 = (int *)((int)param_1 + 5);
    } while (uVar1 < param_2);
  }
  if (param_4 != 0) {
    param_2 = param_2 + 1;
    *param_1 = *param_3;
    *(undefined1 *)(param_1 + 1) = (undefined1)param_4;
  }
  return param_2;
}

