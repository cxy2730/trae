// Function: FUN_00408d90
// Entry:    00408d90
// Size:     864 bytes
// Conv:     unknown
// Signature: undefined FUN_00408d90(void)
// Decompiled by Ghidra 12.1.2


void FUN_00408d90(int param_1,int param_2,int param_3,int *param_4,RECT *param_5,int param_6,
                 undefined4 param_7)

{
  int iVar1;
  int iVar2;
  HRGN pHVar3;
  BOOL BVar4;
  int iVar5;
  int iVar6;
  int x1;
  int xLeft;
  undefined8 local_54;
  LONG local_4c;
  LONG local_48;
  RECT local_44;
  tagRECT local_34;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049df30;
  local_c = ExceptionList;
  local_20 = 0;
  local_24 = 0;
  local_14 = 0;
  local_10 = 0;
  local_1c = 0;
  local_18 = 0;
  if (param_3 == 0) {
    return;
  }
  ExceptionList = &local_c;
  iVar1 = FUN_004226d0(param_2,param_3,&local_24,param_7);
  if (iVar1 != 1) {
    ExceptionList = local_c;
    return;
  }
  x1 = *param_4;
  iVar1 = param_4[1];
  iVar6 = param_4[2] - x1;
  iVar5 = param_4[3] - iVar1;
  if (param_1 == 0) {
    FUN_00422b10(&local_24,x1,iVar1,0xffffffff,0xffffffff,&DAT_00cc0020);
    if (param_6 == 0) goto LAB_004090d3;
    local_4 = 0;
    pHVar3 = CreateRectRgn(x1,iVar1,local_1c + x1,local_18 + iVar1);
    FUN_00499e1d(pHVar3);
    CombineRgn(*(HRGN *)(param_6 + 4),*(HRGN *)(param_6 + 4),(HRGN)0x0,4);
    local_4 = 1;
  }
  else if (param_1 == 1) {
    iVar2 = local_1c;
    if (iVar1 < iVar1 + iVar5) {
      do {
        xLeft = x1;
        if (x1 < x1 + iVar6) {
          do {
            SetRect(&local_34,xLeft,iVar1,iVar2 + xLeft,local_18 + iVar1);
            IntersectRect((LPRECT)&local_54,&local_34,param_5);
            local_44.top = local_54._4_4_;
            local_44.left = (LONG)local_54;
            local_44.right = local_4c;
            local_44.bottom = local_48;
            BVar4 = IsRectEmpty(&local_44);
            if (BVar4 == 0) {
              FUN_00422b10(&local_24,xLeft,iVar1,0xffffffff,0xffffffff,&DAT_00cc0020);
            }
            x1 = *param_4;
            xLeft = xLeft + local_1c;
            iVar2 = local_1c;
          } while (xLeft < x1 + iVar6);
        }
        iVar1 = iVar1 + local_18;
      } while (iVar1 < param_4[1] + iVar5);
    }
    if (param_6 == 0) goto LAB_004090d3;
  }
  else {
    if (param_1 != 2) goto LAB_004090d3;
    iVar2 = *(int *)(param_3 + 4);
    param_2 = *(int *)(param_3 + 8);
    if (iVar2 <= iVar6) {
      x1 = x1 + (iVar6 - iVar2) / 2;
      iVar6 = iVar2;
    }
    if (param_2 <= iVar5) {
      iVar1 = iVar1 + (iVar5 - param_2) / 2;
      iVar5 = param_2;
    }
    if ((iVar6 < iVar2) || (iVar5 < param_2)) {
      local_54 = (double)param_2;
      iVar2 = __ftol();
      param_2 = __ftol();
      x1 = x1 + (iVar6 - iVar2) / 2;
      iVar1 = iVar1 + (iVar5 - param_2) / 2;
    }
    FUN_00422b10(&local_24,x1,iVar1,iVar2,param_2,&DAT_00cc0020);
    if (param_6 == 0) goto LAB_004090d3;
    local_4 = 2;
    pHVar3 = CreateRectRgn(x1,iVar1,iVar2 + x1,param_2 + iVar1);
    FUN_00499e1d(pHVar3);
    CombineRgn(*(HRGN *)(param_6 + 4),*(HRGN *)(param_6 + 4),(HRGN)0x0,4);
    local_4 = 3;
  }
  FUN_00499e74();
LAB_004090d3:
  FUN_00422eb0(&local_24);
  ExceptionList = local_c;
  return;
}

