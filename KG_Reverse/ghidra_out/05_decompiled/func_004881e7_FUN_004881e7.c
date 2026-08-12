// Function: FUN_004881e7
// Entry:    004881e7
// Size:     152 bytes
// Conv:     unknown
// Signature: undefined FUN_004881e7(void)
// Decompiled by Ghidra 12.1.2


float10 FUN_004881e7(undefined4 param_1,undefined4 param_2,undefined8 param_3,double param_4,
                    undefined4 param_5)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = FUN_00488532(param_1,&param_4,param_5);
  if (iVar1 == 0) {
    FUN_0048827f();
  }
  iVar1 = FUN_0048881e(param_1);
  if ((DAT_02fdbe28 == 0) && (iVar1 != 0)) {
    fVar2 = (float10)FUN_00488749(iVar1,param_2,param_3,0,param_4,param_5);
    return fVar2;
  }
  FUN_004887d1(iVar1);
  FUN_004889ac();
  return (float10)param_4;
}

