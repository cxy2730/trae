// Function: FUN_00429840
// Entry:    00429840
// Size:     142 bytes
// Conv:     unknown
// Signature: undefined FUN_00429840(void)
// Decompiled by Ghidra 12.1.2


int * __fastcall FUN_00429840(uint *param_1)

{
  char cVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  
  iVar4 = FUN_004297b0();
  pcVar2 = (char *)param_1[0xc];
  if (pcVar2 == (char *)0x0) {
    return (int *)0x0;
  }
  if (((iVar4 != 1) && (iVar4 != 2)) && (iVar4 != 3)) {
    return (int *)0x0;
  }
  if (param_1[0xe] != 0) goto LAB_004298be;
  if ((*param_1 & 0x18000) == 0) {
    iVar4 = -1;
    pcVar7 = pcVar2;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    if (iVar4 != -2) {
      uVar5 = FUN_00422540(pcVar2);
      goto LAB_00429890;
    }
  }
  else {
    uVar5 = FUN_004225f0(pcVar2,param_1[0xd]);
LAB_00429890:
    param_1[0xe] = uVar5;
  }
  if (param_1[0xe] == 0) {
    puVar6 = (undefined4 *)FUN_00492f17(0x18);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = 0;
      puVar6[4] = 0;
      puVar6[5] = 0;
    }
    param_1[0xe] = (uint)puVar6;
  }
LAB_004298be:
  piVar3 = (int *)param_1[0xe];
  if (piVar3 == (int *)0x0) {
    return (int *)0x0;
  }
  if (*piVar3 == 0) {
    return (int *)0x0;
  }
  return piVar3;
}

