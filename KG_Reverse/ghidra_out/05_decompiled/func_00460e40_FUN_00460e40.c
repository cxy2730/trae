// Function: FUN_00460e40
// Entry:    00460e40
// Size:     30 bytes
// Conv:     unknown
// Signature: undefined FUN_00460e40(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00460e40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (DAT_02fe8d34 != (code *)0x0) {
    uVar1 = (*DAT_02fe8d34)(param_1,param_2,param_3);
    return uVar1;
  }
  return 0;
}

