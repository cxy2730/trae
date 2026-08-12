// Function: FUN_0041efa0
// Entry:    0041efa0
// Size:     169 bytes
// Conv:     unknown
// Signature: undefined FUN_0041efa0(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_0041efa0(int param_1)

{
  undefined4 uStack_70;
  int iStack_6c;
  int iStack_68;
  int local_60;
  void *pvStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049f108;
  pvStack_c = ExceptionList;
  iStack_6c = 0x41efc5;
  ExceptionList = &pvStack_c;
  iStack_68 = param_1;
  FUN_00499cdd();
  iStack_68 = *(int *)(param_1 + 0x3c) + 0x5c;
  local_4 = 0;
  iStack_6c = 0x41efdd;
  FUN_00499471();
  iStack_68 = 1;
  iStack_6c = 0x41efe8;
  FUN_0049954d();
  iStack_68 = (-(uint)(*(int *)(param_1 + 0x40) != 1) & 0xff010000) + 0xff0000;
  iStack_6c = 0x41f006;
  FUN_00499605();
  iStack_6c = *(int *)(param_1 + 0x44);
  iStack_68 = *(undefined4 *)(iStack_6c + -8);
  uStack_70 = 0;
  (**(code **)(local_60 + 0x5c))(0);
  FUN_00499435(0x11);
  CPaintDC::~CPaintDC((CPaintDC *)&uStack_70);
  ExceptionList = pvStack_1c;
  return;
}

