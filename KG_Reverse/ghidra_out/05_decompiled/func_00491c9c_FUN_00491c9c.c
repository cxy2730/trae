// Function: FUN_00491c9c
// Entry:    00491c9c
// Size:     56 bytes
// Conv:     unknown
// Signature: undefined FUN_00491c9c(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall FUN_00491c9c(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  local_24 = 0;
  local_28 = param_2;
  local_20 = param_3;
  local_2c = 8;
  SendMessageA(*(HWND *)(param_1 + 0x1c),0x110c,0,(LPARAM)&local_2c);
  return local_24;
}

