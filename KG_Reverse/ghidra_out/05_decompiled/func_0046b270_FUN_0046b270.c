// Function: FUN_0046b270
// Entry:    0046b270
// Size:     477 bytes
// Conv:     unknown
// Signature: undefined FUN_0046b270(void)
// Decompiled by Ghidra 12.1.2


undefined4 * __thiscall FUN_0046b270(undefined4 *param_1,char *param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int *piVar6;
  uint uVar7;
  char *pcVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004a1202;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_02f99e0c;
  iVar2 = FUN_00492f17(8);
  local_4 = 0;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0046bb00(0);
  }
  local_4 = 0xffffffff;
  param_1[1] = uVar3;
  puVar4 = (undefined4 *)FUN_00492f17(0x10);
  local_4 = 1;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *(undefined1 *)(puVar4 + 2) = 1;
    *puVar4 = 0;
    puVar4[1] = 0;
    iVar2 = FUN_00492f17(4);
    local_4 = CONCAT31(local_4._1_3_,2);
    if (iVar2 == 0) {
      puVar4[3] = 0;
    }
    else {
      uVar3 = FUN_0046bab0(0);
      puVar4[3] = uVar3;
    }
  }
  local_4 = 0xffffffff;
  param_1[3] = puVar4;
  iVar2 = FUN_00492f17(4);
  local_4 = 3;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0046bab0(0);
  }
  local_4 = 0xffffffff;
  param_1[9] = uVar3;
  iVar2 = FUN_00492f17(4);
  local_4 = 4;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0046bab0(0);
  }
  local_4 = 0xffffffff;
  param_1[10] = uVar3;
  iVar2 = FUN_00492f17(4);
  local_4 = 5;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0046bab0(0);
  }
  param_1[0xb] = uVar3;
  param_1[2] = 3;
  param_1[0x8d] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[6] = ((int)param_3 < 0) - 1 & param_3;
  cVar1 = *param_2;
  local_4 = 0xffffffff;
  pcVar8 = param_2;
  do {
    if (cVar1 == '\0') {
      pcVar8 = pcVar8 + (1 - (int)param_2);
      if ((int)pcVar8 < 2) {
        param_1[7] = 0;
        param_1[5] = 0;
      }
      else {
        pcVar5 = (char *)FUN_00492f17(pcVar8);
        param_1[7] = pcVar5;
        for (uVar7 = (uint)pcVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar5 = *(undefined4 *)param_2;
          param_2 = param_2 + 4;
          pcVar5 = pcVar5 + 4;
        }
        for (uVar7 = (uint)pcVar8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar5 = *param_2;
          param_2 = param_2 + 1;
          pcVar5 = pcVar5 + 1;
        }
        piVar6 = (int *)FUN_0046ba50();
        param_1[5] = piVar6;
        (**(code **)(*piVar6 + 4))(FUN_0046b5c0,param_1);
      }
      param_1[8] = param_1[7];
      param_1[0xc] = 0;
      ExceptionList = local_c;
      return param_1;
    }
    uVar7 = 0xffffffff;
    pcVar5 = pcVar8;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    cVar1 = pcVar8[~uVar7];
    pcVar8 = pcVar8 + ~uVar7;
  } while( true );
}

