// Function: FUN_00447ca0
// Entry:    00447ca0
// Size:     453 bytes
// Conv:     unknown
// Signature: undefined FUN_00447ca0(void)
// Decompiled by Ghidra 12.1.2


void FUN_00447ca0(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  char *pcVar5;
  undefined1 local_304;
  undefined1 local_303;
  undefined1 local_302;
  undefined1 local_300 [2];
  undefined1 local_2fe [766];
  
  uVar1 = *(uint *)(param_1 + 0x74);
  if ((uVar1 & 1) == 0) {
    pcVar5 = s_missing_IHDR_02fb2624;
LAB_00447cc1:
    FUN_00446680(param_1,pcVar5);
  }
  else {
    if ((uVar1 & 2) != 0) {
      pcVar5 = s_duplicate_02fb25fc;
      goto LAB_00447cc1;
    }
    if ((uVar1 & 4) != 0) {
      FUN_004479f0(param_1,param_3);
      FUN_004467e0(param_1,s_out_of_place_02fb25b0);
      return;
    }
  }
  *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 2;
  if ((*(byte *)(param_1 + 0x157) & 2) == 0) {
    FUN_004479f0(param_1,param_3);
    FUN_004467e0(param_1,s_ignored_in_grayscale_PNG_02fb2608);
    return;
  }
  if ((0x300 < param_3) || (param_3 % 3 != 0)) {
    FUN_004479f0(param_1,param_3);
    if (*(char *)(param_1 + 0x157) == '\x03') {
      FUN_00446680(param_1,s_invalid_02fb25a8);
      return;
    }
    FUN_004467e0();
    return;
  }
  iVar2 = (int)param_3 / 3;
  if (0 < iVar2) {
    puVar4 = local_2fe;
    iVar3 = iVar2;
    do {
      FUN_004479c0(param_1,&local_304,3);
      puVar4[-2] = local_304;
      puVar4[-1] = local_303;
      *puVar4 = local_302;
      puVar4 = puVar4 + 3;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_004479f0(param_1,0);
  FUN_00450ac0(param_1,param_2,local_300,iVar2);
  if (*(short *)(param_1 + 0x150) == 0) {
    if (param_2 == 0) {
      return;
    }
    if ((*(byte *)(param_2 + 8) & 0x10) == 0) goto LAB_00447df1;
  }
  *(undefined2 *)(param_1 + 0x150) = 0;
  if (param_2 != 0) {
    *(undefined2 *)(param_2 + 0x16) = 0;
  }
  FUN_004467e0(param_1,s_tRNS_must_be_after_02fb25e8);
LAB_00447df1:
  if (param_2 != 0) {
    if ((*(byte *)(param_2 + 8) & 0x40) != 0) {
      FUN_004467e0(param_1,s_hIST_must_be_after_02fb25d4);
    }
    if ((*(byte *)(param_2 + 8) & 0x20) != 0) {
      FUN_004467e0(param_1,s_bKGD_must_be_after_02fb25c0);
      return;
    }
  }
  return;
}

