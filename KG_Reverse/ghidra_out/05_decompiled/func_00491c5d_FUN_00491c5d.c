// Function: FUN_00491c5d
// Entry:    00491c5d
// Size:     63 bytes
// Conv:     unknown
// Signature: undefined FUN_00491c5d(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_00491c5d(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  LRESULT LVar1;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_14;
  undefined4 local_10;
  
  local_2c = 0x22;
  local_28 = param_2;
  LVar1 = SendMessageA(*(HWND *)(param_1 + 0x1c),0x110c,0,(LPARAM)&local_2c);
  if (LVar1 != 0) {
    *param_3 = local_14;
    *param_4 = local_10;
  }
  return;
}

