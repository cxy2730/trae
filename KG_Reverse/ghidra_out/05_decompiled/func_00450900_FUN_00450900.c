// Function: FUN_00450900
// Entry:    00450900
// Size:     378 bytes
// Conv:     unknown
// Signature: undefined FUN_00450900(void)
// Decompiled by Ghidra 12.1.2


void FUN_00450900(int param_1,int param_2,int param_3,char *param_4,char *param_5)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = 0;
  iVar6 = 0;
  if (param_1 == 0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  if ((param_3 != 1) && (param_3 != 2)) {
    FUN_004463d0(param_1,s_Invalid_sCAL_unit_02fb2f5c);
  }
  if (param_4 == (char *)0x0) {
LAB_00450967:
    FUN_004463d0(param_1,s_Invalid_sCAL_width_02fb2f48);
  }
  else {
    uVar4 = 0xffffffff;
    pcVar3 = param_4;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    iVar7 = ~uVar4 - 1;
    if (((iVar7 == 0) || (*param_4 == '-')) || (iVar2 = FUN_0043e460(param_4,iVar7), iVar2 == 0))
    goto LAB_00450967;
  }
  if (param_5 != (char *)0x0) {
    uVar4 = 0xffffffff;
    pcVar3 = param_5;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    iVar6 = ~uVar4 - 1;
    if (((iVar6 != 0) && (*param_5 != '-')) && (iVar2 = FUN_0043e460(param_5,iVar6), iVar2 != 0))
    goto LAB_004509bc;
  }
  FUN_004463d0(param_1,s_Invalid_sCAL_height_02fb2f34);
LAB_004509bc:
  uVar4 = iVar7 + 1;
  *(undefined1 *)(param_2 + 0xfc) = (undefined1)param_3;
  pcVar3 = (char *)FUN_00446cf0(param_1,uVar4);
  *(char **)(param_2 + 0x100) = pcVar3;
  if (pcVar3 == (char *)0x0) {
    FUN_00446560(param_1,s_Memory_allocation_failed_while_p_02fb2f04);
    return;
  }
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)param_4;
    param_4 = param_4 + 4;
    pcVar3 = pcVar3 + 4;
  }
  uVar5 = iVar6 + 1;
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar3 = *param_4;
    param_4 = param_4 + 1;
    pcVar3 = pcVar3 + 1;
  }
  pcVar3 = (char *)FUN_00446cf0(param_1,uVar5);
  *(char **)(param_2 + 0x104) = pcVar3;
  if (pcVar3 != (char *)0x0) {
    for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)param_5;
      param_5 = param_5 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar3 = *param_5;
      param_5 = param_5 + 1;
      pcVar3 = pcVar3 + 1;
    }
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x4000;
    *(uint *)(param_2 + 0xe8) = *(uint *)(param_2 + 0xe8) | 0x100;
    return;
  }
  FUN_00446d20(param_1,*(undefined4 *)(param_2 + 0x100));
  *(undefined4 *)(param_2 + 0x100) = 0;
  FUN_00446560(param_1,s_Memory_allocation_failed_while_p_02fb2f04);
  return;
}

