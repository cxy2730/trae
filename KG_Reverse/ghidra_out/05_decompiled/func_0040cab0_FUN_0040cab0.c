// Function: FUN_0040cab0
// Entry:    0040cab0
// Size:     709 bytes
// Conv:     unknown
// Signature: undefined FUN_0040cab0(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_0040cab0(int param_1)

{
  HWND hWnd;
  BOOL BVar1;
  HDC pHVar2;
  int iVar3;
  undefined4 uVar4;
  RECT local_e4;
  uint local_d0;
  RECT local_c4;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  undefined4 local_90;
  undefined4 local_8c;
  CPaintDC local_88 [4];
  HDC local_84;
  HDC local_80;
  tagRECT local_34;
  undefined1 local_24 [4];
  LONG local_20;
  LONG local_1c;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049e236;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00499cdd(param_1);
  local_4 = 0;
  FUN_0049988e(&local_e4);
  GetClientRect(*(HWND *)(param_1 + 0x1c),&local_34);
  IntersectRect(&local_e4,&local_e4,&local_34);
  *(LONG *)(param_1 + 0xc0) = local_e4.left;
  *(LONG *)(param_1 + 0xc4) = local_e4.top;
  *(LONG *)(param_1 + 200) = local_e4.right;
  *(LONG *)(param_1 + 0xcc) = local_e4.bottom;
  BVar1 = IsRectEmpty(&local_e4);
  if (BVar1 != 1) {
    if ((param_1 == -0xe8) || (*(int *)(param_1 + 0xec) == 0)) {
      FUN_0040c8b0(local_88,&local_e4);
      local_d0 = *(uint *)(param_1 + 0xb8);
      uVar4 = *(undefined4 *)(param_1 + 0xb4);
      *(undefined4 *)(param_1 + 0xb8) = 0;
      *(undefined4 *)(param_1 + 0xb4) = 0;
      *(CPaintDC **)(param_1 + 0xbc) = local_88;
      FUN_0041cd00(local_88,*(undefined4 *)(param_1 + 100));
      DPtoLP(local_80,(LPPOINT)&local_e4,2);
      local_b0 = *(undefined4 *)(param_1 + 0xa8);
      local_b4 = *(undefined4 *)(param_1 + 0xa4);
      hWnd = *(HWND *)(param_1 + 0x1c);
      local_a0 = local_e4.top;
      local_a4 = local_e4.left;
      local_ac = 0;
      local_90 = 0;
      local_8c = 0;
      local_a8 = 4;
      local_9c = local_e4.right;
      local_98 = local_e4.bottom;
      FUN_00413d70(0x7d8,&local_b4,0);
      BVar1 = IsWindow(hWnd);
      if (BVar1 != 0) {
        *(undefined4 *)(param_1 + 0xb4) = uVar4;
        *(undefined4 *)(param_1 + 0xbc) = 0;
        *(uint *)(param_1 + 0xb8) = local_d0;
      }
    }
    else {
      GetObjectA(*(HANDLE *)(param_1 + 0xec),0x18,local_24);
      FUN_00499226();
      local_4 = CONCAT31(local_4._1_3_,1);
      pHVar2 = CreateCompatibleDC((HDC)(-(uint)(&stack0x00000000 != (undefined1 *)0x88) &
                                       (uint)local_84));
      FUN_004992dd(pHVar2);
      if (param_1 == -0xe8) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(param_1 + 0xec);
      }
      iVar3 = FUN_0049941e(local_d0,uVar4);
      local_c4.right = local_20;
      local_c4.bottom = local_1c;
      local_c4.left = 0;
      local_c4.top = 0;
      IntersectRect(&local_e4,&local_e4,&local_c4);
      BVar1 = IsRectEmpty(&local_e4);
      if (BVar1 == 0) {
        BitBlt(local_84,local_e4.left,local_e4.top,local_e4.right - local_e4.left,
               local_e4.bottom - local_e4.top,
               (HDC)(-(uint)(&stack0x00000000 != (undefined1 *)0xd4) & local_d0),local_e4.left,
               local_e4.top,0xcc0020);
      }
      if (iVar3 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(iVar3 + 4);
      }
      FUN_0049941e(local_d0,uVar4);
      local_4 = local_4 & 0xffffff00;
      FUN_0049935b();
    }
  }
  local_4 = 0xffffffff;
  CPaintDC::~CPaintDC(local_88);
  ExceptionList = local_c;
  return;
}

