// Function: FUN_00481640
// Entry:    00481640
// Size:     54 bytes
// Conv:     unknown
// Signature: undefined FUN_00481640(void)
// Decompiled by Ghidra 12.1.2


bool __thiscall FUN_00481640(undefined8 *param_1,undefined8 *param_2)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)FUN_00481368(*param_1);
  fVar2 = (float10)FUN_00481368(*param_2);
  return fVar2 < (float10)(double)fVar1;
}

