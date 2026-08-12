// Function: FUN_00446680
// Entry:    00446680
// Size:     84 bytes
// Conv:     unknown
// Signature: undefined FUN_00446680(void)
// Decompiled by Ghidra 12.1.2


void FUN_00446680(int param_1,undefined4 param_2)

{
  undefined1 local_d8 [216];
  
  if (param_1 == 0) {
    FUN_004463d0(0,param_2);
    return;
  }
  FUN_004466e0(param_1,local_d8,param_2);
  FUN_004463d0(param_1,local_d8);
  return;
}

