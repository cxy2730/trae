// Function: FUN_00434a00
// Entry:    00434a00
// Size:     478 bytes
// Conv:     unknown
// Signature: undefined FUN_00434a00(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_00434a00(int param_1)

{
  HBITMAP pHVar1;
  HDC pHVar2;
  int iVar3;
  HANDLE h;
  HGDIOBJ h_00;
  undefined4 uVar4;
  int cx;
  int cy;
  HDC local_9c;
  tagRECT local_88;
  undefined1 local_78 [4];
  int local_74;
  int local_70;
  CPaintDC local_60 [4];
  HDC local_5c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004a05d9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00499cdd(param_1);
  local_4 = 0;
  GetClientRect(*(HWND *)(param_1 + 0x1c),&local_88);
  cx = local_88.right - local_88.left;
  cy = local_88.bottom - local_88.top;
  local_4._0_1_ = 1;
  pHVar1 = CreateCompatibleBitmap(local_5c,cx,cy);
  FUN_00499e1d(pHVar1);
  FUN_00499226();
  local_4 = CONCAT31(local_4._1_3_,2);
  pHVar2 = CreateCompatibleDC((HDC)(-(uint)(&stack0x00000000 != (undefined1 *)0x60) & (uint)local_5c
                                   ));
  FUN_004992dd(pHVar2);
  iVar3 = FUN_0049941e(local_9c,0);
  PatBlt(local_9c,0,0,cx,cy,0x42);
  h = (HANDLE)FUN_00434be0();
  if (h != (HANDLE)0x0) {
    GetObjectA(h,0x18,local_78);
    pHVar2 = CreateCompatibleDC(local_5c);
    h_00 = SelectObject(pHVar2,h);
    BitBlt(local_9c,0,0,local_74,local_70,pHVar2,0,0,0xcc0020);
    SelectObject(pHVar2,h_00);
    DeleteDC(pHVar2);
  }
  BitBlt(local_5c,0,0,cx,cy,(HDC)(-(uint)(&stack0x00000000 != (undefined1 *)0xa0) & (uint)local_9c),
         0,0,0xcc0020);
  uVar4 = 0;
  if (iVar3 != 0) {
    uVar4 = *(undefined4 *)(iVar3 + 4);
  }
  FUN_0049941e(local_9c,uVar4);
  local_4._0_1_ = 1;
  FUN_0049935b();
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_00499e74(&PTR_LAB_02f9652c);
  local_4 = 0xffffffff;
  CPaintDC::~CPaintDC(local_60);
  ExceptionList = local_c;
  return;
}

