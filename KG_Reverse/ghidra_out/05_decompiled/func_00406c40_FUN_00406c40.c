// Function: FUN_00406c40
// Entry:    00406c40
// Size:     84 bytes
// Conv:     unknown
// Signature: undefined FUN_00406c40(void)
// Decompiled by Ghidra 12.1.2


void FUN_00406c40(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  if (param_3 != 0) {
    if (param_3 == 1) {
      *(undefined1 *)param_1 = *(undefined1 *)param_2;
      return;
    }
    if (param_3 == 2) {
      *(undefined2 *)param_1 = *(undefined2 *)param_2;
      return;
    }
    if (param_3 == 4) {
      *param_1 = *param_2;
      return;
    }
    FUN_00483180(param_1,param_2,param_3);
  }
  return;
}

