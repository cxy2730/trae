// Function: FUN_00449be0
// Entry:    00449be0
// Size:     315 bytes
// Conv:     unknown
// Signature: undefined FUN_00449be0(void)
// Decompiled by Ghidra 12.1.2


void FUN_00449be0(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 local_1c;
  char *local_18;
  char *local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar3 = *(int *)(param_1 + 0x298);
  if (iVar3 != 0) {
    if (iVar3 == 1) {
      FUN_004479f0(param_1,param_3);
      return;
    }
    *(int *)(param_1 + 0x298) = iVar3 + -1;
    if (iVar3 + -1 == 1) {
      FUN_004479f0(param_1,param_3);
      FUN_004467e0(param_1,s_no_space_in_chunk_cache_02fb28c0);
      return;
    }
  }
  if ((*(byte *)(param_1 + 0x74) & 1) == 0) {
    FUN_00446680(param_1,s_missing_IHDR_02fb2624);
  }
  if ((*(uint *)(param_1 + 0x74) & 4) != 0) {
    *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 8;
  }
  pcVar2 = (char *)FUN_004488b0(param_1,param_3 + 1,1);
  if (pcVar2 == (char *)0x0) {
    FUN_004467e0(param_1,s_out_of_memory_02fb26b0);
    return;
  }
  FUN_004479c0(param_1,pcVar2,param_3);
  iVar3 = FUN_004479f0(param_1,0);
  if (iVar3 == 0) {
    pcVar2[param_3] = '\0';
    cVar1 = *pcVar2;
    local_14 = pcVar2;
    while (cVar1 != '\0') {
      pcVar5 = local_14 + 1;
      local_14 = local_14 + 1;
      cVar1 = *pcVar5;
    }
    if (local_14 != pcVar2 + param_3) {
      local_14 = local_14 + 1;
    }
    uVar4 = 0xffffffff;
    local_1c = 0xffffffff;
    local_8 = 0;
    local_4 = 0;
    local_c = 0;
    pcVar5 = local_14;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    local_10 = ~uVar4 - 1;
    local_18 = pcVar2;
    iVar3 = FUN_00450bf0(param_1,param_2,&local_1c,1);
    if (iVar3 != 0) {
      FUN_00446560(param_1,s_Insufficient_memory_to_process_t_02fb2894);
    }
  }
  return;
}

