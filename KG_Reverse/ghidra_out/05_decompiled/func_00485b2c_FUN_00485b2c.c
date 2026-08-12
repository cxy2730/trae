// Function: FUN_00485b2c
// Entry:    00485b2c
// Size:     181 bytes
// Conv:     unknown
// Signature: undefined FUN_00485b2c(void)
// Decompiled by Ghidra 12.1.2


float10 FUN_00485b2c(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  float10 fVar3;
  
  uVar1 = FUN_004889ac(0x133f,0xffff);
  if ((param_2._2_2_ & 0x7ff0) == 0x7ff0) {
    iVar2 = FUN_00488874(param_1,(int)(CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1))
                                      >> 0x20));
    if (iVar2 == 1) {
      FUN_004889ac(uVar1,0xffff);
      fVar3 = (float10)(double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
    }
    else if (iVar2 == 2) {
      FUN_004889ac(uVar1,0xffff);
      fVar3 = -(float10)(double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
    }
    else if (iVar2 == 3) {
      fVar3 = (float10)FUN_00488193();
    }
    else {
      fVar3 = (float10)FUN_004881e7(8,0x15,CONCAT26(param_2._2_2_,
                                                    CONCAT24((undefined2)param_2,param_1)),
                                    (double)CONCAT26(param_2._2_2_,
                                                     CONCAT24((undefined2)param_2,param_1)) + 1.0,
                                    uVar1);
    }
  }
  else {
    FUN_004889ac(uVar1,0xffff);
    fVar3 = (float10)ABS((double)CONCAT44(param_2,param_1));
  }
  return fVar3;
}

