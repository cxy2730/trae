// Function: FUN_00487fec
// Entry:    00487fec
// Size:     304 bytes
// Conv:     unknown
// Signature: undefined FUN_00487fec(void)
// Decompiled by Ghidra 12.1.2


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00487fec(int param_1,int param_2,double param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  int iVar3;
  
  dVar1 = (double)CONCAT44(param_2,param_1);
  if ((double)CONCAT44(param_2,param_1) < 0.0) {
    dVar1 = -dVar1;
  }
  dVar2 = _DAT_02fd9638;
  if (param_3._4_4_ == 0x7ff00000) {
    if (param_3._0_4_ != 0) {
LAB_00488077:
      if (param_2 == 0x7ff00000) {
        if (param_1 != 0) {
          return 0;
        }
        if (0.0 < param_3) goto LAB_00488112;
        if (param_3 < 0.0) goto LAB_004880a9;
      }
      else {
        if (param_2 != -0x100000) {
          return 0;
        }
        if (param_1 != 0) {
          return 0;
        }
        iVar3 = FUN_0048811c(param_3);
        if (0.0 < param_3) {
          dVar2 = _DAT_02fd9638;
          if (iVar3 == 1) {
            dVar2 = -_DAT_02fd9638;
          }
          goto LAB_00488112;
        }
        if (param_3 < 0.0) {
          dVar2 = _DAT_02fd9658;
          if (iVar3 != 1) {
            dVar2 = 0.0;
          }
          goto LAB_00488112;
        }
      }
      dVar2 = 1.0;
      goto LAB_00488112;
    }
    if (1.0 < dVar1) goto LAB_00488112;
    if (1.0 <= dVar1) {
LAB_0048803c:
      *param_4 = _DAT_02fd9640;
      return 1;
    }
  }
  else {
    if ((param_3._4_4_ != -0x100000) || (param_3._0_4_ != 0)) goto LAB_00488077;
    if (dVar1 <= 1.0) {
      if (1.0 <= dVar1) goto LAB_0048803c;
      goto LAB_00488112;
    }
  }
LAB_004880a9:
  dVar2 = 0.0;
LAB_00488112:
  *param_4 = dVar2;
  return 0;
}

