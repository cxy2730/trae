// Function: FUN_00418410
// Entry:    00418410
// Size:     1156 bytes
// Conv:     unknown
// Signature: undefined FUN_00418410(void)
// Decompiled by Ghidra 12.1.2


undefined * __thiscall FUN_00418410(int param_1,int param_2,RECT *param_3)

{
  HRGN pHVar1;
  int iVar2;
  BOOL BVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int y1;
  int iVar7;
  HBRUSH hbr;
  int local_74;
  double local_6c;
  LONG local_64;
  LONG local_60;
  undefined8 local_5c;
  LONG local_54;
  LONG local_50;
  undefined **local_4c;
  HRGN local_48;
  tagRECT local_44;
  tagRECT local_34;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0049ece8;
  local_c = ExceptionList;
  iVar7 = 0;
  local_48 = (HRGN)0x0;
  local_4c = &PTR_LAB_02f9598c;
  local_4 = 0;
  ExceptionList = &local_c;
  pHVar1 = CreateRectRgn(param_3->left,param_3->top,param_3->right,param_3->bottom);
  FUN_00499e1d(pHVar1);
  iVar2 = *(int *)(param_1 + 0x5c);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0xec) == 0) {
      if (iVar2 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined4 *)(param_1 + 0x54);
      }
      uVar6 = FUN_004225f0(uVar6,iVar2);
      *(undefined4 *)(param_1 + 0xec) = uVar6;
    }
    local_20 = 0;
    local_24 = 0;
    local_14 = 0;
    local_10 = 0;
    local_1c = 0;
    local_18 = 0;
    if (*(int *)(param_1 + 0xec) != 0) {
      uVar6 = FUN_00406fe0(*(undefined4 *)(param_1 + 0x48));
      iVar2 = FUN_004226d0(param_2,*(undefined4 *)(param_1 + 0xec),&local_24,uVar6);
      if (iVar2 == 1) {
        GetClientRect(*(HWND *)(param_1 + 0x1c),&local_44);
        local_74 = local_44.bottom - local_44.top;
        iVar2 = local_44.right - local_44.left;
        y1 = 0;
        switch(*(undefined4 *)(param_1 + 0x60)) {
        case 0:
          FUN_00422b10(&local_24,0,0,0xffffffff,0xffffffff,&DAT_00cc0020);
          local_5c._4_4_ = 0;
          local_5c._0_4_ = &PTR_LAB_02f9598c;
          local_4._0_1_ = 1;
          pHVar1 = CreateRectRgn(0,0,local_1c,local_18);
          FUN_00499e1d(pHVar1);
          CombineRgn(local_48,(HRGN)(-(uint)(&stack0x00000000 != (undefined1 *)0x4c) &
                                    (uint)local_48),
                     (HRGN)(-(uint)(&stack0x00000000 != (undefined1 *)0x5c) & local_5c._4_4_),4);
          local_5c = (double)CONCAT44(local_5c._4_4_,&PTR_LAB_02f95998);
          local_4._0_1_ = 2;
          FUN_00499e74();
          local_4 = (uint)local_4._1_3_ << 8;
          break;
        case 1:
          iVar7 = local_1c;
          if (0 < local_74) {
            do {
              iVar4 = 0;
              if (0 < iVar2) {
                do {
                  SetRect(&local_34,iVar4,y1,iVar7 + iVar4,local_18 + y1);
                  IntersectRect((LPRECT)&local_5c,&local_34,param_3);
                  local_6c = local_5c;
                  local_64 = local_54;
                  local_60 = local_50;
                  BVar3 = IsRectEmpty((RECT *)&local_6c);
                  if (BVar3 == 0) {
                    FUN_00422b10(&local_24,iVar4,y1,0xffffffff,0xffffffff,&DAT_00cc0020);
                  }
                  iVar4 = iVar4 + local_1c;
                  iVar7 = local_1c;
                } while (iVar4 < iVar2);
              }
              y1 = y1 + local_18;
            } while (y1 < local_74);
          }
          FUN_00499e74();
          break;
        case 2:
          iVar4 = *(int *)(*(int *)(param_1 + 0xec) + 4);
          local_6c = (double)CONCAT44(local_6c._4_4_,iVar4);
          iVar5 = *(int *)(*(int *)(param_1 + 0xec) + 8);
          local_5c = (double)CONCAT44(local_5c._4_4_,iVar5);
          if (iVar4 <= iVar2) {
            iVar7 = (iVar2 - iVar4) / 2;
            iVar2 = iVar4;
          }
          if (iVar5 <= local_74) {
            y1 = (local_74 - iVar5) / 2;
            local_74 = iVar5;
          }
          if ((iVar2 < iVar4) || (local_74 < iVar5)) {
            local_6c = (double)iVar5;
            local_5c = (double)local_74 / local_6c;
            iVar4 = __ftol();
            iVar5 = __ftol();
            iVar7 = iVar7 + (iVar2 - iVar4) / 2;
            y1 = y1 + (local_74 - iVar5) / 2;
          }
          FUN_00422b10(&local_24,iVar7,y1,iVar4,iVar5,&DAT_00cc0020);
          local_5c._4_4_ = 0;
          local_5c._0_4_ = &PTR_LAB_02f9598c;
          local_4._0_1_ = 3;
          pHVar1 = CreateRectRgn(iVar7,y1,iVar4 + iVar7,iVar5 + y1);
          FUN_00499e1d(pHVar1);
          CombineRgn(local_48,(HRGN)(-(uint)(&stack0x00000000 != (undefined1 *)0x4c) &
                                    (uint)local_48),
                     (HRGN)(-(uint)(&stack0x00000000 != (undefined1 *)0x5c) & local_5c._4_4_),4);
          local_5c = (double)CONCAT44(local_5c._4_4_,&PTR_LAB_02f95998);
          local_4._0_1_ = 4;
          FUN_00499e74();
          local_4 = (uint)local_4._1_3_ << 8;
          break;
        case 3:
          FUN_00422b10(&local_24,0,0,iVar2,local_74,&DAT_00cc0020);
          FUN_00499e74();
        }
        FUN_00422eb0(&local_24);
      }
    }
  }
  hbr = (HBRUSH)0x0;
  if ((&stack0x00000000 != (undefined1 *)0x4c) && (local_48 != (HRGN)0x0)) {
    uVar6 = FUN_00406fe0(*(undefined4 *)(param_1 + 0x48));
    iVar2 = FUN_00499eda(uVar6);
    if (iVar2 != 0) {
      hbr = *(HBRUSH *)(iVar2 + 4);
    }
    FillRgn(*(HDC *)(param_2 + 4),
            (HRGN)(-(uint)(&stack0x00000000 != (undefined1 *)0x4c) & (uint)local_48),hbr);
    local_5c = (double)CONCAT44(local_5c._4_4_,&PTR_LAB_02f95998);
    local_4 = CONCAT31(local_4._1_3_,5);
    FUN_00499e74();
  }
  local_4c = &PTR_LAB_02f95998;
  local_4 = 6;
  FUN_00499e74();
  ExceptionList = local_c;
  return &DAT_01335437;
}

