// Function: FUN_00473f00
// Entry:    00473f00
// Size:     282 bytes
// Conv:     unknown
// Signature: undefined FUN_00473f00(void)
// Decompiled by Ghidra 12.1.2


void FUN_00473f00(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  short *psVar5;
  short *psVar6;
  undefined1 *puVar7;
  float10 fVar8;
  
  iVar2 = 0;
  iVar3 = 0;
  do {
    iVar1 = iVar3 + 4;
    *(float *)((int)&DAT_03008f00 + iVar3) = 2.0 / (float)*(int *)((int)&DAT_02fd2ca8 + iVar3);
    iVar3 = iVar1;
  } while (iVar1 < 0x44);
  pfVar4 = (float *)&DAT_03006ef8;
  do {
    fVar8 = (float10)FUN_00482010();
    *pfVar4 = (float)(fVar8 * (float10)65536.0);
    pfVar4 = pfVar4 + 1;
  } while ((int)pfVar4 < 0x3006ff8);
  puVar7 = &DAT_03006ff8;
  do {
    iVar1 = 0;
    iVar3 = iVar2;
    do {
      puVar7[iVar1] = (char)(iVar3 % 3) + -1;
      iVar3 = iVar3 / 3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 3);
    puVar7 = puVar7 + 3;
    iVar2 = iVar2 + 1;
  } while ((int)puVar7 < 0x3007058);
  iVar3 = 0;
  puVar7 = &DAT_03008d78;
  do {
    iVar1 = 0;
    iVar2 = iVar3;
    do {
      puVar7[iVar1] = (char)(iVar2 % 5) + -2;
      iVar2 = iVar2 / 5;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 3);
    puVar7 = puVar7 + 3;
    iVar3 = iVar3 + 1;
  } while ((int)puVar7 < 0x3008ef8);
  iVar3 = 0;
  psVar5 = &DAT_03007364;
  do {
    iVar1 = 3;
    iVar2 = iVar3;
    psVar6 = psVar5;
    do {
      psVar5 = psVar6 + 1;
      *psVar6 = (short)(iVar2 % 9) + -4;
      iVar2 = iVar2 / 9;
      iVar1 = iVar1 + -1;
      psVar6 = psVar5;
    } while (iVar1 != 0);
    iVar3 = iVar3 + 1;
  } while ((int)psVar5 < 0x3008b64);
  return;
}

