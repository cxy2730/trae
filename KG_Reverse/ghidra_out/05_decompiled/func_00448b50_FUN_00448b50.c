// Function: FUN_00448b50
// Entry:    00448b50
// Size:     663 bytes
// Conv:     unknown
// Signature: undefined FUN_00448b50(void)
// Decompiled by Ghidra 12.1.2


void FUN_00448b50(int param_1,undefined4 param_2,int param_3)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  ushort *puVar5;
  int iVar6;
  char *pcVar7;
  byte *pbVar8;
  byte *pbVar9;
  char *local_10;
  char local_c;
  int local_8;
  uint local_4;
  
  iVar4 = *(int *)(param_1 + 0x298);
  if (iVar4 != 0) {
    if (iVar4 == 1) {
      FUN_004479f0(param_1,param_3);
      return;
    }
    *(int *)(param_1 + 0x298) = iVar4 + -1;
    if (iVar4 + -1 == 1) {
      FUN_00446560(param_1,s_No_space_in_chunk_cache_for_sPLT_02fb27a0);
      FUN_004479f0(param_1,param_3);
      return;
    }
  }
  if ((*(uint *)(param_1 + 0x74) & 1) == 0) {
    FUN_00446680(param_1,s_missing_IHDR_02fb2624);
  }
  else if ((*(uint *)(param_1 + 0x74) & 4) != 0) {
    FUN_004479f0(param_1,param_3);
    FUN_004467e0(param_1,s_out_of_place_02fb25b0);
    return;
  }
  pcVar3 = (char *)FUN_004488b0(param_1,param_3 + 1,2);
  if (pcVar3 == (char *)0x0) {
    FUN_004479f0(param_1);
    FUN_004467e0(param_1,s_out_of_memory_02fb26b0);
    return;
  }
  FUN_004479c0(param_1,pcVar3,param_3);
  iVar4 = FUN_004479f0(param_1,0);
  if (iVar4 == 0) {
    pcVar3[param_3] = '\0';
    cVar2 = *pcVar3;
    pcVar7 = pcVar3;
    while (cVar2 != '\0') {
      pcVar1 = pcVar7 + 1;
      pcVar7 = pcVar7 + 1;
      cVar2 = *pcVar1;
    }
    if (pcVar3 + param_3 + -2 < pcVar7 + 1) {
      FUN_00446560(param_1,s_malformed_sPLT_chunk_02fb2788);
      return;
    }
    local_c = pcVar7[1];
    pbVar8 = (byte *)(pcVar7 + 2);
    local_4 = (-(uint)(local_c != '\b') & 4) + 6;
    if ((uint)(pcVar3 + (param_3 - (int)pbVar8)) % local_4 != 0) {
      FUN_00446560(param_1,s_sPLT_chunk_has_bad_length_02fb276c);
      return;
    }
    local_4 = (uint)(pcVar3 + (param_3 - (int)pbVar8)) / local_4;
    if (0x19999999 < local_4) {
      FUN_00446560(param_1,s_sPLT_chunk_too_long_02fb2758);
      return;
    }
    local_8 = FUN_00446cf0(param_1,local_4 * 10);
    if (local_8 == 0) {
      FUN_00446560(param_1,s_sPLT_chunk_requires_too_much_mem_02fb2734);
      return;
    }
    iVar4 = 0;
    if (0 < (int)local_4) {
      iVar6 = 0;
      do {
        puVar5 = (ushort *)(local_8 + iVar6);
        if (local_c == '\b') {
          *puVar5 = (ushort)*pbVar8;
          puVar5[1] = (ushort)pbVar8[1];
          puVar5[2] = (ushort)pbVar8[2];
          puVar5[3] = (ushort)pbVar8[3];
          pbVar9 = pbVar8 + 4;
        }
        else {
          *puVar5 = (ushort)*pbVar8 * 0x100 + (ushort)pbVar8[1];
          puVar5[1] = (ushort)pbVar8[2] * 0x100 + (ushort)pbVar8[3];
          puVar5[2] = (ushort)pbVar8[4] * 0x100 + (ushort)pbVar8[5];
          pbVar9 = pbVar8 + 8;
          puVar5[3] = (ushort)pbVar8[6] * 0x100 + (ushort)pbVar8[7];
        }
        pbVar8 = pbVar9 + 2;
        puVar5[4] = (ushort)*pbVar9 * 0x100 + (ushort)pbVar9[1];
        iVar4 = iVar4 + 1;
        iVar6 = iVar6 + 10;
      } while (iVar4 < (int)local_4);
    }
    local_10 = pcVar3;
    FUN_004510a0(param_1,param_2,&local_10,1);
    FUN_00446d20(param_1,local_8);
  }
  return;
}

