// Function: FUN_00406ca0
// Entry:    00406ca0
// Size:     75 bytes
// Conv:     unknown
// Signature: undefined FUN_00406ca0(void)
// Decompiled by Ghidra 12.1.2


void FUN_00406ca0(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 != 0) {
    if (param_2 == 1) {
      *(undefined1 *)param_1 = 0;
      return;
    }
    if (param_2 == 2) {
      *(undefined2 *)param_1 = 0;
      return;
    }
    if (param_2 == 4) {
      *param_1 = 0;
      return;
    }
    for (uVar1 = param_2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *param_1 = 0;
      param_1 = param_1 + 1;
    }
    for (param_2 = param_2 & 3; param_2 != 0; param_2 = param_2 - 1) {
      *(undefined1 *)param_1 = 0;
      param_1 = (undefined4 *)((int)param_1 + 1);
    }
  }
  return;
}

