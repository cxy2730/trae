// Function: FUN_0048cde9
// Entry:    0048cde9
// Size:     386 bytes
// Conv:     unknown
// Signature: undefined FUN_0048cde9(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_0048cde9(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  undefined4 *puVar6;
  undefined4 local_10;
  undefined4 local_c;
  
  bVar1 = false;
  if (param_1 == 2) {
    puVar6 = &DAT_030111b4;
    pcVar5 = DAT_030111b4;
LAB_0048ce6f:
    bVar1 = true;
    FUN_00489a54(1);
    iVar2 = param_1;
  }
  else {
    if (((param_1 != 4) && (param_1 != 8)) && (param_1 != 0xb)) {
      if (param_1 == 0xf) {
        puVar6 = &DAT_030111c0;
        pcVar5 = DAT_030111c0;
      }
      else if (param_1 == 0x15) {
        puVar6 = &DAT_030111b8;
        pcVar5 = DAT_030111b8;
      }
      else {
        if (param_1 != 0x16) {
          return 0xffffffff;
        }
        puVar6 = &DAT_030111bc;
        pcVar5 = DAT_030111bc;
      }
      goto LAB_0048ce6f;
    }
    iVar2 = FUN_004871ba();
    iVar4 = FUN_0048cf6b(param_1,*(undefined4 *)(iVar2 + 0x50));
    puVar6 = (undefined4 *)(iVar4 + 8);
    pcVar5 = (code *)*puVar6;
  }
  if (pcVar5 == (code *)0x1) {
    if (!bVar1) {
      return 0;
    }
    FUN_00489ab5(1);
    return 0;
  }
  if (pcVar5 == (code *)0x0) {
    if (bVar1) {
      FUN_00489ab5(1);
    }
                    /* WARNING: Subroutine does not return */
    __exit(3);
  }
  if (((param_1 == 8) || (param_1 == 0xb)) || (param_1 == 4)) {
    local_c = *(undefined4 *)(iVar2 + 0x54);
    *(undefined4 *)(iVar2 + 0x54) = 0;
    if (param_1 == 8) {
      local_10 = *(undefined4 *)(iVar2 + 0x58);
      *(undefined4 *)(iVar2 + 0x58) = 0x8c;
      goto LAB_0048cee3;
    }
  }
  else {
LAB_0048cee3:
    if (param_1 == 8) {
      if (DAT_02fd93e8 < DAT_02fd93ec + DAT_02fd93e8) {
        iVar3 = DAT_02fd93e8 * 0xc;
        iVar4 = DAT_02fd93e8;
        do {
          iVar3 = iVar3 + 0xc;
          *(undefined4 *)(*(int *)(iVar2 + 0x50) + -4 + iVar3) = 0;
          iVar4 = iVar4 + 1;
        } while (iVar4 < DAT_02fd93ec + DAT_02fd93e8);
      }
      goto LAB_0048cf21;
    }
  }
  *puVar6 = 0;
LAB_0048cf21:
  if (bVar1) {
    FUN_00489ab5(1);
  }
  if (param_1 == 8) {
    (*pcVar5)(8,*(undefined4 *)(iVar2 + 0x58));
  }
  else {
    (*pcVar5)(param_1);
    if ((param_1 != 0xb) && (param_1 != 4)) {
      return 0;
    }
  }
  *(undefined4 *)(iVar2 + 0x54) = local_c;
  if (param_1 == 8) {
    *(undefined4 *)(iVar2 + 0x58) = local_10;
  }
  return 0;
}

