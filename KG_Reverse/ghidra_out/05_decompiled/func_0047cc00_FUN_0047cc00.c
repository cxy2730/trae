// Function: FUN_0047cc00
// Entry:    0047cc00
// Size:     87 bytes
// Conv:     unknown
// Signature: undefined FUN_0047cc00(void)
// Decompiled by Ghidra 12.1.2


void FUN_0047cc00(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  
  if (0 < param_2) {
    pfVar7 = (float *)(param_1 + 0x44);
    do {
      pfVar3 = (float *)&DAT_03011644;
      pfVar6 = pfVar7;
      pfVar5 = pfVar7;
      do {
        pfVar5 = pfVar5 + 1;
        fVar1 = *pfVar6;
        fVar2 = *pfVar5;
        pfVar4 = pfVar3 + 2;
        *pfVar6 = fVar1 * pfVar3[-1] - fVar2 * *pfVar3;
        *pfVar5 = fVar2 * pfVar3[-1] + fVar1 * *pfVar3;
        pfVar3 = pfVar4;
        pfVar6 = pfVar6 + -1;
      } while ((int)pfVar4 < 0x3011684);
      pfVar7 = pfVar7 + 0x12;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

