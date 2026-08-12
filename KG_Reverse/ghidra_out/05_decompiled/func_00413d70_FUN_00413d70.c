// Function: FUN_00413d70
// Entry:    00413d70
// Size:     34 bytes
// Conv:     unknown
// Signature: undefined FUN_00413d70(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00413d70(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (DAT_02fe8204 != (code *)0x0) {
    uVar1 = (*DAT_02fe8204)(param_1,param_2,param_3);
    return uVar1;
  }
  return 0;
}

