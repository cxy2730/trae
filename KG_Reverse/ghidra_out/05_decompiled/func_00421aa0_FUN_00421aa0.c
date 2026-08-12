// Function: FUN_00421aa0
// Entry:    00421aa0
// Size:     556 bytes
// Conv:     unknown
// Signature: undefined FUN_00421aa0(void)
// Decompiled by Ghidra 12.1.2


undefined4
FUN_00421aa0(undefined4 param_1,int *param_2,LONG *param_3,int param_4,undefined4 param_5,
            int param_6,undefined4 param_7)

{
  int dx;
  int dy;
  BOOL BVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_68;
  int local_64;
  undefined4 local_5c;
  tagRECT local_50;
  tagRECT local_40;
  RECT local_30;
  LONG local_20;
  LONG local_1c;
  LONG local_18;
  LONG local_14;
  int local_8;
  int local_4;
  
  if (((0 < param_4) && (param_4 < 9)) && (1 < param_6)) {
    dx = *param_2;
    dy = param_2[1];
    local_8 = param_2[2];
    iVar3 = local_8 - dx;
    local_4 = param_2[3];
    if ((0 < iVar3) && (iVar5 = local_4 - dy, 0 < iVar5)) {
      if (param_3 != (LONG *)0x0) {
        local_30.left = *param_3;
        local_30.top = param_3[1];
        local_30.right = param_3[2];
        local_30.bottom = param_3[3];
      }
      local_5c = 1;
      local_64 = 0;
      if (0 < iVar5) {
        do {
          local_68 = 0x32;
          if (iVar5 - local_64 < 0x33) {
            local_68 = iVar5 - local_64;
          }
          if (0 < iVar3) {
            iVar2 = 0;
            do {
              iVar4 = iVar3 - iVar2;
              if (0x32 < iVar4) {
                iVar4 = 0x32;
              }
              iVar4 = iVar4 + iVar2;
              SetRect(&local_50,iVar2,local_64,iVar4,local_68 + local_64);
              OffsetRect(&local_50,dx,dy);
              if (param_3 != (LONG *)0x0) {
                IntersectRect(&local_50,&local_50,&local_30);
              }
              BVar1 = IsRectEmpty(&local_50);
              if (BVar1 == 0) {
                local_40.top = local_50.top;
                local_40.left = local_50.left;
                local_40.right = local_50.right;
                local_40.bottom = local_50.bottom;
                OffsetRect(&local_40,-dx,-dy);
                local_18 = local_40.right;
                local_20 = local_40.left;
                local_1c = local_40.top;
                local_14 = local_40.bottom;
                iVar2 = FUN_004210b0(param_4,local_8 - dx,local_4 - dy,param_5,param_6,&local_20);
                if (iVar2 != 1) {
                  local_5c = 0;
                  goto LAB_00421caa;
                }
                FUN_00421960(param_1,local_50.left,local_50.top,param_7);
              }
              iVar2 = iVar4;
            } while (iVar4 < iVar3);
          }
          local_64 = local_64 + local_68;
        } while (local_64 < iVar5);
      }
LAB_00421caa:
      FUN_00420c70();
      return local_5c;
    }
  }
  return 0;
}

