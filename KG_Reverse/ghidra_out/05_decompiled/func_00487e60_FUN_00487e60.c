// Function: FUN_00487e60
// Entry:    00487e60
// Size:     21 bytes
// Conv:     unknown
// Signature: undefined FUN_00487e60(void)
// Decompiled by Ghidra 12.1.2


unkbyte10 FUN_00487e60(void)

{
  float10 in_ST0;
  float10 fVar1;
  unkbyte10 Var2;
  
  fVar1 = (float10)f2xm1(-(ROUND(in_ST0) - in_ST0));
  Var2 = fscale((float10)1 + fVar1,ROUND(in_ST0));
  return Var2;
}

