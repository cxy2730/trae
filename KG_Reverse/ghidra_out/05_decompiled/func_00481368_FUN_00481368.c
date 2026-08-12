// Function: FUN_00481368
// Entry:    00481368
// Size:     38 bytes
// Conv:     unknown
// Signature: undefined FUN_00481368(void)
// Decompiled by Ghidra 12.1.2


float10 FUN_00481368(double param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)param_1;
  if (fVar1 < (float10)0.0) {
    fVar1 = (float10)FUN_00485be1(param_1);
    fVar1 = fVar1 - ((float10)param_1 - fVar1);
  }
  return fVar1;
}

