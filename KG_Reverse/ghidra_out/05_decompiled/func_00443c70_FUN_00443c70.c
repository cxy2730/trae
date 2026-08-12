// Function: FUN_00443c70
// Entry:    00443c70
// Size:     100 bytes
// Conv:     unknown
// Signature: undefined FUN_00443c70(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_00443c70(int param_1,uint param_2)

{
  uint uVar1;
  
  param_2 = param_2 & ((int)param_2 < 0) - 1;
  uVar1 = *(int *)(param_1 + 0xdc) - 1;
  if ((int)uVar1 < (int)param_2) {
    param_2 = uVar1;
  }
  if ((-1 < (int)param_2) && (param_2 != *(uint *)(param_1 + 0xd4))) {
    *(uint *)(param_1 + 0xd4) = param_2;
    FUN_004430f0();
    FUN_0049630f(0,0,1);
    FUN_0049630f(1,0,1);
    InvalidateRect(*(HWND *)(param_1 + 0x1c),(RECT *)0x0,1);
  }
  return;
}

