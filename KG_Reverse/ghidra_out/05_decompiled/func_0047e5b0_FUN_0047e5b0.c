// Function: FUN_0047e5b0
// Entry:    0047e5b0
// Size:     358 bytes
// Conv:     unknown
// Signature: undefined FUN_0047e5b0(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_0047e5b0(void)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  
  pfVar1 = (float *)FUN_0047d030();
  iVar5 = 0;
  do {
    fVar7 = (float10)FUN_00482010();
    *pfVar1 = (float)fVar7;
    iVar5 = iVar5 + 1;
    pfVar1 = pfVar1 + 1;
  } while (iVar5 < 0x106);
  pfVar1 = (float *)FUN_0047d040();
  iVar5 = 0;
  do {
    iVar5 = iVar5 + 1;
    iVar4 = 0;
    do {
      iVar6 = 0;
      do {
        fVar7 = (float10)FUN_00482010();
        *pfVar1 = (float)fVar7;
        iVar6 = iVar6 + 1;
        pfVar1 = pfVar1 + 1;
      } while (iVar6 < 0x20);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 4);
  } while (iVar5 < 2);
  pfVar1 = (float *)FUN_0047d050();
  iVar5 = 0;
  do {
    fVar7 = (float10)FUN_00482010();
    *pfVar1 = (float)(fVar7 * (float10)(iVar5 + -0x20));
    iVar5 = iVar5 + 1;
    pfVar1 = pfVar1 + 1;
  } while (iVar5 < 0x40);
  pfVar1 = (float *)FUN_0047d060();
  iVar5 = 0;
  do {
    fVar7 = (float10)FUN_00482010();
    *pfVar1 = (float)fVar7;
    iVar5 = iVar5 + 1;
    pfVar1 = pfVar1 + 1;
  } while (iVar5 < 8);
  pfVar1 = (float *)FUN_0047cbd0();
  pfVar2 = (float *)&DAT_02f9a810;
  do {
    pfVar3 = pfVar2 + 1;
    *pfVar1 = 1.0 / SQRT(*pfVar2 * *pfVar2 + 1.0);
    pfVar1[1] = *pfVar2 / SQRT(*pfVar2 * *pfVar2 + 1.0);
    pfVar1 = pfVar1 + 2;
    pfVar2 = pfVar3;
  } while ((int)pfVar3 < 0x2f9a830);
  FUN_0047ea60();
  FUN_0047eb10();
  FUN_0047e900();
  FUN_0047e720();
  return 0;
}

