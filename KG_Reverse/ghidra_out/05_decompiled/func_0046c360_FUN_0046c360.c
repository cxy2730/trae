// Function: FUN_0046c360
// Entry:    0046c360
// Size:     274 bytes
// Conv:     unknown
// Signature: undefined FUN_0046c360(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_0046c360(uint *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  
  param_1[2] = 0;
  bVar1 = *(byte *)(param_2 + 2);
  uVar5 = (*(byte *)(param_2 + 1) & 8) >> 3;
  bVar2 = *(byte *)(param_2 + 3) >> 6;
  if (uVar5 == 0) {
    if (bVar2 == 3) {
      pcVar6 = (char *)(param_2 + 0xd);
      goto LAB_0046c3a9;
    }
  }
  else if (bVar2 != 3) {
    pcVar6 = (char *)(param_2 + 0x24);
    goto LAB_0046c3a9;
  }
  pcVar6 = (char *)(param_2 + 0x15);
LAB_0046c3a9:
  if (*pcVar6 != 'X') {
    return 0;
  }
  if (pcVar6[1] != 'i') {
    return 0;
  }
  if (pcVar6[2] != 'n') {
    return 0;
  }
  if (pcVar6[3] != 'g') {
    return 0;
  }
  *param_1 = uVar5;
  uVar3 = *(uint *)(&DAT_02fd26c8 + (bVar1 & 0xc));
  param_1[1] = uVar3;
  if (uVar5 == 0) {
    param_1[1] = (int)uVar3 >> 1;
  }
  uVar5 = FUN_0046c330(pcVar6 + 4);
  pcVar7 = pcVar6 + 8;
  param_1[2] = uVar5;
  if ((uVar5 & 1) != 0) {
    uVar3 = FUN_0046c330(pcVar7);
    param_1[3] = uVar3;
    pcVar7 = pcVar6 + 0xc;
  }
  if ((uVar5 & 2) != 0) {
    uVar3 = FUN_0046c330(pcVar7);
    param_1[4] = uVar3;
    pcVar7 = pcVar7 + 4;
  }
  if ((uVar5 & 4) != 0) {
    if (param_1[6] != 0) {
      iVar4 = 0;
      do {
        *(char *)(iVar4 + param_1[6]) = pcVar7[iVar4];
        iVar4 = iVar4 + 1;
      } while (iVar4 < 100);
    }
    pcVar7 = pcVar7 + 100;
  }
  param_1[5] = 0xffffffff;
  if ((uVar5 & 8) != 0) {
    uVar5 = FUN_0046c330(pcVar7);
    param_1[5] = uVar5;
  }
  return 1;
}

