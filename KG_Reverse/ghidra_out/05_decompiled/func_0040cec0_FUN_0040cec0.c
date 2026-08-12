// Function: FUN_0040cec0
// Entry:    0040cec0
// Size:     1084 bytes
// Conv:     unknown
// Signature: undefined FUN_0040cec0(void)
// Decompiled by Ghidra 12.1.2


/* WARNING: Removing unreachable block (ram,0x0040d090) */
/* WARNING: Removing unreachable block (ram,0x0040d0ae) */
/* WARNING: Removing unreachable block (ram,0x0040d0aa) */
/* WARNING: Removing unreachable block (ram,0x0040d0b1) */

void __thiscall FUN_0040cec0(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  int cx;
  int cy;
  uint local_64;
  HDC local_54;
  tagRECT local_48;
  HDC local_34;
  undefined1 local_24 [4];
  int local_20;
  int local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049e290;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0xac) != 0) {
    return;
  }
  if (*(int *)(param_1 + 0x60) != 1) {
    return;
  }
  ExceptionList = &local_c;
  GetClientRect(*(HWND *)(param_1 + 0x1c),&local_48);
  cx = 1;
  if (0 < local_48.right - local_48.left) {
    cx = local_48.right - local_48.left;
  }
  cy = local_48.bottom - local_48.top;
  if (cy < 1) {
    cy = 1;
  }
  FUN_00499b75();
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  CreateCompatibleBitmap(local_34,cx,cy);
  FUN_00499e1d();
  FUN_00499226();
  local_4 = CONCAT31(local_4._1_3_,2);
  CreateCompatibleDC((HDC)(-(uint)(&stack0x00000000 != (undefined1 *)0x38) & (uint)local_34));
  FUN_004992dd();
  FUN_0049941e();
  if (*(int *)(param_1 + 0x58) != 0) {
    if (*(int *)(param_1 + 0xb0) == 0) {
      iVar3 = FUN_004225f0();
      *(int *)(param_1 + 0xb0) = iVar3;
      if (iVar3 == 0) {
        FUN_004064a0();
      }
    }
    if (*(int *)(param_1 + 0xb0) != 0) {
      local_4._0_1_ = 3;
      CreateRectRgn(0,0,cx,cy);
      FUN_00499e1d();
      FUN_0049989e();
      SetRect(&local_48,0,0,cx,cy);
      FUN_00406fe0();
      FUN_00408d90();
      local_4._0_1_ = 5;
      goto LAB_0040d15d;
    }
  }
  FUN_00406fe0();
  FUN_00499eda();
  local_4._0_1_ = 6;
  FUN_00499471();
  PatBlt(local_54,0,0,cx,cy,0xf00021);
  FUN_00499471();
  local_4._0_1_ = 7;
LAB_0040d15d:
  FUN_00499e74();
  local_4._0_1_ = 2;
  uVar1 = (undefined1)local_4;
  local_4._0_1_ = 2;
  uVar2 = uVar1;
  if ((param_1 != -0xe8) && (uVar2 = (undefined1)local_4, *(int *)(param_1 + 0xec) != 0)) {
    if ((param_2 != 0) &&
       ((*(int *)(param_1 + 0x58) == 0 ||
        (uVar1 = (undefined1)local_4, *(int *)(param_1 + 0x5c) != 2)))) {
      local_1c = 0;
      local_20 = 0;
      GetObjectA(*(HANDLE *)(param_1 + 0xec),0x18,local_24);
      uVar1 = (undefined1)local_4;
      if ((0 < local_20) && (0 < local_1c)) {
        FUN_00499226();
        local_4._0_1_ = 8;
        CreateCompatibleDC((HDC)(-(uint)(&stack0x00000000 != (undefined1 *)0x38) & (uint)local_34));
        FUN_004992dd();
        FUN_0049941e();
        if (local_20 < cx) {
          cx = local_20;
        }
        if (local_1c < cy) {
          cy = local_1c;
        }
        BitBlt(local_54,0,0,cx,cy,(HDC)(-(uint)(&stack0x00000000 != (undefined1 *)0x68) & local_64),
               0,0,0xcc0020);
        FUN_0049941e();
        local_4._0_1_ = 2;
        FUN_0049935b();
        uVar1 = (undefined1)local_4;
      }
    }
    local_4._0_1_ = uVar1;
    FUN_00499e74();
    uVar2 = (undefined1)local_4;
  }
  local_4._0_1_ = uVar2;
  FUN_0049941e();
  Detach();
  FUN_00499e1d();
  local_4._0_1_ = 1;
  FUN_0049935b();
  local_4 = CONCAT31(local_4._1_3_,9);
  FUN_00499e74();
  local_4 = 0xffffffff;
  FID_conflict__CClientDC();
  ExceptionList = local_c;
  return;
}

