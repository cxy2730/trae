// Function: FUN_00443fa0
// Entry:    00443fa0
// Size:     727 bytes
// Conv:     unknown
// Signature: undefined FUN_00443fa0(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_00443fa0(int param_1)

{
  byte bVar1;
  HWND pHVar2;
  int iVar3;
  LRESULT LVar4;
  undefined4 uVar5;
  byte *pbVar6;
  uint uVar7;
  BOOL BVar8;
  uint uVar9;
  int iVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint local_68;
  int local_64;
  int local_60;
  byte *local_5c;
  tagSIZE local_58;
  RECT local_50;
  tagRECT local_40;
  tagRECT local_30;
  HDC local_18;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004a0e90;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GetClientRect(*(HWND *)(param_1 + 0x1c),&local_30);
  pHVar2 = GetParent(*(HWND *)(param_1 + 0x1c));
  iVar3 = FUN_00494bb2(pHVar2);
  GetClientRect(*(HWND *)(iVar3 + 0x1c),&local_40);
  FUN_00499a1f(&local_30);
  pHVar2 = GetParent(*(HWND *)(param_1 + 0x1c));
  FUN_00494bb2(pHVar2);
  FUN_004999e3(&local_30);
  FUN_00499b75(param_1);
  local_4 = 0;
  LVar4 = SendMessageA(*(HWND *)(param_1 + 0x1c),0x31,0,0);
  uVar5 = FUN_00499e08(LVar4);
  uVar5 = FUN_00499471(uVar5);
  GetTextExtentPoint32A(local_18,&DAT_02fb2198,1,&local_58);
  FUN_00499471(uVar5);
  local_60 = 1;
  iVar3 = ((local_40.right + local_58.cx * -2) - local_40.left) / local_58.cx;
  if (0 < iVar3) {
    local_60 = iVar3;
  }
  local_5c = PTR_DAT_02fd8088;
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_0049557d(&local_5c);
  uVar9 = 0;
  pbVar6 = (byte *)0x0;
  local_68 = 0;
  local_64 = 1;
  pbVar11 = local_5c;
  pbVar12 = local_5c;
LAB_004440bc:
  while( true ) {
    for (; bVar1 = *pbVar12, bVar1 == 0xd; pbVar12 = pbVar12 + 1) {
    }
    if (bVar1 != 10) break;
    pbVar11 = pbVar12 + 1;
    local_64 = local_64 + 1;
    if ((int)local_68 <= (int)uVar9) {
      local_68 = uVar9;
    }
    uVar9 = 0;
    pbVar6 = (byte *)0x0;
    pbVar12 = pbVar11;
  }
  if (bVar1 != 0) goto code_r0x004440ed;
  if (uVar9 != 0) goto LAB_0044411a;
LAB_0044415f:
  iVar3 = (local_68 & 0xfffffff8) + 7;
  if (local_60 <= iVar3) {
    iVar3 = local_60;
  }
  local_50.left = *(uint *)(param_1 + 0x48);
  iVar3 = (iVar3 + 1) * local_58.cx + 5 + *(uint *)(param_1 + 0x48);
  local_50.top = *(uint *)(param_1 + 0x4c);
  if (iVar3 < *(int *)(param_1 + 0x50)) {
    iVar3 = *(int *)(param_1 + 0x50);
  }
  iVar10 = local_58.cy * local_64 + 8 + *(int *)(param_1 + 0x4c);
  if (iVar10 < *(int *)(param_1 + 0x54)) {
    iVar10 = *(int *)(param_1 + 0x54);
  }
  local_50.right = iVar3;
  if (local_40.right < iVar3) {
    local_50.right = local_40.right;
    local_50.left = local_50.left + (local_40.right - iVar3);
    local_50.left = (local_50.left < 0) - 1 & local_50.left;
  }
  local_50.bottom = iVar10;
  if (local_40.bottom < iVar10) {
    local_50.bottom = local_40.bottom;
    local_50.top = local_50.top + (local_40.bottom - iVar10);
    local_50.top = (local_50.top < 0) - 1 & local_50.top;
  }
  BVar8 = EqualRect(&local_50,&local_30);
  if (BVar8 == 0) {
    FUN_004974f0(local_50.left,local_50.top,local_50.right - local_50.left,
                 local_50.bottom - local_50.top,1);
  }
  local_4 = local_4 & 0xffffff00;
  FUN_004931d6();
  local_4 = 0xffffffff;
  FID_conflict__CClientDC();
  ExceptionList = local_c;
  return;
code_r0x004440ed:
  if (bVar1 == 0x20) {
    pbVar6 = pbVar12 + 1;
  }
  else if ((bVar1 & 0x80) != 0) {
    pbVar12 = pbVar12 + 1;
    uVar9 = uVar9 + 1;
  }
  pbVar12 = pbVar12 + 1;
  uVar9 = uVar9 + 1;
  if (((uVar9 == local_60 - 1U) && ((*pbVar12 & 0x80) != 0)) || (local_60 <= (int)uVar9)) {
LAB_0044411a:
    if (((bVar1 == 0) || (bVar1 == 0x20)) || (pbVar6 == (byte *)0x0)) {
      if ((int)local_68 <= (int)uVar9) {
        local_68 = uVar9;
      }
      uVar9 = 0;
      pbVar11 = pbVar12;
      if (*pbVar12 == 10) {
        pbVar11 = pbVar12 + 1;
        pbVar12 = pbVar11;
      }
    }
    else {
      uVar7 = (int)pbVar6 - (int)pbVar11;
      if ((int)local_68 <= (int)uVar7) {
        local_68 = uVar7;
      }
      uVar9 = uVar9 - uVar7;
      pbVar11 = pbVar6;
    }
    pbVar6 = (byte *)0x0;
    if (bVar1 == 0) goto LAB_0044415f;
    local_64 = local_64 + 1;
  }
  goto LAB_004440bc;
}

