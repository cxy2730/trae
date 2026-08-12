// Function: FUN_0041b630
// Entry:    0041b630
// Size:     112 bytes
// Conv:     unknown
// Signature: undefined FUN_0041b630(void)
// Decompiled by Ghidra 12.1.2


void FUN_0041b630(undefined4 param_1)

{
  undefined4 local_14;
  undefined4 local_10;
  
  if (DAT_02fe8650 == 0) {
    local_14 = 0;
  }
  else {
    local_14 = DAT_02fe8648;
  }
  if (local_14 == 0) {
    local_10 = -1;
  }
  else {
    local_10 = FUN_00406d80(local_14,DAT_02fe8650 >> 2,param_1);
  }
  if (local_10 == -1) {
    FUN_004065a0(param_1);
  }
  return;
}

