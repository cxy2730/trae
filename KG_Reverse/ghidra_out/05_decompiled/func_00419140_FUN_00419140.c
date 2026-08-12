// Function: FUN_00419140
// Entry:    00419140
// Size:     1319 bytes
// Conv:     unknown
// Signature: undefined FUN_00419140(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_00419140(int param_1,HWND param_2,int param_3,int param_4,HWND param_5)

{
  BOOL BVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  HWND pHVar6;
  int *piVar7;
  uint uVar8;
  HWND pHVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  int local_94;
  uint local_90;
  uint local_8c;
  int local_88;
  uint local_84;
  int local_80;
  HWND local_7c;
  int local_78;
  undefined **local_74;
  uint local_6c;
  uint local_64;
  undefined **local_60;
  uint local_58;
  uint local_50;
  undefined **local_4c;
  int local_44;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049ed38;
  local_c = ExceptionList;
  if (param_2 == (HWND)0x0) {
    return;
  }
  ExceptionList = &local_c;
  local_78 = param_1;
  BVar1 = IsChild(*(HWND *)(param_1 + 0x1c),param_2);
  if (BVar1 == 0) {
    ExceptionList = local_c;
    return;
  }
  FUN_00413d70(0x3e9,0,0);
  iVar2 = FUN_0040ec30(*(undefined4 *)(param_1 + 0xdc),&local_94,0);
  if (iVar2 == 0) {
    ExceptionList = local_c;
    return;
  }
  iVar2 = FUN_0040f4c0(param_2,1);
  if (iVar2 == -1) {
    ExceptionList = local_c;
    return;
  }
  uVar12 = 0;
  local_80 = iVar2;
  puVar3 = (undefined4 *)FUN_0040e730(iVar2,0);
  iVar4 = FUN_00413d70(0x3ea,*puVar3,uVar12);
  if (iVar4 == 0) {
    ExceptionList = local_c;
    return;
  }
  uVar10 = (uint)((*(uint *)(iVar4 + 0x14) & 0x6000) != 0);
  local_84 = uVar10;
  local_7c = GetParent(param_2);
  uVar12 = FUN_0040e730(iVar2,0);
  if ((*(uint *)(iVar4 + 0x14) & 0x4000) == 0) {
    piVar7 = (int *)FUN_004196a0(uVar12);
    iVar4 = (int)piVar7 + *piVar7 + 4;
    iVar5 = FUN_00406cf0(iVar4);
    local_88 = *(int *)(iVar5 + 8 + iVar4);
  }
  else {
    local_88 = 0;
  }
  FUN_004062a0();
  local_74 = &PTR_FUN_02f959a4;
  local_4 = 0;
  FUN_004062a0();
  local_4c = &PTR_FUN_02f959a4;
  local_4._0_1_ = 1;
  FUN_004062a0();
  local_60 = &PTR_FUN_02f959a4;
  local_4 = CONCAT31(local_4._1_3_,2);
  uVar11 = *(uint *)(local_94 + 0x18);
  while (uVar11 = uVar11 - 1, local_8c = uVar11, 0 < (int)uVar11) {
    puVar3 = (undefined4 *)FUN_0040e730(uVar11,0);
    iVar4 = FUN_0040ee10(uVar11);
    iVar2 = local_80;
    if (iVar4 != 1) {
      iVar4 = FUN_00413d70(0x3ea,*puVar3,0);
      iVar2 = FUN_00406cf0(puVar3 + 6);
      iVar2 = (int)(puVar3 + 6) + iVar2;
      iVar5 = FUN_00406cf0(iVar2);
      uVar8 = *(uint *)(iVar2 + iVar5);
      piVar7 = (int *)FUN_004196a0(puVar3);
      iVar2 = (int)piVar7 + *piVar7 + 4;
      iVar5 = FUN_00406cf0(iVar2);
      local_90 = *(uint *)(iVar5 + 4 + iVar2);
      uVar10 = local_84;
      iVar2 = local_80;
      uVar11 = local_8c;
      if (((((((iVar4 != 0) && (uVar8 != 0)) &&
             (BVar1 = IsWindow(*(HWND *)(uVar8 + 0x1c)), uVar10 = local_84, iVar2 = local_80,
             uVar11 = local_8c, BVar1 != 0)) &&
            ((BVar1 = IsWindowVisible(*(HWND *)(uVar8 + 0x1c)), uVar10 = local_84, iVar2 = local_80,
             uVar11 = local_8c, BVar1 == 1 &&
             (iVar5 = FUN_004975a7(), uVar10 = local_84, iVar2 = local_80, uVar11 = local_8c,
             iVar5 == 1)))) && (((*(uint *)(iVar4 + 0x14) & 0x18000) == 0 && ((local_90 & 4) != 0)))
           ) && ((param_4 == 0 ||
                 (((*(uint *)(iVar4 + 0x14) & 0x400) != 0 &&
                  (pHVar6 = GetParent(*(HWND *)(uVar8 + 0x1c)), uVar10 = local_84, iVar2 = local_80,
                  uVar11 = local_8c, pHVar6 == local_7c)))))) &&
         ((param_5 == (HWND)0x0 ||
          (BVar1 = IsChild(param_5,*(HWND *)(uVar8 + 0x1c)), uVar10 = local_84, iVar2 = local_80,
          uVar11 = local_8c, BVar1 != 0)))) {
        piVar7 = (int *)FUN_004196a0(puVar3);
        iVar2 = (int)piVar7 + *piVar7 + 4;
        iVar4 = FUN_00406cf0(iVar2);
        uVar10 = *(uint *)(iVar4 + 8 + iVar2);
        iVar2 = (local_64 >> 2) - 1;
        if (-1 < iVar2) {
          piVar7 = (int *)(local_6c + iVar2 * 4);
          do {
            if (*piVar7 <= (int)uVar10) break;
            iVar2 = iVar2 + -1;
            piVar7 = piVar7 + -1;
          } while (-1 < iVar2);
        }
        iVar2 = (iVar2 + 1) * 4;
        local_90 = local_8c;
        FUN_00406930(iVar2,&local_90,4);
        local_90 = uVar8;
        FUN_00406930(iVar2,&local_90,4);
        local_90 = uVar10;
        FUN_00406930(iVar2,&local_90,4);
        uVar10 = local_84;
        iVar2 = local_80;
        uVar11 = local_8c;
      }
    }
  }
  uVar11 = local_50 >> 2;
  if (uVar11 == 0) goto LAB_004195f0;
  if (uVar10 == 1) {
    piVar7 = (int *)(-(uint)(local_64 != 0) & local_6c);
    if (param_3 == 1) {
      uVar10 = 0;
      if (uVar11 != 0) {
        do {
          if (local_88 <= *piVar7) goto LAB_0041953a;
          uVar10 = uVar10 + 1;
          piVar7 = piVar7 + 1;
        } while ((int)uVar10 < (int)uVar11);
      }
    }
    else {
      uVar10 = uVar11 - 1;
      if (-1 < (int)uVar10) {
        piVar7 = piVar7 + uVar10;
        do {
          if (*piVar7 < local_88) goto LAB_0041953a;
          uVar10 = uVar10 - 1;
          piVar7 = piVar7 + -1;
        } while (-1 < (int)uVar10);
      }
    }
    goto LAB_004195f0;
  }
  uVar8 = -(uint)(local_50 != 0) & local_58;
  uVar10 = FUN_00406c00(uVar8,uVar11,iVar2);
  if ((uVar10 == 0xffffffff) && (uVar10 = FUN_0041c550(uVar8,uVar11,iVar2), uVar10 == 0xffffffff)) {
    if (param_3 != 1) {
LAB_00419537:
      uVar10 = uVar11 - 1;
      goto LAB_0041953a;
    }
    uVar10 = 0;
  }
  else {
    if (param_3 == 1) {
      if ((*(int *)(uVar8 + uVar10 * 4) == iVar2) && (uVar10 = uVar10 + 1, uVar10 == uVar11)) {
        uVar10 = 0;
        goto LAB_00419543;
      }
    }
    else {
      uVar10 = uVar10 - 1;
      if ((int)uVar10 < 0) goto LAB_00419537;
    }
LAB_0041953a:
    if (uVar10 == 0xffffffff) goto LAB_004195f0;
  }
LAB_00419543:
  iVar2 = *(int *)(local_44 + uVar10 * 4);
  pHVar6 = *(HWND *)(iVar2 + 0x1c);
  if (pHVar6 != param_2) {
    if (param_4 == 1) {
      pHVar9 = GetParent(pHVar6);
      FUN_0040f680(pHVar9);
      SendMessageA(*(HWND *)(iVar2 + 0x1c),0xf1,1,0);
      uVar12 = *(undefined4 *)(local_78 + 0xdc);
      local_34 = FUN_0040e780(*(undefined4 *)(local_58 + uVar10 * 4));
      local_30 = 0;
      local_2c = 0;
      local_14 = 0;
      local_10 = 0;
      local_38 = uVar12;
      FUN_00413d70(0x7d8,&local_38,0);
    }
    BVar1 = IsWindow(pHVar6);
    if (BVar1 != 0) {
      FUN_004975e9();
    }
  }
LAB_004195f0:
  local_4._0_1_ = 1;
  local_60 = &PTR_FUN_02f958c0;
  FUN_004064a0();
  local_4 = (uint)local_4._1_3_ << 8;
  local_4c = &PTR_FUN_02f958c0;
  FUN_004064a0();
  local_4 = 0xffffffff;
  local_74 = &PTR_FUN_02f958c0;
  FUN_004064a0();
  ExceptionList = local_c;
  return;
}

