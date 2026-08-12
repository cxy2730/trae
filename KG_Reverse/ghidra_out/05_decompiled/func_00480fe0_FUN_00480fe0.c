// Function: FUN_00480fe0
// Entry:    00480fe0
// Size:     317 bytes
// Conv:     unknown
// Signature: undefined FUN_00480fe0(void)
// Decompiled by Ghidra 12.1.2


undefined4
FUN_00480fe0(ushort param_1,ushort param_2,ushort param_3,ushort param_4,ushort param_5,
            ushort param_6,double *param_7)

{
  double dVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  if (9999 < param_1) {
    return 0;
  }
  iVar3 = 1;
  if (param_2 == 0) {
    return 0;
  }
  if (0xc < param_2) {
    return 0;
  }
  if (((param_1 & 3) == 0) && (((uint)param_1 % 100 != 0 || ((uint)param_1 % 400 == 0)))) {
    bVar2 = true;
    if ((param_3 == 0x1d) && (param_2 == 2)) goto LAB_00481055;
  }
  else {
    bVar2 = false;
  }
  iVar3 = 0;
  if (param_3 == 0) {
    return 0;
  }
LAB_00481055:
  if (((((int)(uint)param_3 <=
         (iVar3 - *(int *)(&DAT_02fd809c + (uint)param_2 * 4)) +
         *(int *)(&DAT_02fd80a0 + (uint)param_2 * 4)) && (param_4 < 0x18)) && (param_5 < 0x3c)) &&
     (param_6 < 0x3c)) {
    uVar4 = (uint)param_1;
    iVar3 = (((uint)(param_1 >> 2) + uVar4 / 400 + uVar4 * 0x16d) - uVar4 / 100) + (uint)param_3 +
            *(int *)(&DAT_02fd809c + (uint)param_2 * 4);
    if ((param_2 < 3) && (bVar2)) {
      iVar3 = iVar3 + -1;
    }
    dVar1 = (double)(((uint)param_4 * 0x3c + (uint)param_5) * 0x3c + (uint)param_6) *
            1.1574074074074073e-05;
    if (iVar3 + -0xa96c7 < 0) {
      dVar1 = -dVar1;
    }
    *param_7 = (double)(iVar3 + -0xa96c7) + dVar1;
    return 1;
  }
  return 0;
}

