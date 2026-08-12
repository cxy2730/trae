// Function: FUN_00423f60
// Entry:    00423f60
// Size:     201 bytes
// Conv:     unknown
// Signature: undefined FUN_00423f60(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_00423f60(int param_1)

{
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  CPaintDC local_60 [84];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049f558;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00499cdd(param_1);
  local_4 = 0;
  if ((((*(int *)(param_1 + 0xe4) == 1) && (*(int **)(param_1 + 0xf4) != (int *)0x0)) &&
      (*(int *)(param_1 + 0x100) == 1)) && (**(int **)(param_1 + 0xf4) == 5)) {
    FUN_004373e0(&local_68,&local_70,&local_64,&local_6c);
    FUN_004998de(local_68,local_70,local_64 + local_68,local_70 + local_6c);
  }
  *(undefined4 *)(param_1 + 0xe4) = 0;
  FUN_00423d80(local_60,0);
  local_4 = 0xffffffff;
  CPaintDC::~CPaintDC(local_60);
  ExceptionList = local_c;
  return;
}

