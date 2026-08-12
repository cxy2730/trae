// Function: FUN_00405530
// Entry:    00405530
// Size:     69 bytes
// Conv:     unknown
// Signature: undefined FUN_00405530(void)
// Decompiled by Ghidra 12.1.2


void FUN_00405530(int param_1,uint *param_2,int param_3,uint *param_4)

{
  uint uVar1;
  
  uVar1 = *param_4;
  if (1 < param_3) {
    param_3 = param_3 + -1;
    do {
      param_4 = param_4 + 3;
      if (param_1 == 0) {
        uVar1 = uVar1 & *param_4;
      }
      else if (param_1 == 1) {
        uVar1 = uVar1 | *param_4;
      }
      else if (param_1 == 2) {
        uVar1 = uVar1 ^ *param_4;
      }
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    *param_2 = uVar1;
    return;
  }
  *param_2 = uVar1;
  return;
}

