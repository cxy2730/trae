// Function: FUN_00482714
// Entry:    00482714
// Size:     44 bytes
// Conv:     unknown
// Signature: undefined FUN_00482714(void)
// Decompiled by Ghidra 12.1.2


void FUN_00482714(undefined1 *param_1,undefined1 *param_2,int param_3)

{
  undefined1 uVar1;
  
  if (param_1 != param_2) {
    for (; param_3 != 0; param_3 = param_3 + -1) {
      uVar1 = *param_1;
      *param_1 = *param_2;
      param_1 = param_1 + 1;
      *param_2 = uVar1;
      param_2 = param_2 + 1;
    }
  }
  return;
}

