// Function: FUN_00488193
// Entry:    00488193
// Size:     84 bytes
// Conv:     unknown
// Signature: undefined FUN_00488193(void)
// Decompiled by Ghidra 12.1.2


float10 FUN_00488193(undefined4 param_1,double param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  float10 fVar2;
  
  if (DAT_02fdbe28 == 0) {
    fVar2 = (float10)FUN_00488749(1,param_1,param_2,0,param_2,param_3);
    return fVar2;
  }
  puVar1 = (undefined4 *)FUN_004843ad();
  *puVar1 = 0x21;
  FUN_004889ac();
  return (float10)param_2;
}

