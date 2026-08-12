// Function: FUN_00477580
// Entry:    00477580
// Size:     1347 bytes
// Conv:     unknown
// Signature: undefined FUN_00477580(void)
// Decompiled by Ghidra 12.1.2


void FUN_00477580(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined *puVar7;
  int iVar8;
  undefined4 *puVar9;
  uint local_1c;
  int local_18;
  undefined4 *local_10;
  int *local_c;
  undefined *local_8;
  
  iVar1 = (int)param_2;
  local_1c = 0;
  if (0 < DAT_0300be54) {
    local_8 = (undefined *)((int)param_2 * 0x240);
    local_c = (int *)(&DAT_0300be44 + (int)param_2 * 8);
    piVar6 = &DAT_0300beac + (int)param_2 * 0x24;
    puVar7 = &DAT_0300b9d0 + (int)param_2 * 0x1f0;
    param_2 = &DAT_03012a80 + (int)param_2 * 0x240;
    local_10 = &DAT_0300be70;
    do {
      FUN_00477290(&DAT_030090b0 + ((int)DAT_0300bf98 >> 3));
      uVar4 = DAT_0300bf98 & 7;
      if (uVar4 != 0) {
        FUN_00476c40(uVar4);
      }
      DAT_0300bf98 = DAT_0300bf98 + piVar6[-0xd];
      FUN_00477ad0(&DAT_030090b0 + ((int)(DAT_0300bf98 + 0x27) >> 3));
      if (DAT_0300b9c4 == 0) {
        FUN_0047e000(puVar7,piVar6 + -0xd,DAT_030090a4 & local_1c,&DAT_0300be28);
      }
      else {
        FUN_0047dd70(puVar7,piVar6 + -0xd,*local_10,iVar1);
      }
      iVar8 = piVar6[-0xc] * 2;
      if (iVar8 - DAT_02fd36bc != 0 && DAT_02fd36bc <= iVar8) {
        iVar8 = DAT_02fd36bc;
      }
      local_18 = (&DAT_030128c4)[piVar6[1] + *piVar6];
      if (iVar8 < (int)(&DAT_030128c4)[piVar6[1] + *piVar6]) {
        local_18 = iVar8;
      }
      iVar2 = (&DAT_030128c0)[*piVar6];
      if (iVar8 < (int)(&DAT_030128c0)[*piVar6]) {
        iVar2 = iVar8;
      }
      FUN_0047d430(param_2,iVar2,piVar6[-6]);
      FUN_0047d430(&DAT_03012a80 + (int)local_8 + iVar2,local_18 - iVar2,piVar6[-5]);
      FUN_0047d430(&DAT_03012a80 + local_18 + (int)local_8,iVar8 - local_18,piVar6[-4]);
      iVar2 = FUN_00476c20();
      iVar2 = FUN_0047d940(&DAT_03012a80 + iVar8 + (int)local_8,DAT_02fd36bc - iVar8,
                           (piVar6[-0xd] + uVar4) - iVar2,piVar6[4]);
      iVar2 = iVar2 + iVar8;
      *local_c = iVar2;
      iVar8 = DAT_02fd36c0;
      if (piVar6[-8] == 2) {
        iVar8 = DAT_02fd36c4;
      }
      if (iVar8 <= iVar2) {
        iVar2 = iVar8;
      }
      if (iVar2 < 0x240) {
        puVar5 = &DAT_03012a80 + iVar2 + (int)local_8;
        for (uVar4 = 0x240U - iVar2 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
          *(undefined1 *)puVar5 = 0;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
        }
      }
      if (DAT_03012990 < DAT_03012988) {
        puVar5 = param_2;
        for (iVar8 = 0x240; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
      }
      puVar7 = puVar7 + 0xf8;
      local_10 = local_10 + 1;
      local_c = local_c + 1;
      local_1c = local_1c + 1;
      piVar6 = piVar6 + 0x12;
      local_8 = (undefined *)((int)local_8 + 0x480);
      param_2 = param_2 + 0x480;
    } while ((int)local_1c < DAT_0300be54);
  }
  local_1c = 0;
  if (0 < DAT_0300be54) {
    local_8 = &DAT_0300be44 + iVar1 * 8;
    param_2 = (int *)(&DAT_0300bdb8 + iVar1 * 0x38);
    puVar7 = &DAT_0300b9d0 + iVar1 * 0x1f0;
    puVar9 = &DAT_0300be78 + iVar1 * 0x24;
    puVar5 = &DAT_03012a80 + iVar1 * 0x240;
    do {
      FUN_0047d070(puVar5,local_8,puVar7,puVar9,param_2,DAT_030090a0);
      local_8 = local_8 + 4;
      local_1c = local_1c + 1;
      param_2 = (int *)((int)param_2 + 0x1c);
      puVar9 = puVar9 + 0x12;
      puVar7 = puVar7 + 0xf8;
      puVar5 = puVar5 + 0x480;
    } while ((int)local_1c < DAT_0300be54);
  }
  if (DAT_0300b9c0 != 0) {
    if (DAT_030090a4 == 0) {
      iVar8 = *(int *)(&DAT_0300be44 + iVar1 * 8);
      if (*(int *)(&DAT_0300be44 + iVar1 * 8) < *(int *)(&DAT_0300be48 + iVar1 * 8)) {
        iVar8 = *(int *)(&DAT_0300be48 + iVar1 * 8);
      }
    }
    else {
      iVar8 = (&DAT_030128c0)
              [*(int *)(&DAT_0300bdd8 + iVar1 * 0x38) +
               *(int *)(&DAT_0300bdd4 + iVar1 * 0x38) * 0x16];
    }
    FUN_0047cc60(&DAT_03012a80 + iVar1 * 0x240,iVar8);
  }
  if (DAT_030090a4 != 0) {
    if (DAT_0300b9c4 == 0) {
      FUN_0047ce20(&DAT_03012a80 + iVar1 * 0x240,&DAT_0300bac8 + iVar1 * 0x1f0,
                   &DAT_0300bdb8 + iVar1 * 0x38,&DAT_0300be28,
                   *(undefined4 *)(&DAT_0300be44 + iVar1 * 8),DAT_0300b9c0);
    }
    else {
      FUN_0047cc90(&DAT_03012a80 + iVar1 * 0x240,&DAT_0300bac8 + iVar1 * 0x1f0,
                   &DAT_0300bdb8 + iVar1 * 0x38,*(undefined4 *)(&DAT_0300be44 + iVar1 * 8));
    }
  }
  if (DAT_0300be64 != 0) {
    if (*(int *)(&DAT_0300be44 + iVar1 * 8) < *(int *)(&DAT_0300be48 + iVar1 * 8)) {
      *(int *)(&DAT_0300be44 + iVar1 * 8) = *(int *)(&DAT_0300be48 + iVar1 * 8);
    }
    else {
      *(int *)(&DAT_0300be48 + iVar1 * 8) = *(int *)(&DAT_0300be44 + iVar1 * 8);
    }
  }
  local_1c = 0;
  if (0 < DAT_0300be54) {
    piVar3 = &DAT_0300be90 + iVar1 * 0x24;
    param_2 = (int *)(&DAT_0300bdc4 + iVar1 * 0x38);
    piVar6 = (int *)(&DAT_0300be44 + iVar1 * 8);
    puVar5 = &DAT_03012a80 + iVar1 * 0x240;
    do {
      if (*param_2 != 0) {
        if (*piVar3 == 0) {
          iVar8 = (*piVar6 + 7) / 0x12;
          if (0x1f < iVar8) {
            iVar8 = 0x1f;
          }
        }
        else {
          iVar8 = 1;
        }
        FUN_0047cc00(puVar5,iVar8);
        iVar8 = iVar8 * 0x12 + 8;
        if (*piVar6 < iVar8) {
          *piVar6 = iVar8;
        }
      }
      param_2 = param_2 + 7;
      local_1c = local_1c + 1;
      piVar3 = piVar3 + 0x12;
      piVar6 = piVar6 + 1;
      puVar5 = puVar5 + 0x480;
    } while ((int)local_1c < DAT_0300be54);
  }
  (*(code *)PTR_FUN_02fd36d4)(param_1,iVar1);
  return;
}

