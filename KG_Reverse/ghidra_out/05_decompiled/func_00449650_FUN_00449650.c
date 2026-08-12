// Function: FUN_00449650
// Entry:    00449650
// Size:     652 bytes
// Conv:     unknown
// Signature: undefined FUN_00449650(void)
// Decompiled by Ghidra 12.1.2


void FUN_00449650(int param_1,int param_2,int param_3)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  char cVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  char cVar13;
  uint uVar14;
  char *pcVar15;
  int iVar16;
  char *pcVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  char *pcVar20;
  
  if ((*(uint *)(param_1 + 0x74) & 1) == 0) {
    FUN_00446680(param_1,s_missing_IHDR_02fb2624);
  }
  else {
    if ((*(uint *)(param_1 + 0x74) & 4) != 0) {
      FUN_004479f0(param_1,param_3);
      FUN_004467e0(param_1,s_out_of_place_02fb25b0);
      return;
    }
    if ((param_2 != 0) && ((*(uint *)(param_2 + 8) & 0x400) != 0)) {
      FUN_004479f0(param_1,param_3);
      FUN_004467e0(param_1,s_duplicate_02fb25fc);
      return;
    }
  }
  pcVar15 = (char *)FUN_004488b0(param_1,param_3 + 1,2);
  if (pcVar15 == (char *)0x0) {
    FUN_004479f0(param_1);
    FUN_004467e0(param_1,s_out_of_memory_02fb26b0);
    return;
  }
  FUN_004479c0(param_1,pcVar15,param_3);
  iVar16 = FUN_004479f0(param_1,0);
  if (iVar16 == 0) {
    pcVar20 = pcVar15 + param_3;
    *pcVar20 = '\0';
    cVar3 = *pcVar15;
    pcVar17 = pcVar15;
    while (cVar3 != '\0') {
      pcVar1 = pcVar17 + 1;
      pcVar17 = pcVar17 + 1;
      cVar3 = *pcVar1;
    }
    if (pcVar20 <= pcVar17 + 0xc) {
      FUN_004467e0(param_1,s_invalid_02fb25a8);
      return;
    }
    cVar3 = pcVar17[1];
    cVar4 = pcVar17[2];
    bVar5 = pcVar17[3];
    pcVar1 = pcVar17 + 0xb;
    bVar6 = pcVar17[4];
    cVar7 = pcVar17[6];
    cVar8 = pcVar17[5];
    bVar9 = pcVar17[7];
    bVar10 = pcVar17[8];
    bVar11 = pcVar17[10];
    bVar12 = pcVar17[9];
    if (bVar12 == 0) {
      if (bVar11 != 2) {
LAB_004497e7:
        FUN_004467e0(param_1,s_invalid_parameter_count_02fb281c);
        return;
      }
    }
    else if ((bVar12 == 1) || (bVar12 == 2)) {
      if (bVar11 != 3) goto LAB_004497e7;
    }
    else if (bVar12 == 3) {
      if (bVar11 != 4) goto LAB_004497e7;
    }
    else if (3 < bVar12) {
      FUN_004467e0(param_1,s_unrecognized_equation_type_02fb2800);
    }
    cVar13 = *pcVar1;
    pcVar17 = pcVar1;
    while (cVar13 != '\0') {
      pcVar2 = pcVar17 + 1;
      pcVar17 = pcVar17 + 1;
      cVar13 = *pcVar2;
    }
    uVar14 = (uint)bVar11;
    puVar18 = (undefined4 *)FUN_00446cf0(param_1,uVar14 * 4);
    if (puVar18 == (undefined4 *)0x0) {
      FUN_004467e0(param_1,s_out_of_memory_02fb26b0);
      return;
    }
    iVar16 = 0;
    puVar19 = puVar18;
    if (bVar11 != 0) {
      do {
        pcVar17 = pcVar17 + 1;
        *puVar19 = pcVar17;
        while( true ) {
          if (pcVar20 < pcVar17) goto LAB_00449881;
          if (*pcVar17 == '\0') break;
          pcVar17 = pcVar17 + 1;
        }
        if (pcVar20 < pcVar17) {
LAB_00449881:
          FUN_00446d20(param_1,puVar18);
          FUN_004467e0(param_1,s_invalid_data_02fb27f0);
          return;
        }
        iVar16 = iVar16 + 1;
        puVar19 = puVar19 + 1;
      } while (iVar16 < (int)uVar14);
    }
    FUN_00450680(param_1,param_2,pcVar15,
                 ((uint)CONCAT11(cVar3,cVar4) * 0x100 + (uint)bVar5) * 0x100 + (uint)bVar6,
                 ((uint)CONCAT11(cVar8,cVar7) * 0x100 + (uint)bVar9) * 0x100 + (uint)bVar10,bVar12,
                 uVar14,pcVar1,puVar18);
    FUN_00446d20(param_1,puVar18);
  }
  return;
}

