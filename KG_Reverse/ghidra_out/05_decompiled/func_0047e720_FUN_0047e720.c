// Function: FUN_0047e720
// Entry:    0047e720
// Size:     480 bytes
// Conv:     unknown
// Signature: undefined FUN_0047e720(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_0047e720(undefined4 param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  int iVar7;
  
  pfVar1 = (float *)FUN_0047c4a0(param_1);
  fVar6 = (float10)fpatan((float10)1.0,(float10)1);
  iVar7 = 0;
  fVar6 = fVar6 * (float10)4.0;
  pfVar3 = pfVar1;
  do {
    fVar5 = (float10)iVar7;
    iVar7 = iVar7 + 1;
    fVar5 = (float10)fsin((fVar5 + (float10)0.5) * fVar6 * (float10)0.027777777777777776);
    *pfVar3 = (float)fVar5;
    pfVar3 = pfVar3 + 1;
  } while (iVar7 < 0x24);
  iVar7 = 0;
  pfVar3 = pfVar1 + 0x24;
  do {
    fVar5 = (float10)iVar7;
    iVar7 = iVar7 + 1;
    fVar5 = (float10)fsin((fVar5 + (float10)0.5) * fVar6 * (float10)0.027777777777777776);
    *pfVar3 = (float)fVar5;
    pfVar3 = pfVar3 + 1;
  } while (iVar7 < 0x12);
  pfVar3 = pfVar1 + 0x36;
  for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
    *pfVar3 = 1.0;
    pfVar3 = pfVar3 + 1;
  }
  iVar7 = 0x18;
  pfVar3 = pfVar1 + 0x3c;
  do {
    fVar5 = (float10)iVar7;
    iVar7 = iVar7 + 1;
    fVar5 = (float10)fsin(((fVar5 + (float10)0.5) - (float10)18.0) * fVar6 *
                          (float10)0.08333333333333333);
    *pfVar3 = (float)fVar5;
    pfVar3 = pfVar3 + 1;
  } while (iVar7 < 0x1e);
  pfVar3 = pfVar1 + 0x42;
  for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
    *pfVar3 = 0.0;
    pfVar3 = pfVar3 + 1;
  }
  pfVar3 = pfVar1 + 0x6c;
  for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
    *pfVar3 = 0.0;
    pfVar3 = pfVar3 + 1;
  }
  iVar7 = 6;
  pfVar3 = pfVar1 + 0x72;
  do {
    fVar5 = (float10)iVar7;
    iVar7 = iVar7 + 1;
    fVar5 = (float10)fsin(((fVar5 + (float10)0.5) - (float10)6.0) * fVar6 *
                          (float10)0.08333333333333333);
    *pfVar3 = (float)fVar5;
    pfVar3 = pfVar3 + 1;
  } while (iVar7 < 0xc);
  pfVar3 = pfVar1 + 0x78;
  for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
    *pfVar3 = 1.0;
    pfVar3 = pfVar3 + 1;
  }
  iVar7 = 0x12;
  pfVar3 = pfVar1 + 0x7e;
  do {
    fVar5 = (float10)iVar7;
    iVar7 = iVar7 + 1;
    fVar5 = (float10)fsin((fVar5 + (float10)0.5) * fVar6 * (float10)0.027777777777777776);
    *pfVar3 = (float)fVar5;
    pfVar3 = pfVar3 + 1;
  } while (iVar7 < 0x24);
  iVar7 = 0;
  pfVar3 = pfVar1 + 0x48;
  do {
    fVar5 = (float10)iVar7;
    iVar7 = iVar7 + 1;
    fVar5 = (float10)fsin((fVar5 + (float10)0.5) * fVar6 * (float10)0.08333333333333333);
    *pfVar3 = (float)fVar5;
    pfVar3 = pfVar3 + 1;
  } while (iVar7 < 0xc);
  iVar4 = 0;
  pfVar3 = pfVar1 + 0x54;
  for (iVar7 = 0x18; iVar7 != 0; iVar7 = iVar7 + -1) {
    *pfVar3 = 0.0;
    pfVar3 = pfVar3 + 1;
  }
  pfVar3 = pfVar1 + 9;
  do {
    if (iVar4 != 2) {
      iVar7 = 0x1b;
      pfVar2 = pfVar3;
      do {
        *pfVar2 = -*pfVar2;
        pfVar2 = pfVar2 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    iVar4 = iVar4 + 1;
    pfVar3 = pfVar3 + 0x24;
  } while (iVar4 < 4);
  pfVar1 = pfVar1 + 0x4b;
  iVar7 = 9;
  do {
    *pfVar1 = -*pfVar1;
    pfVar1 = pfVar1 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  return;
}

