// Function: FUN_00429c70
// Entry:    00429c70
// Size:     157 bytes
// Conv:     unknown
// Signature: undefined FUN_00429c70(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall FUN_00429c70(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_48 [44];
  void *pvStack_1c;
  undefined4 uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049fc88;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00429700();
  local_4 = 0;
  iVar1 = (**(code **)(*param_1 + 0x20))(local_48,param_2,param_3,0);
  if (iVar1 != 0) {
    uVar2 = FUN_004297e0();
    uStack_14 = 0xffffffff;
    thunk_FUN_00429740();
    ExceptionList = pvStack_1c;
    return uVar2;
  }
  uStack_14 = 0xffffffff;
  thunk_FUN_00429740();
  ExceptionList = pvStack_1c;
  return 0;
}

