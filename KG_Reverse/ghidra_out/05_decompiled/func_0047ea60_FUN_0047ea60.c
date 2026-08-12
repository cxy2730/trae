// Function: FUN_0047ea60
// Entry:    0047ea60
// Size:     162 bytes
// Conv:     unknown
// Signature: undefined FUN_0047ea60(void)
// Decompiled by Ghidra 12.1.2


void FUN_0047ea60(void)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  iVar1 = FUN_0047cbe0();
  iVar3 = 0;
  fVar7 = (float10)fpatan((float10)1.0,(float10)1);
  pfVar2 = (float *)(iVar1 + 0x40);
  do {
    fVar4 = (float10)iVar3;
    iVar3 = iVar3 + 1;
    fVar4 = fVar4 * fVar7 * (float10)4.0 * (float10)0.08333333333333333;
    fVar5 = (float10)fsin(fVar4);
    fVar6 = (float10)fcos(fVar4);
    fVar4 = fVar6 + (float10)(double)fVar5;
    fVar5 = (float10)(double)fVar5 / fVar4;
    pfVar2[-0x10] = (float)fVar5;
    fVar6 = fVar6 / fVar4;
    pfVar2[-0xf] = (float)fVar6;
    *pfVar2 = (float)(SQRT((float10)2.0) * (float10)(double)fVar5);
    pfVar2[1] = (float)(SQRT((float10)2.0) * fVar6);
    pfVar2 = pfVar2 + 2;
  } while (iVar3 < 7);
  *(undefined4 *)(iVar1 + iVar3 * 8) = 0x3f800000;
  *(undefined4 *)(iVar1 + 4 + iVar3 * 8) = 0;
  *(undefined4 *)(iVar1 + 0x40 + iVar3 * 8) = 0x3f800000;
  *(undefined4 *)(iVar1 + 0x44 + iVar3 * 8) = 0x3f800000;
  return;
}

