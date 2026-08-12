// Function: FUN_00475cd0
// Entry:    00475cd0
// Size:     169 bytes
// Conv:     unknown
// Signature: undefined FUN_00475cd0(void)
// Decompiled by Ghidra 12.1.2


void FUN_00475cd0(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  float10 fVar7;
  float10 extraout_ST0;
  float10 fVar8;
  float10 extraout_ST1;
  int local_c;
  int local_8;
  
  iVar1 = FUN_0047b9a0();
  iVar6 = 0x10;
  fVar8 = (float10)fpatan((float10)1.0,(float10)1);
  iVar4 = 0;
  local_8 = 5;
  fVar8 = fVar8 * (float10)4.0;
  do {
    if (0 < iVar6) {
      puVar5 = (undefined4 *)(iVar1 + iVar4 * 4);
      local_c = 1;
      iVar4 = iVar4 + iVar6;
      fVar7 = fVar8 / (float10)(iVar6 * 4);
      iVar3 = iVar6;
      do {
        fcos((float10)local_c * fVar7);
        uVar2 = __ftol();
        *puVar5 = uVar2;
        local_c = local_c + 2;
        puVar5 = puVar5 + 1;
        iVar3 = iVar3 + -1;
        fVar8 = extraout_ST1;
        fVar7 = extraout_ST0;
      } while (iVar3 != 0);
    }
    iVar6 = iVar6 / 2;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return;
}

