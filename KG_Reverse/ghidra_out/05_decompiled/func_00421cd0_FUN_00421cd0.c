// Function: FUN_00421cd0
// Entry:    00421cd0
// Size:     1420 bytes
// Conv:     unknown
// Signature: undefined FUN_00421cd0(void)
// Decompiled by Ghidra 12.1.2


undefined4
FUN_00421cd0(int param_1,int *param_2,int param_3,undefined4 param_4,int *param_5,int param_6,
            int param_7,uint param_8,undefined4 param_9)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  HRGN hrgn;
  HRGN pHVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int local_94;
  undefined4 local_90;
  undefined **local_8c;
  undefined4 local_88;
  tagRECT local_84;
  tagRECT local_70;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  undefined **local_4c;
  POINT local_38;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049f414;
  local_c = ExceptionList;
  if (((1 < param_7) && (0 < *param_5)) && (iVar8 = param_5[1], 0 < iVar8)) {
    iVar7 = *param_5;
    if (param_3 == 1) {
      local_70.left = *param_2;
      local_70.top = param_2[1];
      local_70.right = param_2[2];
      local_70.bottom = param_2[3];
      local_84.left = *param_2;
      local_84.top = param_2[1];
      local_84.right = param_2[2];
      local_84.bottom = param_2[3];
      ExceptionList = &local_c;
      InflateRect(&local_84,iVar7,iVar8);
    }
    else {
      local_84.left = *param_2;
      local_84.top = param_2[1];
      local_84.right = param_2[2];
      local_84.bottom = param_2[3];
      iVar2 = (local_84.right - local_84.left) / 2;
      if (iVar2 < iVar7) {
        iVar7 = iVar2;
      }
      iVar2 = (local_84.bottom - local_84.top) / 2;
      if (iVar2 < iVar8) {
        iVar8 = iVar2;
      }
      local_70.left = *param_2;
      local_70.top = param_2[1];
      local_70.right = param_2[2];
      local_70.bottom = param_2[3];
      ExceptionList = &local_c;
      InflateRect(&local_70,-iVar7,-iVar8);
    }
    if ((0 < iVar7) && (0 < iVar8)) {
      local_10 = (-(uint)(((int)param_8 / 1000 & 1U) != 0) & 0xfffffffc) + 2;
      if ((param_8 & 1) == 0) {
        local_90 = 0xffffffff;
        local_50 = -local_10;
      }
      else {
        local_90 = 1;
        local_50 = local_10;
      }
      local_94 = param_7;
      uVar9 = (int)param_8 / 100 & 1;
      if (uVar9 != 0) {
        local_94 = param_7 * 2 + -1;
      }
      FUN_004062a0();
      local_4 = 0;
      puVar3 = (undefined4 *)FUN_004062c0(local_94 * 4);
      if (puVar3 != (undefined4 *)0x0) {
        if (((int)param_8 / 10 & 1U) == 0) {
          FUN_00406c40(puVar3,param_6,param_7 * 4);
        }
        else if (-1 < param_7 + -1) {
          puVar4 = (undefined4 *)(param_6 + (param_7 + -1) * 4);
          puVar5 = puVar3;
          iVar8 = param_7;
          do {
            uVar1 = *puVar4;
            puVar4 = puVar4 + -1;
            *puVar5 = uVar1;
            puVar5 = puVar5 + 1;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        if ((uVar9 != 0) && (param_7 = param_7 + -1, 0 < param_7)) {
          puVar4 = puVar3 + local_94 + -1;
          puVar5 = puVar3;
          do {
            uVar1 = *puVar5;
            puVar5 = puVar5 + 1;
            *puVar4 = uVar1;
            puVar4 = puVar4 + -1;
            param_7 = param_7 + -1;
          } while (param_7 != 0);
        }
        local_5c = local_84.top;
        local_58 = local_84.right;
        local_60 = local_84.left;
        local_54 = local_70.top;
        iVar8 = FUN_00421aa0(param_1,&local_60,param_4,1,puVar3,local_94,param_9);
        if (iVar8 != 0) {
          local_5c = local_70.bottom;
          local_54 = local_84.bottom;
          iVar8 = FUN_00421aa0(param_1,&local_60,param_4,local_90,puVar3,local_94,param_9);
          if (iVar8 != 0) {
            hrgn = CreateRectRgn(0,0,0,0);
            iVar8 = GetClipRgn(*(HDC *)(param_1 + 4),hrgn);
            local_18 = local_84.left;
            local_30 = local_84.left;
            local_38.x = local_84.left;
            local_20 = local_70.left;
            local_28 = local_70.left;
            local_14 = local_84.top;
            local_38.y = local_84.top;
            local_2c = local_84.bottom;
            local_24 = local_70.bottom;
            local_1c = local_70.top;
            local_88 = 0;
            local_8c = &PTR_LAB_02f95ff4;
            local_4._0_1_ = 1;
            pHVar6 = CreatePolygonRgn(&local_38,5,2);
            FUN_00499e1d(pHVar6);
            FUN_00499a5b(&local_8c,1);
            local_60 = local_84.left;
            local_58 = local_70.left;
            local_5c = local_84.top;
            local_54 = local_84.bottom;
            iVar7 = FUN_00421aa0(param_1,&local_60,param_4,local_10,puVar3,local_94,param_9);
            if (iVar7 == 0) {
              local_8c = &PTR_LAB_02f95fe8;
              local_4 = CONCAT31(local_4._1_3_,2);
              FUN_00499e74();
            }
            else {
              local_18 = local_70.right;
              local_30 = local_70.right;
              local_38.x = local_70.right;
              local_20 = local_84.right;
              local_28 = local_84.right;
              local_24 = local_84.bottom;
              local_14 = local_70.top;
              local_38.y = local_70.top;
              local_1c = local_84.top;
              local_2c = local_70.bottom;
              if (iVar8 != 1) {
                FUN_0049989e(0);
              }
              else {
                SelectClipRgn(*(HDC *)(param_1 + 4),hrgn);
              }
              FUN_00499e74();
              pHVar6 = CreatePolygonRgn(&local_38,5,2);
              FUN_00499e1d(pHVar6);
              FUN_00499a5b(&local_8c,1);
              local_60 = local_70.right;
              local_58 = local_84.right;
              iVar7 = FUN_00421aa0(param_1,&local_60,param_4,local_50,puVar3,local_94,param_9);
              if (iVar7 != 0) {
                if (iVar8 != 1) {
                  FUN_0049989e(0);
                }
                else {
                  SelectClipRgn(*(HDC *)(param_1 + 4),hrgn);
                }
                DeleteObject(hrgn);
                local_8c = &PTR_LAB_02f95fe8;
                local_4 = CONCAT31(local_4._1_3_,4);
                FUN_00499e74();
                local_4 = 0xffffffff;
                local_4c = &PTR_FUN_02f95fdc;
                FUN_004064a0();
                ExceptionList = local_c;
                return 1;
              }
              local_8c = &PTR_LAB_02f95fe8;
              local_4 = CONCAT31(local_4._1_3_,3);
              FUN_00499e74();
            }
          }
        }
      }
      local_4 = 0xffffffff;
      local_4c = &PTR_FUN_02f95fdc;
      FUN_004064a0();
    }
  }
  ExceptionList = local_c;
  return 0;
}

