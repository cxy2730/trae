// Function: FUN_00437210
// Entry:    00437210
// Size:     134 bytes
// Conv:     unknown
// Signature: undefined FUN_00437210(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_00437210(CWnd *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004a0a88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = &PTR_LAB_02f96d98;
  local_4 = 0;
  FUN_00437860();
  if (*(HGDIOBJ *)(param_1 + 0xc0) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0xc0));
  }
  if (*(int *)(param_1 + 0xa8) != 0) {
    FUN_00492f40(*(int *)(param_1 + 0xa8));
  }
  if (*(int *)(param_1 + 0xb0) != 0) {
    FUN_00492f40(*(int *)(param_1 + 0xb0));
  }
  local_4 = 0xffffffff;
  CWnd::~CWnd(param_1);
  ExceptionList = local_c;
  return;
}

