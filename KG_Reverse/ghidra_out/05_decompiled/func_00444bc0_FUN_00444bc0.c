// Function: FUN_00444bc0
// Entry:    00444bc0
// Size:     193 bytes
// Conv:     unknown
// Signature: undefined FUN_00444bc0(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_00444bc0(int param_1)

{
  int iVar1;
  tagRECT local_70;
  CPaintDC local_60 [4];
  HDC local_5c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004a0fb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00499cdd(param_1);
  local_4 = 0;
  if (*(int *)(*(int *)(param_1 + 0x58) + -8) != 0) {
    FUN_00445530(local_60,0xfffffffd);
  }
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x3c)) {
    do {
      FUN_00445530(local_60,iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x3c));
  }
  if (*(int *)(*(int *)(param_1 + 0x5c) + -8) != 0) {
    FUN_00445530(local_60,0xfffffffe);
  }
  GetClientRect(*(HWND *)(param_1 + 0x1c),&local_70);
  DrawEdge(local_5c,&local_70,5,0xf);
  local_4 = 0xffffffff;
  CPaintDC::~CPaintDC(local_60);
  ExceptionList = local_c;
  return;
}

