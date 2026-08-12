// Function: FUN_0044a260
// Entry:    0044a260
// Size:     589 bytes
// Conv:     unknown
// Signature: undefined FUN_0044a260(void)
// Decompiled by Ghidra 12.1.2


void FUN_0044a260(int param_1,undefined4 param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  uint local_c;
  int local_8;
  int local_4;
  
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
  uVar2 = param_3;
  if ((*(uint *)(param_1 + 0x74) & 4) != 0) {
    *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 8;
  }
  iVar3 = FUN_004488b0(param_1,param_3 + 1,1);
  if (iVar3 == 0) {
    FUN_004479f0(param_1);
    FUN_004467e0(param_1,s_out_of_memory_02fb26b0);
    return;
  }
  FUN_004479c0(param_1,iVar3,uVar2);
  iVar4 = FUN_004479f0(param_1,0);
  if (iVar4 != 0) {
    return;
  }
  uVar6 = 0;
  if (uVar2 != 0) {
    do {
      if (*(char *)(uVar6 + iVar3) == '\0') break;
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar2);
    if ((uVar6 < 0x50) && (uVar6 != 0)) {
      if (uVar2 < uVar6 + 5) {
        pcVar5 = s_truncated_02fb26a4;
        goto LAB_0044a481;
      }
      cVar1 = *(char *)(uVar6 + 1 + iVar3);
      if ((cVar1 != '\0') && ((cVar1 != '\x01' || (*(char *)(uVar6 + 2 + iVar3) != '\0')))) {
        pcVar5 = s_bad_compression_info_02fb2908;
        goto LAB_0044a481;
      }
      param_3 = 0;
      for (uVar7 = uVar6 + 3; (uVar7 < uVar2 && (*(char *)(uVar7 + iVar3) != '\0'));
          uVar7 = uVar7 + 1) {
      }
      for (uVar8 = uVar7 + 1; (uVar8 < uVar2 && (*(char *)(uVar8 + iVar3) != '\0'));
          uVar8 = uVar8 + 1) {
      }
      uVar8 = uVar8 + 1;
      if (cVar1 != '\0') {
        if (uVar2 <= uVar8) goto LAB_0044a404;
        param_3 = 0xffffffff;
        iVar4 = FUN_00449ed0(param_1,uVar2,uVar8,&param_3,1);
        if (iVar4 == 1) {
          iVar3 = *(int *)(param_1 + 0x2b8);
          goto LAB_0044a415;
        }
        pcVar5 = *(char **)(param_1 + 0x9c);
LAB_0044a409:
        if (pcVar5 != (char *)0x0) {
          FUN_004467e0(param_1,pcVar5);
          return;
        }
      }
      else {
        if (uVar2 < uVar8) {
LAB_0044a404:
          pcVar5 = s_truncated_02fb26a4;
          goto LAB_0044a409;
        }
        param_3 = uVar2 - uVar8;
      }
LAB_0044a415:
      local_8 = uVar6 + 3 + iVar3;
      *(undefined1 *)(param_3 + uVar8 + iVar3) = 0;
      local_4 = uVar7 + 1 + iVar3;
      local_1c = 2 - (uint)(cVar1 != '\0');
      local_14 = uVar8 + iVar3;
      local_10 = 0;
      local_c = param_3;
      local_18 = iVar3;
      iVar3 = FUN_00450bf0(param_1,param_2,&local_1c,1);
      if (iVar3 == 0) {
        return;
      }
      pcVar5 = s_insufficient_memory_02fb28d8;
      goto LAB_0044a481;
    }
  }
  pcVar5 = s_bad_keyword_02fb2680;
LAB_0044a481:
  if (pcVar5 == (char *)0x0) {
    return;
  }
  FUN_004467e0(param_1,pcVar5);
  return;
}

