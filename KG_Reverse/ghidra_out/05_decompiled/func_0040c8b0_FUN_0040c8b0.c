// Function: FUN_0040c8b0
// Entry:    0040c8b0
// Size:     503 bytes
// Conv:     unknown
// Signature: undefined FUN_0040c8b0(void)
// Decompiled by Ghidra 12.1.2


/* WARNING: Removing unreachable block (ram,0x0040c9c1) */
/* WARNING: Removing unreachable block (ram,0x0040c9df) */
/* WARNING: Removing unreachable block (ram,0x0040c9db) */
/* WARNING: Removing unreachable block (ram,0x0040c9e2) */

void __thiscall FUN_0040c8b0(int param_1,int param_2,RECT *param_3)

{
  BOOL BVar1;
  int iVar2;
  tagRECT local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049e208;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  BVar1 = IsRectEmpty(param_3);
  if (BVar1 == 1) {
    ExceptionList = local_c;
    return;
  }
  if (*(int *)(param_1 + 0x58) == 0) {
LAB_0040ca20:
    FUN_00406fe0();
    FUN_00499eda();
    local_4 = 3;
    FUN_00499471();
    PatBlt(*(HDC *)(param_2 + 4),param_3->left,param_3->top,param_3->right - param_3->left,
           param_3->bottom - param_3->top,0xf00021);
    FUN_00499471();
    local_4 = 4;
  }
  else {
    if (*(int *)(param_1 + 0xb0) == 0) {
      iVar2 = FUN_004225f0();
      *(int *)(param_1 + 0xb0) = iVar2;
      if (iVar2 == 0) {
        FUN_004064a0();
      }
      if (*(int *)(param_1 + 0xb0) == 0) goto LAB_0040ca20;
    }
    local_4 = 0;
    CreateRectRgn(param_3->left,param_3->top,param_3->right,param_3->bottom);
    FUN_00499e1d();
    FUN_0049989e();
    GetClientRect(*(HWND *)(param_1 + 0x1c),&local_1c);
    FUN_00406fe0();
    FUN_00408d90();
    local_4 = 2;
  }
  FUN_00499e74();
  ExceptionList = local_c;
  return;
}

