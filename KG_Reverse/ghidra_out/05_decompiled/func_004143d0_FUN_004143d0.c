// Function: FUN_004143d0
// Entry:    004143d0
// Size:     980 bytes
// Conv:     unknown
// Signature: undefined FUN_004143d0(void)
// Decompiled by Ghidra 12.1.2


/* WARNING: Removing unreachable block (ram,0x00414567) */
/* WARNING: Removing unreachable block (ram,0x00414574) */
/* WARNING: Removing unreachable block (ram,0x00414576) */

void FUN_004143d0(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int *param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  HGDIOBJ h;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int *piVar8;
  char *pcVar9;
  char *pcVar10;
  void **ppvVar11;
  int iVar12;
  uint local_54;
  int local_4c;
  int local_48 [4];
  uint local_38;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  void *local_2c [5];
  undefined4 uStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049e8f8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar2 = FUN_00413290(param_1,0);
  iVar12 = *(int *)(iVar2 + 0x28) + param_3 * 0x14;
  FUN_004062a0();
  local_4 = 0;
  switch(*(undefined2 *)(iVar12 + 0xc)) {
  case 1000:
  case 0x3e9:
    break;
  case 0x3ea:
  case 0x3ec:
    break;
  case 0x3eb:
    break;
  case 0x3ed:
  case 0x3ef:
  case 0x3f0:
  case 0x3f8:
  case 0x3fa:
  case 0x3fb:
  case 0x3fc:
  case 0x3fd:
  case 0x3fe:
    break;
  case 0x3ee:
    break;
  case 0x3f1:
  case 0x3f2:
  case 0x3f3:
  case 0x3f4:
  case 0x3ff:
  case 0x400:
    if (((param_5 != (int *)0x0) && (*(short *)(iVar12 + 0xc) == 0x3f3)) && (3 < (uint)param_5[1]))
    {
      FUN_004069d0(param_5 + 2,param_5[1]);
      puVar7 = (undefined4 *)(-(uint)(local_4c != 0) & local_54);
      uVar3 = FUN_0041c6a0(*puVar7);
      *puVar7 = uVar3;
    }
    break;
  case 0x3f5:
    if (param_4 == -1) {
      if (param_5 == (int *)0x0) break;
      piVar8 = local_48;
      for (iVar12 = 0xf; iVar12 != 0; iVar12 = iVar12 + -1) {
        *piVar8 = 0;
        piVar8 = piVar8 + 1;
      }
      local_48[2] = *param_5;
      local_38 = -(uint)(param_5[1] != 0) & 700;
      local_34 = param_5[2] != 0;
      local_32 = param_5[3] != 0;
      local_33 = param_5[4] != 0;
      local_48[3] = local_48[2];
      FUN_0041cef0(local_48,param_5[5] & (param_5[5] < 0) - 1);
      pcVar9 = (char *)param_5[6];
      if ((pcVar9 == (char *)0x0) || (iVar12 = FUN_00406cf0(pcVar9), 0x1f < iVar12)) {
        pcVar9 = &DAT_02faaf0c;
      }
      uVar5 = 0xffffffff;
      do {
        pcVar10 = pcVar9;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar10 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      pcVar10 = pcVar10 + -uVar5;
LAB_0041473f:
      ppvVar11 = local_2c;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *ppvVar11 = *(void **)pcVar10;
        pcVar10 = pcVar10 + 4;
        ppvVar11 = ppvVar11 + 1;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(char *)ppvVar11 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        ppvVar11 = (void **)((int)ppvVar11 + 1);
      }
    }
    else {
      pcVar4 = (code *)(**(code **)(iVar2 + 0x2c))(6);
      (*pcVar4)(param_1,param_3,&stack0xffffff98);
      piVar8 = local_48;
      iVar12 = 0x3c;
      h = GetStockObject(0x11);
      GetObjectA(h,iVar12,piVar8);
      switch(param_4) {
      case 0:
        local_48[2] = (int)param_5 % 0xe10;
        local_48[3] = local_48[2];
        if (local_48[2] < 0) {
          local_48[2] = local_48[2] + 0xe10;
          local_48[3] = local_48[2];
        }
        break;
      case 1:
        local_38 = -(uint)(param_5 != (int *)0x0) & 700;
        break;
      case 2:
        local_34 = param_5 != (int *)0x0;
        break;
      case 3:
        local_32 = param_5 != (int *)0x0;
        break;
      case 4:
        local_33 = param_5 != (int *)0x0;
        break;
      case 5:
        FUN_0041cef0(local_48,((int)param_5 < 0) - 1 & (uint)param_5);
        break;
      case 6:
        if (param_5 == (int *)0x0) {
          param_5 = (int *)&DAT_02fe8208;
        }
        uVar5 = 0xffffffff;
        piVar8 = param_5;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          iVar12 = *piVar8;
          piVar8 = (int *)((int)piVar8 + 1);
        } while ((char)iVar12 != '\0');
        if (((int)(~uVar5 - 1) < 1) || (0x1f < (int)(~uVar5 - 1))) {
          param_5 = (int *)&DAT_02faaf0c;
        }
        uVar5 = 0xffffffff;
        do {
          piVar8 = param_5;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          piVar8 = (int *)((int)param_5 + 1);
          iVar12 = *param_5;
          param_5 = piVar8;
        } while ((char)iVar12 != '\0');
        uVar5 = ~uVar5;
        pcVar10 = (char *)((int)piVar8 - uVar5);
        goto LAB_0041473f;
      }
    }
    break;
  case 0x3f6:
  case 0x3f7:
  case 0x3f9:
  }
  pcVar4 = (code *)(**(code **)(iVar2 + 0x2c))(4);
  (*pcVar4)(param_1,param_3,&stack0xffffff98,0);
  uStack_18 = 0xffffffff;
  FUN_004064a0();
  ExceptionList = local_2c[3];
  return;
}

