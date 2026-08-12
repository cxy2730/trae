// Function: FUN_00421960
// Entry:    00421960
// Size:     309 bytes
// Conv:     unknown
// Signature: undefined FUN_00421960(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall FUN_00421960(int param_1,int param_2,int param_3,int param_4,DWORD param_5)

{
  HGDIOBJ h;
  HDC pHVar1;
  int iVar2;
  HGDIOBJ h_00;
  HDC local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049f3c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  h = (HGDIOBJ)FUN_004218d0(param_2);
  if (h == (HGDIOBJ)0x0) {
    ExceptionList = local_c;
    return 0;
  }
  FUN_00499226();
  local_4 = 0;
  pHVar1 = (HDC)0x0;
  if (param_2 != 0) {
    pHVar1 = *(HDC *)(param_2 + 4);
  }
  pHVar1 = CreateCompatibleDC(pHVar1);
  iVar2 = FUN_004992dd(pHVar1);
  if (iVar2 == 0) {
    DeleteObject(h);
    local_4 = 0xffffffff;
    FUN_0049935b();
    ExceptionList = local_c;
    return 0;
  }
  h_00 = SelectObject(local_18,h);
  BitBlt(*(HDC *)(param_2 + 4),param_3,param_4,*(int *)(param_1 + 0x98) - *(int *)(param_1 + 0x90),
         *(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x94),
         (HDC)(-(uint)(&stack0x00000000 != (undefined1 *)0x1c) & (uint)local_18),0,0,param_5);
  SelectObject(local_18,h_00);
  DeleteObject(h);
  local_4 = 0xffffffff;
  FUN_0049935b();
  ExceptionList = local_c;
  return 1;
}

