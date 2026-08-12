// Function: FUN_00439100
// Entry:    00439100
// Size:     122 bytes
// Conv:     unknown
// Signature: undefined FUN_00439100(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_00439100(int *param_1,int param_2)

{
  if ((param_2 == 0) || (param_2 == 1)) {
LAB_0043911b:
    if (param_2 != 3) goto LAB_0043914f;
  }
  else if (param_2 != 3) {
    if (param_2 != 2) {
      return;
    }
    goto LAB_0043911b;
  }
  if (param_1[0x2f] == 5) {
    FUN_00437860();
    (**(code **)(*param_1 + 0xb8))();
    FUN_004377f0();
  }
  else {
    (**(code **)(*param_1 + 0xb8))();
  }
LAB_0043914f:
  if (param_1[0x34] != param_2) {
    param_1[0x34] = param_2;
    InvalidateRect((HWND)param_1[7],(RECT *)0x0,0);
    UpdateWindow((HWND)param_1[7]);
  }
  return;
}

