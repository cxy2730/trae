// Function: FUN_0042e310
// Entry:    0042e310
// Size:     35 bytes
// Conv:     unknown
// Signature: undefined FUN_0042e310(void)
// Decompiled by Ghidra 12.1.2


bool FUN_0042e310(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  
  FUN_0042a650(param_1,param_2);
  uVar1 = FUN_00427a40(param_1,param_2);
  return (uVar1 & 0xc0000) == 0;
}

