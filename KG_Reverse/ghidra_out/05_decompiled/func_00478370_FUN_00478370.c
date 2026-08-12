// Function: FUN_00478370
// Entry:    00478370
// Size:     128 bytes
// Conv:     unknown
// Signature: undefined FUN_00478370(void)
// Decompiled by Ghidra 12.1.2


void FUN_00478370(void)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  int local_4;
  
  iVar1 = FUN_0047ecb0();
  iVar2 = 0x10;
  fVar8 = (float10)fpatan((float10)1.0,(float10)1);
  iVar6 = 0;
  iVar5 = 5;
  do {
    if (0 < iVar2) {
      iVar4 = iVar6 * 4;
      local_4 = 1;
      iVar6 = iVar6 + iVar2;
      pfVar3 = (float *)(iVar1 + iVar4);
      iVar4 = iVar2;
      do {
        fVar7 = (float10)local_4;
        local_4 = local_4 + 2;
        iVar4 = iVar4 + -1;
        fVar7 = (float10)fcos(fVar7 * ((fVar8 * (float10)4.0) / (float10)(iVar2 * 4)));
        *pfVar3 = (float)((float10)0.5 / fVar7);
        pfVar3 = pfVar3 + 1;
      } while (iVar4 != 0);
    }
    iVar2 = iVar2 / 2;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return;
}

