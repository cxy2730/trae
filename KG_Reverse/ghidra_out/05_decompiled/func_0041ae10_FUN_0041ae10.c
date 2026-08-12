// Function: FUN_0041ae10
// Entry:    0041ae10
// Size:     114 bytes
// Conv:     unknown
// Signature: undefined FUN_0041ae10(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall FUN_0041ae10(int param_1,undefined4 param_2)

{
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_8;
  int local_4;
  
  local_2c = *(undefined4 *)(param_1 + 0xdc);
  local_28 = *(undefined4 *)(param_1 + 0xe0);
  local_24 = 7;
  local_8 = 0;
  local_4 = 0;
  local_20 = 1;
  local_1c = param_2;
  FUN_00413d70(0x7d8,&local_2c,0);
  if ((local_8 == 1) && (local_4 != 0)) {
    return 1;
  }
  return 0;
}

