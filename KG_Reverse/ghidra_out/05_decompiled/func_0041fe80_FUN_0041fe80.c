// Function: FUN_0041fe80
// Entry:    0041fe80
// Size:     1124 bytes
// Conv:     unknown
// Signature: undefined FUN_0041fe80(void)
// Decompiled by Ghidra 12.1.2


HMENU FUN_0041fe80(HMENU param_1,int *param_2,int *param_3,int param_4,int param_5,int param_6)

{
  LPCSTR lpNewItem;
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined *lpNewItem_00;
  LPCSTR lpNewItem_01;
  int iVar4;
  int iVar5;
  HMENU hMenu;
  int iVar6;
  int iVar7;
  uint uFlags;
  uint local_2c;
  undefined4 *local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049f268;
  local_c = ExceptionList;
  iVar2 = *param_2;
  ExceptionList = &local_c;
  *param_2 = iVar2 + 0x18;
  iVar4 = FUN_00406cf0(iVar2 + 0x18);
  iVar2 = *param_2;
  *param_2 = iVar2 + iVar4;
  iVar4 = FUN_00406cf0(iVar2 + iVar4);
  iVar4 = *param_2 + iVar4;
  *param_2 = iVar4;
  lpNewItem_01 = DAT_02fe8830;
  iVar2 = *(int *)(iVar4 + 4);
  uVar3 = *(uint *)(iVar4 + 8);
  lpNewItem = (LPCSTR)(iVar4 + 0xc);
  *param_2 = (int)lpNewItem;
  iVar4 = FUN_00406cf0(lpNewItem);
  local_24 = (undefined4 *)(*param_2 + iVar4 + 4);
  *param_2 = (int)local_24;
  if (param_4 == 0) {
    if (param_1 == (HMENU)0x0) {
      local_24 = local_24 + 1;
    }
    *local_24 = 0;
  }
  *param_2 = *param_2 + 0x14;
  *param_3 = *param_3 + -1;
  lpNewItem_00 = PTR_DAT_02fd8088;
  DAT_02fe8830 = DAT_02fe8830 + 1;
  local_4 = 0;
  if (((param_4 == 0) && (param_1 != (HMENU)0x0)) && ((uVar3 & 1) != 0)) {
    iVar4 = *param_3;
    while (0 < iVar4) {
      iVar4 = *param_2;
      iVar5 = FUN_00406cf0(iVar4 + 0x18);
      iVar5 = iVar4 + 0x18 + iVar5;
      iVar4 = FUN_00406cf0(iVar5);
      iVar5 = iVar5 + iVar4;
      if (*(int *)(iVar5 + 4) <= iVar2) break;
      iVar4 = FUN_00406cf0(iVar5 + 0xc);
      puVar1 = (undefined4 *)(iVar5 + 0x10 + iVar4);
      *puVar1 = 0;
      *param_2 = (int)(puVar1 + 5);
      *param_3 = *param_3 + -1;
      DAT_02fe8830 = DAT_02fe8830 + 1;
      iVar4 = *param_3;
    }
  }
  else {
    local_2c = 0x10;
    if ((param_4 == 0) && ((uVar3 & 2) != 0)) {
      local_2c = 0x11;
    }
    hMenu = CreatePopupMenu();
    if (param_4 == 0) {
      *local_24 = hMenu;
    }
    iVar4 = *param_3;
    while (0 < iVar4) {
      iVar4 = *param_2;
      iVar6 = FUN_00406cf0(iVar4 + 0x18);
      iVar6 = iVar4 + 0x18 + iVar6;
      iVar5 = FUN_00406cf0(iVar6);
      iVar4 = *(int *)(iVar6 + iVar5);
      iVar6 = iVar6 + iVar5;
      iVar5 = *(int *)(iVar6 + 4);
      uVar3 = *(uint *)(iVar6 + 8);
      FUN_00493313(iVar6 + 0xc);
      iVar7 = FUN_0041fe60(iVar4);
      if (iVar7 != 0) {
        FUN_00493566(&DAT_02fb020c);
        FUN_00493566(iVar7);
      }
      iVar7 = FUN_00406cf0(iVar6 + 0xc);
      puVar1 = (undefined4 *)(iVar6 + 0x10 + iVar7);
      if (param_4 == 0) {
        if (param_1 == (HMENU)0x0) {
          puVar1[1] = 0;
        }
        else {
          *puVar1 = 0;
        }
      }
      if (*param_3 < 2) {
        iVar6 = -1;
      }
      else {
        iVar6 = FUN_00406cf0(puVar1 + 0xb);
        iVar6 = (int)(puVar1 + 0xb) + iVar6;
        iVar7 = FUN_00406cf0(iVar6);
        iVar6 = *(int *)(iVar6 + iVar7 + 4);
      }
      if (iVar5 <= iVar2) {
        if (param_1 == (HMENU)0x0) {
          local_4 = 0xffffffff;
          FUN_004931d6();
          ExceptionList = local_c;
          return hMenu;
        }
        AppendMenuA(param_1,local_2c,(UINT_PTR)hMenu,lpNewItem);
        if (param_6 != 0) {
          ModifyMenuA(param_1,(UINT)hMenu,local_2c | 0x100,(UINT_PTR)hMenu,lpNewItem_01);
        }
        goto LAB_0041ffbd;
      }
      if ((iVar6 == -1) || (iVar6 <= iVar5)) {
        if ((param_4 == 1) || ((uVar3 & 1) == 0)) {
          iVar5 = FUN_00482dc4(lpNewItem_00,&DAT_02fb0208);
          if (iVar5 == 0) {
            AppendMenuA(hMenu,(-(uint)(param_6 != 0) & 0x100) + 0x800,(UINT_PTR)DAT_02fe8830,
                        (LPCSTR)(-(uint)(param_6 != 0) & (uint)DAT_02fe8830));
          }
          else {
            uFlags = 0;
            if ((uVar3 & 4) != 0) {
              uFlags = 8;
            }
            if ((param_4 == 0) && ((uVar3 & 2) != 0)) {
              uFlags = uFlags | 1;
            }
            AppendMenuA(hMenu,uFlags,(UINT_PTR)DAT_02fe8830,lpNewItem_00);
            if (param_6 != 0) {
              ModifyMenuA(hMenu,(UINT)DAT_02fe8830,uFlags | 0x100,(UINT_PTR)DAT_02fe8830,
                          DAT_02fe8830);
            }
            if ((param_5 != 0) && (0 < iVar4)) {
              FUN_004065a0(DAT_02fe8830);
              FUN_004065a0(iVar4);
            }
          }
        }
        *param_2 = (int)(puVar1 + 5);
        *param_3 = *param_3 + -1;
        DAT_02fe8830 = DAT_02fe8830 + 1;
      }
      else {
        FUN_0041fe80(hMenu,param_2,param_3,param_4,param_5,param_6);
      }
      iVar4 = *param_3;
    }
    AppendMenuA(param_1,local_2c,(UINT_PTR)hMenu,lpNewItem);
    if (param_6 != 0) {
      ModifyMenuA(param_1,(UINT)hMenu,local_2c | 0x100,(UINT_PTR)hMenu,lpNewItem_01);
    }
    if (param_1 == (HMENU)0x0) {
      local_4 = 0xffffffff;
      FUN_004931d6();
      ExceptionList = local_c;
      return hMenu;
    }
  }
LAB_0041ffbd:
  local_4 = 0xffffffff;
  FUN_004931d6();
  ExceptionList = local_c;
  return (HMENU)0x0;
}

