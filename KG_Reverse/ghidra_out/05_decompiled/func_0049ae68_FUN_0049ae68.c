// Function: FUN_0049ae68
// Entry:    0049ae68
// Size:     95 bytes
// Conv:     unknown
// Signature: undefined FUN_0049ae68(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_0049ae68(int param_1,int param_2)

{
  HCURSOR pHVar1;
  
  FUN_0049d98a(2);
  *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + param_2;
  if (*(int *)(param_1 + 0xa0) < 1) {
    *(undefined4 *)(param_1 + 0xa0) = 0;
    SetCursor(*(HCURSOR *)(param_1 + 0xa4));
  }
  else {
    pHVar1 = SetCursor(DAT_03010cdc);
    if ((0 < param_2) && (*(int *)(param_1 + 0xa0) == 1)) {
      *(HCURSOR *)(param_1 + 0xa4) = pHVar1;
    }
  }
  FUN_0049d9fa(2);
  return;
}

