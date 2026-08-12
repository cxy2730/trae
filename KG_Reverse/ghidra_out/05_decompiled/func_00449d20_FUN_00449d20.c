// Function: FUN_00449d20
// Entry:    00449d20
// Size:     432 bytes
// Conv:     unknown
// Signature: undefined FUN_00449d20(void)
// Decompiled by Ghidra 12.1.2


void FUN_00449d20(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 local_1c;
  int local_18;
  int local_14;
  uint local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar2 = *(int *)(param_1 + 0x298);
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      FUN_004479f0(param_1,param_3);
      return;
    }
    *(int *)(param_1 + 0x298) = iVar2 + -1;
    if (iVar2 + -1 == 1) {
      FUN_004479f0(param_1,param_3);
      FUN_004467e0(param_1,s_no_space_in_chunk_cache_02fb28c0);
      return;
    }
  }
  if ((*(byte *)(param_1 + 0x74) & 1) == 0) {
    FUN_00446680(param_1,s_missing_IHDR_02fb2624);
  }
  uVar1 = param_3;
  if ((*(uint *)(param_1 + 0x74) & 4) != 0) {
    *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 8;
  }
  iVar2 = FUN_004488b0(param_1,param_3,2);
  if (iVar2 == 0) {
    FUN_004479f0(param_1);
    FUN_004467e0(param_1,s_out_of_memory_02fb26b0);
    return;
  }
  FUN_004479c0(param_1,iVar2,uVar1);
  iVar3 = FUN_004479f0(param_1,0);
  if (iVar3 != 0) {
    return;
  }
  uVar5 = 0;
  if (uVar1 != 0) {
    do {
      if (*(char *)(uVar5 + iVar2) == '\0') break;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar1);
    if ((uVar5 < 0x50) && (uVar5 != 0)) {
      if (uVar1 < uVar5 + 3) {
        pcVar4 = s_truncated_02fb26a4;
      }
      else if (*(char *)(uVar5 + 1 + iVar2) == '\0') {
        param_3 = 0xffffffff;
        iVar2 = FUN_00449ed0(param_1,uVar1,uVar5 + 2,&param_3,1);
        if (iVar2 == 1) {
          local_18 = *(int *)(param_1 + 0x2b8);
          *(undefined1 *)(param_3 + uVar5 + 2 + local_18) = 0;
          local_14 = uVar5 + 2 + local_18;
          local_1c = 0;
          local_c = 0;
          local_8 = 0;
          local_4 = 0;
          local_10 = param_3;
          iVar2 = FUN_00450bf0(param_1,param_2,&local_1c,1);
          if (iVar2 == 0) {
            return;
          }
          pcVar4 = s_insufficient_memory_02fb28d8;
        }
        else {
          pcVar4 = *(char **)(param_1 + 0x9c);
        }
      }
      else {
        pcVar4 = s_unknown_compression_type_02fb28ec;
      }
      goto LAB_00449eba;
    }
  }
  pcVar4 = s_bad_keyword_02fb2680;
LAB_00449eba:
  if (pcVar4 != (char *)0x0) {
    FUN_004467e0(param_1,pcVar4);
  }
  return;
}

