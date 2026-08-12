// Function: FUN_00434c40
// Entry:    00434c40
// Size:     39 bytes
// Conv:     unknown
// Signature: undefined FUN_00434c40(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_00434c40(int *param_1,int param_2)

{
  if (param_1[0x19] != param_2) {
    param_1[0x19] = param_2;
    (**(code **)(*param_1 + 0xbc))();
    UpdateWindow((HWND)param_1[7]);
  }
  return;
}

