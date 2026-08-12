// Function: FUN_0043f290
// Entry:    0043f290
// Size:     796 bytes
// Conv:     unknown
// Signature: undefined FUN_0043f290(void)
// Decompiled by Ghidra 12.1.2


void FUN_0043f290(int param_1,uint param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  bool bVar5;
  char *pcVar6;
  undefined4 uVar7;
  int local_10;
  uint local_c;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  byte local_5;
  undefined3 uStack_4;
  
  if (param_1 == 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x78) & 0x40) == 0) {
    FUN_0044b770(param_1);
  }
  local_8 = *(undefined1 *)(param_1 + 0x157);
  local_7 = *(undefined1 *)(param_1 + 0x158);
  local_10 = *(int *)(param_1 + 0x114);
  local_6 = *(undefined1 *)(param_1 + 0x15b);
  bVar1 = *(byte *)(param_1 + 0x15a);
  _local_5 = CONCAT31(uStack_4,bVar1);
  if (bVar1 < 8) {
    local_c = (uint)bVar1 * local_10 + 7 >> 3;
  }
  else {
    local_c = (uint)(bVar1 >> 3) * local_10;
  }
  if ((*(char *)(param_1 + 0x154) == '\0') || ((*(byte *)(param_1 + 0x7c) & 2) == 0))
  goto LAB_0043f3fc;
  uVar2 = param_3;
  switch(*(undefined1 *)(param_1 + 0x155)) {
  case 0:
    if ((*(byte *)(param_1 + 0x118) & 7) == 0) break;
joined_r0x0043f3c8:
    if (uVar2 == 0) goto LAB_0043f362;
    goto LAB_0043f356;
  case 1:
    if ((*(byte *)(param_1 + 0x118) & 7) == 0) {
      bVar5 = *(uint *)(param_1 + 0x100) < 5;
LAB_0043f3dc:
      if (!bVar5) break;
    }
    goto LAB_0043f3e4;
  case 2:
    if (((byte)*(uint *)(param_1 + 0x118) & 7) != 4) {
      if (param_3 == 0) goto LAB_0043f362;
      uVar2 = *(uint *)(param_1 + 0x118) & 4;
      goto LAB_0043f3e4;
    }
    break;
  case 3:
    if ((*(byte *)(param_1 + 0x118) & 3) == 0) {
      bVar5 = *(uint *)(param_1 + 0x100) < 3;
      goto LAB_0043f3dc;
    }
    goto LAB_0043f3e4;
  case 4:
    if (((byte)*(uint *)(param_1 + 0x118) & 3) != 2) {
      if (param_3 == 0) goto LAB_0043f362;
      uVar2 = *(uint *)(param_1 + 0x118) & 2;
      goto joined_r0x0043f3c8;
    }
    break;
  case 5:
    if ((*(byte *)(param_1 + 0x118) & 1) == 0) {
      bVar5 = *(uint *)(param_1 + 0x100) < 2;
      goto LAB_0043f3dc;
    }
LAB_0043f3e4:
    if (uVar2 != 0) {
LAB_0043f356:
      FUN_0044a770(param_1,param_3,1);
    }
LAB_0043f362:
    FUN_0044b660(param_1);
    return;
  default:
    if ((*(byte *)(param_1 + 0x118) & 1) == 0) goto LAB_0043f362;
  }
LAB_0043f3fc:
  if ((*(byte *)(param_1 + 0x74) & 4) == 0) {
    FUN_004463d0(param_1,s_Invalid_attempt_to_read_row_data_02fb1af0);
  }
  FUN_0044b400(param_1,*(undefined4 *)(param_1 + 0x124),local_c + 1);
  bVar1 = **(byte **)(param_1 + 0x124);
  if (bVar1 != 0) {
    if (bVar1 < 5) {
      FUN_0044b120(param_1,&local_10,*(byte **)(param_1 + 0x124) + 1,*(int *)(param_1 + 0x120) + 1,
                   bVar1);
    }
    else {
      FUN_004463d0(param_1,s_bad_adaptive_filter_value_02fb1ad4);
    }
  }
  puVar3 = *(undefined4 **)(param_1 + 0x124);
  puVar4 = *(undefined4 **)(param_1 + 0x120);
  for (uVar2 = local_c + 1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  for (uVar2 = local_c + 1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  if (((*(byte *)(param_1 + 0x268) & 4) != 0) && (*(char *)(param_1 + 0x26c) == '@')) {
    FUN_0043f5d0(&local_10,*(int *)(param_1 + 0x124) + 1);
  }
  if (*(int *)(param_1 + 0x7c) != 0) {
    FUN_0044ce90(param_1,&local_10);
  }
  if (*(byte *)(param_1 + 0x15f) == 0) {
    *(byte *)(param_1 + 0x15f) = local_5;
    if (*(byte *)(param_1 + 0x15e) < local_5) {
      pcVar6 = s_sequential_row_overflow_02fb1abc;
LAB_0043f4f4:
      FUN_004463d0(param_1,pcVar6);
    }
  }
  else if (*(byte *)(param_1 + 0x15f) != local_5) {
    pcVar6 = s_internal_sequential_row_size_cal_02fb1a8c;
    goto LAB_0043f4f4;
  }
  if ((*(char *)(param_1 + 0x154) == '\0') || ((*(uint *)(param_1 + 0x7c) & 2) == 0)) {
    if (param_2 != 0) {
      FUN_0044a770(param_1,param_2,0xffffffff);
    }
    if (param_3 == 0) goto LAB_0043f57d;
    uVar7 = 0xffffffff;
    param_2 = param_3;
  }
  else {
    if (*(byte *)(param_1 + 0x155) < 6) {
      FUN_0044acb0(&local_10,*(int *)(param_1 + 0x124) + 1,*(byte *)(param_1 + 0x155),
                   *(uint *)(param_1 + 0x7c));
    }
    if (param_3 != 0) {
      FUN_0044a770(param_1,param_3,1);
    }
    if (param_2 == 0) goto LAB_0043f57d;
    uVar7 = 0;
  }
  FUN_0044a770(param_1,param_2,uVar7);
LAB_0043f57d:
  FUN_0044b660(param_1);
  if (*(code **)(param_1 + 0x1c4) != (code *)0x0) {
    (**(code **)(param_1 + 0x1c4))
              (param_1,*(undefined4 *)(param_1 + 0x118),*(undefined1 *)(param_1 + 0x155));
  }
  return;
}

