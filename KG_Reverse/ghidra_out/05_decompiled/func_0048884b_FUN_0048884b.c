// Function: FUN_0048884b
// Entry:    0048884b
// Size:     41 bytes
// Conv:     unknown
// Signature: undefined FUN_0048884b(void)
// Decompiled by Ghidra 12.1.2


float10 FUN_0048884b(undefined8 param_1,short param_2)

{
  undefined8 local_c;
  
  local_c = (double)CONCAT26((param_2 + 0x3fe) * 0x10 | param_1._6_2_ & 0x800f,(undefined6)param_1);
  return (float10)local_c;
}

