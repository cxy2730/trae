// Function: FUN_0041bec0
// Entry:    0041bec0
// Size:     282 bytes
// Conv:     unknown
// Signature: undefined FUN_0041bec0(void)
// Decompiled by Ghidra 12.1.2


void FUN_0041bec0(undefined4 param_1,undefined4 param_2,LPSTR param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  char *pcVar11;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  CHAR local_34 [52];
  
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  FUN_0041be30(&local_40,param_1,param_2);
  uVar2 = FUN_004814ae();
  uVar3 = FUN_004814d8();
  uVar4 = FUN_00481502();
  iVar5 = FUN_0048152c();
  iVar6 = FUN_00481556();
  iVar7 = FUN_00481580();
  wsprintfA(param_3,&DAT_02fab764,uVar2,uVar3,uVar4);
  if (iVar7 == 0) {
    if (iVar6 == 0) {
      if (iVar5 == 0) {
        return;
      }
      wsprintfA(local_34,&DAT_02fab740,iVar5);
    }
    else {
      wsprintfA(local_34,&DAT_02fab748,iVar5,iVar6);
    }
  }
  else {
    wsprintfA(local_34,&DAT_02fab754,iVar5,iVar6,iVar7);
  }
  uVar8 = 0xffffffff;
  pcVar11 = local_34;
  do {
    pcVar10 = pcVar11;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar10 = pcVar11 + 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar10;
  } while (cVar1 != '\0');
  uVar8 = ~uVar8;
  iVar5 = -1;
  do {
    pcVar11 = param_3;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar11 = param_3 + 1;
    cVar1 = *param_3;
    param_3 = pcVar11;
  } while (cVar1 != '\0');
  pcVar10 = pcVar10 + -uVar8;
  pcVar11 = pcVar11 + -1;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar11 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar11 = pcVar11 + 1;
  }
  return;
}

