// Function: FUN_00491cd4
// Entry:    00491cd4
// Size:     46 bytes
// Conv:     unknown
// Signature: undefined FUN_00491cd4(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall FUN_00491cd4(int param_1,undefined4 param_2)

{
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_c;
  
  local_2c = 0x40;
  local_28 = param_2;
  SendMessageA(*(HWND *)(param_1 + 0x1c),0x110c,0,(LPARAM)&local_2c);
  return local_c;
}

