// Function: FUN_0048222d
// Entry:    0048222d
// Size:     289 bytes
// Conv:     unknown
// Signature: undefined FUN_0048222d(void)
// Decompiled by Ghidra 12.1.2


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0048222d(double param_1,double *param_2)

{
  undefined4 uVar1;
  int iVar2;
  float10 fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  double local_c;
  
  uVar1 = FUN_004889ac(0,0);
  FUN_004889ac(DAT_02fd899c,0xffff);
  uVar4 = SUB84(param_1,0);
  uVar5 = (undefined4)((ulonglong)param_1 >> 0x20);
  if ((param_1._6_2_ & 0x7ff0) == 0x7ff0) {
    *param_2 = _DAT_02fd9640;
    iVar2 = FUN_00488874(uVar4,uVar5);
    if (0 < iVar2) {
      if (iVar2 < 3) {
        *param_2 = param_1;
        local_c = __copysign(0.0,param_1);
        FUN_004889ac(uVar1,0xffff);
        goto LAB_00482346;
      }
      if (iVar2 == 3) {
        *param_2 = param_1;
        fVar3 = (float10)FUN_00488193(0x1c,uVar4,uVar5,uVar1);
        return fVar3;
      }
    }
    *param_2 = param_1 + 1.0;
    fVar3 = (float10)FUN_004881e7(8,0x1c,uVar4,uVar5,param_1 + 1.0,uVar1);
  }
  else {
    if (param_1 == 0.0) {
      *param_2 = param_1;
    }
    else {
      fVar3 = (float10)__frnd(uVar4,uVar5);
      *param_2 = (double)fVar3;
      param_1 = param_1 - (double)fVar3;
    }
    FUN_004889ac(uVar1,0xffff);
    local_c = param_1;
LAB_00482346:
    fVar3 = (float10)local_c;
  }
  return fVar3;
}

