// Function: FUN_0047e900
// Entry:    0047e900
// Size:     350 bytes
// Conv:     unknown
// Signature: undefined FUN_0047e900(void)
// Decompiled by Ghidra 12.1.2


void FUN_0047e900(void)

{
  undefined4 *puVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  int local_c;
  
  puVar1 = (undefined4 *)FUN_004809a0();
  pfVar3 = (float *)puVar1[1];
  fVar9 = (float10)fpatan((float10)1.0,(float10)1);
  pfVar2 = (float *)puVar1[2];
  local_c = 1;
  fVar9 = fVar9 * (float10)4.0;
  pfVar4 = (float *)*puVar1;
  do {
    fVar7 = (float10)local_c;
    local_c = local_c + 2;
    fVar7 = (float10)fcos(fVar7 * fVar9 * (float10)0.013888888888888888);
    *pfVar4 = (float)(fVar7 + fVar7);
    pfVar4 = pfVar4 + 1;
  } while (local_c < 0x25);
  local_c = 1;
  do {
    fVar7 = (float10)local_c;
    local_c = local_c + 2;
    fVar7 = fVar7 * fVar9 * (float10)0.013888888888888888;
    fVar7 = (float10)fcos(fVar7 + fVar7);
    *pfVar3 = (float)(fVar7 + fVar7);
    pfVar3 = pfVar3 + 1;
  } while (local_c < 0x13);
  local_c = 0;
  do {
    iVar6 = local_c;
    fVar7 = (float10)local_c;
    local_c = 1;
    pfVar3 = pfVar2;
    do {
      fVar8 = (float10)local_c;
      local_c = local_c + 2;
      pfVar2 = pfVar3 + 1;
      fVar8 = (float10)fcos(fVar8 * fVar7 * fVar9 * (float10)0.027777777777777776);
      *pfVar3 = (float)fVar8;
      pfVar3 = pfVar2;
    } while (local_c < 9);
    local_c = iVar6 + 2;
  } while (local_c < 0x12);
  puVar1 = (undefined4 *)FUN_004809b0();
  pfVar3 = (float *)*puVar1;
  pfVar2 = (float *)puVar1[1];
  pfVar4 = (float *)puVar1[2];
  fVar7 = (float10)(double)fVar9 * (float10)0.041666666666666664;
  local_c = 1;
  pfVar5 = pfVar3;
  do {
    fVar8 = (float10)local_c;
    local_c = local_c + 2;
    fVar8 = (float10)fcos(fVar8 * fVar7);
    *pfVar5 = (float)(fVar8 + fVar8);
    pfVar5 = pfVar5 + 1;
  } while (local_c < 0xd);
  local_c = 1;
  do {
    fVar8 = (float10)local_c;
    local_c = local_c + 2;
    fVar8 = fVar8 * fVar7;
    fVar8 = (float10)fcos(fVar8 + fVar8);
    *pfVar2 = (float)(fVar8 + fVar8);
    pfVar2 = pfVar2 + 1;
  } while (local_c < 7);
  fVar9 = (float10)(double)fVar9 * (float10)0.08333333333333333;
  iVar6 = 6;
  fVar9 = (float10)fcos(fVar9 + fVar9);
  *pfVar4 = (float)fVar9;
  do {
    iVar6 = iVar6 + -1;
    *pfVar3 = *pfVar3 * 0.5;
    pfVar3 = pfVar3 + 1;
  } while (iVar6 != 0);
  *pfVar4 = *pfVar4 + *pfVar4;
  return;
}

