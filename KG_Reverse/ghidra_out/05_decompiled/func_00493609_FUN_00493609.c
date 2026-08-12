// Function: FUN_00493609
// Entry:    00493609
// Size:     40 bytes
// Conv:     unknown
// Signature: undefined FUN_00493609(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_00493609(int *param_1,int param_2)

{
  FUN_0049317f();
  if (param_2 == -1) {
    param_2 = lstrlenA((LPCSTR)*param_1);
  }
  *(int *)(*param_1 + -8) = param_2;
  *(undefined1 *)(*param_1 + param_2) = 0;
  return;
}

