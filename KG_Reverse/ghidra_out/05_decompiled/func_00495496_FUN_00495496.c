// Function: FUN_00495496
// Entry:    00495496
// Size:     31 bytes
// Conv:     unknown
// Signature: undefined FUN_00495496(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall FUN_00495496(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0049c724();
  if (*(code **)(iVar1 + 0x1034) != (code *)0x0) {
    (**(code **)(iVar1 + 0x1034))(param_2,param_1);
  }
  return 0;
}

