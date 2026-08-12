// Function: FUN_0041dcd0
// Entry:    0041dcd0
// Size:     495 bytes
// Conv:     unknown
// Signature: undefined FUN_0041dcd0(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_0041dcd0(int param_1,int param_2)

{
  LONG LVar1;
  BOOL BVar2;
  LONG LVar3;
  LONG LVar4;
  tagRECT local_50;
  tagRECT local_40;
  tagRECT local_30;
  RECT local_20;
  int local_c;
  int local_8;
  int local_4;
  
  GetWindowRect(*(HWND *)(param_1 + 0xa0),&local_30);
  GetWindowRect(*(HWND *)(param_2 + 0x1c),&local_40);
  LVar1 = local_40.left;
  local_8 = local_40.right;
  local_c = local_40.top;
  local_4 = local_40.bottom;
  if (local_30.right - local_30.left < local_40.right - local_40.left) {
    local_40.right = (local_30.right - local_30.left) + local_40.left;
  }
  if (local_30.bottom - local_30.top < local_40.bottom - local_40.top) {
    local_40.bottom = (local_30.bottom - local_30.top) + local_40.top;
  }
  IntersectRect(&local_50,&local_40,&local_30);
  local_20.top = local_50.top;
  local_20.right = local_50.right;
  local_20.left = local_50.left;
  local_20.bottom = local_50.bottom;
  BVar2 = EqualRect(&local_20,&local_40);
  if (BVar2 == 0) {
    GetWindowRect(*(HWND *)(param_1 + 0xdc),&local_50);
    LVar4 = local_30.top;
    if ((local_30.top <= local_40.top) && (LVar4 = local_40.top, local_30.bottom < local_40.bottom))
    {
      LVar4 = local_40.top + (local_30.bottom - local_40.bottom);
    }
    LVar3 = local_30.left;
    if ((local_30.left <= local_40.left) && (LVar3 = local_40.left, local_30.right < local_40.right)
       ) {
      LVar3 = local_40.left + (local_30.right - local_40.right);
    }
    local_40.top = LVar4 + (local_50.top - local_c);
    local_40.left = LVar3 + (local_50.left - LVar1);
    OffsetRect(&local_50,-(local_50.left - local_40.left),-(local_50.top - local_40.top));
    if (local_30.left < local_50.left) {
      OffsetRect(&local_50,-(local_50.left - local_30.left),0);
    }
    if (local_50.right < local_30.right) {
      OffsetRect(&local_50,local_30.right - local_50.right,0);
    }
    if (local_30.top < local_50.top) {
      OffsetRect(&local_50,0,-(local_50.top - local_30.top));
    }
    if (local_50.bottom < local_30.bottom) {
      OffsetRect(&local_50,0,local_30.bottom - local_50.bottom);
    }
    FUN_004999e3(&local_50);
    FUN_004974f0(local_50.left,local_50.top,local_50.right - local_50.left,
                 local_50.bottom - local_50.top,1);
  }
  return;
}

