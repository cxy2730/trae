// Function: FUN_00417c50
// Entry:    00417c50
// Size:     360 bytes
// Conv:     unknown
// Signature: undefined FUN_00417c50(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_00417c50(CWnd *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0049ec5c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = &PTR_LAB_02f958d4;
  puVar1 = *(undefined4 **)(param_1 + 0xec);
  local_4 = 4;
  if ((puVar1 != (undefined4 *)0x0) && (puVar1 != (undefined4 *)0x0)) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    if ((HICON)puVar1[3] != (HICON)0x0) {
      DestroyIcon((HICON)puVar1[3]);
      puVar1[3] = 0;
    }
    if (puVar1[4] != 0) {
      FUN_00492f40(puVar1[4]);
      puVar1[4] = 0;
    }
    FUN_00492f40(puVar1);
  }
  FUN_00416350(param_1);
  if (*(HICON *)(param_1 + 0x1a4) != (HICON)0x0) {
    DestroyIcon(*(HICON *)(param_1 + 0x1a4));
  }
  if (*(HICON *)(param_1 + 0x1a8) != (HICON)0x0) {
    DestroyIcon(*(HICON *)(param_1 + 0x1a8));
  }
  *(undefined ***)(param_1 + 0x1d4) = &PTR_LAB_02f95998;
  local_4._0_1_ = 5;
  FUN_00499e74();
  local_4._0_1_ = 2;
  *(undefined ***)(param_1 + 0x1c0) = &PTR_FUN_02f958c0;
  FUN_004064a0();
  local_4._0_1_ = 1;
  FUN_00424da0();
  local_4._0_1_ = 10;
  FUN_004931d6();
  local_4._0_1_ = 9;
  FUN_004931d6();
  local_4._0_1_ = 8;
  *(undefined ***)(param_1 + 0x8c) = &PTR_FUN_02f958c0;
  FUN_004064a0();
  local_4._0_1_ = 7;
  *(undefined ***)(param_1 + 0x78) = &PTR_FUN_02f958c0;
  FUN_004064a0();
  local_4._0_1_ = 6;
  *(undefined ***)(param_1 + 0x4c) = &PTR_FUN_02f958c0;
  FUN_004064a0();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004931d6();
  local_4 = 0xffffffff;
  CWnd::~CWnd(param_1);
  ExceptionList = local_c;
  return;
}

