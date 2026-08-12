// Function: FUN_00435ec0
// Entry:    00435ec0
// Size:     79 bytes
// Conv:     unknown
// Signature: undefined FUN_00435ec0(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_00435ec0(CDialog *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004a0a08;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_004931d6();
  local_4 = 0xffffffff;
  CDialog::~CDialog(param_1);
  ExceptionList = local_c;
  return;
}

